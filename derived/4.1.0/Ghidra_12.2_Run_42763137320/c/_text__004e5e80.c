/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5e80; name: FUN_.text__004e5e80
 */


void FUN__text__004e5e80(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  
  FUN__text__00475030(param_1 + 0x178);
  uVar6 = *(uint *)(param_1 + 0x180);
  if (uVar6 == 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x178);
    fVar11 = 1.0;
    uVar9 = (ulong)uVar6 * 0x18 - 0x18;
    uVar5 = ((uint)(uVar9 / 0x18) & 0xfffffff) + 1;
    uVar10 = (ulong)uVar5 & 3;
    lVar8 = lVar7;
    if ((uVar5 & 3) != 0) {
      do {
        pfVar1 = (float *)(lVar8 + 0x10);
        lVar8 = lVar8 + 0x18;
        uVar10 = uVar10 - 1;
        fVar11 = *pfVar1 * fVar11;
      } while (uVar10 != 0);
    }
    if (0x47 < uVar9) {
      do {
        pfVar1 = (float *)(lVar8 + 0x10);
        pfVar2 = (float *)(lVar8 + 0x28);
        pfVar3 = (float *)(lVar8 + 0x40);
        pfVar4 = (float *)(lVar8 + 0x58);
        lVar8 = lVar8 + 0x60;
        fVar11 = *pfVar4 * *pfVar3 * *pfVar2 * *pfVar1 * fVar11;
      } while (lVar8 != lVar7 + (ulong)uVar6 * 0x18);
    }
    *(bool *)(param_1 + 0x50) = fVar11 == 0.0;
    if (fVar11 == 0.0) {
      FUN__text__004c2df0(*(undefined8 *)(param_1 + 0xd8),param_1);
      return;
    }
  }
  return;
}


