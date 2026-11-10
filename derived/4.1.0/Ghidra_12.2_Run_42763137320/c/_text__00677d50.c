/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677d50; name: FUN_.text__00677d50
 */


undefined8 FUN__text__00677d50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x1158) != 0) {
    return 0;
  }
  lVar1 = FUN__text__00678414(param_2,0xb8);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0xbf8) = param_2;
    *(long *)(param_1 + 0x1158) = lVar1;
    *(undefined8 *)(param_1 + 0x1160) = 1;
  }
  return uVar2;
}


