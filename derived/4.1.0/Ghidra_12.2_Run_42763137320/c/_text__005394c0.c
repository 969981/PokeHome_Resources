/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005394c0; name: FUN_.text__005394c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005394c0(undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,
                        double *param_5,long *param_6,undefined8 *param_7,uint param_8,long *param_9
                        )

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 local_170 [8];
  undefined8 local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  long local_140;
  ulong local_138;
  long local_130 [5];
  undefined4 local_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  undefined8 local_e8;
  float local_dc;
  float fStack_d8;
  float local_d4;
  long local_d0;
  long lStack_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  long *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  
  plVar1 = param_6 + 9;
  param_6[0xe] = param_6[10];
  param_6[0xf] = param_6[0xb];
  param_6[0x10] = param_6[0xc];
  param_6[0x11] = param_6[0xd];
  uVar3 = *(uint *)(param_6 + 1);
  plVar10 = plVar1;
  if ((ulong)uVar3 != 0) {
    plVar10 = (undefined8 *)*param_6 + (ulong)(uVar3 - 1) * 10 + 6;
  }
  lVar9 = *plVar10;
  if (uVar3 != 0) {
    lVar11 = (ulong)uVar3 * 0x50;
    puVar13 = (undefined8 *)*param_6;
    do {
      (**(code **)*puVar13)(puVar13);
      lVar11 = lVar11 + -0x50;
      puVar13 = puVar13 + 10;
    } while (lVar11 != 0);
  }
  *(undefined4 *)(param_6 + 1) = 0;
  if (param_7 != (undefined8 *)0x0) {
    if (*(uint *)(param_7 + 1) != 0) {
      lVar11 = (ulong)*(uint *)(param_7 + 1) << 6;
      puVar13 = (undefined8 *)*param_7;
      do {
        (**(code **)*puVar13)(puVar13);
        lVar11 = lVar11 + -0x40;
        puVar13 = puVar13 + 8;
      } while (lVar11 != 0);
    }
    *(undefined4 *)(param_7 + 1) = 0;
  }
  plVar10 = param_6 + 2;
  local_d0 = *plVar10;
  lStack_c8 = param_6[3];
  local_c0 = (undefined4)param_6[4];
  *plVar10 = 0;
  param_6[3] = 0;
  *(undefined4 *)(param_6 + 4) = 0;
  if ((int)param_6[7] != 0) {
    uVar14 = 0;
    do {
      lVar11 = param_6[6];
      plVar8 = *(long **)(lVar11 + uVar14 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          FUN__text__00400fc0(0xb);
        } while (plVar8 != (long *)0x0);
        lVar11 = param_6[6];
      }
      *(undefined8 *)(lVar11 + uVar14 * 8) = 0;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_6 + 7));
  }
  *(undefined4 *)(param_6 + 8) = 0;
  (**(code **)(*param_9 + 0x10))(param_9);
  lVar11 = _DAT_008a4288 + 0x10;
  lVar2 = _DAT_008a4290 + 0x10;
  do {
    fVar16 = (float)param_3;
    fVar15 = (float)param_2;
    local_dc = (float)(**(code **)(*param_9 + 0x18))(param_9);
    local_130[1] = 0;
    local_130[2] = 0;
    uVar23 = *(undefined4 *)(param_4 + 0x18);
    local_108 = 0;
    local_130[3] = 0;
    local_130[4] = 0;
    iVar7 = *(int *)(param_4 + 0x10);
    local_100 = *plVar1;
    local_d4 = (float)NEON_fminnm(*(undefined4 *)(param_4 + 0x28),uVar23);
    bVar4 = *(int *)(param_4 + 0x14) != 0;
    bVar5 = *(int *)(param_4 + 0x20) != 0;
    bVar6 = bVar4 || bVar5;
    local_f8 = 0;
    local_f0 = 0;
    local_dc = local_d4 * local_dc;
    fStack_d8 = local_d4 * fVar15;
    param_2 = (ulong)(uint)fStack_d8;
    local_d4 = local_d4 * fVar16;
    param_3 = (ulong)(uint)local_d4;
    local_e8 = 0;
    *plVar1 = local_100 + 1;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_168 = 0.0;
    local_160 = 0.0;
    local_158 = 0;
    uStack_150 = 0;
    local_170 = (undefined1  [8])lVar2;
    local_130[0] = lVar11;
    if (iVar7 != 0) {
      uStack_94 = 1;
      uStack_90 = 1;
      local_7c = 0x3f800000;
      local_98 = iVar7 != 0;
      uStack_97 = bVar6;
      local_88 = param_9;
      local_80 = uVar23;
      FUN__text__0053a4ec(param_4,&local_98,param_5,&local_dc,param_5,0,0,param_6,param_7,local_130,
                          local_170);
    }
    if (bVar4 || bVar5) {
      local_b4 = 0x100000001;
      local_9c = 0x3f800000;
      local_b8._0_2_ = CONCAT11(bVar6,iVar7 != 0);
      local_a8 = param_9;
      local_a0 = uVar23;
      FUN__text__0053a9d0(param_4,&local_b8,param_5,&local_dc,param_5,0,0,param_6,param_7,local_130,
                          local_170);
    }
    lVar12 = *plVar1;
    local_170 = (undefined1  [8])(_DAT_008a4290 + 0x10);
    if (local_140 != 0) {
      local_138 = local_138 & 0xffffffff00000000;
      FUN__text__00400fc0(0xe);
    }
    local_130[0] = _DAT_008a4288 + 0x10;
    if (local_f8 != 0) {
      local_f0 = local_f0 & 0xffffffff00000000;
      FUN__text__00400fc0(0xb);
    }
  } while ((ulong)(lVar12 - lVar9) <= (ulong)param_8);
  FUN__text__0051cbd0(&local_d0,plVar10);
  FUN__text__0051c5a4(local_130,&local_d0);
  while( true ) {
    uVar14 = FUN__text__0051c5f0(local_130);
    if ((uVar14 & 1) != 0) break;
    lVar9 = FUN__text__0051c6cc(local_130);
    fVar18 = *(float *)(lVar9 + 0x18);
    fVar19 = *(float *)(lVar9 + 0x1c);
    fVar21 = *(float *)(lVar9 + 0x10);
    fVar20 = *(float *)(lVar9 + 0x14);
    fVar16 = (float)(param_5[1] - *(double *)(lVar9 + 0x28));
    fVar15 = (float)(*param_5 - *(double *)(lVar9 + 0x20));
    fVar17 = (float)(param_5[2] - *(double *)(lVar9 + 0x30));
    fVar22 = fVar18 * fVar15 - fVar20 * fVar16;
    fVar24 = fVar19 * fVar16 - fVar18 * fVar17;
    fVar25 = fVar20 * fVar17 - fVar19 * fVar15;
    fVar22 = fVar22 + fVar22;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    local_b8 = ((fVar15 - fVar18 * fVar22) + fVar21 * fVar24 + fVar19 * fVar25) /
               *(float *)(lVar9 + 0x38);
    local_b4 = CONCAT44(((fVar17 + fVar21 * fVar22 + fVar18 * fVar24) - fVar20 * fVar25) /
                        *(float *)(lVar9 + 0x40),
                        ((fVar16 + fVar20 * fVar22 + fVar21 * fVar25) - fVar19 * fVar24) /
                        *(float *)(lVar9 + 0x3c));
    lVar11 = FUN__text__0051c6d8(local_130);
    iVar7 = FUN__text__00516f44(lVar11,&local_b8);
    if (-2 < iVar7) {
      fVar15 = 0.0;
      fVar16 = *(float *)(lVar11 + 0x10) * (local_b8 - *(float *)(lVar11 + 4)) +
               ((float)local_b4 - *(float *)(lVar11 + 8)) * *(float *)(lVar11 + 0x14) +
               (local_b4._4_4_ - *(float *)(lVar11 + 0xc)) * *(float *)(lVar11 + 0x18);
      if (0.0 <= fVar16) {
        fVar15 = (float)NEON_fminnm(fVar16,*(undefined4 *)(lVar11 + 0x50));
      }
      fVar16 = *(float *)(lVar11 + 8) + *(float *)(lVar11 + 0x14) * fVar15;
      fVar17 = *(float *)(lVar11 + 0xc) + *(float *)(lVar11 + 0x18) * fVar15;
      fVar15 = (float)FUN__text__0051727c(*(float *)(lVar11 + 4) +
                                          *(float *)(lVar11 + 0x10) * fVar15,lVar11);
      fVar16 = *(float *)(lVar9 + 0x3c) * fVar16;
      fVar15 = *(float *)(lVar9 + 0x38) * fVar15;
      fVar24 = *(float *)(lVar9 + 0x18);
      fVar25 = *(float *)(lVar9 + 0x1c);
      fVar17 = *(float *)(lVar9 + 0x40) * fVar17;
      fVar20 = *(float *)(lVar9 + 0x10);
      fVar18 = *(float *)(lVar9 + 0x14);
      fVar22 = fVar18 * fVar15 + fVar16 * fVar24 + fVar17 * fVar25;
      fVar21 = fVar20 * fVar20 - (fVar18 * fVar18 + fVar24 * fVar24 + fVar25 * fVar25);
      fVar19 = (fVar24 * fVar17 - fVar25 * fVar16) * fVar20 + fVar18 * fVar22;
      fVar26 = (fVar25 * fVar15 - fVar17 * fVar18) * fVar20 + fVar24 * fVar22;
      fVar18 = (fVar18 * fVar16 - fVar24 * fVar15) * fVar20 + fVar25 * fVar22;
      local_170 = (undefined1  [8])
                  (*(double *)(lVar9 + 0x20) + (double)(fVar19 + fVar19 + fVar15 * fVar21));
      local_168 = *(double *)(lVar9 + 0x28) + (double)(fVar26 + fVar26 + fVar16 * fVar21);
      local_160 = *(double *)(lVar9 + 0x30) + (double)(fVar18 + fVar18 + fVar17 * fVar21);
      auVar27 = FUN__text__0051c6e4(local_130);
      local_98 = auVar27[0];
      uStack_97 = auVar27[1];
      uStack_96 = auVar27._2_2_;
      uStack_94 = auVar27._4_4_;
      uStack_90 = auVar27._8_4_;
      uStack_8c = auVar27._12_4_;
      uVar14 = FUN__text__00539c3c(param_4,param_5,local_170,&local_98);
      if ((uVar14 & 1) == 0) {
        _local_170 = FUN__text__0051c6e4(local_130);
        FUN__text__0051c6f4(plVar10,local_170);
      }
    }
    FUN__text__0051c63c(local_130);
  }
  FUN__text__0051cae0(&local_d0);
  FUN__text__0051cae0(&local_d0);
  return;
}


