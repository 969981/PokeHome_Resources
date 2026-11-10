/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068066c; name: FUN_.text__0068066c
 */


undefined8 FUN__text__0068066c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0x100;
  lVar1 = FUN__text__00680a08(param_2,0x100,8);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    param_1[2] = 0;
  }
  return uVar2;
}


