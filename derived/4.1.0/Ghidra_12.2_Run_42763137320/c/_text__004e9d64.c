/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9d64; name: FUN_.text__004e9d64
 */


void FUN__text__004e9d64(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = FUN__text__004ec9f0(*(long *)(param_1 + 0x18),param_3);
    iVar1 = (param_2 - param_3) + iVar1;
  }
  *(int *)(param_1 + 0x24) = param_2 - iVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
  return;
}


