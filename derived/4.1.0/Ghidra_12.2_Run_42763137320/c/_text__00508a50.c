/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00508a50; name: FUN_.text__00508a50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00508a50(long param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint *puVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  uint *puVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  
  lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x58);
  lVar26 = *(long *)(*(long *)(param_1 + 8) + 8);
  lVar24 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  lVar14 = FUN__text__00447b30(*_DAT_008a45e0,lVar25);
  if (lVar14 == 0) {
    return;
  }
  plVar27 = *(long **)(lVar14 + 0x20);
  if (plVar27 == (long *)0x0) {
    plVar27 = (long *)FUN__text__00400f80(4,0xa0);
    if (plVar27 == (long *)0x0) {
      return;
    }
    FUN__text__0047d448();
    *(long **)(lVar14 + 0x20) = plVar27;
    plVar27[1] = lVar14;
    iVar13 = (**(code **)(*plVar27 + 0x10))(plVar27,*(undefined8 *)(lVar14 + 0x58));
    if (iVar13 != 1) {
      (**(code **)*plVar27)(plVar27);
      FUN__text__00400fc0(4,plVar27);
      *(undefined8 *)(lVar14 + 0x20) = 0;
      return;
    }
  }
  if (((lVar26 != 0) && (lVar24 != 0)) &&
     (uVar18 = (ulong)*(ushort *)(lVar26 + 0x38), *(ushort *)(lVar26 + 0x38) != 0)) {
    fVar30 = *(float *)(lVar24 + 0x74);
    iVar13 = *(int *)(lVar24 + 0x70);
    uVar23 = 0;
    fVar33 = *(float *)(lVar24 + 0x8c);
    iVar6 = *(int *)(lVar24 + 0x88);
    lVar14 = -4;
    if (*(long *)(lVar24 + 0x68) != -1) {
      lVar14 = *(long *)(lVar24 + 0x68);
    }
    lVar10 = -4;
    if (*(long *)(lVar24 + 0x80) != -1) {
      lVar10 = *(long *)(lVar24 + 0x80);
    }
    do {
      plVar21 = *(long **)(lVar26 + 0x28);
      uVar37 = *(uint *)(lVar26 + 0x30);
      uVar22 = (uint)uVar23;
      plVar20 = plVar21;
      if (uVar37 == 0) {
LAB__text__00508b84:
        fVar31 = 0.0;
        if (plVar20 == plVar21 + (ulong)uVar37 * 3) goto LAB__text__00508be0;
        fVar34 = 0.0;
        if ((int)plVar20[2] != 0) {
          uVar37 = (int)plVar20[2] - 1;
          if (uVar22 <= uVar37) {
            uVar37 = uVar22;
          }
          pfVar1 = (float *)(plVar20[1] + (ulong)uVar37 * 0x10);
          fVar31 = *pfVar1;
          fVar34 = pfVar1[1];
        }
        lVar24 = *(long *)(param_1 + 0x20) + uVar23 * 0x118;
        iVar7 = *(int *)(lVar24 + 0x38);
      }
      else {
        lVar24 = (ulong)uVar37 * 0x18;
        do {
          if (*plVar20 == lVar25) goto LAB__text__00508b84;
          plVar20 = plVar20 + 3;
          lVar24 = lVar24 + -0x18;
        } while (lVar24 != 0);
LAB__text__00508be0:
        fVar31 = 0.0;
        fVar34 = 0.0;
        lVar24 = *(long *)(param_1 + 0x20) + uVar23 * 0x118;
        iVar7 = *(int *)(lVar24 + 0x38);
      }
      if (iVar7 != 0) {
        uVar8 = *(undefined4 *)(*(long *)(lVar26 + 0x20) + uVar23 * 0x38 + 0x30);
        puVar19 = *(uint **)(lVar24 + 0x30);
        puVar28 = puVar19;
        do {
          bVar11 = false;
          bVar12 = false;
          if ((float)puVar28[0x3f] < 1.0) {
            bVar11 = false;
            bVar12 = true;
            if (!NAN((float)puVar28[0x41]) && !NAN(*(float *)(lVar24 + 0x24))) {
              bVar11 = (float)puVar28[0x41] < *(float *)(lVar24 + 0x24);
              bVar12 = false;
            }
          }
          if (bVar11 != bVar12) {
            fVar35 = 0.0;
            if (0.001 <= (float)puVar28[0x3f]) {
              uVar29 = 0xc;
              uVar17 = 4;
            }
            else {
              if (puVar28 == puVar19) {
                fVar35 = *(float *)(lVar24 + 0x20);
              }
              uVar29 = 9;
              uVar17 = 2;
              if (fVar35 <= 0.0) {
                uVar17 = 1;
              }
            }
            fVar36 = (float)puVar28[0x42];
            uVar37 = puVar28[0x43];
            uVar38 = puVar28[0x44];
            puVar15 = (undefined8 *)FUN__text__00492bb0(param_2,uVar17,1);
            if (puVar15 != (undefined8 *)0x0) {
              uVar3 = *(undefined8 *)(puVar28 + 0x70);
              if (fVar36 <= fVar34) {
                fVar36 = fVar34;
              }
              fVar32 = (float)puVar28[0x3f];
              uVar9 = *puVar28;
              *puVar15 = *(undefined8 *)(puVar28 + 0x6e);
              puVar15[1] = uVar3;
              uVar3 = *(undefined8 *)(puVar28 + 0x76);
              uVar4 = *(undefined8 *)(puVar28 + 0x78);
              uVar2 = *(undefined8 *)(puVar28 + 0x72);
              uVar5 = *(undefined8 *)(puVar28 + 0x74);
              *(float *)(puVar15 + 9) = fVar31 * 100.0;
              *(uint *)(puVar15 + 0xb) = uVar37;
              *(uint *)((long)puVar15 + 0x5c) = uVar38;
              puVar15[0xe] = lVar25;
              puVar15[4] = uVar3;
              puVar15[5] = uVar4;
              puVar15[2] = uVar2;
              puVar15[3] = uVar5;
              *(undefined4 *)((long)puVar15 + 100) = uVar8;
              *(uint *)(puVar15 + 0xd) = uVar9 & 0xff000000 ^ uVar9 << 8 | uVar22 & 0xff;
              *(float *)(puVar15 + 10) = fVar32 * 100.0;
              *(float *)((long)puVar15 + 0x4c) = fVar36 * 100.0;
              *(float *)((long)puVar15 + 0x54) = fVar35 * 100.0;
              FUN__text__00480e64(plVar27,lVar26,puVar15);
              if (plVar27[0x13] != 0) {
                FUN__text__00480e30(puVar28[0x41],plVar27,lVar26,puVar15);
              }
              if (0.0 < fVar30 && iVar13 != 0) {
                lVar16 = FUN__text__00492e60(param_2,uVar29,lVar14,0);
                *(undefined4 *)(lVar16 + 0x54) = 0;
              }
              if (0.0 < fVar33 && iVar6 != 0) {
                lVar16 = FUN__text__00492e60(param_2,uVar29,lVar10,0);
                *(undefined4 *)(lVar16 + 0x54) = 0;
              }
            }
          }
          puVar19 = *(uint **)(lVar24 + 0x30);
          puVar28 = puVar28 + 0x7a;
        } while (puVar28 != puVar19 + (ulong)*(uint *)(lVar24 + 0x38) * 0x7a);
        uVar18 = (ulong)*(ushort *)(lVar26 + 0x38);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar18);
  }
  return;
}


