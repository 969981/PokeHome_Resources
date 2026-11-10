/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8018; name: FUN_.text__005f8018
 */


void FUN__text__005f8018(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  param_1[1] = 0xfde80;
  param_1[2] = 0x6000000;
  param_1[3] = 0;
  param_1[4] = 0x400000;
  param_1[5] = 0x100000;
  *(undefined1 *)(param_1 + 6) = 1;
  uVar2 = nn::os::GetHostArgc();
  *(undefined4 *)((long)param_1 + 0x34) = uVar2;
  uVar1 = nn::os::GetHostArgv();
  param_1[7] = uVar1;
  return;
}


