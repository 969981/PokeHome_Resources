/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069de0c; name: FUN_.text__0069de0c
 */


void FUN__text__0069de0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x40) = param_2[6];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


