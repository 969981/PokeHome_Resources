/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595c90; name: FUN_.text__00595c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00595c90(float param_1,float param_2,long param_3,long *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  nn::os::LockMutex(_DAT_008a38b8);
  puVar7 = _DAT_008a38b0;
  uVar3 = *_DAT_008a38b0;
  if (*(int *)(param_3 + 0x4c) < 0) {
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar19 = *(uint *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x4c) = uVar3;
  }
  else {
    uVar19 = *(uint *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x4c) = uVar3 + *(int *)(param_3 + 0x4c);
  }
  uVar15 = uVar3;
  if (uVar19 != 0) {
    if (uVar3 == 0) {
      uVar15 = 0;
    }
    else {
      uVar5 = *(ushort *)(param_4 + 2);
      uVar14 = 0;
      uVar4 = *(uint *)(param_3 + 0x14);
      uVar16 = 1;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      fVar24 = (param_2 - param_1) / (float)(uint)uVar5;
      uVar20 = uVar3;
      uVar9 = uVar3;
      do {
        if (uVar16 != 0) {
          lVar8 = *(long *)(param_3 + 8);
          iVar13 = (int)uVar14;
          uVar17 = (ulong)((uVar4 >> 3) * iVar13);
          uVar16 = uVar19 * iVar13;
          uVar23 = (ulong)*(uint *)(param_3 + 0x1c);
          lVar11 = *param_4;
          uVar12 = (ulong)*(ushort *)(param_4 + 2);
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar19 = 0;
            pfVar21 = (float *)(lVar11 + uVar12 * uVar16 * 4);
            pfVar18 = (float *)(lVar8 + uVar17 * 4 + uVar23 * 4);
            fVar25 = param_1;
            do {
              *pfVar18 = 0.0;
              if (uVar3 <= uVar5) {
                pfVar1 = pfVar21 + uVar6;
                pfVar22 = pfVar21;
                do {
                  pfVar21 = pfVar22 + 1;
                  fVar26 = ABS(*pfVar22) * fVar25;
                  fVar25 = fVar25 + fVar24;
                  *pfVar18 = fVar26;
                  pfVar22 = pfVar21;
                } while (pfVar21 < pfVar1);
              }
              uVar15 = *puVar7;
              uVar19 = uVar19 + 1;
              pfVar18 = pfVar18 + 1;
            } while (uVar19 < uVar15);
            uVar19 = *(uint *)(param_3 + 0x10);
            lVar8 = *(long *)(param_3 + 8);
            uVar16 = uVar19 * iVar13;
            uVar23 = (ulong)*(uint *)(param_3 + 0x1c);
            lVar11 = *param_4;
            uVar12 = (ulong)*(ushort *)(param_4 + 2);
            uVar20 = uVar15;
            uVar10 = uVar15;
          }
          if (uVar20 == 0) {
            uVar9 = 0;
            uVar16 = 0;
          }
          else {
            uVar19 = 0;
            pfVar21 = (float *)(lVar11 + uVar12 * (uVar16 + 1) * 4);
            pfVar18 = (float *)(lVar8 + uVar17 * 4 + (ulong)(uVar10 * *(int *)(param_3 + 0x20)) * 4
                               + uVar23 * 4);
            fVar25 = param_1;
            do {
              *pfVar18 = 0.0;
              if (uVar3 <= uVar5) {
                pfVar1 = pfVar21 + uVar6;
                pfVar22 = pfVar21;
                do {
                  pfVar21 = pfVar22 + 1;
                  fVar26 = ABS(*pfVar22) * fVar25;
                  fVar25 = fVar25 + fVar24;
                  *pfVar18 = fVar26;
                  pfVar22 = pfVar21;
                } while (pfVar21 < pfVar1);
              }
              uVar15 = *puVar7;
              uVar19 = uVar19 + 1;
              pfVar18 = pfVar18 + 1;
            } while (uVar19 < uVar15);
            uVar19 = *(uint *)(param_3 + 0x10);
            uVar20 = uVar15;
            uVar9 = uVar15;
            uVar16 = uVar15;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar19);
    }
  }
  iVar13 = *(int *)(param_3 + 0x1c) + uVar15;
  iVar2 = 0;
  if (iVar13 != *(int *)(param_3 + 0x20) * uVar15) {
    iVar2 = iVar13;
  }
  *(int *)(param_3 + 0x1c) = iVar2;
  nn::os::UnlockMutex(_DAT_008a38b8);
  return;
}


