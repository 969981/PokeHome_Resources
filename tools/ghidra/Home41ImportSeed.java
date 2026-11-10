// Ghidra 12.2 post-script: import researched HOME 4.1.0 FDE function labels,
// comments and 812 direct-BL caller bookmarks into an ACTUAL Ghidra program.
//@category PokemonHOME
// Arguments: <ghidra_research_annotations.tsv> <focus_direct_callers.csv>
//            [function_fde_index.tsv] [create_all_missing_fde=0|1]
// The TSV/CSV can be generated from the companion seed database package.
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Home41ImportSeed extends GhidraScript {
    private static final String ELF_SHA256 =
      "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a";
    private int created=0, renamed=0, comments=0, bookmarks=0;
    private long rva(String s) {
        return Long.parseUnsignedLong(s.trim().replaceFirst("^0[xX]",""),16);
    }
    private Address location(long offset) {
        // ET_DYN may be rebased: use Ghidra's actual image base.
        Address addr=currentProgram.getImageBase().add(offset);
        return currentProgram.getMemory().contains(addr) ? addr : null;
    }
    private Function findOrCreate(long offset) throws Exception {
        Address entry=location(offset);
        if(entry==null) return null;
        FunctionManager fm=currentProgram.getFunctionManager();
        Function fn=fm.getFunctionAt(entry);
        if(fn==null && fm.getFunctionContaining(entry)==null) {
            CreateFunctionCmd cmd=new CreateFunctionCmd(entry);
            if(cmd.applyTo(currentProgram,monitor)) created++;
            fn=fm.getFunctionAt(entry);
        }
        return fn;
    }
    private void annotations(Path path) throws Exception {
        try(BufferedReader r=Files.newBufferedReader(path,StandardCharsets.UTF_8)) {
            String line;
            while((line=r.readLine())!=null) {
                monitor.checkCancelled();
                String[] c=line.split("\t",-1);
                if(c.length<5) continue;
                Function fn=findOrCreate(rva(c[0]));
                if(fn==null) { println("UNMAPPED/OVERLAP "+c[0]);continue; }
                String name="HOME41_"+c[1].replaceAll("[^A-Za-z0-9_]","_");
                try {
                    if(!fn.getName().equals(name)) {
                        fn.setName(name,SourceType.USER_DEFINED);renamed++;
                    }
                } catch(Exception e) { println("NAME CONFLICT "+name+": "+e); }
                if(!c[4].isBlank()) {
                    String note="[HOME41 static ELF "+ELF_SHA256.substring(0,12)+"] "+c[4];
                    String old=fn.getComment();
                    if(old==null || !old.contains(note)) {
                        fn.setComment((old==null||old.isBlank()) ? note : old+"\n"+note);
                        comments++;
                    }
                }
            }
        }
    }
    private void importFde(Path path) throws Exception {
        int seen=0;
        try(BufferedReader r=Files.newBufferedReader(path,StandardCharsets.UTF_8)) {
            String line;
            while((line=r.readLine())!=null) {
                monitor.checkCancelled();
                String[] c=line.split("\t",-1);
                if(c.length<2) continue;
                findOrCreate(rva(c[0]));
                seen++;
                if(seen%1000==0) println("FDE entrypoints scanned "+seen);
            }
        }
        println("FDE entrypoints scanned total="+seen);
    }
    private void callerBookmarks(Path path) throws Exception {
        try(BufferedReader r=Files.newBufferedReader(path,StandardCharsets.UTF_8)) {
            r.readLine(); // CSV header
            String line;
            while((line=r.readLine())!=null) {
                monitor.checkCancelled();
                String[] c=line.split(",",-1); // exported columns have no embedded commas
                if(c.length<4) continue;
                Address addr=location(rva(c[2]));
                if(addr==null)continue;
                currentProgram.getBookmarkManager().setBookmark(
                    addr,"Analysis","HOME41 PH4/EH4 XREF",
                    "Static original ELF BL to "+c[0]+" ("+c[1]+
                    "), owning FDE "+c[3]+". Not a runtime trace.");
                bookmarks++;
            }
        }
    }
    @Override public void run() throws Exception {
        String[] args=getScriptArgs();
        if(args.length<2)throw new IllegalArgumentException(
          "Home41ImportSeed.java <annotations.tsv> <callers.csv> [fde.tsv] [create_all_fde=0|1]");
        println("HOME41 research import; image base="+currentProgram.getImageBase());
        println("Check the original main.elf SHA256 "+ELF_SHA256+" before execution.");
        if(args.length>=4 && args[3].equals("1")) importFde(Paths.get(args[2]));
        annotations(Paths.get(args[0]));
        callerBookmarks(Paths.get(args[1]));
        println("HOME41 imported: created="+created+", renamed="+renamed+
          ", comments="+comments+", callsite bookmarks="+bookmarks);
        println("Save the ACTUAL Ghidra project after autoanalysis to obtain .gpr/.rep.");
    }
}
