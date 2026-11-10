/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf7bc; name: FUN_.text__006bf7bc
 */


void FUN__text__006bf7bc(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(*(long *)(param_2 + 0x150) + 4) = param_1;
    *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
    return;
  }
  if (param_3 == 0) {
    **(undefined4 **)(param_2 + 0x150) = param_1;
  }
  *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
  return;
}


