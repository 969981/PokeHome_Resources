/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c72c4; name: FUN_.text__005c72c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c72c4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_0089fdb0 + 0x68;
  lVar2 = _DAT_0089fdb0 + 0xa8;
  *param_1 = _DAT_0089fdb0 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
    param_1[0x4c] = 0;
  }
  FUN__text__005e66f0(param_1);
  return;
}


