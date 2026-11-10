/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00545fc0; name: FUN_.text__00545fc0
 */


void FUN__text__00545fc0(undefined8 param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar6 = *(uint *)((long)param_2 + 0x508);
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  *(undefined8 *)((long)param_2 + 0xb8) = 0;
  *(undefined8 *)((long)param_2 + 0xc0) = 0;
  *(uint *)((long)param_2 + 0x44) = uVar6;
  *(undefined4 *)((long)param_2 + 0x48) = param_3;
  if (0 < (int)uVar6) {
    memset(param_2,0xff,(ulong)uVar6 << 2);
  }
  FUN__text__00546260(param_1,param_2);
  iVar1 = *(int *)((long)param_2 + 0x4c);
  iVar7 = *(int *)((long)param_2 + 0x50);
  uVar6 = *(uint *)((long)param_2 + 0x44);
  if (iVar7 + iVar1 < (int)uVar6) {
    uVar11 = 0;
    uVar9 = 0;
    do {
      iVar2 = uVar6 - *(int *)((long)param_2 + 0x48);
      if (iVar2 <= iVar1 || iVar2 <= iVar7) {
        if ((int)uVar6 < 1) {
          return;
        }
        uVar9 = 0;
        do {
          if (*(int *)((long)param_2 + uVar9 * 4) == -1) {
            FUN__text__005465a0(param_1,uVar9 & 0xffffffff,iVar2 <= iVar1,param_2);
            uVar6 = *(uint *)((long)param_2 + 0x44);
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)uVar6);
        return;
      }
      if (0 < (int)uVar6) {
        uVar5 = 0;
        pdVar8 = (double *)((long)param_2 + 0xf0);
        uVar10 = uVar9;
        dVar12 = -1.0;
LAB__text__005460c8:
        do {
          if (*(int *)((long)param_2 + 0xf0 + uVar5 * 4 + -0xf0) == -1) {
            dVar21 = pdVar8[-1];
            dVar16 = (double)NEON_fminnm(pdVar8[-4],*(undefined8 *)((long)param_2 + 0x60));
            dVar14 = (double)NEON_fminnm(pdVar8[-4],*(undefined8 *)((long)param_2 + 0x90));
            dVar19 = pdVar8[-2];
            dVar15 = (double)NEON_fminnm(pdVar8[-5],*(undefined8 *)((long)param_2 + 0x58));
            dVar13 = (double)NEON_fminnm(pdVar8[-5],*(undefined8 *)((long)param_2 + 0x88));
            dVar20 = (double)NEON_fminnm(pdVar8[-3],*(undefined8 *)((long)param_2 + 0x68));
            dVar17 = (double)NEON_fminnm(pdVar8[-3],*(undefined8 *)((long)param_2 + 0x98));
            dVar18 = dVar19;
            if (dVar19 <= *(double *)((long)param_2 + 0xa0)) {
              dVar18 = *(double *)((long)param_2 + 0xa0);
            }
            dVar22 = dVar21;
            if (dVar21 <= *(double *)((long)param_2 + 0xa8)) {
              dVar22 = *(double *)((long)param_2 + 0xa8);
            }
            dVar23 = *pdVar8;
            dVar15 = (dVar19 - dVar15) * 0.5;
            dVar16 = (dVar21 - dVar16) * 0.5;
            dVar13 = (dVar18 - dVar13) * 0.5;
            dVar18 = dVar23;
            if (dVar23 <= *(double *)((long)param_2 + 0xb0)) {
              dVar18 = *(double *)((long)param_2 + 0xb0);
            }
            dVar14 = (dVar22 - dVar14) * 0.5;
            dVar19 = (dVar23 - dVar20) * 0.5;
            dVar18 = (dVar18 - dVar17) * 0.5;
            dVar15 = dVar15 * dVar15 + dVar16 * dVar16 + dVar19 * dVar19;
            dVar18 = dVar13 * dVar13 + dVar14 * dVar14 + dVar18 * dVar18;
            dVar13 = (dVar18 * 4.188790204786391 * SQRT(dVar18) - *(double *)((long)param_2 + 0xc0))
                     + (*(double *)((long)param_2 + 0xb8) -
                       SQRT(dVar15) * dVar15 * 4.188790204786391);
            bVar3 = dVar13 < 0.0;
            dVar18 = -dVar13;
            if (!bVar3) {
              dVar18 = dVar13;
            }
            uVar9 = (ulong)bVar3;
            if (dVar12 < dVar18) {
              uVar11 = uVar5 & 0xffffffff;
              uVar5 = uVar5 + 1;
              pdVar8 = pdVar8 + 8;
              uVar10 = uVar9;
              dVar12 = dVar18;
              if (uVar6 == uVar5) break;
              goto LAB__text__005460c8;
            }
            if (dVar18 == dVar12) {
              iVar1 = *(int *)((long)param_2 + (ulong)(dVar13 < 0.0) * 4 + 0x4c);
              iVar7 = *(int *)((long)param_2 + uVar10 * 4 + 0x4c);
              uVar4 = (uint)bVar3;
              if (iVar7 <= iVar1) {
                uVar4 = (uint)uVar10;
              }
              uVar10 = (ulong)uVar4;
              uVar4 = (uint)uVar5;
              if (iVar7 <= iVar1) {
                uVar4 = (uint)uVar11;
              }
              uVar11 = (ulong)uVar4;
            }
          }
          uVar5 = uVar5 + 1;
          pdVar8 = pdVar8 + 8;
          uVar9 = uVar10;
        } while (uVar6 != uVar5);
      }
      FUN__text__005465a0(param_1,uVar11,uVar9,param_2);
      iVar1 = *(int *)((long)param_2 + 0x4c);
      iVar7 = *(int *)((long)param_2 + 0x50);
      uVar6 = *(uint *)((long)param_2 + 0x44);
    } while (iVar7 + iVar1 < (int)uVar6);
  }
  return;
}


