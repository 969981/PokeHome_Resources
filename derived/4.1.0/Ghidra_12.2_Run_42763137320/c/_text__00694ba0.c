/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00694ba0; name: FUN_.text__00694ba0
 */


undefined1  [16]
FUN__text__00694ba0(undefined8 *param_1,long param_2,int param_3,int param_4,undefined4 *param_5,
                   float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined2 uVar18;
  undefined2 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_1b4;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  long local_160;
  code *local_158;
  ulong uStack_150;
  undefined8 *local_148;
  long local_140;
  long local_138;
  float local_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  ushort local_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  ushort uStack_fa;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  lVar1 = param_2 + (long)param_3 * 2;
  local_114 = *(float *)((long)param_1 + 0x14);
  fVar20 = *(float *)(param_1 + 3);
  fVar22 = *(float *)((long)param_1 + 0x3c);
  bVar3 = *(char *)(param_1 + 7) == '\0';
  bVar4 = *(char *)((long)param_1 + 99) == '\0';
  local_118 = fVar20;
  (**(code **)(*(long *)param_1[0xb] + 0x50))((long *)param_1[0xb],param_1,param_2,lVar1);
  fVar12 = (float)FUN__text__006954a0(param_1,&local_114,&local_118,param_2,param_3);
  local_128 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_124 = *(undefined4 *)(param_1 + 2);
  local_120 = 0;
  local_130 = local_114;
  fStack_12c = local_118;
  fVar13 = *(float *)(param_1 + 3);
  if (param_4 != 0) {
    if (param_4 < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = *param_5;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar14;
  }
  local_160 = 0;
  local_158 = (code *)0x0;
  uStack_150 = 0;
  lVar10 = (long)param_3;
  local_148 = param_1;
  local_140 = param_2;
  local_138 = lVar1;
  FUN__text__0068d588(&local_160,param_1[5],0);
  local_160 = param_2;
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],&local_148);
  pcVar8 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar8 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar5 = (*pcVar8)();
  if (lVar10 < local_160 - param_2 >> 1) {
LAB__text__00694cfc:
    if (bVar3 || bVar4) {
      iVar6 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],local_120._4_4_,0);
      fVar22 = *(float *)((long)param_1 + 0x14) + *(float *)((long)param_1 + 0xc) * (float)iVar6;
      *(float *)((long)param_1 + 0x14) = fVar22;
      uVar5 = *(uint *)(param_1 + 10);
      uVar18 = SUB42(local_130,0);
      uVar19 = (undefined2)((uint)local_130 >> 0x10);
    }
    else {
      fVar22 = *(float *)((long)param_1 + 0x14);
      uVar5 = *(uint *)(param_1 + 10);
      uVar18 = SUB42(local_130,0);
      uVar19 = (undefined2)((uint)local_130 >> 0x10);
    }
    if (((uVar5 & 0x300) != 0x100) && ((uVar5 & 0x300) != 0x200)) {
      fVar20 = (fVar20 - fVar13) + *(float *)(param_1 + 3);
    }
    *(float *)(param_1 + 3) = fVar20;
    fVar22 = fVar22 - (float)CONCAT22(uVar19,uVar18);
    if (fVar22 <= fVar12) {
      fVar22 = fVar12;
    }
    (**(code **)(*(long *)param_1[0xb] + 0x38))((long *)param_1[0xb],&local_148);
    (**(code **)(*(long *)param_1[0xb] + 0x58))((long *)param_1[0xb],param_1,param_2,lVar1);
    return ZEXT416((uint)fVar22);
  }
  fVar24 = 0.0;
  local_1b4 = 0;
  lVar9 = param_2;
