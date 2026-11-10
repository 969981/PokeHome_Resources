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
            boolean requestLiteral = value.contains("SaveRequest") || value.contains("ApogeeSaveRequest") ||
                value.contains("/api/box/operation") || value.contains("/api/mile/operation") ||
                value.contains("savedata.bin") || value.contains("MtSaveThread") ||
                value.equals("SaveThread");
            boolean httpLiteral = value.contains("Failed sending POST request") ||
                value.contains("Failed sending HTTP POST request") || value.contains("HTTP/2") ||
                value.contains("HTTP/1.1") || value.contains("Host:") ||
                value.contains("Content-Length") || value.contains("Authorization:") ||
                value.contains("User-Agent:") || value.contains("Content-Type") ||
                value.contains("Transfer-Encoding") || value.contains("Connection:") ||
                value.contains("chunked") || value.contains("application/json") ||
                value.contains("application/octet-stream") || value.contains("Accept: */*");
            if (requestLiteral || httpLiteral) {
                refs(out, requestLiteral ? "REQUEST_LITERAL" : "HTTP_LITERAL", d.getAddress(), value);
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
        long[] netRoots = {
            0x655114L, 0x64fe24L, 0x662ee8L, 0x674030L,
            0x67447cL, 0x678718L, 0x678ee8L, 0x678bb0L, 0x670d60L
        };
        // The HOME ELF uses a .text overlay address space. toAddr(a) resolves the
        // default space, which is *not* .text::a and can yield false NO_XREF.
        for (long a : netRoots) {
            String name = String.format(java.util.Locale.ROOT, ".text::%08x", a);
            Address target = currentProgram.getAddressFactory().getAddress(name);
            if (target == null) {
                out.append("NETWORK_FUNCTION\t").append(name)
                    .append("\tADDRESS_NOT_RESOLVED\t\t\t\t\n");
                continue;
            }
            Function f = currentProgram.getFunctionManager().getFunctionAt(target);
            out.append("NETWORK_ENTRY\t").append(target).append("\t")
                .append(f == null ? "NO_FUNCTION_AT_TARGET" : clean(f.getName()))
                .append("\t\tENTRY\t\t\n");
            refs(out, "NETWORK_FUNCTION", target, "Ghidra .text overlay VA 0x" + Long.toHexString(a));
        }
        out.append("# matched_string_items=").append(matched).append("\n");
        Files.write(Paths.get(args[0]), out.toString().getBytes(StandardCharsets.UTF_8));
        println("Batch06 native reference probe: " + matched + " matching string data items; output=" + args[0]);
    }
}
