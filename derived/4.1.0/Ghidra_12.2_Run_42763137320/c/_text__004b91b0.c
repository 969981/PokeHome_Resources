/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b91b0; name: FUN_.text__004b91b0
 */


void FUN__text__004b91b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  *(undefined8 *)(param_1 + 0x80) = param_2[3];
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar3 = param_2[7];
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((long)param_2 + 0x44);
  return;
}


