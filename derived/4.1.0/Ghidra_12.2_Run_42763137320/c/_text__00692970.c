/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00692970; name: FUN_.text__00692970
 */


undefined8 FUN__text__00692970(undefined8 *param_1,float *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  ulong uStack_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  ulong local_e0;
  code *local_d8;
  ulong local_d0;
  undefined8 *local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  int local_84;
  
  local_d0 = 0;
  uVar9 = *param_3;
  local_a8 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_a4 = *(undefined4 *)(param_1 + 2);
  local_a0 = 0;
  fVar16 = *(float *)((long)param_1 + 0x3c);
  bVar2 = *(char *)((long)param_1 + 99) == '\0';
  uVar1 = uVar9 + (long)param_4;
  bVar3 = *(char *)(param_1 + 7) == '\0';
  local_b0 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_c8 = param_1;
  local_c0 = uVar9;
  local_b8 = uVar1;
  FUN__text__0068d514(&local_e0,param_1[5],0);
  fVar12 = (float)FUN__text__0068a950(param_1);
  *param_2 = 0.0;
  param_2[2] = 0.0;
  fVar15 = (float)NEON_fminnm(fVar12,0);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  param_2[1] = fVar15;
  param_2[3] = fVar12;
  local_e0 = uVar9;
  (**(code **)(*(long *)param_1[0xb] + 0x40))((long *)param_1[0xb],&local_c8);
  pcVar8 = local_d8;
  if ((local_d0 & 1) != 0) {
    pcVar8 = *(code **)(local_d8 + *(long *)((long)&local_e0 + ((long)local_d0 >> 1)));
  }
  uVar4 = (*pcVar8)();
  if (uVar1 < local_e0) {
    uVar10 = 0;
    fVar12 = 0.0;
LAB__text__00692a64:
    if (bVar2 || bVar3) {
LAB__text__00692a70:
      iVar5 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],local_a0._4_4_,0);
      fVar12 = fVar12 + *(float *)((long)param_1 + 0xc) * (float)iVar5;
    }
LAB__text__00692a98:
    fVar15 = fVar12;
    if (*param_2 <= fVar12) {
      fVar15 = *param_2;
    }
    *param_2 = fVar15;
    if (fVar12 <= param_2[2]) {
      fVar12 = param_2[2];
    }
    param_2[2] = fVar12;
    *param_3 = local_e0;
    (**(code **)(*(long *)param_1[0xb] + 0x48))((long *)param_1[0xb],&local_c8);
    return uVar10;
  }
  fVar12 = 0.0;
  uVar10 = 0;
  local_84 = 0;
  uVar9 = 0;
