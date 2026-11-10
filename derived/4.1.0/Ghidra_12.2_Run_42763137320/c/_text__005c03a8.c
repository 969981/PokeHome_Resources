/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c03a8; name: FUN_.text__005c03a8
 */


void FUN__text__005c03a8(undefined8 *param_1)

{
  long lVar1;
  
  FUN__text__0011bfb0(param_1 + 0x1c);
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
    param_1[0x1b] = 0;
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
    param_1[0x1a] = 0;
  }
  lVar1 = param_1[0x16];
  param_1[0x16] = 0;
  *param_1 = 0x896370;
  param_1[9] = 0x8963f8;
  param_1[10] = 0x896438;
  if (lVar1 != 0) {
    FUN__text__005be1c0(lVar1);
    (**(code **)(*(long *)param_1[0x17] + 0x18))
              ((long *)param_1[0x17],lVar1,param_1[0x18],param_1[0x19]);
  }
  FUN__text__005a7e90(param_1);
  return;
}


