/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a85e0; name: FUN_.text__003a85e0
 */


void FUN__text__003a85e0(long param_1,int *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x408);
  if (*(int *)(lVar1 + 0x1c) == 0) {
    FUN__text__003b5c90(lVar1,*param_2 + *(int *)(lVar1 + 0xc) * param_2[1],param_3 & 1);
    return;
  }
  FUN__text__003b5c90(lVar1,param_2[1] + *(int *)(lVar1 + 0x10) * *param_2,param_3 & 1);
  return;
}


