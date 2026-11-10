// HOME 4.1.0 read-only Ghidra post-analysis (Ghidra 12.2 / JDK 25)
//@category PokemonHOME
//@menupath Tools.Pokemon HOME 4.1.0.Decompile focus
//
// Usage:
// analyzeHeadless <project-dir> HOME41 -import <main.elf>
//    -scriptPath <repo>/tools/ghidra -postScript Home41Analyze.java
//    <out-directory> <focus_functions.tsv> [decompile-limit]
//
// Input TSV is generated from the exact original ELF using
// tools/home41_ghidra_elf_atlas.py. Every name is a RESEARCH LABEL,
// not a Nintendo-provided or PKHeX-generated symbol.

import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

public class Home41Analyze extends GhidraScript {
    private static final String EXPECTED_SHA =
        "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a";

    private static class Focus {
        final long rva;
        final String name;
        final String group;
        final long fdeSize;
        Focus(long rva, String name, String group, long fdeSize) {
            this.rva=rva; this.name=name; this.group=group; this.fdeSize=fdeSize;
        }
    }

    private List<Focus> loadFocus(Path path) throws IOException {
        List<Focus> list = new ArrayList<>();
        try (BufferedReader reader=Files.newBufferedReader(path, StandardCharsets.UTF_8)) {
            String line;
            while ((line=reader.readLine()) != null) {
                if (line.trim().isEmpty() || line.startsWith("#")) continue;
                String[] c = line.split("\t", -1);
                if (c.length!=4) throw new IOException("Invalid 4-column TSV line: "+line);
                if (!c[0].startsWith("0x")) throw new IOException("Expected 0xRVA: "+line);
                if (!c[1].matches("[A-Za-z0-9_]+") ||
                    !c[2].matches("[A-Za-z0-9_]+")) {
                    throw new IOException("Unsafe label or category: "+line);
                }
                list.add(new Focus(Long.parseUnsignedLong(c[0].substring(2),16),
                         c[1],c[2],Long.parseLong(c[3])));
            }
        }
        return list;
    }

    private Address resolveRva(long rva) {
        // An ET_DYN ELF may be rebased by Ghidra. Prefer imageBase + RVA.
        Address a = currentProgram.getImageBase().add(rva);
        if (currentProgram.getMemory().contains(a)) return a;
        // Some ELF imports use absolute RVA=0 mappings.
        Address direct=currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(rva);
        if (currentProgram.getMemory().contains(direct)) return direct;
        return null;
    }

    private String csv(String s) {
        if (s==null) return "";
        return "\"" + s.replace("\"","\"\"").replace("\r"," ").replace("\n"," ") + "\"";
    }

    private long countCallingReferences(Address a) {
        ReferenceIterator iterator=currentProgram.getReferenceManager().getReferencesTo(a);
        long n=0;
        while (iterator.hasNext()) {
            Reference ref=iterator.next();
            if (ref.getReferenceType().isCall()) ++n;
        }
        return n;
    }

    @Override
    public void run() throws Exception {
        String[] argv=getScriptArgs();
        if (argv.length<2) {
            throw new IllegalArgumentException(
                "Home41Analyze.java <out-dir> <focus_functions.tsv> [max-decompiled=16]");
        }
        Path out=Paths.get(argv[0]).toAbsolutePath().normalize();
        Path tsv=Paths.get(argv[1]).toAbsolutePath().normalize();
        int max=argv.length>=3 ? Integer.parseInt(argv[2]) : 16;
        if (max<0 || max>1000) throw new IllegalArgumentException("Invalid decompile limit");
        Files.createDirectories(out);
        List<Focus> entries=loadFocus(tsv);
        println("HOME41 original ELF expected SHA256 "+EXPECTED_SHA);
        println("Ghidra program: "+currentProgram.getName());
        println("Ghidra imagebase: "+currentProgram.getImageBase());
        println("Focus entrypoints: "+entries.size()+", decompile first "+max);
        println("NOTE: Verify raw ELF SHA256 independently before invoking this script.");
        FunctionManager functions=currentProgram.getFunctionManager();
        DecompInterface decomp=new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) {
            throw new IllegalStateException("Unable to initialize Ghidra decompiler: "+
                                             decomp.getLastMessage());
        }
        int renamed=0, decompiled=0, failed=0;
        Path csvPath=out.resolve("ghidra_focus_results.csv");
        try (BufferedWriter writer=Files.newBufferedWriter(csvPath,StandardCharsets.UTF_8)) {
            writer.write("rva,label,group,fde_size,ghidra_address,function_size,call_xrefs,rename,decompile_status,error\n");
            int index=0;
            for (Focus f : entries) {
                monitor.checkCancelled();
                String rvaText=String.format("0x%X",f.rva);
                Address entry=resolveRva(f.rva);
                if (entry==null) {
                    writer.write(csv(rvaText)+","+csv(f.name)+","+csv(f.group)+","+f.fdeSize+
                                 ",,,0,SKIPPED,SKIPPED,unmapped RVA\n");
                    ++failed;
                    continue;
                }
                Function fn=functions.getFunctionAt(entry);
                if (fn==null) {
                    // Force the exact FDE entrypoint; Ghidra calculates the body.
                    CreateFunctionCmd cmd=new CreateFunctionCmd(entry);
                    cmd.applyTo(currentProgram, monitor);
                    fn=functions.getFunctionAt(entry);
                }
                if (fn==null) {
                    writer.write(csv(rvaText)+","+csv(f.name)+","+csv(f.group)+","+f.fdeSize+
                                 ","+csv(entry.toString())+",,0,FAILED,SKIPPED,function missing\n");
                    ++failed;
                    continue;
                }
                String renamedStatus="OK";
                try {
                    fn.setName("HOME41_"+f.name,SourceType.USER_DEFINED);
                    ++renamed;
                }
                catch (Exception renameError) {
                    renamedStatus="NAME_CONFLICT";
                }
                long xrefs=countCallingReferences(entry);
                String status="NOT_SELECTED",error="";
                long computedLen=fn.getBody().getNumAddresses();
                if (index<max) {
                    DecompileResults dr=decomp.decompileFunction(fn,35,monitor);
                    if (dr.decompileCompleted() && dr.getDecompiledFunction()!=null) {
                        Path groupDir=out.resolve("decompiled").resolve(f.group);
                        Files.createDirectories(groupDir);
                        Path cPath=groupDir.resolve(String.format("%08X_%s.c",f.rva,f.name));
                        String header="/* HOME41 Ghidra decompilation; RVA="+rvaText+
                                      "; FDE size="+f.fdeSize+
                                      "; expected ELF SHA256="+EXPECTED_SHA+
                                      " ; RESEARCH NAME, NOT OFFICIAL SOURCE. */\n";
                        Files.writeString(cPath,header+dr.getDecompiledFunction().getC(),
                                          StandardCharsets.UTF_8);
                        ++decompiled;
                        status="PASS";
                    }
                    else {
                        status="DECOMPILER_FAILED";
                        error=dr.getErrorMessage();
                        ++failed;
                    }
                }
                index++;
                writer.write(csv(rvaText)+","+csv(f.name)+","+csv(f.group)+","+f.fdeSize+
                             ","+csv(entry.toString())+","+computedLen+","+xrefs+","+
                             renamedStatus+","+status+","+csv(error)+"\n");
            }
        }
        finally {
            decomp.dispose();
        }
        println("HOME41 Ghidra exports: "+csvPath);
        println("Functions named="+renamed+", C decompiled="+decompiled+", failures="+failed);
        println("Result types: ghidra_focus_results.csv + decompiled/<group>/*.c");
    }
}
