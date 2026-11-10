/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019f1b0; name: FUN_.text__0019f1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019f1b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_6c;
  long local_68;
  long local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  uVar1 = local_58 >> 8;
  local_58 = local_58 & 0xffffff00;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uVar3 = uStack_50;
  local_4c = 0;
  uVar5 = local_4c;
  uStack_48 = 0;
  uVar2 = local_44 >> 8;
  local_44 = local_44 & 0xffffff00;
  uStack_50 = (undefined4)_DAT_0072593c;
  uVar4 = uStack_50;
  local_4c = (undefined4)((ulong)_DAT_0072593c >> 0x20);
  uVar6 = local_4c;
  if ((*(uint *)(param_1 + 0x1bc) | 4) == 4) {
    uVar1 = *(uint *)(param_1 + 0x1c0);
joined_r0x0019f390:
    uVar8 = 0;
    uStack_50 = uVar3;
    local_4c = uVar5;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    if (*(uint *)(lVar10 + 0x4cc) < 2) {
      uStack_54 = *(undefined4 *)(param_1 + 0x1b0);
      uVar8 = 1;
      local_58 = CONCAT31((int3)uVar1,1);
      uVar1 = *(uint *)(param_1 + 0x1c0);
      uStack_48 = _DAT_00725944;
    }
    else {
      if (*(uint *)(lVar10 + 0x4cc) != 2) {
        uVar1 = *(uint *)(param_1 + 0x1c0);
        goto joined_r0x0019f390;
      }
      uVar8 = 1;
      local_58 = (uint)*(undefined8 *)(lVar10 + 0x5a58);
      uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x5a58) >> 0x20);
      uStack_50 = (undefined4)*(undefined8 *)(lVar10 + 0x5a60);
      local_4c = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x5a60) >> 0x20);
      uStack_48 = *(undefined4 *)(lVar10 + 0x5a68);
      uVar1 = *(uint *)(param_1 + 0x1c0);
    }
  }
  if ((uVar1 | 4) != 4) {
    lVar10 = *(long *)(param_1 + 0x88);
    if (*(uint *)(lVar10 + 0x4cc) < 2) {
      uStack_40 = *(undefined4 *)(param_1 + 0x1b4);
      uVar9 = 1;
      local_44 = CONCAT31((int3)uVar2,1);
      local_34 = _DAT_00725944;
      uStack_3c = uVar4;
      uStack_38 = uVar6;
      goto LAB__text__0019f208;
    }
    if (*(uint *)(lVar10 + 0x4cc) == 2) {
      uVar9 = 1;
      local_44 = (uint)*(undefined8 *)(lVar10 + 0x5a58);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x5a58) >> 0x20);
      uStack_3c = (undefined4)*(undefined8 *)(lVar10 + 0x5a60);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x5a60) >> 0x20);
      local_34 = *(undefined4 *)(lVar10 + 0x5a68);
      goto LAB__text__0019f208;
    }
  }
  uVar9 = 0;
LAB__text__0019f208:
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_60 = *(long *)(lVar10 + 0x158);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *(long *)(lVar10 + 0x28);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN__text__00198770(&local_60,&local_68,uVar8,&local_58,uVar9,&local_44);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_68 = *(long *)(lVar10 + 0x28);
  local_6c = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  iVar7 = FUN__text__0019a250(&local_68,*(undefined8 *)(lVar10 + 0x48),&local_6c);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if (iVar7 != 0) {
    FUN__text__0019bb44(*(undefined8 *)(lVar10 + 0x28),local_6c);
  }
  return;
}


