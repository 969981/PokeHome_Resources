// Read-only probe of Ghidra native project references for HOME save/request strings.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class Home41Batch06ReferenceProbe extends GhidraScript {
    private String clean(String s) {
        if (s == null) return "";
        return s.replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n");
    }
    private void refs(StringBuilder out, String kind, Address target, String value) {
        ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(target);
        int n = 0;
        ArrayList<String> rows = new ArrayList<>();
        while (it.hasNext()) {
            Reference r = it.next();
            Address from = r.getFromAddress();
            Function f = currentProgram.getFunctionManager().getFunctionContaining(from);
            Instruction ins = currentProgram.getListing().getInstructionAt(from);
            String fn = f == null ? "" : f.getName() + "@" + f.getEntryPoint();
            String asm = ins == null ? "" : ins.toString();
            rows.add(kind + "\t" + target + "\t" + clean(value) + "\t" + from + "\t" +
                r.getReferenceType() + "\t" + clean(fn) + "\t" + clean(asm));
            n++;
        }
        if (n == 0) rows.add(kind + "\t" + target + "\t" + clean(value) + "\t\tNO_XREF\t\t");
        for (String row : rows) out.append(row).append("\n");
    }
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("usage: output.tsv");
        StringBuilder out = new StringBuilder();
        out.append("kind\ttarget\tvalue\tfrom\treference_type\tfunction\tinstruction\n");
        Listing listing = currentProgram.getListing();
        DataIterator data = listing.getDefinedData(true);
        int matched = 0;
        while (data.hasNext()) {
            Data d = data.next();
            Object v = d.getValue();
            String value = v == null ? d.getDefaultValueRepresentation() : String.valueOf(v);
            if (value == null) continue;
            if (value.contains("SaveRequest") || value.contains("ApogeeSaveRequest") ||
                value.contains("/api/box/operation") || value.contains("/api/mile/operation") ||
                value.contains("savedata.bin") || value.contains("MtSaveThread") ||
                value.equals("SaveThread")) {
                refs(out, "STRING", d.getAddress(), value);
                matched++;
            }
        }
        long[] globals = {
            0x965248L, // main+0x865248: Dirty Tracker list
            0x978ac8L, // main+0x878ac8: Dirty count
            0x960ac8L, // main+0x860ac8: secondary collection count
            0x960ad0L, // main+0x860ad0: secondary Tracker list
            0x960df0L  // main+0x860df0: companion records
        };
        for (long a : globals) refs(out, "GLOBAL", toAddr(a), "Ghidra VA 0x" + Long.toHexString(a));
        out.append("# matched_string_items=").append(matched).append("\n");
        Files.write(Paths.get(args[0]), out.toString().getBytes(StandardCharsets.UTF_8));
        println("Batch06 native reference probe: " + matched + " matching string data items; output=" + args[0]);
    }
}
