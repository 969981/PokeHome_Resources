/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045e0f0; name: FUN_.text__0045e0f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045e0f0(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  ushort local_76;
  long local_70;
  ulong local_68;
  undefined8 local_5c;
  undefined4 local_54;
  char local_44 [4];
  
  FUN__text__00466110();
  local_70 = 0;
  local_68 = 0;
  FUN__text__004668c0(param_1,param_2,&local_70,param_3);
  if (local_70 != 0) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
    local_70 = 0;
    local_68 = local_68 & 0xffffffff;
  }
  plVar7 = *(long **)(param_1 + 0x170);
  if (plVar7 == (long *)0x0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = 0.0;
    do {
      fVar10 = *(float *)(plVar7 + 5) + fVar10;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  if (fVar10 <= *(float *)(param_1 + 0x118)) {
    fVar10 = *(float *)(param_1 + 0x118);
  }
  *(float *)(param_2 + 0x10) = fVar10 + *(float *)(param_2 + 0x10);
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  uVar5 = FUN__text__0045df80();
  if ((uVar5 & 1) != 0) {
    return;
  }
  local_d8 = 0;
  local_98 = 0xf000000006000018;
  uStack_90 = 0x3f;
  local_c0 = 0x3f800000;
  local_d0 = 0;
  local_c8 = 0;
  local_76 = local_76 & 0xf800;
  local_138 = 0;
  uStack_130 = 0;
  local_78 = 0;
  local_bc = 0;
  local_b4 = 0;
  uStack_a0 = *(ulong *)(param_2 + 0x98) & 0xffffffffffffffc0;
  local_a8 = *(ulong *)(param_2 + 0x90) & 0xfffffffff07ffff;
  local_128 = 0;
  uStack_120 = 0;
  local_ac = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN__text__0045e0f0(*(undefined8 *)(param_1 + 0x80),&local_138,param_3);
  lVar8 = _DAT_008a4a70;
  piVar4 = _DAT_008a45a8;
  uVar5 = (ulong)*(uint *)(_DAT_008a4a70 + 0x60);
  if (*(uint *)(_DAT_008a4a70 + 0x60) != 0x1a) {
    fVar10 = (float)local_128;
    lVar9 = uVar5 * 4;
    if ((*_DAT_008a45a8 == 1) && ((*(byte *)(param_2 + 0xa3) & 1) != 0)) {
      if ((float)local_128 != 0.0) {
        local_44[0] = '\0';
        local_5c = 0x18;
        local_54 = 0;
        lVar6 = FUN__text__004626a0(param_2 + 0x68,&local_5c,local_44);
        if (lVar6 == 0) {
          fVar10 = 0.0;
          fVar11 = 0.0;
        }
        else {
          if (local_44[0] == '\0') {
            fVar11 = 0.0;
          }
          else {
            fVar11 = *(float *)(lVar6 + 0xc);
          }
          fVar10 = fVar11 + fVar10;
          *(float *)(lVar6 + 0xc) = fVar10;
        }
        if (((*(byte *)(param_2 + 0xb3) & 1) != 0) ||
           ((fVar12 = *(float *)(param_2 + uVar5 * 4), fVar11 == fVar12 && (fVar10 < fVar12)))) {
          *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
        }
        else if (fVar12 < fVar10) {
          *(float *)(param_2 + uVar5 * 4) = fVar10;
        }
      }
    }
    else {
      *(float *)(param_2 + lVar9) = *(float *)(param_2 + lVar9) + (float)local_128;
    }
    fVar10 = uStack_110._4_4_;
    if ((*piVar4 == 1) && ((*(byte *)(param_2 + 0xa3) & 1) != 0)) {
      if (uStack_110._4_4_ != 0.0) {
        local_44[0] = '\0';
        local_5c = 0x18;
        local_54 = 0;
        lVar9 = FUN__text__004626a0(param_2 + 0x68,&local_5c,local_44);
        if (lVar9 == 0) {
          fVar10 = 0.0;
          fVar11 = 0.0;
        }
        else {
          if (local_44[0] == '\0') {
            fVar11 = 0.0;
          }
          else {
            fVar11 = *(float *)(lVar9 + 0xc);
          }
          fVar10 = fVar11 + fVar10;
          *(float *)(lVar9 + 0xc) = fVar10;
        }
        if (((*(byte *)(param_2 + 0xb3) & 1) != 0) ||
           ((fVar12 = *(float *)(param_2 + uVar5 * 4), fVar11 == fVar12 && (fVar10 < fVar12)))) {
          *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
        }
        else if (fVar12 < fVar10) {
          *(float *)(param_2 + uVar5 * 4) = fVar10;
        }
      }
    }
    else {
      *(float *)(param_2 + lVar9) = *(float *)(param_2 + lVar9) + uStack_110._4_4_;
    }
  }
  if (*piVar4 == 1) {
    uVar5 = local_c8 & 0xffffffff;
    if ((int)local_c8 == 0) goto LAB__text__0045e504;
    uVar1 = *(int *)(param_2 + 0x70) + (int)local_c8;
    iVar3 = uVar1 - *(uint *)(param_2 + 0x74);
    if (*(uint *)(param_2 + 0x74) <= uVar1 && iVar3 != 0) {
      FUN__text__004628a0(param_2 + 0x68,iVar3);
    }
    lVar8 = 0;
    do {
      local_44[0] = '\0';
      puVar2 = (undefined8 *)(local_d0 + lVar8);
      local_5c = *puVar2;
      local_54 = *(undefined4 *)(puVar2 + 1);
      lVar9 = FUN__text__004626a0(param_2 + 0x68,&local_5c,local_44);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)((long)puVar2 + 0xc);
      }
      uVar5 = uVar5 - 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 != 0);
  }
  else {
    uVar1 = *(uint *)(lVar8 + 0x68);
    if (uVar1 != 0x1a) {
      lVar9 = (ulong)uVar1 * 4;
      *(float *)(param_2 + lVar9) = *(float *)(param_2 + lVar9) + local_108._4_4_;
    }
    uVar1 = *(uint *)(lVar8 + 100);
    uVar5 = (ulong)uVar1;
    if (uVar1 == 0x1a) goto LAB__text__0045e504;
    fVar10 = (float)local_108;
    if ((*piVar4 != 1) || ((*(byte *)(param_2 + 0xa3) >> 1 & 1) == 0)) {
      *(float *)(param_2 + uVar5 * 4) = *(float *)(param_2 + uVar5 * 4) + (float)local_108;
      goto LAB__text__0045e504;
    }
    if ((float)local_108 == 0.0) goto LAB__text__0045e504;
    local_44[0] = '\0';
    local_5c = 0x19;
    local_54 = 0;
    lVar8 = FUN__text__004626a0(param_2 + 0x68,&local_5c,local_44);
    if (lVar8 == 0) {
      fVar10 = 0.0;
      fVar11 = 0.0;
    }
    else {
      if (local_44[0] == '\0') {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(lVar8 + 0xc);
      }
      fVar10 = fVar11 + fVar10;
      *(float *)(lVar8 + 0xc) = fVar10;
    }
    if (((*(byte *)(param_2 + 0xb3) >> 1 & 1) == 0) &&
       ((fVar12 = *(float *)(param_2 + uVar5 * 4), fVar11 != fVar12 || (fVar12 <= fVar10)))) {
      if (fVar12 < fVar10) {
        *(float *)(param_2 + uVar5 * 4) = fVar10;
      }
      goto LAB__text__0045e504;
    }
  }
  *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
LAB__text__0045e504:
  if (local_d0 != 0) {
    local_c8 = local_c8 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
  }
  return;
}


