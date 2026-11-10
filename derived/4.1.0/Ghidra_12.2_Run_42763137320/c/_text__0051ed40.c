/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051ed40; name: FUN_.text__0051ed40
 */


undefined8 FUN__text__0051ed40(long param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  double *pdVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar3 = FUN__text__0050f10c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    uVar3 = uVar3 & 0xffff;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    for (plVar4 = *(long **)(*(long *)(param_1 + 0x60) + (ulong)(uVar3 - uVar2 * uVar1) * 8);
        plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
      if (*(uint *)(plVar4 + 3) == uVar3) {
        if (*(uint *)(plVar4 + 1) == 0) {
          return 0;
        }
        lVar5 = (ulong)*(uint *)(plVar4 + 1) << 3;
        fVar8 = *(float *)(param_1 + 0x3c) * param_3[1];
        fVar15 = *(float *)(param_1 + 0x10);
        fVar13 = *(float *)(param_1 + 0x14);
        plVar4 = (long *)*plVar4;
        fVar7 = *(float *)(param_1 + 0x38) * *param_3;
        fVar9 = *(float *)(param_1 + 0x40) * param_3[2];
        fVar10 = *(float *)(param_1 + 0x18);
        fVar12 = *(float *)(param_1 + 0x1c);
        fVar16 = fVar13 * fVar7 + fVar8 * fVar10 + fVar9 * fVar12;
        fVar17 = fVar15 * fVar15 - (fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12);
        fVar14 = (fVar10 * fVar9 - fVar12 * fVar8) * fVar15 + fVar13 * fVar16;
        fVar11 = (fVar12 * fVar7 - fVar9 * fVar13) * fVar15 + fVar10 * fVar16;
        fVar10 = (fVar13 * fVar8 - fVar10 * fVar7) * fVar15 + fVar12 * fVar16;
        while( true ) {
          pdVar6 = (double *)*plVar4;
          fVar13 = (float)((*(double *)(param_1 + 0x28) + (double)(fVar11 + fVar11 + fVar8 * fVar17)
                           ) - pdVar6[1]);
          fVar12 = (float)((*(double *)(param_1 + 0x20) + (double)(fVar14 + fVar14 + fVar7 * fVar17)
                           ) - *pdVar6);
          fVar15 = (float)((*(double *)(param_1 + 0x30) + (double)(fVar10 + fVar10 + fVar9 * fVar17)
                           ) - pdVar6[2]);
          if (((ABS(*(float *)(pdVar6 + 3) * fVar12 + fVar13 * *(float *)((long)pdVar6 + 0x1c) +
                    fVar15 * *(float *)(pdVar6 + 4)) <= *(float *)((long)pdVar6 + 0x3c)) &&
              (ABS(*(float *)((long)pdVar6 + 0x24) * fVar12 + fVar13 * *(float *)(pdVar6 + 5) +
                   fVar15 * *(float *)((long)pdVar6 + 0x2c)) <= *(float *)(pdVar6 + 8))) &&
             (ABS(*(float *)(pdVar6 + 6) * fVar12 + fVar13 * *(float *)((long)pdVar6 + 0x34) +
                  fVar15 * *(float *)(pdVar6 + 7)) <= *(float *)((long)pdVar6 + 0x44))) break;
          plVar4 = plVar4 + 1;
          lVar5 = lVar5 + -8;
          if (lVar5 == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


