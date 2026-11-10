/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0e08; name: FUN_.text__005a0e08
 */


void FUN__text__005a0e08(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,
                        undefined4 param_4)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  lVar1 = param_2[3];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((long)param_1 + 0x3c) = param_4;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  return;
}


