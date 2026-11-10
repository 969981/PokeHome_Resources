/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063fbb0; name: FUN_.text__0063fbb0
 */


void FUN__text__0063fbb0(undefined4 *param_1,undefined8 *param_2,void *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  memcpy(param_1,param_3,0xe8);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = *param_4;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_4 + 3);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  *param_2 = uVar3;
  FUN__text__0063a140(param_1 + 2,0xe0,*param_1);
  FUN__text__0063a140(param_2,0x1c,*param_1);
  return;
}