LAB__text__00692b34:
  do {
    uVar11 = local_e0;
    if (bVar2 || bVar3) {
      if (3.4028235e+38 <= fVar16 || uVar9 == 0) {
        if (0x1f < uVar4) {
          uVar7 = FUN__text__00693ae0(uVar4);
          if ((uVar7 & 1) != 0) {
            fVar15 = *(float *)(param_1 + 8);
            if (local_84 == 0) {
              fVar15 = -0.0;
            }
            if (*(char *)(param_1 + 7) == '\0') {
              iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
              fVar13 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
            }
            else {
              fVar13 = *(float *)(param_1 + 4);
            }
            iVar5 = (**(code **)(*(long *)param_1[5] + 0xb8))
                              ((long *)param_1[5],local_a0._4_4_,uVar4);
            fVar14 = *(float *)((long)param_1 + 0xc);
            iVar6 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],uVar4,0);
            fVar17 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
            fVar15 = fVar12 + fVar15 + fVar13 + fVar14 * (float)iVar5 + fVar17;
            goto LAB__text__00692ff0;
          }
          goto LAB__text__00693068;
        }
      }
      else if (0x1f < uVar4) {
        uVar7 = FUN__text__00693ae0(uVar4);
        if ((uVar7 & 1) == 0) goto LAB__text__00693068;
        fVar15 = *(float *)(param_1 + 8);
        if (local_84 == 0) {
          fVar15 = -0.0;
        }
        if (*(char *)(param_1 + 7) == '\0') {
          iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
          fVar13 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
        }
        else {
          fVar13 = *(float *)(param_1 + 4);
        }
        iVar5 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],local_a0._4_4_,uVar4);
        fVar14 = *(float *)((long)param_1 + 0xc);
        iVar6 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],uVar4,0);
        fVar17 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
        fVar15 = fVar12 + fVar15 + fVar13 + fVar14 * (float)iVar5 + fVar17;
        if (fVar15 + *(float *)(param_1 + 9) <= *(float *)((long)param_1 + 0x3c))
        goto LAB__text__00692ff0;
        uVar10 = 1;
        uVar4 = 10;
        local_e0 = uVar9;
        if (uVar1 < uVar9) {
          goto LAB__text__00692a70;
        }
      }
    }
    else if (3.4028235e+38 <= fVar16 || uVar9 == 0) {
      if (0x1f < uVar4) {
        uVar7 = FUN__text__00693ae0(uVar4);
        if ((uVar7 & 1) != 0) {
          fVar15 = *(float *)(param_1 + 8);
          if (local_84 == 0) {
            fVar15 = -0.0;
          }
          if (*(char *)(param_1 + 7) == '\0') {
            iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
            fVar13 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
          }
          else {
            fVar13 = *(float *)(param_1 + 4);
          }
          fVar17 = 0.0;
          fVar15 = fVar12 + fVar15 + fVar13 + 0.0;
LAB__text__00692ff0:
          fVar12 = fVar15;
          if (*param_2 <= fVar15) {
            fVar12 = *param_2;
          }
          *param_2 = fVar12;
          fVar12 = fVar15;
          if (fVar15 <= param_2[2]) {
            fVar12 = param_2[2];
          }
          param_2[2] = fVar12;
          if (*(char *)((long)param_1 + 0x62) != '\0') {
            fVar13 = *(float *)(param_1 + 3);
            fVar12 = fVar13;
            if (param_2[1] <= fVar13) {
              fVar12 = param_2[1];
            }
            param_2[1] = fVar12;
            fVar14 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))
                                      ((long *)param_1[0xb],param_1);
            fVar12 = fVar13 + fVar14;
            if (fVar13 + fVar14 <= param_2[3]) {
              fVar12 = param_2[3];
            }
            param_2[3] = fVar12;
          }
          fVar12 = fVar15 - fVar17;
          local_a0 = CONCAT44(uVar4,(undefined4)local_a0);
          local_84 = 1;
          uVar11 = local_e0;
        }
        goto LAB__text__00693068;
      }
    }
    else if (0x1f < uVar4) {
      uVar7 = FUN__text__00693ae0(uVar4);
      if ((uVar7 & 1) == 0) goto LAB__text__00693068;
      fVar15 = *(float *)(param_1 + 8);
      if (local_84 == 0) {
        fVar15 = -0.0;
      }
      if (*(char *)(param_1 + 7) == '\0') {
        iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
        fVar13 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
      }
      else {
        fVar13 = *(float *)(param_1 + 4);
      }
      fVar17 = 0.0;
      fVar15 = fVar12 + fVar15 + fVar13 + 0.0;
      if (fVar15 + *(float *)(param_1 + 9) <= *(float *)((long)param_1 + 0x3c))
      goto LAB__text__00692ff0;
      uVar10 = 1;
      uVar4 = 10;
      local_e0 = uVar9;
      if (uVar1 < uVar9) {
        goto LAB__text__00692a98;
      }
    }
    if ((uVar4 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) {
      if (bVar2 || bVar3) {
        iVar5 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],local_a0._4_4_,0);
        fVar12 = fVar12 + *(float *)((long)param_1 + 0xc) * (float)iVar5;
      }
      local_a0 = 0;
    }
    local_ec = 0;
    local_e4 = 0.0;
    local_a0 = (CONCAT44(local_a0._4_4_,local_84) ^ 0xffffffff) & 0xffffffff00000001;
    *(float *)((long)param_1 + 0x14) = fVar12;
    local_f0 = fVar12;
    local_c0 = local_e0;
    if (((3.4028235e+38 <= fVar16) || (uVar4 == 10)) || (uVar9 == 0)) goto LAB__text__00692e38;
    uStack_100 = CONCAT44(uStack_a4,local_a8);
    local_198 = 0;
    local_190 = 0;
    local_108 = local_b0;
    local_110 = local_b8;
    local_120 = &local_188;
    local_f8 = local_a0;
    local_138 = param_1[10];
    uStack_130 = param_1[0xb];
    local_128 = param_1[0xc];
    local_158 = param_1[6];
    uStack_150 = param_1[7];
    local_148 = param_1[8];
    uStack_140 = param_1[9];
    local_178 = param_1[2];
    uStack_170 = param_1[3];
    local_168 = param_1[4];
    uStack_160 = param_1[5];
    local_188 = *param_1;
    uStack_180 = param_1[1];
    uStack_118 = local_e0;
    (**(code **)(*(long *)param_1[0xb] + 0x20))((long *)param_1[0xb],&local_198,&local_120,uVar4);
    if ((float)local_190 - (float)local_198 <= 0.0) goto LAB__text__00692e30;
    if (local_178._4_4_ - (float)local_b0 <= *(float *)((long)param_1 + 0x3c))
    goto LAB__text__00692e30;
    local_e0 = uVar9;
    thunk_FUN__text__0068a8b4(&local_188);
    uVar10 = 1;
    uVar4 = 10;
  } while (local_e0 <= uVar1);
  goto LAB__text__00692a64;
