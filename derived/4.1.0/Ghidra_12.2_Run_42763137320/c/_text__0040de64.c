/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040de64; name: FUN_.text__0040de64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__0040de64(undefined8 param_1,long param_2,ushort param_3,undefined1 param_4,byte param_5)

{
  int *piVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((param_2 != 0) || (param_3 == 0)) {
    if (DAT_00ae9ab0 == '\0') {
      return 0x66;
    }
    if ((param_5 & 3) != 0) {
      uVar9 = FUN__text__004af698();
      plVar3 = _DAT_008a45c0;
      uVar12 = *(uint *)(*_DAT_008a45c0 + 0x30);
      if (0xfffe < uVar12) {
        uVar12 = 0xffff;
      }
      if (uVar12 < (uint)param_3 * 0x38 + (uVar9 & 0xffff)) {
        FUN__text__004af698();
        return 0x1f;
      }
      lVar10 = FUN__text__004b0170(*_DAT_008a45c0,0x27);
      if (lVar10 == 0) {
        return 0x51;
      }
      *(undefined1 *)(lVar10 + 0x11) = param_4;
      *(undefined8 *)(lVar10 + 4) = param_1;
      *(uint *)(lVar10 + 0xc) = (uint)param_3;
      *(byte *)(lVar10 + 0x10) = param_5;
      if (param_3 != 0) {
        uVar14 = (ulong)param_3;
        pfVar13 = (float *)(param_2 + 0x14);
        puVar15 = (undefined4 *)(lVar10 + 0x44);
        do {
          if (((((*(ulong *)(pfVar13 + 1) ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) ||
              ((*(ulong *)(pfVar13 + 3) & 0x7ff0000000000000) == 0x7ff0000000000000)) ||
             ((*(ulong *)(pfVar13 + 5) & 0x7ff0000000000000) == 0x7ff0000000000000)) {
LAB__text__0040e01c:
            uVar11 = 0x1f;
            *(undefined2 *)(lVar10 + 2) = 0x40;
            goto LAB__text__0040e028;
          }
          fVar17 = pfVar13[-4];
          fVar18 = pfVar13[-3];
          fVar16 = pfVar13[-5];
          fVar19 = pfVar13[-2];
          fVar20 = pfVar13[-1];
          fVar21 = *pfVar13;
          fVar22 = fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18;
          fVar16 = fVar19 * fVar16 + fVar17 * fVar20 + fVar18 * fVar21;
          fVar16 = fVar16 * fVar16;
          bVar4 = false;
          bVar7 = false;
          if (0.9 < fVar22) {
            bVar4 = false;
            bVar7 = true;
            if (!NAN(fVar22)) {
              bVar4 = fVar22 < 1.1;
              bVar7 = false;
            }
          }
          fVar17 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
          bVar5 = false;
          bVar6 = true;
          bVar8 = false;
          if (bVar4 != bVar7) {
            bVar5 = false;
            bVar6 = false;
            bVar8 = true;
            if (!NAN(fVar17)) {
              bVar5 = fVar17 < 0.9;
              bVar6 = fVar17 == 0.9;
              bVar8 = false;
            }
          }
          bVar4 = false;
          bVar7 = false;
          if (!bVar6 && bVar5 == bVar8) {
            bVar4 = false;
            bVar7 = true;
            if (!NAN(fVar17)) {
              bVar4 = fVar17 < 1.1;
              bVar7 = false;
            }
          }
          bVar5 = false;
          bVar6 = false;
          if (bVar4 != bVar7) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar16)) {
              bVar5 = fVar16 < 0.1;
              bVar6 = false;
            }
          }
          if (bVar5 == bVar6) goto LAB__text__0040e01c;
          memmove(puVar15 + -0xc,pfVar13 + -5,0x30);
          uVar14 = uVar14 - 1;
          pfVar13 = pfVar13 + 0xc;
          *puVar15 = 0x3ff3f;
          puVar15 = puVar15 + 0xe;
        } while (uVar14 != 0);
      }
      uVar11 = 1;
LAB__text__0040e028:
      piVar1 = (int *)(*plVar3 + 0xd4);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return uVar11;
    }
  }
  return 0x1f;
}


