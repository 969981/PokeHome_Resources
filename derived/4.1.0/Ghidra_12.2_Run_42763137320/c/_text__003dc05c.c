/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dc05c; name: FUN_.text__003dc05c
 */


long * FUN__text__003dc05c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN__text__003d91a4(lVar2);
  if ((uVar1 & 1) != 0) {
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) {
      FUN__text__003da214(lVar2,param_2,param_3);
      return param_1;
    }
    FUN__text__003d9d90(lVar2,param_2,param_3);
  }
  return param_1;
}


