/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00128620; name: FUN_.text__00128620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00128620(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_0089f9f0 + 0xa8;
  lVar2 = _DAT_0089f9f0 + 0xe8;
  *param_1 = _DAT_0089f9f0 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0xc6] != 0) {
    (**(code **)(*(long *)(param_1[0xc6] + 0x48) + 0x18))();
    param_1[0xc6] = 0;
  }
  FUN__text__00129c90(param_1 + 0xc2,0);
  FUN__text__00128770(param_1 + 0x22);
  if ((param_1[0x18] != 0) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
  }
  param_1[0x15] = 0;
  param_1[0x16] = -0x340d631b7bddd9bb;
  param_1[0x17] = 0x70f683;
  param_1[0x18] = 0;
  if (param_1[0x19] != 0) {
    (**(code **)(*(long *)(param_1[0x19] + 0x48) + 0x18))();
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((param_1[0x12] != 0) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
  }
  param_1[0xf] = 0;
  param_1[0x10] = -0x340d631b7bddd9bb;
  param_1[0x11] = 0x70f683;
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


