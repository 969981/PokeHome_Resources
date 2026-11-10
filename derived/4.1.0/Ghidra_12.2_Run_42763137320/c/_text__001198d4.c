/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001198d4; name: FUN_.text__001198d4
 */


void FUN__text__001198d4(long param_1)

{
  undefined8 uVar1;
  NpadJoyRightState aNStack_48 [8];
  undefined8 local_40;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  nn::hid::GetNpadState(aNStack_48,(uint *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 8) = local_40;
  *(float *)(param_1 + 0x18) = (float)local_30 / 32767.0;
  *(float *)(param_1 + 0x1c) = (float)iStack_2c / 32767.0;
  *(float *)(param_1 + 0x20) = (float)local_38 / 32767.0;
  *(float *)(param_1 + 0x24) = (float)iStack_34 / 32767.0;
  FUN__text__001195bc(param_1,0,1);
  return;
}


