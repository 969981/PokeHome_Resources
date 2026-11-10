// Ghidra 12.2 / Java 25: import evidence-aware HOME41 function notes and
// per-instruction EOL comments from ACTUAL Ghidra-derived annotation tables.
//@category PokemonHOME
// Usage: -postScript Home41ImportAllAnnotations.java
//        <ghidra_function_comments.tsv> <asm_annotated_dir> [max_instructions]
//
// Does not replace a human's existing comment, and only renames functions
// proven by original native ELF study. Default imports all instructions.
// Source annotation reports: tools/ghidra/home41_annotate_all.py
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import java.util.stream.Stream;

public class Home41ImportAllAnnotations extends GhidraScript {
    private static final String MARKER = "[HOME41_AUTO_STATIC]";
    private static final long DEFAULT_LIMIT = 2000000L;
    private long functionNotes=0, functionUnmapped=0, commentsAdded=0;
    private long instructionUnmapped=0, preservedHuman=0, renames=0;

    private Address resolve(String raw) {
        Address a = currentProgram.getAddressFactory().getAddress(raw);
        if (a!=null && currentProgram.getMemory().contains(a))return a;
        // Ghidra ELF can use overlay section spaces. Only fallback when
        // program memory contains the resulting base+native RVA address.
        try {
            String tail=raw.substring(raw.lastIndexOf("::")+2);
            long ghidraAbsolute=Long.parseUnsignedLong(tail,16);
            Address b=currentProgram.getImageBase().add(ghidraAbsolute-0x100000L);
            if(currentProgram.getMemory().contains(b))return b;
        } catch(Exception ignored) { }
        return null;
    }
    private String clean(String text) {
        return text.replace("\r"," ").replace("\n"," ").replace("\t"," ");
    }
    private void noteFunctions(Path tsv) throws Exception {
        try(BufferedReader in=Files.newBufferedReader(tsv,StandardCharsets.UTF_8)) {
            String line;
            while((line=in.readLine())!=null) {
                monitor.checkCancelled();
                String[] fields=line.split("\t",4);
                if(fields.length!=4)throw new IllegalArgumentException("Invalid function note: "+line);
                Address addr=resolve(fields[0]);
                Function fn=addr==null?null:currentProgram.getFunctionManager().getFunctionAt(addr);
                if(fn==null) { functionUnmapped++; continue; }
                String label=clean(fields[1]);
                String purpose=clean(fields[2]);
                String level=fields[3];
                String comment=MARKER+" ["+level+"] "+label+" :: "+purpose+
                   "\nOriginal ELF SHA256=bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a";
                String existing=fn.getComment();
                if(existing==null || !existing.contains(MARKER)) {
                    fn.setComment((existing==null || existing.isBlank())?comment:existing+"\n"+comment);
                    functionNotes++;
                }
                if(level.equals("VERIFIED_NATIVE_STATIC")) {
                    String proposed="HOME41_"+label.replaceAll("[^A-Za-z0-9_]","_");
                    try {
                        if(!fn.getName().equals(proposed)) {
                            fn.setName(proposed,SourceType.USER_DEFINED);
                            renames++;
                        }
                    }catch(Exception ex) {
                        println("Name conflict: "+proposed+" -> "+ex);
                    }
                }
            }
        }
    }
    private void noteInstructions(Path dir,long limit) throws Exception {
        List<Path> parts=new ArrayList<>();
        try(Stream<Path> found=Files.list(dir)) {
            found.filter(p->p.getFileName().toString().matches("asm\\.part[0-9]{4}\\.tsv"))
                 .sorted().forEach(parts::add);
        }
        if(parts.isEmpty())throw new IllegalArgumentException("No annotation ASM shards in "+dir);
        long attempted=0;
        for(Path file:parts) {
            try(BufferedReader in=Files.newBufferedReader(file,StandardCharsets.UTF_8)) {
                String line;
                while((line=in.readLine())!=null) {
                    if(attempted>=limit)break;
                    if(attempted%4096==0)monitor.checkCancelled();
                    // address <tab> machine bytes <tab> mnemonic+operands
                    // <tab> // [category] behavior note <tab> candidate owner
                    String[] fields=line.split("\t",5);
                    if(fields.length!=5)throw new IllegalArgumentException(
                        "Incorrect annotation TSV columns: "+file+" "+attempted);
                    attempted++;
                    Address addr=resolve(fields[0]);
                    Instruction ins=addr==null?null:currentProgram.getListing().getInstructionAt(addr);
                    if(ins==null){instructionUnmapped++;continue;}
                    String current=ins.getComment(CommentType.EOL);
                    if(current!=null && current.contains(MARKER))continue;
                    String note=MARKER+" "+clean(fields[3]);
                    if(current!=null && !current.isBlank()) {
                        note=current+"\n"+note;
                        preservedHuman++;
                    }
                    ins.setComment(CommentType.EOL,note);
                    commentsAdded++;
                }
            }
            println("Annotated instruction shard "+file.getFileName()+
                    ", EOL added="+commentsAdded+"; unknown addresses="+instructionUnmapped);
            if(attempted>=limit)break;
        }
        println("Instruction import: scanned="+attempted+", applied="+commentsAdded+
                ", unmapped="+instructionUnmapped+", human comments preserved="+preservedHuman);
    }
    @Override
    public void run() throws Exception {
        String[] args=getScriptArgs();
        if(args.length<2)throw new IllegalArgumentException(
            "<ghidra_function_comments.tsv> <asm_annotated_dir> [max_instructions]");
        long limit=args.length>=3?Long.parseLong(args[2]):DEFAULT_LIMIT;
        if(limit<0 || limit>5000000)throw new IllegalArgumentException("Invalid instruction limit");
        println("Ghidra project: "+currentProgram.getName()+"; image base: "+
                currentProgram.getImageBase());
        println("HOME41 AUTO STATIC importer: all notes are evidence-graded, NOT game source.");
        noteFunctions(Paths.get(args[0]));
        if(limit>0)noteInstructions(Paths.get(args[1]),limit);
        println("Function notes="+functionNotes+" missing="+functionUnmapped+
                " verified names="+renames+" EOL instruction comments="+commentsAdded);
    }
}
