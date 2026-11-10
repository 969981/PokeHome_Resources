// Ghidra 12.2 research helper: conservative, opt-in import of HOME 4.1.0
// function prototypes verified against published decompiled C.
//@category PokemonHOME
// Usage: -postScript Home41ApplyTypedBatch.java <home41_typed_batch01.tsv> [DRY_RUN|APPLY]
// Default: DRY_RUN; no program mutations.
// Requires matching original ELF SHA256 to APPLY. Does not overwrite
// pre-existing USER_DEFINED signatures, create functions or force renames.
import ghidra.app.script.GhidraScript;
import ghidra.app.util.parser.FunctionSignatureParser;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.data.FunctionDefinitionDataType;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.BufferedReader;
import java.util.HashSet;

public class Home41ApplyTypedBatch extends GhidraScript {
    private static final String ORIGINAL_ELF_SHA256 =
        "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a";
    private static final String COMMENT_TAG = "[HOME41_TYPED_BATCH01]";
    private static final long ORIGINAL_GHIDRA_BASE = 0x100000L;

    private Address functionAddress(long rva) {
        try {
            Address a = currentProgram.getImageBase().add(rva);
            if (currentProgram.getFunctionManager().getFunctionAt(a) != null) return a;
        } catch (Exception ignored) { }
        try {
            String overlay = String.format(".text::%08x", rva + ORIGINAL_GHIDRA_BASE);
            Address a = currentProgram.getAddressFactory().getAddress(overlay);
            if (a != null && currentProgram.getFunctionManager().getFunctionAt(a) != null) return a;
        } catch (Exception ignored) { }
        return null;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1 || args.length > 2) {
            throw new IllegalArgumentException(
                "<home41_typed_batch01.tsv> [DRY_RUN|APPLY]");
        }
        String mode = args.length == 2 ? args[1] : "DRY_RUN";
        if (!"DRY_RUN".equals(mode) && !"APPLY".equals(mode)) {
            throw new IllegalArgumentException("Mode must be DRY_RUN or APPLY");
        }
        boolean apply = "APPLY".equals(mode);
        String processor = currentProgram.getLanguage().getProcessor().toString();
        if (!processor.toUpperCase().contains("AARCH64")) {
            throw new IllegalStateException("Expected AARCH64 program, got " + processor);
        }
        String sha = currentProgram.getExecutableSHA256();
        boolean identityOk = ORIGINAL_ELF_SHA256.equalsIgnoreCase(sha);
        if (apply && !identityOk) {
            throw new IllegalStateException(
                "ELF SHA256 not verified in Ghidra project: " + sha +
                "; expected " + ORIGINAL_ELF_SHA256 + ". No changes applied.");
        }
        println("HOME41 typed signatures, mode=" + mode + " project=" +
                currentProgram.getName() + " imageBase=" + currentProgram.getImageBase() +
                " sha256=" + sha + " shaMatches=" + identityOk);
        if (!identityOk) {
            println("DRY_RUN only: project SHA256 absent or different.");
        }

        int checked = 0, ready = 0, changed = 0, unmapped = 0, guarded = 0, failed = 0;
        HashSet<Long> seen = new HashSet<>();
        FunctionSignatureParser parser =
            new FunctionSignatureParser(currentProgram.getDataTypeManager(), null);
        try (BufferedReader in = Files.newBufferedReader(
                Paths.get(args[0]), StandardCharsets.UTF_8)) {
            String line = in.readLine();
            if (line == null || !line.equals(
                    "rva\tlabel\tprototype\tstatus\tliteral_evidence\tstatic_behavior\tunknowns")) {
                throw new IllegalArgumentException("Unrecognized typed batch TSV schema");
            }
            while ((line = in.readLine()) != null) {
                monitor.checkCancelled();
                if (line.isBlank()) continue;
                String[] row = line.split("\t", -1);
                if (row.length != 7 || !"STATIC_ABI_PARTIAL".equals(row[3])) {
                    throw new IllegalArgumentException("Invalid evidence row: " + line);
                }
                long rva = Long.parseUnsignedLong(row[0].replaceFirst("^0[xX]", ""), 16);
                if (!seen.add(rva)) throw new IllegalArgumentException(
                    "Duplicate RVA: " + row[0]);
                checked++;
                Address addr = functionAddress(rva);
                Function fn = addr == null ? null :
                    currentProgram.getFunctionManager().getFunctionAt(addr);
                if (fn == null) {
                    unmapped++;
                    println("UNMAPPED " + row[0]);
                    continue;
                }
                // Dry-run still parses the prototype, so syntax errors are visible.
                try {
                    FunctionDefinitionDataType sig = parser.parse(null, row[2]);
                    if (fn.getSignatureSource() == SourceType.USER_DEFINED) {
                        guarded++;
                        println("PROTECTED user-defined signature " + row[0] +
                                " " + fn.getPrototypeString(false, false));
                        continue;
                    }
                    ready++;
                    println((apply ? "APPLY" : "READY") + " " + row[0] + " " + row[2]);
                    if (!apply) continue;
                    ApplyFunctionSignatureCmd cmd = new ApplyFunctionSignatureCmd(
                        addr, sig, SourceType.USER_DEFINED);
                    if (!cmd.applyTo(currentProgram, monitor)) {
                        failed++;
                        println("FAILED " + row[0] + ": " + cmd.getStatusMsg());
                        continue;
                    }
                    // Preserve existing comments and note that the business domain
                    // and object layouts are still partially inferred.
                    String existing = fn.getComment();
                    if (existing == null || !existing.contains(COMMENT_TAG)) {
                        String note = COMMENT_TAG + " STATIC_ABI_PARTIAL :: " + row[1] +
                            "\nEvidence: " + row[4] + "\nBehavior: " + row[5] +
                            "\nUnresolved: " + row[6] +
                            "\nOriginal ELF SHA256=" + ORIGINAL_ELF_SHA256;
                        fn.setComment(existing == null || existing.isBlank()
                            ? note : existing + "\n" + note);
                    }
                    changed++;
                } catch (Exception ex) {
                    failed++;
                    println("PARSE/APPLY ERROR " + row[0] + " " + ex.toString());
                }
            }
        }
        println("HOME41 typed batch results: checked=" + checked +
            " parsed/ready=" + ready + " applied=" + changed +
            " protected=" + guarded + " unmapped=" + unmapped +
            " errors=" + failed + ". Runtime equivalence NOT TESTED.");
        if (failed > 0 || (apply && changed == 0)) {
            throw new IllegalStateException("Typed batch incomplete; inspect log.");
        }
    }
}
