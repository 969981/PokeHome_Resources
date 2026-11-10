/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e22bc; name: FUN_.text__005e22bc
 */


void FUN__text__005e22bc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_1[0x4f];
  if (pcVar1 != (code *)0x0) {
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    (*pcVar1)(param_1 + 0x52);
  }
  *param_1 = 0x897718;
  param_1[9] = 0x897770;
  param_1[10] = 0x8977b0;
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
    param_1[0x4c] = 0;
  }
  FUN__text__005e66f0(param_1);
  return;
}


