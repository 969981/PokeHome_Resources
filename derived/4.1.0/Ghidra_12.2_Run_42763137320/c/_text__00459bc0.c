/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00459bc0; name: FUN_.text__00459bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00459bc0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x50) != 0) {
    plVar8 = *(long **)(param_1 + 0x48);
    fVar10 = *_DAT_008a4f30;
    plVar9 = plVar8;
    do {
      lVar4 = *plVar8;
      fVar11 = *(float *)(lVar4 + 0x1c8);
      if (*(float *)(lVar4 + 0x1c8) <= *(float *)(plVar8 + 1)) {
        fVar11 = *(float *)(plVar8 + 1);
      }
      fVar11 = *(float *)(lVar4 + 0x14) - fVar11;
      fVar13 = fVar11 * 0.05;
      fVar12 = 0.0;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (-37.0 <= fVar13) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar13)) {
          bVar1 = fVar13 < 37.0;
          bVar2 = fVar13 == 37.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        uVar5 = (uint)(fVar11 * 1393317.6 + 1.0653532e+09);
        fVar12 = (float)(uVar5 & 0x7fffff | 0x3f800000);
        fVar12 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar5 & 0xff800000);
      }
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 != 0) {
        do {
          if (*(long *)(lVar6 + 0x160) == lVar4) {
            *(float *)(lVar6 + 0x188) = *(float *)(lVar6 + 0x188) * fVar12;
            fVar13 = *(float *)(lVar6 + 0x18c) + fVar11;
            *(float *)(lVar6 + 0x18c) = fVar13;
            *(byte *)(lVar6 + 0x198) = *(byte *)(lVar6 + 0x198) & 0xfe | fVar13 <= fVar10;
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        } while (lVar6 != 0);
        plVar9 = *(long **)(param_1 + 0x48);
        uVar7 = (ulong)*(uint *)(param_1 + 0x50);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar9 + uVar7 * 2);
  }
  return;
}


