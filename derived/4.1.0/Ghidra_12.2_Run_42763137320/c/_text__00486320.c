/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00486320; name: FUN_.text__00486320
 */


void FUN__text__00486320(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                        uint param_6,long param_7)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  float fVar17;
  float afStack_50 [4];
  
  uVar4 = (uint)param_5;
  if ((((uint)((ulong)param_5 >> 0x10) & 0xffff ^ uVar4 >> 0x15) & 1) != 0) {
    uVar4 = uVar4 & 0xff9fffff | 0x30000;
  }
  uVar2 = uVar4 >> 0xc & 0xfffffff7;
  puVar6 = (undefined8 *)((long)afStack_50 - ((ulong)((uVar4 & 0xff) * 0xc + 0xf) & 0x1ff0));
  if (uVar2 == 0) {
    uVar4 = 0;
    pfVar5 = afStack_50;
    bVar3 = true;
  }
  else {
    uVar8 = 0;
    uVar4 = 0;
    uVar13 = 1;
    puVar14 = puVar6;
    do {
      if ((uVar13 & uVar2) != 0) {
        uVar4 = uVar4 + 1;
        uVar16 = *(undefined4 *)(&DAT_0073b938 + (ulong)uVar8 * 0xc);
        *puVar14 = *(undefined8 *)(&DAT_0073b930 + (ulong)uVar8 * 0xc);
        *(undefined4 *)(puVar14 + 1) = uVar16;
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      }
      uVar13 = uVar13 * 2;
      uVar8 = uVar8 + 1;
    } while (uVar13 - 1 < uVar2);
    pfVar5 = (float *)((long)puVar6 - ((ulong)(uVar4 * 3) * 4 + 0xf & 0x7fffffff0));
    bVar3 = uVar4 == 0;
    if (uVar4 == 0) {
      bVar3 = true;
      FUN__text__004865b0(0,pfVar5,param_6,param_7);
      goto joined_r0x0048653c;
    }
    uVar7 = 0;
    do {
      fVar17 = *(float *)((long)puVar6 + (uVar7 & 0xffffffff) * 4);
      fVar17 = (float)NEON_fminnm(param_1 + param_1 * ABS(fVar17) + fVar17,0x3f800000);
      if (fVar17 <= -1.0) {
        fVar17 = -1.0;
      }
      pfVar5[uVar7 & 0xffffffff] = fVar17;
      uVar9 = (ulong)((int)uVar7 + 1);
      fVar17 = *(float *)((long)puVar6 + uVar9 * 4);
      fVar17 = (float)NEON_fminnm(param_2 + param_2 * ABS(fVar17) + fVar17,0x3f800000);
      if (fVar17 <= -1.0) {
        fVar17 = -1.0;
      }
      pfVar5[uVar9] = fVar17;
      uVar9 = (ulong)((int)uVar7 + 2);
      uVar7 = uVar7 + 3;
      fVar17 = *(float *)((long)puVar6 + uVar9 * 4);
      fVar17 = (float)NEON_fminnm(param_3 + param_3 * ABS(fVar17) + fVar17,0x3f800000);
      if (fVar17 <= -1.0) {
        fVar17 = -1.0;
      }
      pfVar5[uVar9] = fVar17;
    } while ((ulong)uVar4 + (ulong)uVar4 * 2 != uVar7);
  }
  FUN__text__004865b0(uVar4,pfVar5,param_6,param_7);
joined_r0x0048653c:
  if ((((param_6 >> 0xe & 1) != 0) && ((param_6 & 0x3000) != 0)) && (param_4 < 1.0)) {
    if (bVar3) {
      return;
    }
    uVar7 = 0;
    uVar9 = (ulong)uVar4;
    do {
      uVar10 = uVar7 & 0xfffffffc;
      uVar7 = uVar7 + ((ulong)((param_6 & 0xff) + 3) & 0x1fc);
      pfVar5 = (float *)(param_7 + uVar10 * 4);
      uVar9 = uVar9 - 1;
      fVar17 = pfVar5[2] * (0.5 - param_4 * 0.5);
      pfVar5[2] = pfVar5[2] * param_4;
      *pfVar5 = *pfVar5 + fVar17;
      pfVar5[1] = pfVar5[1] + fVar17;
    } while (uVar9 != 0);
  }
  if (!bVar3) {
    uVar2 = (param_6 & 0xff) + 3 & 0x1fc;
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        pauVar1 = (undefined1 (*) [16])(param_7 + (ulong)(uVar2 * (int)uVar7) * 4);
        pauVar11 = pauVar1;
        do {
          auVar15 = NEON_frsqrte(*pauVar11,4);
          auVar15 = NEON_frecpe(auVar15,4);
          pauVar12 = pauVar11 + 1;
          *(long *)(*pauVar11 + 8) = auVar15._8_8_;
          *(long *)*pauVar11 = auVar15._0_8_;
          pauVar11 = pauVar12;
        } while (pauVar12 < (undefined1 (*) [16])(*pauVar1 + (ulong)uVar2 * 4));
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
  }
  return;
}


