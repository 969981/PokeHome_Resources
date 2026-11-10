/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006add60; name: FUN_.text__006add60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006add60(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
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
  
  lVar3 = _DAT_008a1d28;
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 0xc) != 0) {
    uVar2 = uVar4 >> 2 & 3;
    uVar5 = uVar4 & 3;
    if (uVar2 <= (uVar4 & 3)) {
      uVar5 = uVar2;
    }
    if ((int)*(char *)(param_2 + 0x193) <= (int)uVar5) {
      uVar5 = (uint)*(char *)(param_2 + 0x193);
    }
    if (uVar5 != 0) {
      uVar4 = 0;
      fVar11 = (float)NEON_ucvtf(*_DAT_008a1d20);
      fVar12 = *_DAT_008a02d0;
      do {
        lVar1 = ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10;
        if (*(byte *)(*(long *)(param_1 + 0x18) +
                      lVar1 + ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 +
                      (long)(int)uVar4 * 0x10 + 1) - 5 < 2) {
          lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          lVar1 = 0;
          if (lVar6 != 0) {
            lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar4 == 2) {
            puVar8 = (undefined8 *)(lVar1 + 0xb0);
            pfVar7 = (float *)(lVar1 + 0xc0);
LAB__text__006ade00:
            fVar13 = -1.0;
            fVar15 = 1.0;
            *puVar8 = 0x3f800000;
            puVar8[1] = 0;
            *pfVar7 = 0.0;
            goto LAB__text__006ade10;
          }
          if (uVar4 == 1) {
            puVar8 = (undefined8 *)(lVar1 + 0x90);
            pfVar7 = (float *)(lVar1 + 0xa0);
            goto LAB__text__006ade00;
          }
          if (uVar4 == 0) {
            puVar8 = (undefined8 *)(lVar1 + 0x70);
            pfVar7 = (float *)(lVar1 + 0x80);
            goto LAB__text__006ade00;
          }
        }
        else {
          pfVar7 = (float *)(*(long *)(param_1 + 0x18) + lVar1 + (long)(int)uVar4 * 0x14);
          fVar14 = pfVar7[3];
          fVar17 = *pfVar7;
          fVar16 = pfVar7[1];
          uVar9 = (ulong)(pfVar7[2] * (fVar11 / fVar12));
          fVar15 = pfVar7[4];
          lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          pfVar7 = (float *)(lVar3 + (uVar9 >> 0x18 & 0xff) * 0x10);
          fVar18 = *pfVar7;
          fVar19 = pfVar7[1];
          fVar13 = pfVar7[2];
          fVar20 = pfVar7[3];
          lVar1 = 0;
          if (lVar6 != 0) {
            lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar4 == 2) {
            pfVar10 = (float *)(lVar1 + 0xb0);
            pfVar7 = (float *)(lVar1 + 0xc0);
          }
          else if (uVar4 == 1) {
            pfVar10 = (float *)(lVar1 + 0x90);
            pfVar7 = (float *)(lVar1 + 0xa0);
          }
          else {
            if (uVar4 != 0) goto LAB__text__006ade1c;
            pfVar10 = (float *)(lVar1 + 0x70);
            pfVar7 = (float *)(lVar1 + 0x80);
          }
          pfVar10[2] = 0.0;
          fVar21 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
          fVar19 = fVar19 + fVar21 * fVar20;
          fVar18 = fVar18 + fVar21 * fVar13;
          fVar13 = -(fVar15 * fVar18);
          *pfVar10 = fVar14 * fVar18;
          pfVar10[1] = -(fVar19 * fVar15);
          pfVar10[3] = fVar17 + 0.5 + fVar14 * fVar18 * -0.5 + -(fVar19 * fVar15) * -0.5;
          fVar15 = 1.0 - (fVar16 + 0.5 + fVar14 * fVar19 * -0.5 + fVar15 * fVar18 * -0.5);
          *pfVar7 = -(fVar14 * fVar19);
LAB__text__006ade10:
          pfVar7[1] = fVar13;
          pfVar7[2] = 0.0;
          pfVar7[3] = fVar15;
        }
LAB__text__006ade1c:
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
      uVar4 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar4 & 0x30) == 0) {
    *(undefined1 *)(param_2 + 400) = 0xff;
  }
  else {
    uVar4 = uVar4 >> 4 & 3;
    if ((((uVar4 == 0) ||
         (*(undefined1 *)(param_2 + 400) =
               *(undefined1 *)
                (*(long *)(param_1 + 0x18) +
                 ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
                 ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 1), uVar4 == 1)) ||
        (*(undefined1 *)(param_2 + 0x191) =
              *(undefined1 *)
               (*(long *)(param_1 + 0x18) +
                ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
                ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x11), uVar4 == 2)) ||
       (*(undefined1 *)(param_2 + 0x192) =
             *(undefined1 *)
              (*(long *)(param_1 + 0x18) +
               ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
               ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x21), uVar4 != 3)) {
      memset((void *)(param_2 + (ulong)(uVar4 | 400)),0xff,(ulong)(2 - uVar4) + 1);
    }
  }
  FUN__text__006ae3d4(param_1,param_2,param_3,param_4);
  return;
}


