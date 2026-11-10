/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d3fb0; name: FUN_.text__006d3fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d3fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar8 = (int)*(float *)(*(long *)(param_1 + 0x20) + 0x24);
  iVar9 = (int)*(float *)(*(long *)(param_1 + 0x20) + 0x20);
  if (0 < *(int *)(param_1 + 0x154)) {
    plVar4 = (long *)FUN__text__006a0f04(0xd8);
    if (plVar4 != (long *)0x0) {
      *(undefined4 *)(plVar4 + 2) = 0;
      lVar6 = _DAT_008a68c0;
      plVar4[7] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      *plVar4 = lVar6 + 0x10;
      plVar4[1] = -1;
      FUN__text__006f5bcc(plVar4 + 8);
      FUN__text__006f4e0c(plVar4 + 0x11);
      plVar4[0x1a] = -0x100000000;
    }
    *(long **)(param_1 + 0x1c0) = plVar4;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    FUN__text__006ebe40(&local_90);
    local_78 = CONCAT44(local_78._4_4_,iVar8);
    local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
    uStack_84 = 0xb01;
    local_80 = 0xa0;
    local_88 = (undefined2)*(undefined4 *)(param_1 + 0x154);
    local_90 = CONCAT26(1,(undefined6)local_90);
    iStack_7c = iVar9;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x1c0) + 0x30))();
    if ((uVar5 & 1) == 0) {
      FUN__text__006c07c0(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3,&local_90,0);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    FUN__text__006ebccc(&local_90);
    uVar1 = local_90;
    uVar3 = local_90._4_2_;
    local_90._0_3_ = (uint3)(ushort)local_90;
    uVar2 = local_90;
    local_90._6_2_ = SUB82(uVar1,6);
    local_90._0_4_ = (undefined4)uVar2;
    local_90 = CONCAT26(local_90._6_2_,CONCAT24(uVar3,(undefined4)local_90)) | 0xe00000000;
    FUN__text__006ebcac(&local_78);
    local_78 = CONCAT71(local_78._1_7_,(char)*(undefined4 *)(param_1 + 0x154));
    lVar6 = FUN__text__006a0f04(0x30);
    if (lVar6 != 0) {
      FUN__text__006f4410(lVar6);
    }
    *(long *)(param_1 + 0x1c8) = lVar6;
    FUN__text__006f4424(lVar6,param_2,&local_90);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  iStack_7c = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_86 = 0;
  uStack_84 = 0;
  FUN__text__006ebe40(&local_90);
  uStack_84 = 0xb01;
  local_80 = 0xa0;
  local_78 = CONCAT44(local_78._4_4_,iVar8);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  local_90 = CONCAT26(1,(undefined6)local_90);
  iStack_7c = iVar9;
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if ((uVar5 & 1) == 0) {
    FUN__text__006c07c0(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_90,0);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  iStack_7c = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_86 = 0;
  uStack_84 = 0;
  FUN__text__006ebe40(&local_90);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  uStack_84 = 0x1307;
  local_80 = 0x100;
  local_90 = CONCAT26(1,(undefined6)local_90);
  local_78 = CONCAT44(1,iVar8);
  local_88 = (undefined2)*(undefined4 *)(param_1 + 0x154);
  iStack_7c = iVar9;
  (*(code *)*_DAT_008a5380)
            (param_1 + 0x160,param_1 + 0x168,param_1 + 0x170,0,&local_90,*_DAT_008a5390,0);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN__text__006ebebc(&local_c0);
  uVar7 = 6;
  if (*(int *)(param_1 + 0x154) < 1) {
    uVar7 = 1;
  }
  local_c0 = CONCAT71(local_c0._1_7_,uVar7);
  local_a8 = *(undefined8 *)(param_1 + 0x160);
  FUN__text__006f5ccc(param_1 + 0x178);
  FUN__text__006f5ce8(param_1 + 0x178,param_2,&local_c0);
  return;
}


