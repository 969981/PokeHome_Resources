/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005137a0; name: FUN_.text__005137a0
 */


void FUN__text__005137a0(undefined8 param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar6 = *(uint *)((long)param_2 + 0x338);
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  *(uint *)((long)param_2 + 0x44) = uVar6;
  *(undefined4 *)((long)param_2 + 0x48) = param_3;
  if (0 < (int)uVar6) {
    memset(param_2,0xff,(ulong)uVar6 << 2);
  }
  FUN__text__00513a40(param_1,param_2);
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
            FUN__text__00513d54(param_1,uVar9 & 0xffffffff,iVar2 <= iVar1,param_2);
            uVar6 = *(uint *)((long)param_2 + 0x44);
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)uVar6);
        return;
      }
      if (0 < (int)uVar6) {
        uVar5 = 0;
        pfVar8 = (float *)((long)param_2 + 0xa4);
        uVar10 = uVar9;
        fVar12 = -1.0;
LAB__text__005138a8:
        do {
          if (((float *)((long)param_2 + 0xa4))[uVar5 - 0x29] == -NAN) {
            fVar21 = pfVar8[-1];
            fVar16 = (float)NEON_fminnm(pfVar8[-4],*(undefined4 *)((long)param_2 + 0x58));
            fVar14 = (float)NEON_fminnm(pfVar8[-4],*(undefined4 *)((long)param_2 + 0x70));
            fVar19 = pfVar8[-2];
            fVar15 = (float)NEON_fminnm(pfVar8[-5],*(undefined4 *)((long)param_2 + 0x54));
            fVar13 = (float)NEON_fminnm(pfVar8[-5],*(undefined4 *)((long)param_2 + 0x6c));
            fVar20 = (float)NEON_fminnm(pfVar8[-3],*(undefined4 *)((long)param_2 + 0x5c));
            fVar17 = (float)NEON_fminnm(pfVar8[-3],*(undefined4 *)((long)param_2 + 0x74));
            fVar18 = fVar19;
            if (fVar19 <= *(float *)((long)param_2 + 0x78)) {
              fVar18 = *(float *)((long)param_2 + 0x78);
            }
            fVar22 = fVar21;
            if (fVar21 <= *(float *)((long)param_2 + 0x7c)) {
              fVar22 = *(float *)((long)param_2 + 0x7c);
            }
            fVar23 = *pfVar8;
            fVar15 = (fVar19 - fVar15) * 0.5;
            fVar16 = (fVar21 - fVar16) * 0.5;
            fVar13 = (fVar18 - fVar13) * 0.5;
            fVar18 = fVar23;
            if (fVar23 <= *(float *)((long)param_2 + 0x80)) {
              fVar18 = *(float *)((long)param_2 + 0x80);
            }
            fVar14 = (fVar22 - fVar14) * 0.5;
            fVar19 = (fVar23 - fVar20) * 0.5;
            fVar18 = (fVar18 - fVar17) * 0.5;
            fVar15 = fVar15 * fVar15 + fVar16 * fVar16 + fVar19 * fVar19;
            fVar18 = fVar13 * fVar13 + fVar14 * fVar14 + fVar18 * fVar18;
            fVar13 = (fVar18 * 4.1887903 * SQRT(fVar18) - *(float *)((long)param_2 + 0x88)) +
                     (*(float *)((long)param_2 + 0x84) - SQRT(fVar15) * fVar15 * 4.1887903);
            bVar3 = fVar13 < 0.0;
            fVar18 = -fVar13;
            if (!bVar3) {
              fVar18 = fVar13;
            }
            uVar9 = (ulong)bVar3;
            if (fVar12 < fVar18) {
              uVar11 = uVar5 & 0xffffffff;
              uVar5 = uVar5 + 1;
              pfVar8 = pfVar8 + 10;
              uVar10 = uVar9;
              fVar12 = fVar18;
              if (uVar6 == uVar5) break;
              goto LAB__text__005138a8;
            }
            if (fVar18 == fVar12) {
              iVar1 = *(int *)((long)param_2 + (ulong)(fVar13 < 0.0) * 4 + 0x4c);
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
          pfVar8 = pfVar8 + 10;
          uVar9 = uVar10;
        } while (uVar6 != uVar5);
      }
      FUN__text__00513d54(param_1,uVar11,uVar9,param_2);
      iVar1 = *(int *)((long)param_2 + 0x4c);
      iVar7 = *(int *)((long)param_2 + 0x50);
      uVar6 = *(uint *)((long)param_2 + 0x44);
    } while (iVar7 + iVar1 < (int)uVar6);
  }
  return;
}


