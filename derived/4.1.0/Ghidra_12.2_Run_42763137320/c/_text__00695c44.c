/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00695c44; name: FUN_.text__00695c44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__00695c44(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                   undefined1 *param_5)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_38;
  
  puVar5 = (undefined8 *)*param_3;
  uVar1 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(ushort *)(param_2 + 10);
  uStack_80 = puVar5[9];
  local_70 = puVar5[0xb];
  uStack_68 = puVar5[0xc];
  local_90 = puVar5[7];
  local_a0 = (long *)puVar5[5];
  uStack_98 = puVar5[6];
  local_b0 = puVar5[3];
  uStack_c0 = puVar5[1];
  local_b8 = puVar5[2];
  local_c8 = *puVar5;
  local_88 = 0;
  local_a8 = puVar5[4] & 0xffffffff;
  _local_78 = CONCAT44((int)((ulong)puVar5[10] >> 0x20),0x300);
  FUN__text__006926e0(&local_c8);
  fVar8 = (float)FUN__text__0068a918(*param_3);
  iVar3 = (**(code **)(*local_a0 + 0x20))();
  local_38 = 0;
  uVar7 = *(undefined8 *)(*param_3 + 0x58);
  fVar8 = (fVar8 * 0.4) / (float)iVar3;
  uStack_c0 = CONCAT44(fVar8,(undefined4)uStack_c0);
  local_b8._0_4_ = fVar8;
  FUN__text__0068e20c(&local_38);
  local_38 = _DAT_008a66a0 + 0x10;
  *(long **)(*param_3 + 0x58) = &local_38;
  fVar8 = (float)FUN__text__00692700(*param_3,param_5,uVar1);
  *(undefined8 *)(*param_3 + 0x58) = uVar7;
  fVar9 = (float)FUN__text__00692700(&local_c8,param_2 + 0xc,uVar2);
  FUN__text__0068e220(&local_38);
  fVar8 = fVar8 - fVar9;
  if (fVar8 <= 0.0) {
    fVar8 = fVar8 * 0.5;
    lVar6 = *param_3;
    fVar9 = *(float *)(lVar6 + 0x24);
  }
  else {
    fVar8 = fVar8 / (float)(uVar2 + 1);
    local_88 = CONCAT44(local_88._4_4_,fVar8 + 0.0);
    lVar6 = *param_3;
    fVar9 = *(float *)(lVar6 + 0x24);
  }
  local_b8._4_4_ = fVar8 + local_b8._4_4_;
  if (fVar9 != 0.0) {
    fVar8 = *(float *)(lVar6 + 0xc);
    iVar3 = (**(code **)(**(long **)(lVar6 + 0x28) + 0x20))();
    lVar6 = *param_3;
    local_b8._4_4_ = local_b8._4_4_ + fVar9 * fVar8 * (float)iVar3 * 0.5;
  }
  if ((*(byte *)(param_3 + 5) & 1) == 0) {
    local_b8._4_4_ = *(float *)(lVar6 + 0x40) + local_b8._4_4_;
  }
  fVar8 = *(float *)(lVar6 + 0x10);
  iVar3 = (**(code **)(**(long **)(lVar6 + 0x28) + 200))();
  plVar4 = *(long **)(*param_3 + 0x28);
  local_b0 = CONCAT44(local_b0._4_4_,(float)local_b0 - fVar8 * (float)iVar3);
  if (plVar4 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4,*(undefined4 *)((long)param_3 + 0x2c),*param_5);
    fVar8 = *(float *)(*param_3 + 0xc) * (float)iVar3;
    if (fVar8 != 0.0) {
      local_b8._4_4_ = fVar8 + local_b8._4_4_;
    }
  }
  FUN__text__006930bc(&local_c8,param_2 + 0xc,uVar2);
  thunk_FUN__text__0068a8b4(&local_c8);
  return 0;
}


