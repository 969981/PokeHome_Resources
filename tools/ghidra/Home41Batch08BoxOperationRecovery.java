// Targeted HOME 4.1.0 missing-FDE recovery on a disposable copy of the native
// Ghidra 12.2 project. No full autoanalysis, no original project overwrite.
//@category PokemonHOME
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class Home41Batch08BoxOperationRecovery extends GhidraScript {
    static final long[] RVAS={0x22c1ccL,0x22cb94L,0x248bb0L,0x24c470L,0x252cc4L};
    static final long[] FDE_BYTES={856,1280,3916,8372,2736};
    static final String[] LABELS={
        "box_operation_cancel_candidate",
        "box_operation_start_candidate",
        "apogee_save_state_candidate",
        "box_operation_commit_state_candidate",
        "mile_operation_candidate"
    };
    static final long[] SITE_VA={
        0x32c250L,0x32cc1cL,0x3495bcL,0x34c54cL,0x352d50L
    };
    private String esc(String s){
        return s==null?"":s.replace("\t"," ").replace("\n"," ").replace("\r"," ").replace("\"","'");
    }
    private Address at(long va){
        return currentProgram.getAddressFactory().getAddress(
            String.format(Locale.ROOT, ".text::%08x", va));
    }
    private void emitAssembly(StringBuilder report,long anchor,String label) {
        Address a=at(anchor);
        if(a==null){report.append("ASM\t").append(label).append("\tADDRESS_MISSING\n");return;}
        Listing l=currentProgram.getListing();
        // This is context evidence only; any switch/jump-table decoding needs CFG inspection.
        for(long delta=-24;delta<=40;delta+=4){
            Address p=at(anchor+delta);
            Instruction ins=p==null?null:l.getInstructionAt(p);
            if(ins!=null){
                report.append("ASM\t").append(label).append("\t").append(p)
                    .append("\t").append(esc(ins.toString())).append("\n");
            }
        }
    }
    @Override public void run() throws Exception {
        String[] args=getScriptArgs();
        if(args.length!=1)throw new IllegalArgumentException("output directory required");
        Path dir=Paths.get(args[0]);Files.createDirectories(dir);
        StringBuilder report=new StringBuilder();
        report.append("TYPE\tLABEL\tADDRESS_OR_STATE\tDETAIL\n");
        DecompInterface di=new DecompInterface();
        di.toggleCCode(true);
        di.setSimplificationStyle("decompile");
        if(!di.openProgram(currentProgram))throw new IllegalStateException(di.getLastMessage());
        try {
            for(int i=0;i<RVAS.length;i++){
                monitor.checkCancelled();
                long va=RVAS[i]+0x100000L;
                Address entry=at(va),site=at(SITE_VA[i]);
                String status="NOT_TRIED";
                if(entry==null||site==null){
                    report.append("FDE\t").append(LABELS[i]).append("\tADDRESS_MISSING\t\n");
                    continue;
                }
                FunctionManager manager=currentProgram.getFunctionManager();
                Function fn=manager.getFunctionAt(entry);
                if(fn==null){
                    Function existing=manager.getFunctionContaining(entry);
                    if(existing!=null){
                        status="INSIDE_EXISTING_FUNCTION:"+existing.getEntryPoint();
                        fn=existing;
                    }else{
                        if(currentProgram.getListing().getInstructionAt(entry)==null){
                            disassemble(entry);
                        }
                        CreateFunctionCmd command=new CreateFunctionCmd(entry);
                        boolean ok=command.applyTo(currentProgram,monitor);
                        fn=manager.getFunctionAt(entry);
                        status=(ok&&fn!=null)?"RECOVERED_FDE_ENTRY":"CREATE_FAILED";
                    }
                }else status="ALREADY_PRESENT";
                if(fn==null){
                    report.append("FDE\t").append(LABELS[i]).append("\t")
                        .append(entry).append("\t").append(status).append("\n");
                    emitAssembly(report,SITE_VA[i],LABELS[i]);
                    continue;
                }
                // Recover only the verified FDE interval in this disposable project.
                // Ghidra's initial CreateFunctionCmd stops at an early RET and otherwise
                // loses the switch/state bodies containing our exact ADRP+ADD sites.
                Address end=entry.add(FDE_BYTES[i]-1);
                AddressSet exactBody=new AddressSet(entry,end);
                try {
                    FunctionIterator overlapping=manager.getFunctions(exactBody,true);
                    boolean conflict=false;
                    while(overlapping.hasNext()){
                        Function other=overlapping.next();
                        if(!other.getEntryPoint().equals(fn.getEntryPoint())){
                            conflict=true;
                            report.append("OVERLAP\t").append(LABELS[i]).append("\t")
                                .append(other.getEntryPoint()).append("\t")
                                .append(esc(other.getName())).append("\n");
                        }
                    }
                    if(!conflict){
                        fn.setBody(exactBody);
                        status += ";EXACT_FDE_BODY_SET";
                    }else status += ";BODY_EXPANSION_SKIPPED_OVERLAP";
                }catch(Exception expandError){
                    status += ";BODY_EXPANSION_FAILED:"+esc(expandError.toString());
                }
                long[] allSiteVAs={
                    0x32c250L,0x32cc1cL,0x3495bcL,0x349928L,0x34994cL,
                    0x34996cL,0x3499e4L,0x34c54cL,0x34c8c8L,0x34ca0cL,
                    0x34d248L,0x34d260L,0x34d30cL,0x34e418L,0x34e484L,
                    0x352d50L,0x352e04L,0x352f38L
                };
                int seenAnchors=0;
                for(long av:allSiteVAs){
                    if(av>=va && av<va+FDE_BYTES[i]){
                        Address ad=at(av);
                        if(ad!=null){
                            if(currentProgram.getListing().getInstructionAt(ad)==null)
                                disassemble(ad);
                            if(fn.getBody().contains(ad))seenAnchors++;
                            emitAssembly(report,av,LABELS[i]);
                        }
                    }
                }
                // Batch07 confirmed MOVZ/MOVK field-offset materialization in the
                // Box SaveRequest candidate; dump surrounding decoded instructions
                // without assigning Dirty clear/read semantics by name alone.
                long[] dirtySites={0x34d344L,0x34d4e4L,0x34db9cL,0x34dbb4L,0x34dd6cL};
                if(i==3){
                    Listing dl=currentProgram.getListing();
                    for(long dv:dirtySites){
                        Address adr=at(dv);
                        if(adr!=null && dl.getInstructionAt(adr)==null)disassemble(adr);
                        for(long delta=-72;delta<=112;delta+=4){
                            Address insAddr=at(dv+delta);
                            Instruction ins=insAddr==null?null:dl.getInstructionAt(insAddr);
                            if(ins!=null)report.append("DIRTY_ASM\t")
                                .append(String.format(Locale.ROOT,"0x%08x",dv))
                                .append("\t").append(insAddr).append("\t")
                                .append(esc(ins.toString())).append("\n");
                        }
                    }
                }
                boolean covers=fn.getBody().contains(site);
                long body=fn.getBody().getNumAddresses();
                report.append("COVERAGE\t").append(LABELS[i]).append("\t")
                    .append(seenAnchors).append("\tverified_references_in_body\n");
                report.append("FDE\t").append(LABELS[i]).append("\t").append(entry)
                    .append("\t").append(status).append(";body=").append(body)
                    .append(";fde=").append(FDE_BYTES[i]).append(";anchor_in_body=")
                    .append(covers).append("\n");
                DecompileResults dr=di.decompileFunction(fn,100,monitor);
                if(dr.decompileCompleted() && dr.getDecompiledFunction()!=null){
                    String code=dr.getDecompiledFunction().getC();
                    Path fp=dir.resolve(String.format(Locale.ROOT,"%08x_%s.c",va,LABELS[i]));
                    Files.writeString(fp,
                        "/* Disposable Ghidra targeted recovery, research label only; ELF SHA256 "
                        +"bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a */\n"
                        +code,StandardCharsets.UTF_8);
                    report.append("C\t").append(LABELS[i]).append("\t")
                        .append(fp.getFileName()).append("\tbytes=").append(code.length()).append("\n");
                    // Summarize key pseudocode lines in CI without printing sensitive data.
                    String[] lines=code.split("\n");
                    int shown=0;
                    for(int n=0;n<lines.length&&shown<100;n++){
                        String line=lines[n];
                        if(line.contains("FUN__text__")||line.contains("nn::")||
                           line.contains("0x71955e")||line.contains("0x71acf3")||
                           line.contains("0x716023")||line.contains("0x70ba4c")||
                           line.contains("0x710fda")||line.contains("0x71d061")||
                           line.contains("0x717ee0")||line.contains("0x7151db")||
                           line.contains("0x978ac8")||line.contains("0x965248")||
                           line.contains("0x93498")||line.contains("0x7fc18")) {
                            report.append("C_LINE\t").append(LABELS[i]).append("\t")
                                .append(n+1).append("\t").append(esc(line)).append("\n");
                            shown++;
                        }
                    }
                }else{
                    report.append("C\t").append(LABELS[i]).append("\tFAILED\t")
                        .append(esc(dr.getErrorMessage())).append("\n");
                }
                emitAssembly(report,SITE_VA[i],LABELS[i]);
            }
        }finally{
            di.dispose();
        }
        Path out=dir.resolve("focused_recovery.tsv");
        Files.writeString(out,report.toString(),StandardCharsets.UTF_8);
        println("BATCH08 recovered scoped FDE evidence:\n"+report);
    }
}
