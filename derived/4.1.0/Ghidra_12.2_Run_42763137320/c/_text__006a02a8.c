/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a02a8; name: FUN_.text__006a02a8
 */


undefined8
FUN__text__006a02a8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_58 = 0;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x60))(*(long **)(param_1 + 0x38),&local_58);
  fVar1 = (float)local_58;
  fVar2 = local_58._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  iVar5 = (int)local_58._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  iVar4 = (int)(float)local_58;
  local_98 = 0;
  uStack_90 = 0;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  FUN__text__006ebe40(&local_98);
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar5);
  uStack_90 = CONCAT44(*(undefined4 *)(param_1 + 0x44),(undefined4)uStack_90);
  local_88 = CONCAT44(iVar4,0xa3);
  local_98._0_2_ = CONCAT11(2,(undefined1)local_98);
  local_98 = CONCAT26(1,(undefined6)local_98);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  if ((uVar3 & 1) == 0) {
    FUN__text__006c07c0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_98,param_4);
  }
  iVar4 = (int)(fVar1 * *(float *)(param_1 + 0x28));
  iVar5 = (int)(fVar2 * *(float *)(param_1 + 0x28));
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  local_88 = CONCAT44(iVar4,(undefined4)local_88);
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar5);
  uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if ((uVar3 & 1) == 0) {
    FUN__text__006c07c0(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_98,param_4);
  }
  if ((*(int *)(*(long *)(param_1 + 0x20) + 0xd4) == 0) &&
     (*(int *)(*(long *)(param_1 + 8) + 0xd4) == 0)) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 4;
  }
  return 1;
}


