/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00482470; name: FUN_.text__00482470
 */


long FUN__text__00482470(uint param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  
  uVar1 = (long)(int)param_1 + 1;
  lVar12 = (&DAT_00aea860)[uVar1];
  if ((-1 < (int)param_1) && (lVar12 == 0)) {
    lVar14 = *(long *)((ulong)param_1 * 8 + 0x889b98);
    uVar4 = *(uint *)((ulong)param_1 * 4 + 0x73b734);
    uVar13 = (ulong)uVar4;
    uVar5 = (param_1 + 2) * (param_1 + 2);
    lVar12 = FUN__text__00400f80(0,(ulong)(uVar4 * uVar5) << 2);
    if (lVar12 != 0) {
      lVar15 = 0;
      uVar10 = uVar13;
      do {
        puVar3 = (undefined4 *)(lVar14 + lVar15 * 4);
        FUN__text__00481ed0(*puVar3,puVar3[1],puVar3[2],uVar1 & 0xffffffff,uVar4,lVar12 + lVar15);
        uVar10 = uVar10 - 1;
        lVar15 = lVar15 + 4;
      } while (uVar10 != 0);
      lVar14 = 0;
      uVar8 = 0;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      iVar9 = 1;
      do {
        fVar16 = *(float *)((ulong)(iVar9 - 1) * 4 + 0x73b71c);
        fVar16 = fVar16 * fVar16;
        if (uVar13 - 1 < 3) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            uVar2 = (int)lVar14 + (int)uVar10;
            uVar10 = uVar10 + 4;
            lVar15 = (ulong)(uVar2 + 1) * 4;
            *(float *)(lVar12 + (ulong)uVar2 * 4) = fVar16 * *(float *)(lVar12 + (ulong)uVar2 * 4);
            lVar6 = (ulong)(uVar2 + 2) * 4;
            lVar7 = (ulong)(uVar2 + 3) * 4;
            *(float *)(lVar12 + lVar15) = fVar16 * *(float *)(lVar12 + lVar15);
            *(float *)(lVar12 + lVar6) = fVar16 * *(float *)(lVar12 + lVar6);
            *(float *)(lVar12 + lVar7) = fVar16 * *(float *)(lVar12 + lVar7);
          } while ((uVar13 & 0xfffffffc) != uVar10);
        }
        if ((uVar4 & 3) != 0) {
          uVar2 = (int)lVar14 + (int)uVar10;
          uVar10 = uVar13 & 3;
          do {
            uVar11 = (ulong)uVar2;
            uVar2 = uVar2 + 1;
            uVar10 = uVar10 - 1;
            *(float *)(lVar12 + uVar11 * 4) = fVar16 * *(float *)(lVar12 + uVar11 * 4);
          } while (uVar10 != 0);
        }
        uVar8 = uVar8 + 1;
        lVar14 = lVar14 + uVar13;
        uVar2 = 0;
        if (iVar9 * iVar9 != 0) {
          uVar2 = uVar8 / (uint)(iVar9 * iVar9);
        }
        iVar9 = uVar2 + iVar9;
      } while (uVar8 != uVar5);
      (&DAT_00aea860)[uVar1] = lVar12;
    }
  }
  return lVar12;
}


