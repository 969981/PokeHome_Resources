/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e75a4; name: FUN_.text__005e75a4
 */


void FUN__text__005e75a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = param_1;
    if (*(long *)(param_1 + 0x120) != 0) {
      lVar1 = *(long *)(param_1 + 0x120);
    }
    FUN__text__005e73a0(lVar1);
  }
  if (param_3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    param_1 = *(long *)(param_1 + 0x128);
  }
  FUN__text__005e74d0(param_1,param_3);
  return;
}


