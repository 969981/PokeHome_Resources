/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056cd84; name: FUN_.text__0056cd84
 */


void FUN__text__0056cd84(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0x892870;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar2;
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar1;
  return;
}


