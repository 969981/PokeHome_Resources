/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00582d4c; name: FUN_.text__00582d4c
 */


void FUN__text__00582d4c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0x893430;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return;
}


