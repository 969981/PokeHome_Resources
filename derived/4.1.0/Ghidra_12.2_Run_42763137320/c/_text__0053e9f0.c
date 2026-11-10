/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053e9f0; name: FUN_.text__0053e9f0
 */


void FUN__text__0053e9f0(undefined8 param_1,long param_2,float *param_3,long param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float afStack_a0 [2];
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  float *pfStack_68;
  
  uVar1 = *(uint *)(param_2 + 0x200);
  uVar9 = (long)(int)uVar1 * 4 + 0xfU & 0xfffffffffffffff0;
  puVar20 = (uint *)((long)afStack_a0 - uVar9);
  pfVar21 = (float *)((long)puVar20 - uVar9);
  if ((int)uVar1 < 1) {
    if (0 < *(int *)(param_2 + 0x204)) {
      return;
    }
  }
  else {
    fVar22 = *param_5;
    fVar23 = *param_3;
    fVar24 = param_3[1];
    fVar25 = param_3[2];
    uVar9 = 0;
    fVar26 = param_3[6];
    fVar27 = param_3[7];
    uVar8 = 0;
    fVar28 = param_3[8];
    do {
      pfVar12 = (float *)(param_2 + uVar9 * 0x18);
      fVar30 = fVar27 * (pfVar12[1] - fVar24);
      fVar37 = (pfVar12[5] - fVar25) * fVar28;
      fVar34 = (pfVar12[3] - fVar23) * fVar26;
      fVar32 = fVar28 * (pfVar12[2] - fVar25);
      fVar36 = (pfVar12[4] - fVar24) * fVar27;
      fVar29 = fVar26 * (*pfVar12 - fVar23);
      NEON_fminnm(fVar30,fVar36);
      NEON_fminnm(fVar32,fVar37);
      if (fVar30 <= fVar36) {
        fVar30 = fVar36;
      }
      if (fVar32 <= fVar37) {
        fVar32 = fVar37;
      }
      fVar36 = (float)NEON_fminnm(fVar29,fVar34);
      if (fVar29 <= fVar34) {
        fVar29 = fVar34;
      }
      uVar31 = NEON_fminnm(fVar30,0x3f800000);
      uVar33 = NEON_fminnm(fVar32,0x3f800000);
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      uVar35 = NEON_fminnm(fVar29,0x3f800000);
      uVar31 = NEON_fminnm(uVar31,uVar33);
      fVar29 = (float)NEON_fminnm(uVar35,uVar31);
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (fVar36 <= fVar29) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar36) && !NAN(fVar22)) {
          bVar3 = fVar36 < fVar22;
          bVar4 = fVar36 == fVar22;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        if (uVar8 == 0) {
          uVar13 = 0;
        }
        else {
          uVar15 = 0;
          uVar13 = (ulong)uVar8;
          do {
            if (fVar36 <= pfVar21[uVar15]) {
              uVar13 = uVar15 & 0xffffffff;
              uVar18 = (ulong)uVar8;
              if ((int)uVar15 <= (int)(uVar8 - 1)) goto LAB__text__0053eb80;
              goto LAB__text__0053ea80;
            }
            uVar15 = uVar15 + 1;
          } while (uVar13 != uVar15);
        }
        uVar18 = (ulong)uVar8;
        if ((int)uVar13 <= (int)(uVar8 - 1)) {
LAB__text__0053eb80:
          do {
            iVar14 = (int)uVar18;
            uVar2 = iVar14 - 1;
            uVar18 = -(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2;
            uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar31 = *(undefined4 *)((long)pfVar21 + uVar15);
            *(undefined4 *)((long)puVar20 + uVar18) = *(undefined4 *)((long)puVar20 + uVar15);
            *(undefined4 *)((long)pfVar21 + uVar18) = uVar31;
            uVar18 = (ulong)uVar2;
          } while ((int)uVar13 <= iVar14 + -2);
        }
LAB__text__0053ea80:
        uVar8 = uVar8 + 1;
        pfVar21[uVar13] = fVar36;
        puVar20[uVar13] = (uint)uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
    if (0 < *(int *)(param_2 + 0x204)) {
      if (uVar8 == 0) {
        return;
      }
      uVar9 = (ulong)uVar8;
      do {
        if (*param_5 <= *pfVar21) {
          return;
        }
        FUN__text__0053e9f0(param_1,*(undefined8 *)(param_2 + 0x180 + (ulong)*puVar20 * 8),param_3,
                            param_4,param_5);
        pfVar21 = pfVar21 + 1;
        uVar9 = uVar9 - 1;
        puVar20 = puVar20 + 1;
      } while (uVar9 != 0);
      return;
    }
    if (uVar8 != 0) {
      lVar11 = param_4 + 0x10;
      lVar16 = param_4 + 0x30;
      local_98 = lVar16;
      lVar17 = param_4 + 0x50;
      local_70 = lVar17;
      pfStack_68 = param_5;
      lVar19 = param_4 + 0x70;
      lVar6 = param_4 + 0x80;
      local_80 = lVar6;
      lStack_78 = lVar19;
      lVar7 = param_4 + 0xa0;
      uVar9 = (ulong)uVar8;
      local_90 = lVar7;
      local_88 = lVar11;
      do {
        if (*param_5 <= *pfVar21) break;
        puVar10 = *(undefined4 **)(param_2 + 0x180 + (ulong)*puVar20 * 8);
        if ((puVar10 != (undefined4 *)0x0) &&
           ((*(long *)(param_4 + 0x128) != *(long *)(param_4 + 0x158) ||
            (*(long *)(puVar10 + 0xe) != *(long *)(param_4 + 0x120))))) {
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x160) * 4) = *puVar10;
          *(undefined4 *)(lVar11 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[1];
          *(undefined4 *)(param_4 + 0x20 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[2];
          *(undefined4 *)(lVar16 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[3];
          *(undefined4 *)(param_4 + 0x40 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[4];
          *(undefined4 *)(lVar17 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[5];
          *(undefined4 *)(param_4 + 0x60 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[6];
          *(undefined4 *)(lVar19 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[7];
          *(undefined4 *)(lVar6 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[8];
          *(undefined4 *)(param_4 + 0x90 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[9];
          *(undefined4 *)(lVar7 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[10];
          *(undefined4 *)(param_4 + 0xb0 + (ulong)*(uint *)(param_4 + 0x160) * 4) = puVar10[0xb];
          *(undefined4 **)(param_4 + (ulong)*(uint *)(param_4 + 0x160) * 8 + 0x138) = puVar10;
          iVar14 = *(int *)(param_4 + 0x160) + 1;
          *(int *)(param_4 + 0x160) = iVar14;
          if (iVar14 == 4) {
            FUN__text__0053edf8(param_4);
            *(undefined4 *)(param_4 + 0x160) = 0;
            lVar6 = local_80;
            lVar7 = local_90;
            lVar11 = local_88;
            lVar16 = local_98;
            lVar17 = local_70;
            lVar19 = lStack_78;
            param_5 = pfStack_68;
          }
        }
        if (*(char *)(param_4 + 0x169) != '\0') {
          fVar22 = (float)NEON_fminnm(*(undefined4 *)(param_4 + 0x164),*param_5);
          *param_5 = fVar22;
        }
        pfVar21 = pfVar21 + 1;
        puVar20 = puVar20 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(int *)(param_4 + 0x160) != 0) {
    FUN__text__0053edf8(param_4);
    *(undefined4 *)(param_4 + 0x160) = 0;
  }
  if (*(char *)(param_4 + 0x169) != '\0') {
    fVar22 = (float)NEON_fminnm(*(undefined4 *)(param_4 + 0x164),*param_5);
    *param_5 = fVar22;
  }
  return;
}


