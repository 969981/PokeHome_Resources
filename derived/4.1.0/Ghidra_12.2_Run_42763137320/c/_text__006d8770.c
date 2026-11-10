/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d8770; name: FUN_.text__006d8770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d8770(float param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
                        undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar29;
  float fVar30;
  
  fVar1 = (float)*param_3;
  fVar11 = (float)_DAT_00724cf0;
  fVar12 = (float)((ulong)_DAT_00724cf0 >> 0x20);
  fVar13 = (float)uRam0000000000724cf8;
  fVar14 = (float)((ulong)uRam0000000000724cf8 >> 0x20);
  fVar2 = (float)param_3[1];
  fVar3 = (float)*param_5;
  fVar15 = (float)_DAT_00724b90;
  fVar16 = (float)((ulong)_DAT_00724b90 >> 0x20);
  fVar17 = (float)uRam0000000000724b98;
  fVar18 = (float)((ulong)uRam0000000000724b98 >> 0x20);
  fVar5 = (float)param_5[1];
  fVar4 = param_1 * param_1;
  fVar27 = (float)((ulong)*param_3 >> 0x20);
  fVar28 = (float)((ulong)*param_5 >> 0x20);
  fVar6 = (float)*param_4;
  fVar19 = (float)_DAT_00724af0;
  fVar20 = (float)((ulong)_DAT_00724af0 >> 0x20);
  fVar21 = (float)uRam0000000000724af8;
  fVar22 = (float)((ulong)uRam0000000000724af8 >> 0x20);
  fVar8 = (float)param_4[1];
  fVar7 = fVar4 * param_1;
  fVar29 = (float)((ulong)*param_4 >> 0x20);
  fVar9 = (float)*param_6;
  fVar23 = (float)_DAT_00724b60;
  fVar24 = (float)((ulong)_DAT_00724b60 >> 0x20);
  fVar25 = (float)uRam0000000000724b68;
  fVar26 = (float)((ulong)uRam0000000000724b68 >> 0x20);
  fVar10 = (float)param_6[1];
  fVar30 = (float)((ulong)*param_6 >> 0x20);
  *param_2 = fVar14 * fVar1 + fVar18 * fVar3 + fVar22 * fVar6 + fVar26 * fVar9 +
             fVar4 * (fVar12 * fVar1 + fVar16 * fVar3 + fVar20 * fVar6 + fVar24 * fVar9) +
             fVar7 * (fVar11 * fVar1 + fVar15 * fVar3 + fVar19 * fVar6 + fVar23 * fVar9) +
             param_1 * (fVar13 * fVar1 + fVar17 * fVar3 + fVar21 * fVar6 + fVar25 * fVar9);
  param_2[1] = fVar14 * fVar27 + fVar18 * fVar28 + fVar22 * fVar29 + fVar26 * fVar30 +
               fVar4 * (fVar12 * fVar27 + fVar16 * fVar28 + fVar20 * fVar29 + fVar24 * fVar30) +
               fVar7 * (fVar11 * fVar27 + fVar15 * fVar28 + fVar19 * fVar29 + fVar23 * fVar30) +
               param_1 * (fVar13 * fVar27 + fVar17 * fVar28 + fVar21 * fVar29 + fVar25 * fVar30);
  *(ulong *)(param_2 + 2) =
       (ulong)(uint)(fVar14 * fVar2 + fVar18 * fVar5 + fVar22 * fVar8 + fVar26 * fVar10 +
                    fVar4 * (fVar12 * fVar2 + fVar16 * fVar5 + fVar20 * fVar8 + fVar24 * fVar10) +
                    fVar7 * (fVar11 * fVar2 + fVar15 * fVar5 + fVar19 * fVar8 + fVar23 * fVar10) +
                    param_1 * (fVar13 * fVar2 + fVar17 * fVar5 + fVar21 * fVar8 + fVar25 * fVar10));
  *(undefined8 *)param_2 = *(undefined8 *)param_2;
  return;
}


