/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c0564; name: FUN_.text__005c0564
 */


void FUN__text__005c0564(undefined8 *param_1)

{
  long lVar1;
  
  FUN__text__0011bfb0(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xd];
  param_1[0xd] = 0;
  param_1[-9] = 0x896370;
  *param_1 = 0x8963f8;
  param_1[1] = 0x896438;
  if (lVar1 != 0) {
    FUN__text__005be1c0(lVar1);
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],lVar1,param_1[0xf],param_1[0x10]);
  }
  FUN__text__005a7e90(param_1 + -9);
  return;
}


