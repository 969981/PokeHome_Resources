/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561fe4; name: FUN_.text__00561fe4
 */


void FUN__text__00561fe4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  param_2[5] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x3c);
  uVar2 = *(undefined8 *)(param_1 + 0x44);
  uVar3 = *(undefined8 *)(param_1 + 0x4c);
  *(undefined2 *)(param_2 + 9) = *(undefined2 *)(param_1 + 0x54);
  param_2[7] = uVar2;
  param_2[8] = uVar3;
  param_2[6] = uVar1;
  return;
}


