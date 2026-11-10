/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9e8c; name: FUN_.text__003e9e8c
 */


void FUN__text__003e9e8c(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x2b8)) {
    uVar1 = FUN__text__003eb460(*(long *)(param_1 + 0x298) + (ulong)param_2 * 0x40);
    if ((uVar1 & 1) != 0) {
      FUN__text__003eb73c(*(long *)(param_1 + 0x298) + (ulong)param_2 * 0x40,param_3 & 1);
      return;
    }
  }
  return;
}


