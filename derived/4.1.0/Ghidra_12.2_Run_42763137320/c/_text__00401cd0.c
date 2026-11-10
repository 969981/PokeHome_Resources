/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00401cd0; name: FUN_.text__00401cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN__text__00401cd0(int param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  short *psVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  
  lVar22 = (long)param_1;
  if (*(int *)(&DAT_00ae89d8 + (long)param_1 * 0x638) != 0) {
    lVar9 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + lVar22 * 4));
    if ((lVar9 == 0) &&
       (puVar10 = (undefined8 *)FUN__text__00402a70(param_1,0), puVar10 != (undefined8 *)0x0)) {
      FUN__text__00405b80(*(undefined4 *)(&DAT_00ae89c0 + lVar22 * 4),puVar10);
      uVar11 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + lVar22 * 4));
      *puVar10 = uVar11;
      return 0;
    }
    return 0;
  }
  *(int *)(&DAT_00ae89d8 + (long)param_1 * 0x638) = 1;
  lVar9 = (long)param_1 * 0x638;
  if (param_2 == (undefined8 *)0x0) {
    *(undefined8 *)(&DAT_00ae8a18 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae8a20 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae89e0 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae8a08 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae8a10 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae89f8 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae8a00 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae89e8 + lVar9) = 0;
    *(undefined8 *)(&DAT_00ae89f0 + lVar9) = 0;
    lVar9 = (long)param_1 * 0x638;
    puVar12 = (ulong *)(&DAT_00ae8a00 + lVar9);
    uVar15 = *puVar12;
    *(undefined4 *)(&DAT_00ae8e64 + lVar9) = 0;
    *(ulong *)(&DAT_00ae8a38 + lVar9) = uVar15;
  }
  else {
    *(undefined8 *)(&DAT_00ae89e0 + lVar9) = *param_2;
    uVar11 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[4];
    *(undefined8 *)(&DAT_00ae89f8 + lVar9) = param_2[3];
    *(undefined8 *)(&DAT_00ae8a00 + lVar9) = uVar4;
    *(undefined8 *)(&DAT_00ae89e8 + lVar9) = uVar11;
    *(undefined8 *)(&DAT_00ae89f0 + lVar9) = uVar3;
    uVar11 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[8];
    *(undefined8 *)(&DAT_00ae8a18 + lVar9) = param_2[7];
    *(undefined8 *)(&DAT_00ae8a20 + lVar9) = uVar4;
    *(undefined8 *)(&DAT_00ae8a08 + lVar9) = uVar11;
    *(undefined8 *)(&DAT_00ae8a10 + lVar9) = uVar3;
    lVar9 = (long)param_1 * 0x638;
    puVar12 = (ulong *)(&DAT_00ae8a00 + lVar9);
    uVar15 = *puVar12;
    *(undefined4 *)(&DAT_00ae8e64 + lVar9) = 0;
    *(ulong *)(&DAT_00ae8a38 + lVar9) = uVar15;
  }
  if (uVar15 == 0) {
    uVar14 = 0;
    uVar15 = 0x100;
  }
  else {
    iVar8 = *(int *)(&DAT_00ae8a18 + (long)param_1 * 0x638);
    if (iVar8 != 0) {
      *(undefined4 *)((long)puVar12 + 0x464) = 1;
    }
    uVar14 = (uint)(iVar8 != 0);
    if (0xffffffff < uVar15) {
      uVar15 = 0x100000000;
    }
    if (uVar15 < 0x101) {
      uVar15 = 0x100;
    }
  }
  uVar17 = 0;
  do {
    uVar15 = uVar15 >> 1;
    uVar17 = uVar17 + 1;
  } while (uVar15 != 1);
  uVar16 = 1L << (uVar17 & 0x3f);
  *(ulong *)(&DAT_00ae8a30 + (long)param_1 * 0x638) = uVar17;
  lVar9 = (long)param_1 * 0x638;
  puVar12[5] = uVar16;
  uVar17 = 0x1000;
  uVar19 = *(ulong *)(&DAT_00ae8a08 + lVar9);
  puVar23 = &DAT_00ae8a40 + (long)param_1 * 199;
  *puVar23 = 0x1000;
  uVar15 = uVar19;
  if (0x3ffff < uVar19) {
    uVar15 = 0x40000;
  }
  uVar2 = 0x10000;
  if (uVar19 != 0) {
    uVar2 = uVar15;
  }
  if (uVar2 < 0x1001) {
    lVar18 = 0xc;
  }
  else {
    uVar17 = 0x1000;
    lVar18 = 0xc;
    do {
      uVar17 = uVar17 << 1;
      lVar18 = lVar18 + 1;
    } while (uVar17 < uVar2);
    *puVar23 = uVar17;
  }
  *(long *)(&DAT_00ae8a48 + lVar9) = lVar18;
  lVar18 = (long)param_1 * 0x638;
  uVar19 = *(ulong *)(&DAT_00ae8a10 + lVar18);
  *(ulong *)(&DAT_00ae8a50 + lVar18) = -uVar17;
  uVar15 = 0x20;
  if (uVar19 != 0) {
    uVar15 = uVar19;
  }
  if ((uVar15 * uVar17 < uVar16) && (uVar15 = 0, uVar17 != 0)) {
    uVar15 = uVar16 / uVar17;
  }
  *(ulong *)(&DAT_00ae8a58 + lVar18) = uVar15;
  if ((uVar17 <= uVar16) && ((uVar15 * uVar17 & uVar16 - 1) != 0)) {
    uVar15 = 0;
    if (uVar17 != 0) {
      uVar15 = uVar16 / uVar17;
    }
    *(ulong *)(&DAT_00ae8a58 + lVar18) = uVar15;
  }
  *puVar12 = uVar16;
  uVar16 = uVar15;
  if (0x1f < uVar15) {
    uVar16 = 0x20;
  }
  *(ulong *)(&DAT_00ae8a08 + lVar9) = uVar17;
  *(ulong *)(&DAT_00ae8a10 + lVar18) = uVar15;
  *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638) = uVar16;
  *(uint *)(&DAT_00ae8a18 + (long)param_1 * 0x638) = uVar14;
  iVar8 = FUN__text__004058b0(&DAT_00ae89c0 + lVar22 * 4);
  if (iVar8 != 0) {
    return 0xffffffff;
  }
  if (param_1 == 0) {
    DAT_00ae8a6e = 0;
    DAT_00ae89c8 = _DAT_00ae8a20;
    DAT_00ae8a68 = 0x10;
    DAT_00ae8a6c = (undefined2)((DAT_00ae8a40 - 0x80) / 0x10);
    uVar15 = DAT_00ae8a40;
  }
  else {
    lVar22 = (long)param_1;
    (&DAT_00ae8a68)[lVar22 * 0x18e] = 0x10;
    uVar15 = *puVar23;
    (&DAT_00ae8a6e)[lVar22 * 0x31c] = 0;
    (&DAT_00ae8a6c)[lVar22 * 0x31c] = (short)((int)uVar15 + 0xfff80U >> 4);
  }
  uVar15 = uVar15 - 0x80;
  lVar22 = 1;
  uVar17 = 0x10;
  puVar13 = (undefined2 *)(&DAT_00ae8a76 + (long)param_1 * 0x638);
  do {
    uVar5 = 0;
    if (uVar17 != 0) {
      uVar5 = (undefined2)(uVar15 / uVar17);
    }
    *puVar13 = (short)lVar22;
    lVar22 = lVar22 + 1;
    *(int *)(puVar13 + -3) = (int)uVar17;
    uVar17 = uVar17 + 0x10;
    puVar13[-1] = uVar5;
    puVar13 = puVar13 + 4;
  } while (lVar22 != 0x41);
  lVar22 = (long)param_1 * 0x638;
  uVar17 = 0x7e00;
  if (uVar15 < 0xfc02) {
    uVar17 = uVar15 >> 1;
  }
  *(ulong *)(&DAT_00ae8e58 + lVar22) = uVar17;
  lVar9 = 0x208;
  lVar18 = 0;
  do {
    lVar1 = lVar18 + 1;
    uVar15 = lVar1 * 0x200 + 0x400;
    if (*(ulong *)(&DAT_00ae8e58 + lVar22) < uVar15) {
      *(ulong *)(&DAT_00ae8e58 + lVar22) = lVar18 * 0x200 + 0x400;
      break;
    }
    lVar18 = lVar18 + 0x41;
    lVar21 = lVar18 * 8 + (long)param_1 * 0x638;
    *(int *)(&DAT_00ae89c0 + lVar21 + 0xa8) = (int)uVar15;
    sVar6 = 0;
    if (uVar15 != 0) {
      sVar6 = (short)((*puVar23 - 0x80) / uVar15);
    }
    psVar20 = (short *)(&DAT_00ae89c0 + lVar21 + 0xac);
    *psVar20 = sVar6;
    *(short *)(&DAT_00ae89c0 + lVar21 + 0xae) = (short)lVar18;
    lVar21 = lVar9;
    do {
      lVar7 = lVar21 + lVar22;
      if (*(short *)(&DAT_00ae89c0 + lVar7 + 0xa4) != *psVar20) break;
      lVar21 = lVar21 + -8;
      *(undefined8 *)(&DAT_00ae89c0 + lVar7 + 0xa0) =
           *(undefined8 *)(&DAT_00ae8a68 + (long)param_1 * 0x18e + lVar18 * 2);
    } while (lVar21 != 0);
    lVar9 = lVar9 + 8;
    lVar18 = lVar1;
  } while (lVar1 != 0x3d);
  lVar22 = (long)param_1 * 0x638;
  memset(&DAT_00ae8e80 + lVar22,0,0x178);
  *(undefined8 *)(&DAT_00ae9000 + lVar22) = 0;
  *(undefined8 *)(&DAT_00ae9008 + lVar22) = 0;
  *(undefined4 *)(&DAT_00ae8ff8 + lVar22) = 0;
  return 0;
}


