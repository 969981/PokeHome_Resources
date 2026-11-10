/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004892a0; name: FUN_.text__004892a0
 */


undefined8 FUN__text__004892a0(float param_1,long *param_2,void *param_3,ulong param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  uint *puVar17;
  undefined8 uVar18;
  float *__dest;
  float fVar19;
  float fVar20;
  float fVar21;
  float afStack_250 [128];
  
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-90.0 <= param_1) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(param_1)) {
      bVar5 = param_1 < 90.0;
      bVar6 = param_1 == 90.0;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    uVar9 = (uint)param_4;
    uVar2 = *(uint *)((long)param_2 + 0x8c);
    if (*(uint *)((long)param_2 + 0x8c) <= uVar9) {
      uVar2 = uVar9;
    }
    lVar8 = FUN__text__00400f80(0,(ulong)uVar2 * 4);
    if (lVar8 == 0) {
      uVar18 = 0x34;
    }
    else {
      lVar12 = -((ulong)uVar2 * 4 + 0xf & 0x7fffffff0);
      __dest = (float *)((long)afStack_250 + lVar12 + 0x200);
      if (uVar9 != 0) {
        memcpy(__dest,param_3,(param_4 & 0xffffffff) << 2);
      }
      uVar3 = *(uint *)((long)param_2 + 0x8c);
      uVar10 = param_4 & 0xffffffff;
      if (uVar9 < uVar3) {
        lVar14 = param_2[0x10];
        uVar13 = uVar10;
        if ((uVar3 - uVar9 & 1) != 0) {
          __dest[uVar10] = *(float *)(lVar14 + uVar10 * 4) * 57.295776;
          uVar13 = uVar10 + 1;
        }
        if (~uVar10 + (ulong)uVar3 != 0) {
          lVar11 = uVar3 - uVar13;
          pfVar15 = (float *)(lVar14 + uVar13 * 4 + 4);
          pfVar16 = __dest + uVar13 + 1;
          do {
            pfVar1 = pfVar15 + -1;
            fVar19 = *pfVar15;
            lVar11 = lVar11 + -2;
            pfVar15 = pfVar15 + 2;
            pfVar16[-1] = *pfVar1 * 57.295776;
            *pfVar16 = fVar19 * 57.295776;
            pfVar16 = pfVar16 + 2;
          } while (lVar11 != 0);
        }
      }
      if (uVar9 != 0) {
        pfVar15 = __dest;
        do {
          if (180.0 <= *pfVar15) goto LAB__text__00489474;
          uVar10 = uVar10 - 1;
          pfVar15 = pfVar15 + 1;
        } while (uVar10 != 0);
      }
      fVar19 = *__dest;
      if (fVar19 < 90.0) {
        pfVar15 = (float *)((long)afStack_250 + lVar12 + 0x204);
        uVar3 = uVar9;
        if (uVar9 == 0 || uVar9 - 1 == 0) {
          uVar3 = 1;
        }
        uVar10 = (ulong)uVar3;
        fVar20 = fVar19;
        do {
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            if (1 < uVar9) {
              fVar19 = (float)NEON_fminnm(360.0 - (__dest[uVar9 - 1] + __dest[uVar9 - 1]),fVar19);
            }
            if (5.0 <= fVar19) {
              if (uVar9 != 0) {
                if (uVar9 == 1) {
                  uVar13 = 0;
                }
                else {
                  uVar10 = 0;
                  do {
                    uVar13 = uVar10 + 2;
                    pfVar15 = (float *)(lVar8 + uVar10 * 4);
                    fVar20 = (__dest + uVar10)[1];
                    *pfVar15 = __dest[uVar10] * 0.017453294;
                    pfVar15[1] = fVar20 * 0.017453294;
                    uVar10 = uVar13;
                  } while ((param_4 & 0xfffffffe) != uVar13);
                }
                if ((param_4 & 1) != 0) {
                  *(float *)(lVar8 + uVar13 * 4) = __dest[uVar13] * 0.017453294;
                }
              }
              if (param_2[0x10] != 0) {
                FUN__text__00400fc0(0);
              }
              param_2[0x10] = lVar8;
              uVar18 = 1;
              *(uint *)((long)param_2 + 0x8c) = uVar2;
              *(float *)(param_2 + 0xf) = 57.295773 / fVar19;
              *(float *)(param_2 + 0x11) = param_1 * 0.017453294;
              iVar4 = (int)param_2[1];
            }
            else {
              uVar18 = 0x1f;
              FUN__text__00400fc0(0,lVar8);
              iVar4 = (int)param_2[1];
            }
            goto joined_r0x004895dc;
          }
          fVar21 = *pfVar15;
          if (fVar21 < fVar20) break;
          fVar20 = fVar21 - fVar20;
          pfVar15 = pfVar15 + 1;
          fVar19 = (float)NEON_fminnm(fVar20,fVar19);
          bVar5 = false;
          bVar6 = false;
          if (fVar20 != 0.0) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar20)) {
              bVar5 = fVar20 < 180.0;
              bVar6 = false;
            }
          }
          fVar20 = fVar21;
        } while (bVar5 != bVar6);
      }
LAB__text__00489474:
      uVar18 = 2;
      FUN__text__00400fc0(0,lVar8);
      iVar4 = (int)param_2[1];
joined_r0x004895dc:
      if (iVar4 != 0) {
        puVar17 = (uint *)*param_2;
        do {
          while( true ) {
            if ((*puVar17 & 0xff9c0000) != 0) break;
            FUN__text__00481180();
            puVar17 = puVar17 + 4;
            if (puVar17 == (uint *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x10))
            goto LAB__text__004894f0;
          }
          FUN__text__004814f0((int)param_2[0x11],*puVar17,param_2[0x10],puVar17 + 2);
          puVar17 = puVar17 + 4;
        } while (puVar17 != (uint *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x10));
      }
LAB__text__004894f0:
      if ((int)param_2[5] != 0) {
        lVar8 = param_2[4];
        do {
          FUN__text__00400fc0(0,*(undefined8 *)(lVar8 + 8));
          lVar8 = lVar8 + 0x10;
        } while (lVar8 != param_2[4] + (ulong)*(uint *)(param_2 + 5) * 0x10);
      }
      uVar10 = (ulong)*(uint *)(param_2 + 3);
      *(undefined4 *)(param_2 + 5) = 0;
      if (*(uint *)(param_2 + 3) != 0) {
        lVar12 = param_2[2];
        lVar8 = lVar12;
        do {
          if (*(long *)(lVar8 + 8) != 0) {
            *(undefined4 *)(lVar8 + 0x10) = 0;
            FUN__text__00400fc0(0);
            *(undefined8 *)(lVar8 + 8) = 0;
            *(undefined4 *)(lVar8 + 0x14) = 0;
            lVar12 = param_2[2];
            uVar10 = (ulong)*(uint *)(param_2 + 3);
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar8 != lVar12 + uVar10 * 0x18);
      }
      *(undefined4 *)(param_2 + 3) = 0;
    }
  }
  else {
    uVar18 = 0x1f;
  }
  return uVar18;
}


