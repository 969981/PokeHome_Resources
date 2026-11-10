/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561890; name: FUN_.text__00561890
 */


void FUN__text__00561890(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  
  FUN__text__00561970();
  if ((param_3 & 3) != 0) {
    iVar2 = 4 - (param_3 & 3);
    memset((void *)(param_2 + (ulong)param_3 * 4),0,(ulong)(uint)(iVar2 * 4));
    param_3 = iVar2 + param_3;
  }
  fVar12 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar36 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  if (param_3 != 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x88);
    uVar15 = *(undefined8 *)(param_1 + 0x80);
    uVar18 = *(undefined8 *)(param_1 + 0x98);
    uVar17 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = 0;
    uVar20 = *(undefined8 *)(param_1 + 0xa8);
    uVar19 = *(undefined8 *)(param_1 + 0xa0);
    uVar22 = *(undefined8 *)(param_1 + 0xb8);
    uVar21 = *(undefined8 *)(param_1 + 0xb0);
    uVar24 = *(undefined8 *)(param_1 + 200);
    uVar23 = *(undefined8 *)(param_1 + 0xc0);
    uVar26 = *(undefined8 *)(param_1 + 0xd8);
    uVar25 = *(undefined8 *)(param_1 + 0xd0);
    uVar28 = *(undefined8 *)(param_1 + 0xe8);
    uVar27 = *(undefined8 *)(param_1 + 0xe0);
    uVar30 = *(undefined8 *)(param_1 + 0xf8);
    uVar29 = *(undefined8 *)(param_1 + 0xf0);
    fVar14 = fVar11;
    fVar13 = fVar12;
    do {
      lVar3 = uVar5 * 4;
      uVar1 = (int)uVar5 + 4;
      uVar5 = (ulong)uVar1;
      puVar4 = (undefined8 *)(param_2 + lVar3);
      uVar34 = puVar4[1];
      uVar32 = *puVar4;
      fVar31 = (float)uVar32;
      fVar33 = (float)((ulong)uVar32 >> 0x20);
      fVar11 = (float)uVar34;
      fVar12 = (float)((ulong)uVar34 >> 0x20);
      fVar6 = (float)uVar27 * fVar36;
      fVar8 = (float)((ulong)uVar27 >> 0x20) * fVar36;
      fVar7 = (float)uVar29 * fVar35;
      fVar9 = (float)((ulong)uVar29 >> 0x20) * fVar35;
      fVar10 = (float)((ulong)uVar30 >> 0x20) * fVar35;
      fVar35 = fVar11 * (float)uVar16 + (float)uVar24 * fVar13 + (float)uVar26 * fVar14 +
               (float)uVar18 * fVar11 + (float)uVar20 * fVar33 + (float)uVar22 * fVar31 +
               (float)uVar28 * fVar36 + (float)uVar30 * fVar35;
      fVar36 = fVar12 * (float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar24 >> 0x20) * fVar13 +
               (float)((ulong)uVar26 >> 0x20) * fVar14 + (float)((ulong)uVar18 >> 0x20) * fVar11 +
               (float)((ulong)uVar20 >> 0x20) * fVar33 + (float)((ulong)uVar22 >> 0x20) * fVar31 +
               (float)((ulong)uVar28 >> 0x20) * fVar36 + fVar10;
      puVar4 = (undefined8 *)(param_2 + lVar3);
      puVar4[1] = CONCAT44(fVar36,fVar35);
      *puVar4 = CONCAT44(fVar33 * (float)((ulong)uVar15 >> 0x20) +
                         (float)((ulong)uVar23 >> 0x20) * fVar13 +
                         (float)((ulong)uVar25 >> 0x20) * fVar14 +
                         (float)((ulong)uVar17 >> 0x20) * fVar11 +
                         (float)((ulong)uVar19 >> 0x20) * fVar33 +
                         (float)((ulong)uVar21 >> 0x20) * fVar31 + fVar8 + fVar9,
                         fVar31 * (float)uVar15 + (float)uVar23 * fVar13 + (float)uVar25 * fVar14 +
                         (float)uVar17 * fVar11 + (float)uVar19 * fVar33 + (float)uVar21 * fVar31 +
                         fVar6 + fVar7);
      fVar14 = fVar11;
      fVar13 = fVar12;
    } while (uVar1 < param_3);
  }
  *(ulong *)(param_1 + 0x70) = CONCAT44(fVar11,fVar12);
  *(ulong *)(param_1 + 0x78) = CONCAT44(fVar35,fVar36);
  return;
}


