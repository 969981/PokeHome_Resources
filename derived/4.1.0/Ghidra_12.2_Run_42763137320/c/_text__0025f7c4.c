/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f7c4; name: FUN_.text__0025f7c4
 */


void FUN__text__0025f7c4(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_14;
  
  FUN__text__005be91c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),param_1 + 0x90);
  FUN__text__005be91c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),param_1 + 0x94);
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar1 = *param_2;
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar2 = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  local_14 = 1;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  FUN__text__005bea34(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_14);
  local_14 = 1;
  FUN__text__005bea4c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_14);
  local_14 = 0;
  FUN__text__005bea40(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_14);
  local_14 = 0xffffffff;
  FUN__text__005bea1c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_14);
  local_14 = 0;
  FUN__text__005bea28(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_14);
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 == 3) {
    FUN__text__002607c8(param_1);
    return;
  }
  if (iVar3 == 2) {
    FUN__text__0026008c();
    return;
  }
  if (iVar3 == 1) {
    FUN__text__0025fa40();
    return;
  }
  FUN__text__00260d44();
  return;
}