LAB__text__00694d5c:
  do {
    lVar11 = local_160;
    if (uVar5 < 0x20) {
      local_120 = (CONCAT44(local_120._4_4_,local_1b4) ^ 0xffffffff) & 0xffffffff00000001;
      local_140 = local_160;
      if ((3.4028235e+38 <= fVar22 || uVar5 == 10) || param_4 < 1 && lVar9 == param_2)
      goto LAB__text__00695018;
      local_178 = CONCAT44(fStack_12c,local_130);
      uStack_170 = CONCAT44(uStack_124,local_128);
      local_1a0 = 0;
      local_198 = 0;
      local_180 = local_138;
      local_190 = &local_110;
      local_168 = local_120;
      local_c0 = param_1[10];
      uStack_b8 = param_1[0xb];
      local_b0 = param_1[0xc];
      local_e0 = param_1[6];
      uStack_d8 = param_1[7];
      local_d0 = param_1[8];
      uStack_c8 = param_1[9];
      uVar2 = param_1[2];
      local_100 = (ushort)uVar2;
      uStack_fe = (undefined2)((ulong)uVar2 >> 0x10);
      uStack_fc = (undefined2)((ulong)uVar2 >> 0x20);
      uStack_fa = (ushort)((ulong)uVar2 >> 0x30);
      uStack_f8 = (undefined4)param_1[3];
      uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_f0 = param_1[4];
      uStack_e8 = param_1[5];
      local_110 = *param_1;
      uStack_108 = param_1[1];
      uStack_188 = local_160;
      (**(code **)(*(long *)param_1[0xb] + 0x20))((long *)param_1[0xb],&local_1a0,&local_190,uVar5);
      if ((float)local_198 - (float)local_1a0 <= 0.0) break;
      fVar15 = 0.0;
      if (0 < param_4) {
        fVar15 = *param_6;
      }
      if ((float)CONCAT22(uStack_fa,uStack_fc) - local_130 <=
          *(float *)((long)param_1 + 0x3c) + fVar15) break;
      local_120 = local_120 & 0xffffffff;
      local_160 = lVar9;
      thunk_FUN__text__0068a8b4(&local_110);
      uVar5 = 10;
    }
    else {
      uVar7 = FUN__text__00693ae0(uVar5);
      if ((uVar7 & 1) == 0) goto LAB__text__006953a0;
      uVar14 = *(undefined4 *)(param_1 + 3);
      fVar15 = 0.0;
      if (bVar3 || bVar4) {
        iVar6 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],local_120._4_4_,uVar5);
        fVar15 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
      }
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_fe = 0;
      uStack_fc = 0;
      uStack_fa = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      local_110 = 0;
      uStack_108 = 0;
      (**(code **)(*(long *)param_1[5] + 0x98))((long *)param_1[5],&local_110,uVar5);
      if (local_100 <= uStack_fa) {
        fVar16 = *(float *)(param_1 + 8);
        if (local_1b4 == 0) {
          fVar16 = -0.0;
        }
        if (*(char *)(param_1 + 7) == '\0') {
          fVar21 = (float)NEON_ucvtf((uint)uStack_108._4_2_);
          fVar21 = *(float *)((long)param_1 + 0xc) * fVar21;
        }
        else {
          fVar21 = *(float *)(param_1 + 4);
        }
        fVar23 = 0.0;
        if (bVar3 || bVar4) {
          iVar6 = (**(code **)(*(long *)param_1[5] + 0xb8))((long *)param_1[5],uVar5,0);
          fVar23 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
        }
        fVar16 = fVar15 + fVar24 + fVar16 + fVar21 + fVar23;
        if ((param_4 >= 1 || lVar9 != param_2) && fVar22 < 3.4028235e+38) {
          fVar21 = 0.0;
          if (0 < param_4) {
            fVar21 = *param_6;
          }
          if (*(float *)((long)param_1 + 0x3c) + fVar21 < fVar16) {
            local_120 = local_120 & 0xffffffff;
            uVar5 = 10;
            local_160 = lVar9;
            goto LAB__text__00694da8;
          }
        }
        fVar24 = fVar16 - fVar23;
        uVar18 = (undefined2)*(undefined4 *)(param_1 + 8);
        uVar19 = (undefined2)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
        if (local_1b4 == 0) {
          uVar18 = 0;
          uVar19 = 0x8000;
        }
        *(float *)((long)param_1 + 0x14) =
             fVar15 + *(float *)((long)param_1 + 0x14) + (float)CONCAT22(uVar19,uVar18);
        iVar6 = (**(code **)(*(long *)param_1[5] + 200))();
        *(float *)(param_1 + 3) =
             *(float *)(param_1 + 3) +
             *(float *)(param_1 + 2) * (float)(-iVar6 - (int)uStack_e8._4_2_);
        FUN__text__0068a9c0(param_1,&local_110);
        *(undefined4 *)(param_1 + 3) = uVar14;
        local_1b4 = 1;
        local_120 = CONCAT44(uVar5,(undefined4)local_120);
        lVar11 = local_160;
        goto LAB__text__006953a0;
      }
      pcVar8 = local_158;
      if ((uStack_150 & 1) != 0) {
        pcVar8 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
      }
      uVar5 = (*pcVar8)();
    }
LAB__text__00694da8:
    if (lVar10 < local_160 - param_2 >> 1) goto LAB__text__00694cfc;
  } while( true );
  thunk_FUN__text__0068a8b4(&local_110);
LAB__text__00695018:
  iVar6 = (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],uVar5,&local_148);
  fVar15 = local_114;
  fVar24 = *(float *)((long)param_1 + 0x14);
  if (((uVar5 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) &&
     (local_120 = local_120 & 0xffffffff, *(char *)((long)param_1 + 0x62) != '\0')) {
    uStack_c8 = param_1[9];
    local_c0 = param_1[10];
    uStack_b8 = param_1[0xb];
    local_b0 = param_1[0xc];
    fVar21 = *(float *)(param_1 + 3);
    uStack_e8 = param_1[5];
    local_e0 = param_1[6];
    uStack_d8 = param_1[7];
    local_d0 = param_1[8];
    local_190 = (undefined8 *)0x0;
    uStack_188 = 0;
    local_f0 = param_1[4];
    local_100 = (ushort)param_1[2];
    uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
    uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
    local_1a0 = local_160;
    local_110 = *param_1;
    uStack_108 = param_1[1];
    uStack_fc = 0;
    uStack_fa = 0;
    uStack_f8 = 0;
    FUN__text__00694330(&local_110,&local_190,&local_1a0,
                        param_3 - (int)((ulong)(local_160 - param_2) >> 1));
    fVar23 = uStack_188._4_4_ - local_190._4_4_;
    thunk_FUN__text__0068a8b4(&local_110);
    fVar16 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
    *(float *)(param_1 + 3) = fVar21 + (fVar23 - fVar16);
  }
  if (iVar6 - 1U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00695118 */
                    /* WARNING: Treating indirect jump as call */
    auVar17 = (*(code *)((ulong)*(ushort *)((ulong)(iVar6 - 1U) * 2 + 0x765ec6) * 4 + 0x694cfc))();
    return auVar17;
  }
  fVar24 = fVar24 - fVar15;
  local_160 = local_140;
  lVar11 = local_140;
LAB__text__006953a0:
  if (fVar22 < 3.4028235e+38) {
    lVar9 = lVar11;
  }
  pcVar8 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar8 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar5 = (*pcVar8)();
  if (lVar10 < local_160 - param_2 >> 1) goto LAB__text__00694cfc;
  goto LAB__text__00694d5c;
}


