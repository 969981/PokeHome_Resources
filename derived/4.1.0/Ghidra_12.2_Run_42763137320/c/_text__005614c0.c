/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005614c0; name: FUN_.text__005614c0
 */


void FUN__text__005614c0(long param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  
  fVar11 = *(float *)(param_1 + 0x98);
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (*(float *)(param_1 + 0xa0) <= 1.6e-05) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar11)) {
      bVar6 = fVar11 < 1.6e-05;
      bVar7 = fVar11 == 1.6e-05;
      bVar8 = false;
    }
  }
  if (!bVar7 && bVar6 == bVar8) {
    FUN__text__005613e4(param_1,param_2,param_4);
    FUN__text__00561430(param_1,param_2,param_3,param_4);
    return;
  }
  if (param_2 != 0) {
    fVar16 = *(float *)(param_1 + 0xa4);
    uVar10 = 0;
    fVar11 = *(float *)(param_1 + 0xac) + fVar16;
    fVar12 = fVar16 * 4.0;
    fVar21 = fVar16 * 16.0;
    fVar22 = fVar11 + fVar16;
    fVar23 = fVar22 + fVar16;
    fVar24 = fVar23 + fVar16;
    fVar16 = fVar16 * 8.0;
    fVar13 = fVar11 + fVar12;
    fVar14 = fVar22 + fVar12;
    fVar15 = fVar23 + fVar12;
    fVar12 = fVar24 + fVar12;
    fVar17 = fVar13 + fVar16;
    fVar18 = fVar14 + fVar16;
    fVar19 = fVar15 + fVar16;
    fVar20 = fVar12 + fVar16;
    fVar25 = fVar11 + fVar16;
    fVar26 = fVar22 + fVar16;
    fVar27 = fVar23 + fVar16;
    fVar16 = fVar24 + fVar16;
    do {
      iVar9 = (int)uVar10;
      lVar1 = uVar10 * 4;
      lVar2 = (ulong)(iVar9 + 4) * 4;
      lVar3 = (ulong)(iVar9 + 8) * 4;
      lVar4 = (ulong)(iVar9 + 0xc) * 4;
      puVar5 = (undefined8 *)(param_3 + lVar1);
      uVar32 = puVar5[1];
      uVar29 = *puVar5;
      fVar28 = (float)uVar29 * fVar11;
      fVar30 = (float)((ulong)uVar29 >> 0x20) * fVar22;
      fVar31 = (float)uVar32 * fVar23;
      fVar33 = (float)((ulong)uVar32 >> 0x20) * fVar24;
      uVar10 = (ulong)(iVar9 + 0x10U);
      puVar5 = (undefined8 *)(param_3 + lVar2);
      uVar32 = puVar5[1];
      uVar29 = *puVar5;
      puVar5 = (undefined8 *)(param_3 + lVar3);
      uVar42 = puVar5[1];
      uVar39 = *puVar5;
      puVar5 = (undefined8 *)(param_3 + lVar4);
      uVar48 = puVar5[1];
      uVar45 = *puVar5;
      fVar11 = fVar11 + fVar21;
      fVar22 = fVar22 + fVar21;
      fVar23 = fVar23 + fVar21;
      fVar24 = fVar24 + fVar21;
      fVar34 = (float)uVar29 * fVar13;
      fVar35 = (float)((ulong)uVar29 >> 0x20) * fVar14;
      fVar36 = (float)uVar32 * fVar15;
      fVar37 = (float)((ulong)uVar32 >> 0x20) * fVar12;
      fVar38 = (float)uVar39 * fVar25;
      fVar40 = (float)((ulong)uVar39 >> 0x20) * fVar26;
      fVar41 = (float)uVar42 * fVar27;
      fVar43 = (float)((ulong)uVar42 >> 0x20) * fVar16;
      fVar44 = (float)uVar45 * fVar17;
      fVar46 = (float)((ulong)uVar45 >> 0x20) * fVar18;
      fVar47 = (float)uVar48 * fVar19;
      fVar49 = (float)((ulong)uVar48 >> 0x20) * fVar20;
      fVar13 = fVar13 + fVar21;
      fVar14 = fVar14 + fVar21;
      fVar15 = fVar15 + fVar21;
      fVar12 = fVar12 + fVar21;
      fVar25 = fVar25 + fVar21;
      fVar26 = fVar26 + fVar21;
      fVar27 = fVar27 + fVar21;
      fVar16 = fVar16 + fVar21;
      fVar17 = fVar17 + fVar21;
      fVar18 = fVar18 + fVar21;
      fVar19 = fVar19 + fVar21;
      fVar20 = fVar20 + fVar21;
      puVar5 = (undefined8 *)(param_3 + lVar1);
      puVar5[1] = CONCAT44(fVar33,fVar31);
      *puVar5 = CONCAT44(fVar30,fVar28);
      puVar5 = (undefined8 *)(param_3 + lVar2);
      puVar5[1] = CONCAT44(fVar37,fVar36);
      *puVar5 = CONCAT44(fVar35,fVar34);
      puVar5 = (undefined8 *)(param_3 + lVar3);
      puVar5[1] = CONCAT44(fVar43,fVar41);
      *puVar5 = CONCAT44(fVar40,fVar38);
      puVar5 = (undefined8 *)(param_3 + lVar4);
      puVar5[1] = CONCAT44(fVar49,fVar47);
      *puVar5 = CONCAT44(fVar46,fVar44);
    } while (iVar9 + 0x10U < param_2);
  }
  return;
}