LAB__text__00692e30:
  thunk_FUN__text__0068a8b4(&local_188);
LAB__text__00692e38:
  iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x20))
                    ((long *)param_1[0xb],&local_f0,&local_c8,uVar4);
  fVar12 = param_2[3];
  if (((uVar4 == 10) && (*(char *)((long)param_1 + 0x62) != '\0')) &&
     (*(float *)(param_1 + 3) < fVar12)) {
    *(float *)(param_1 + 3) = fVar12;
    fVar12 = param_2[3];
  }
  local_e0 = local_c0;
  fVar15 = local_f0;
  if (*param_2 <= local_f0) {
    fVar15 = *param_2;
  }
  fVar13 = (float)local_ec;
  if (param_2[1] <= (float)local_ec) {
    fVar13 = param_2[1];
  }
  *param_2 = fVar15;
  param_2[1] = fVar13;
  fVar15 = local_ec._4_4_;
  if (local_ec._4_4_ <= param_2[2]) {
    fVar15 = param_2[2];
  }
  fVar13 = local_e4;
  if (local_e4 <= fVar12) {
    fVar13 = fVar12;
  }
  param_2[2] = fVar15;
  param_2[3] = fVar13;
  fVar12 = *(float *)((long)param_1 + 0x14);
  uVar11 = local_c0;
  if (iVar5 - 1U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00692edc */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)((ulong)*(ushort *)((ulong)(iVar5 - 1U) * 2 + 0x765e58) * 4 + 0x692a64))();
    return uVar10;
  }
LAB__text__00693068:
  if (3.4028235e+38 <= fVar16) {
    uVar11 = uVar9;
  }
  pcVar8 = local_d8;
  if ((local_d0 & 1) != 0) {
    pcVar8 = *(code **)(local_d8 + *(long *)((long)&local_e0 + ((long)local_d0 >> 1)));
  }
  uVar4 = (*pcVar8)();
  uVar9 = uVar11;
  if (uVar1 < local_e0) goto LAB__text__00692a64;
  goto LAB__text__00692b34;
}


