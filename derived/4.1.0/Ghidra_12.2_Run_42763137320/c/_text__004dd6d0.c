/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd6d0; name: FUN_.text__004dd6d0
 */


void FUN__text__004dd6d0(long param_1,uint param_2,long param_3)

{
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    return;
  }
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


