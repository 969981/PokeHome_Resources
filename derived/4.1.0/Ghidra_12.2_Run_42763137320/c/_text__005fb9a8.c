/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fb9a8; name: FUN_.text__005fb9a8
 */


void FUN__text__005fb9a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  param_1[7] = param_3[3];
  lVar1 = param_3[4];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[9] = param_3[5];
  FUN__text__005fba70(param_1 + 10,param_3 + 6);
  param_1[0x15] = param_3[0x11];
  FUN__text__005fba70(param_1 + 0x16,param_3 + 0x12);
  param_1[0x21] = param_3[0x1d];
  FUN__text__005fba70(param_1 + 0x22,param_3 + 0x1e);
  return;
}


