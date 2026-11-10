/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046bd38; name: FUN_.text__0046bd38
 */


void FUN__text__0046bd38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = 0x889758;
  param_1[1] = 0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  param_1[5] = param_2[4];
  param_1[6] = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return;
}


