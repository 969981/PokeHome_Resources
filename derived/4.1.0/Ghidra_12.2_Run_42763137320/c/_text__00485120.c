/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00485120; name: FUN_.text__00485120
 */


void FUN__text__00485120(uint param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *puVar12;
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
  
  if (param_1 != 0) {
    uVar10 = 0;
    do {
      pfVar11 = (float *)((ulong)(param_1 - 1) * 0x54 + 0x73cc4c + uVar10 * 0xc);
      fVar17 = *pfVar11;
      fVar16 = pfVar11[2];
      fVar18 = -fVar17;
      puVar9 = param_4;
      puVar12 = param_3;
      do {
        uVar2 = puVar12[1];
        uVar1 = *puVar12;
        uVar4 = puVar12[3];
        uVar3 = puVar12[2];
        fVar23 = (float)uVar3;
        uVar6 = puVar12[5];
        uVar5 = puVar12[4];
        uVar8 = puVar12[7];
        uVar7 = puVar12[6];
        puVar12 = puVar12 + 8;
        fVar13 = (float)uVar1;
        fVar14 = (float)uVar5;
        fVar15 = (float)uVar7;
        fVar19 = fVar13 * fVar18 + (float)uVar2 * fVar16;
        fVar20 = fVar23 * fVar18 + (float)uVar4 * fVar16;
        fVar21 = fVar14 * fVar18 + (float)uVar6 * fVar16;
        fVar22 = fVar15 * fVar18 + (float)uVar8 * fVar16;
        puVar9[5] = CONCAT44(fVar21,fVar21);
        puVar9[4] = CONCAT44((int)((ulong)uVar5 >> 0x20),fVar14 * fVar16 + (float)uVar6 * fVar17);
        puVar9[7] = CONCAT44(fVar22,fVar22);
        puVar9[6] = CONCAT44((int)((ulong)uVar7 >> 0x20),fVar15 * fVar16 + (float)uVar8 * fVar17);
        param_4 = puVar9 + 8;
        puVar9[1] = CONCAT44(fVar19,fVar19);
        *puVar9 = CONCAT44((int)((ulong)uVar1 >> 0x20),fVar13 * fVar16 + (float)uVar2 * fVar17);
        puVar9[3] = CONCAT44(fVar20,fVar20);
        puVar9[2] = CONCAT44((int)((ulong)uVar3 >> 0x20),fVar23 * fVar16 + (float)uVar4 * fVar17);
        puVar9 = param_4;
      } while (puVar12 < (undefined8 *)((long)param_3 + (ulong)(uint)(param_2 << 2) * 4));
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_1);
  }
  return;
}


