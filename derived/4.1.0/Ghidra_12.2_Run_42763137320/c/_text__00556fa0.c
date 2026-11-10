/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00556fa0; name: FUN_.text__00556fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00556fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5)

{
  float *pfVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 (*pauVar4) [12];
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [12];
  ulong uVar16;
  undefined1 (*pauVar17) [12];
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
  
  uVar14 = uRam000000000072497c;
  uVar13 = uRam0000000000724978;
  uVar12 = uRam0000000000724974;
  uVar11 = _DAT_00724970;
  uVar10 = uRam00000000007248bc;
  uVar9 = uRam00000000007248b8;
  uVar8 = uRam00000000007248b4;
  uVar7 = _DAT_007248b0;
  uVar6 = uRam00000000007247a8;
  uVar5 = _DAT_007247a0;
  pauVar15 = (undefined1 (*) [12])*param_1;
  if (*(char *)((long)param_1 + 0xd) != '\0') {
    uVar16 = (ulong)*(uint *)(param_1 + 1) & 0xfffffffe;
    fVar19 = *(float *)*pauVar15;
    fVar21 = *(float *)(*pauVar15 + 4);
    pfVar1 = (float *)(*pauVar15 + (ulong)(*(uint *)(param_1 + 1) >> 1) * 8);
    fVar18 = *pfVar1;
    fVar20 = pfVar1[1];
    if ((int)uVar16 != 0) {
      pauVar17 = pauVar15;
      do {
        fVar29 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
        auVar3 = *pauVar17;
        auVar2 = *pauVar17;
        fVar27 = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
        fVar25 = (float)(uVar7 ^ (uVar7 ^ uVar11) & -(uint)((float)uVar5 - fVar27 < 0.0));
        fVar28 = (float)(uVar8 ^ (uVar8 ^ uVar12) &
                                 -(uint)((float)((ulong)uVar5 >> 0x20) - fVar27 < 0.0));
        fVar22 = (float)(uVar9 ^ (uVar9 ^ uVar13) & -(uint)((float)uVar6 - fVar29 < 0.0));
        fVar23 = (float)(uVar10 ^ (uVar10 ^ uVar14) &
                                  -(uint)((float)((ulong)uVar6 >> 0x20) - fVar29 < 0.0));
        fVar25 = (ABS(fVar25 - fVar27) * -0.4052847 + 1.2732395) * (fVar25 - fVar27);
        fVar27 = (ABS(fVar28 - fVar27) * -0.4052847 + 1.2732395) * (fVar28 - fVar27);
        fVar28 = (ABS(fVar22 - fVar29) * -0.4052847 + 1.2732395) * (fVar22 - fVar29);
        fVar29 = (ABS(fVar23 - fVar29) * -0.4052847 + 1.2732395) * (fVar23 - fVar29);
        pauVar4 = pauVar17 + 1;
        *(ulong *)(*pauVar17 + 8) =
             CONCAT44((fVar29 + (-fVar29 + ABS(fVar29) * fVar29) * 0.225) * auVar2._8_4_,
                      (fVar28 + (-fVar28 + ABS(fVar28) * fVar28) * 0.225) * auVar3._8_4_);
        *(ulong *)*pauVar17 =
             CONCAT44((fVar27 + (-fVar27 + ABS(fVar27) * fVar27) * 0.225) * auVar2._0_4_,
                      (fVar25 + (-fVar25 + ABS(fVar25) * fVar25) * 0.225) * auVar3._0_4_);
        pauVar17 = (undefined1 (*) [12])(*pauVar4 + 4);
      } while ((undefined1 (*) [12])(*pauVar4 + 4) < (undefined1 (*) [12])(*pauVar15 + uVar16 * 4));
    }
    fVar27 = -4.712389;
    if (fVar21 <= 1.5707964) {
      fVar27 = 1.5707964;
    }
    fVar29 = -4.712389;
    if (fVar20 <= 1.5707964) {
      fVar29 = 1.5707964;
    }
    fVar27 = fVar27 + fVar21;
    fVar29 = fVar29 + fVar20;
    fVar25 = fVar21 * 0.4052847 * ABS(fVar21);
    fVar22 = fVar21 * 1.2732395 - fVar25;
    fVar28 = fVar27 * 0.4052847 * ABS(fVar27);
    fVar24 = fVar29 * 0.4052847 * ABS(fVar29);
    fVar26 = fVar27 * 1.2732395 - fVar28;
    fVar23 = fVar29 * 1.2732395 - fVar24;
    *(float *)*pauVar15 =
         (fVar26 + (ABS(fVar27 * 1.2732395 - fVar28) * fVar26 - fVar26) * 0.225) * fVar19;
    *(float *)(*pauVar15 + 4) =
         (fVar22 + (ABS(fVar21 * 1.2732395 - fVar25) * fVar22 - fVar22) * 0.225) * fVar19;
    fVar19 = fVar20 * 0.4052847 * ABS(fVar20);
    fVar21 = fVar20 * 1.2732395 - fVar19;
    *pfVar1 = (fVar23 + (ABS(fVar29 * 1.2732395 - fVar24) * fVar23 - fVar23) * 0.225) * fVar18;
    pfVar1[1] = (fVar21 + (ABS(fVar20 * 1.2732395 - fVar19) * fVar21 - fVar21) * 0.225) * fVar18;
    *(undefined1 *)((long)param_1 + 0xd) = 0;
  }
  FUN__text__00550f00(pauVar15,param_2,param_5);
  return;
}


