/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ea004; name: FUN_.text__003ea004
 */


void FUN__text__003ea004(long param_1,byte param_2)

{
  *(byte *)(param_1 + 700) = param_2;
  *(ulong *)(param_1 + 0xa0) =
       *(ulong *)(param_1 + 0xa0) & 0xffffe00000000000 |
       *(ulong *)(param_1 + 0xa0) & 0x1fffffffff | (ulong)param_2 << 0x25;
  return;
}


