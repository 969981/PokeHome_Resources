/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bfc4c; name: FUN_.text__004bfc4c
 */


void FUN__text__004bfc4c(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(byte *)(param_1 + 0x3e0) = *(byte *)(param_1 + 0x3e0) | 0x40;
  lVar1 = *(long *)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (lVar1 != 0) {
    FUN__text__0049dbf0();
  }
  FUN__text__00474a48(param_1,param_2,param_3 & 1);
  return;
}


