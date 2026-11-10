/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014157c; name: FUN_.text__0014157c
 */


undefined8 * FUN__text__0014157c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 4);
    uVar3 = param_2[3];
    param_1[1] = param_2[1];
    param_1[3] = uVar3;
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    *param_1 = uVar3;
  }
  pcVar2 = (code *)param_1[0x11];
  if (pcVar2 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar2)(param_1 + 0x14);
  }
  if ((code *)param_2[0x12] != (code *)0x0) {
    (*(code *)param_2[0x12])(param_2 + 0x14,param_1 + 0x14);
    uVar3 = param_2[0x13];
    param_1[0x11] = param_2[0x11];
    param_1[0x13] = uVar3;
    uVar3 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x10] = uVar3;
  }
  pcVar2 = (code *)param_1[0x21];
  if (pcVar2 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar2)(param_1 + 0x24);
  }
  if ((code *)param_2[0x22] != (code *)0x0) {
    (*(code *)param_2[0x22])(param_2 + 0x24,param_1 + 0x24);
    uVar3 = param_2[0x23];
    param_1[0x21] = param_2[0x21];
    param_1[0x23] = uVar3;
    uVar3 = param_2[0x20];
    param_1[0x22] = param_2[0x22];
    param_1[0x20] = uVar3;
  }
  pcVar2 = (code *)param_1[0x31];
  if (pcVar2 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar2)(param_1 + 0x34);
  }
  if ((code *)param_2[0x32] != (code *)0x0) {
    (*(code *)param_2[0x32])(param_2 + 0x34,param_1 + 0x34);
    uVar3 = param_2[0x33];
    param_1[0x31] = param_2[0x31];
    param_1[0x33] = uVar3;
    uVar3 = param_2[0x30];
    param_1[0x32] = param_2[0x32];
    param_1[0x30] = uVar3;
  }
  pcVar2 = (code *)param_1[0x41];
  if (pcVar2 != (code *)0x0) {
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    (*pcVar2)(param_1 + 0x44);
  }
  if ((code *)param_2[0x42] != (code *)0x0) {
    (*(code *)param_2[0x42])(param_2 + 0x44,param_1 + 0x44);
    uVar3 = param_2[0x43];
    param_1[0x41] = param_2[0x41];
    param_1[0x43] = uVar3;
    uVar3 = param_2[0x40];
    param_1[0x42] = param_2[0x42];
    param_1[0x40] = uVar3;
  }
  lVar4 = param_2[0x50];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x50];
  param_1[0x50] = lVar4;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  uVar3 = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x51] = uVar3;
  return param_1;
}


