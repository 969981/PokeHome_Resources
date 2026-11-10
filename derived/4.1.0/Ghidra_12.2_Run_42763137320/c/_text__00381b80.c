/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00381b80; name: FUN_.text__00381b80
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00381b80(uint *param_1,uint *param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  undefined8 uVar23;
  uint *puVar24;
  uint *puVar25;
  uint local_10c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_10c = param_5;
LAB__text__00381bb4:
  puVar21 = param_2 + -8;
  puVar25 = param_2 + -0x10;
  puVar24 = param_2 + -0x18;
  puVar20 = param_1;
LAB__text__00381bc4:
  do {
    param_1 = puVar20;
    uVar17 = (long)param_2 - (long)param_1;
    uVar12 = (long)uVar17 >> 5;
    if (uVar12 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00382500 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__0038250c + (ulong)*(ushort *)(uVar12 * 2 + 0x73546c) * 4))();
      return;
    }
    if ((long)uVar17 < 0x300) {
      puVar20 = param_1 + 8;
      if ((local_10c & 1) == 0) {
        if (!(param_1 == param_2 || puVar20 == param_2)) {
          do {
            puVar21 = puVar20;
            uVar10 = param_1[8];
            if (uVar10 < *param_1) {
              uVar14 = *(undefined8 *)(param_1 + 9);
              uVar18 = *(undefined8 *)(param_1 + 0xb);
              uVar23 = *(undefined8 *)(param_1 + 0xd);
              uVar11 = param_1[0xf];
              puVar20 = puVar21;
              do {
                puVar24 = puVar20;
                puVar20 = puVar24 + -8;
                *(undefined8 *)puVar24 = *(undefined8 *)puVar20;
                *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + -6);
                *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar24 + -4);
                *(undefined8 *)(puVar24 + 6) = *(undefined8 *)(puVar24 + -2);
              } while (uVar10 < puVar24[-0x10]);
              *puVar20 = uVar10;
              puVar24[-1] = uVar11;
              *(undefined8 *)(puVar24 + -3) = uVar23;
              *(undefined8 *)(puVar24 + -5) = uVar18;
              *(undefined8 *)(puVar24 + -7) = uVar14;
            }
            puVar20 = puVar21 + 8;
            param_1 = puVar21;
          } while (puVar21 + 8 != param_2);
          return;
        }
        return;
      }
      if (param_1 == param_2 || puVar20 == param_2) {
        return;
      }
      lVar13 = 0;
      puVar21 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      FUN__text__00383140(param_1,param_2,param_2,param_3);
      return;
    }
    uVar10 = *puVar21;
    puVar20 = param_1 + (uVar12 >> 1) * 8;
    if (uVar17 < 0x1001) {
      uVar11 = *param_1;
      if (uVar11 < *puVar20) {
        if (uVar10 < uVar11) {
          local_88 = *(undefined8 *)puVar20;
          uStack_80 = *(undefined8 *)(puVar20 + 2);
          local_78 = *(undefined8 *)(puVar20 + 4);
          local_70 = *(undefined8 *)(puVar20 + 6);
          uVar14 = *(undefined8 *)puVar21;
          uVar18 = *(undefined8 *)(param_2 + -6);
          uVar23 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar20 + 6) = uVar23;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar18;
        }
        else {
          uVar14 = *(undefined8 *)puVar20;
          uVar3 = *(undefined8 *)(puVar20 + 2);
          uVar18 = *(undefined8 *)(puVar20 + 4);
          uVar4 = *(undefined8 *)(puVar20 + 6);
          uVar23 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(puVar20 + 6) = uVar6;
          *(undefined8 *)puVar20 = uVar23;
          *(undefined8 *)(puVar20 + 2) = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar18;
          *(undefined8 *)(param_1 + 6) = uVar4;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar3;
          if (*param_1 <= *puVar21) goto LAB__text__00381f30;
          local_88 = *(undefined8 *)param_1;
          uStack_80 = *(undefined8 *)(param_1 + 2);
          local_78 = *(undefined8 *)(param_1 + 4);
          local_70 = *(undefined8 *)(param_1 + 6);
          uVar14 = *(undefined8 *)puVar21;
          uVar18 = *(undefined8 *)(param_2 + -6);
          uVar23 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 6) = uVar23;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar18;
        }
        *(undefined8 *)(param_2 + -4) = local_78;
        *(undefined8 *)(param_2 + -2) = local_70;
        *(undefined8 *)puVar21 = local_88;
        *(undefined8 *)(param_2 + -6) = uStack_80;
      }
      else if (uVar10 < uVar11) {
        uVar14 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 2);
        uVar18 = *(undefined8 *)(param_1 + 4);
        uVar4 = *(undefined8 *)(param_1 + 6);
        uVar23 = *(undefined8 *)puVar21;
        uVar5 = *(undefined8 *)(param_2 + -6);
        uVar6 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 6) = uVar6;
        *(undefined8 *)param_1 = uVar23;
        *(undefined8 *)(param_1 + 2) = uVar5;
        *(undefined8 *)(param_2 + -4) = uVar18;
        *(undefined8 *)(param_2 + -2) = uVar4;
        *(undefined8 *)puVar21 = uVar14;
        *(undefined8 *)(param_2 + -6) = uVar3;
        if (*param_1 < *puVar20) {
          uVar14 = *(undefined8 *)puVar20;
          uVar3 = *(undefined8 *)(puVar20 + 2);
          uVar18 = *(undefined8 *)(puVar20 + 4);
          uVar4 = *(undefined8 *)(puVar20 + 6);
          uVar23 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(puVar20 + 6) = uVar6;
          *(undefined8 *)puVar20 = uVar23;
          *(undefined8 *)(puVar20 + 2) = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar18;
          *(undefined8 *)(param_1 + 6) = uVar4;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar3;
          uVar10 = *param_1;
          goto joined_r0x00381d7c;
        }
      }
LAB__text__00381f30:
      uVar10 = *param_1;
    }
    else {
      uVar11 = *puVar20;
      if (uVar11 < *param_1) {
        if (uVar10 < uVar11) {
          local_88 = *(undefined8 *)param_1;
          uStack_80 = *(undefined8 *)(param_1 + 2);
          local_78 = *(undefined8 *)(param_1 + 4);
          local_70 = *(undefined8 *)(param_1 + 6);
          uVar14 = *(undefined8 *)puVar21;
          uVar18 = *(undefined8 *)(param_2 + -6);
          uVar23 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 6) = uVar23;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar18;
        }
        else {
          uVar14 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar18 = *(undefined8 *)(param_1 + 4);
          uVar4 = *(undefined8 *)(param_1 + 6);
          uVar23 = *(undefined8 *)puVar20;
          uVar5 = *(undefined8 *)(puVar20 + 2);
          uVar6 = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(param_1 + 6) = uVar6;
          *(undefined8 *)param_1 = uVar23;
          *(undefined8 *)(param_1 + 2) = uVar5;
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar4;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar3;
          if (*puVar20 <= *puVar21) goto LAB__text__00381df4;
          local_88 = *(undefined8 *)puVar20;
          uStack_80 = *(undefined8 *)(puVar20 + 2);
          local_78 = *(undefined8 *)(puVar20 + 4);
          local_70 = *(undefined8 *)(puVar20 + 6);
          uVar14 = *(undefined8 *)puVar21;
          uVar18 = *(undefined8 *)(param_2 + -6);
          uVar23 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar20 + 6) = uVar23;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar18;
        }
        *(undefined8 *)(param_2 + -4) = local_78;
        *(undefined8 *)(param_2 + -2) = local_70;
        *(undefined8 *)puVar21 = local_88;
        *(undefined8 *)(param_2 + -6) = uStack_80;
      }
      else if (uVar10 < uVar11) {
        uVar14 = *(undefined8 *)puVar20;
        uVar3 = *(undefined8 *)(puVar20 + 2);
        uVar18 = *(undefined8 *)(puVar20 + 4);
        uVar4 = *(undefined8 *)(puVar20 + 6);
        uVar23 = *(undefined8 *)puVar21;
        uVar5 = *(undefined8 *)(param_2 + -6);
        uVar6 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(puVar20 + 6) = uVar6;
        *(undefined8 *)puVar20 = uVar23;
        *(undefined8 *)(puVar20 + 2) = uVar5;
        *(undefined8 *)(param_2 + -4) = uVar18;
        *(undefined8 *)(param_2 + -2) = uVar4;
        *(undefined8 *)puVar21 = uVar14;
        *(undefined8 *)(param_2 + -6) = uVar3;
        if (*puVar20 < *param_1) {
          uVar14 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar18 = *(undefined8 *)(param_1 + 4);
          uVar4 = *(undefined8 *)(param_1 + 6);
          uVar23 = *(undefined8 *)puVar20;
          uVar5 = *(undefined8 *)(puVar20 + 2);
          uVar6 = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(param_1 + 6) = uVar6;
          *(undefined8 *)param_1 = uVar23;
          *(undefined8 *)(param_1 + 2) = uVar5;
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar4;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar3;
        }
      }
LAB__text__00381df4:
      puVar16 = param_1 + 8;
      puVar15 = puVar20 + -8;
      uVar10 = *puVar15;
      if (uVar10 < *puVar16) {
        if (*puVar25 < uVar10) {
          uVar14 = *(undefined8 *)puVar16;
          uVar3 = *(undefined8 *)(param_1 + 10);
          uVar18 = *(undefined8 *)(param_1 + 0xc);
          uVar4 = *(undefined8 *)(param_1 + 0xe);
          uVar23 = *(undefined8 *)(param_2 + -0xc);
          uVar5 = *(undefined8 *)(param_2 + -10);
          uVar6 = *(undefined8 *)(param_2 + -0xe);
          *(undefined8 *)puVar16 = *(undefined8 *)puVar25;
          *(undefined8 *)(param_1 + 10) = uVar6;
          *(undefined8 *)(param_1 + 0xc) = uVar23;
          *(undefined8 *)(param_1 + 0xe) = uVar5;
          *(undefined8 *)(param_2 + -0xc) = uVar18;
          *(undefined8 *)(param_2 + -10) = uVar4;
          *(undefined8 *)puVar25 = uVar14;
          *(undefined8 *)(param_2 + -0xe) = uVar3;
        }
        else {
          uVar14 = *(undefined8 *)puVar16;
          uVar3 = *(undefined8 *)(param_1 + 10);
          uVar18 = *(undefined8 *)(param_1 + 0xc);
          uVar4 = *(undefined8 *)(param_1 + 0xe);
          uVar23 = *(undefined8 *)(puVar20 + -4);
          uVar5 = *(undefined8 *)(puVar20 + -2);
          uVar6 = *(undefined8 *)(puVar20 + -6);
          *(undefined8 *)puVar16 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + 10) = uVar6;
          *(undefined8 *)(param_1 + 0xc) = uVar23;
          *(undefined8 *)(param_1 + 0xe) = uVar5;
          *(undefined8 *)(puVar20 + -4) = uVar18;
          *(undefined8 *)(puVar20 + -2) = uVar4;
          *(undefined8 *)puVar15 = uVar14;
          *(undefined8 *)(puVar20 + -6) = uVar3;
          if (*puVar25 < (uint)uVar14) {
            uVar14 = *(undefined8 *)puVar15;
            uVar3 = *(undefined8 *)(puVar20 + -6);
            uVar18 = *(undefined8 *)(puVar20 + -4);
            uVar4 = *(undefined8 *)(puVar20 + -2);
            uVar23 = *(undefined8 *)puVar25;
            uVar5 = *(undefined8 *)(param_2 + -0xe);
            uVar6 = *(undefined8 *)(param_2 + -10);
            *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(param_2 + -0xc);
            *(undefined8 *)(puVar20 + -2) = uVar6;
            *(undefined8 *)puVar15 = uVar23;
            *(undefined8 *)(puVar20 + -6) = uVar5;
            *(undefined8 *)(param_2 + -0xc) = uVar18;
            *(undefined8 *)(param_2 + -10) = uVar4;
            *(undefined8 *)puVar25 = uVar14;
            *(undefined8 *)(param_2 + -0xe) = uVar3;
          }
        }
      }
      else if (*puVar25 < uVar10) {
        uVar14 = *(undefined8 *)puVar15;
        uVar3 = *(undefined8 *)(puVar20 + -6);
        uVar18 = *(undefined8 *)(puVar20 + -4);
        uVar4 = *(undefined8 *)(puVar20 + -2);
        uVar23 = *(undefined8 *)puVar25;
        uVar5 = *(undefined8 *)(param_2 + -0xe);
        uVar6 = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(param_2 + -0xc);
        *(undefined8 *)(puVar20 + -2) = uVar6;
        *(undefined8 *)puVar15 = uVar23;
        *(undefined8 *)(puVar20 + -6) = uVar5;
        *(undefined8 *)(param_2 + -0xc) = uVar18;
        *(undefined8 *)(param_2 + -10) = uVar4;
        *(undefined8 *)puVar25 = uVar14;
        *(undefined8 *)(param_2 + -0xe) = uVar3;
        if (*puVar15 < *puVar16) {
          uVar14 = *(undefined8 *)puVar16;
          uVar3 = *(undefined8 *)(param_1 + 10);
          uVar18 = *(undefined8 *)(param_1 + 0xc);
          uVar4 = *(undefined8 *)(param_1 + 0xe);
          uVar23 = *(undefined8 *)(puVar20 + -4);
          uVar5 = *(undefined8 *)(puVar20 + -2);
          uVar6 = *(undefined8 *)(puVar20 + -6);
          *(undefined8 *)puVar16 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + 10) = uVar6;
          *(undefined8 *)(param_1 + 0xc) = uVar23;
          *(undefined8 *)(param_1 + 0xe) = uVar5;
          *(undefined8 *)(puVar20 + -4) = uVar18;
          *(undefined8 *)(puVar20 + -2) = uVar4;
          *(undefined8 *)puVar15 = uVar14;
          *(undefined8 *)(puVar20 + -6) = uVar3;
        }
      }
      puVar16 = puVar20 + 8;
      uVar10 = *puVar16;
      puVar19 = param_1 + 0x10;
      if (uVar10 < *puVar19) {
        if (*puVar24 < uVar10) {
          uVar14 = *(undefined8 *)puVar19;
          uVar3 = *(undefined8 *)(param_1 + 0x12);
          uVar18 = *(undefined8 *)(param_1 + 0x14);
          uVar4 = *(undefined8 *)(param_1 + 0x16);
          uVar23 = *(undefined8 *)(param_2 + -0x14);
          uVar5 = *(undefined8 *)(param_2 + -0x12);
          uVar6 = *(undefined8 *)(param_2 + -0x16);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar24;
          *(undefined8 *)(param_1 + 0x12) = uVar6;
          *(undefined8 *)(param_1 + 0x14) = uVar23;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)(param_2 + -0x14) = uVar18;
          *(undefined8 *)(param_2 + -0x12) = uVar4;
          *(undefined8 *)puVar24 = uVar14;
          *(undefined8 *)(param_2 + -0x16) = uVar3;
        }
        else {
          uVar14 = *(undefined8 *)puVar19;
          uVar3 = *(undefined8 *)(param_1 + 0x12);
          uVar18 = *(undefined8 *)(param_1 + 0x14);
          uVar4 = *(undefined8 *)(param_1 + 0x16);
          uVar23 = *(undefined8 *)(puVar20 + 0xc);
          uVar5 = *(undefined8 *)(puVar20 + 0xe);
          uVar6 = *(undefined8 *)(puVar20 + 10);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar16;
          *(undefined8 *)(param_1 + 0x12) = uVar6;
          *(undefined8 *)(param_1 + 0x14) = uVar23;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)(puVar20 + 0xc) = uVar18;
          *(undefined8 *)(puVar20 + 0xe) = uVar4;
          *(undefined8 *)puVar16 = uVar14;
          *(undefined8 *)(puVar20 + 10) = uVar3;
          if (*puVar24 < (uint)uVar14) {
            uVar14 = *(undefined8 *)puVar16;
            uVar3 = *(undefined8 *)(puVar20 + 10);
            uVar18 = *(undefined8 *)(puVar20 + 0xc);
            uVar4 = *(undefined8 *)(puVar20 + 0xe);
            uVar23 = *(undefined8 *)puVar24;
            uVar5 = *(undefined8 *)(param_2 + -0x16);
            uVar6 = *(undefined8 *)(param_2 + -0x12);
            *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(param_2 + -0x14);
            *(undefined8 *)(puVar20 + 0xe) = uVar6;
            *(undefined8 *)puVar16 = uVar23;
            *(undefined8 *)(puVar20 + 10) = uVar5;
            *(undefined8 *)(param_2 + -0x14) = uVar18;
            *(undefined8 *)(param_2 + -0x12) = uVar4;
            *(undefined8 *)puVar24 = uVar14;
            *(undefined8 *)(param_2 + -0x16) = uVar3;
          }
        }
      }
      else if (*puVar24 < uVar10) {
        uVar14 = *(undefined8 *)puVar16;
        uVar3 = *(undefined8 *)(puVar20 + 10);
        uVar18 = *(undefined8 *)(puVar20 + 0xc);
        uVar4 = *(undefined8 *)(puVar20 + 0xe);
        uVar23 = *(undefined8 *)puVar24;
        uVar5 = *(undefined8 *)(param_2 + -0x16);
        uVar6 = *(undefined8 *)(param_2 + -0x12);
        *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(param_2 + -0x14);
        *(undefined8 *)(puVar20 + 0xe) = uVar6;
        *(undefined8 *)puVar16 = uVar23;
        *(undefined8 *)(puVar20 + 10) = uVar5;
        *(undefined8 *)(param_2 + -0x14) = uVar18;
        *(undefined8 *)(param_2 + -0x12) = uVar4;
        *(undefined8 *)puVar24 = uVar14;
        *(undefined8 *)(param_2 + -0x16) = uVar3;
        if (*puVar16 < *puVar19) {
          uVar14 = *(undefined8 *)puVar19;
          uVar3 = *(undefined8 *)(param_1 + 0x12);
          uVar18 = *(undefined8 *)(param_1 + 0x14);
          uVar4 = *(undefined8 *)(param_1 + 0x16);
          uVar23 = *(undefined8 *)(puVar20 + 0xc);
          uVar5 = *(undefined8 *)(puVar20 + 0xe);
          uVar6 = *(undefined8 *)(puVar20 + 10);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar16;
          *(undefined8 *)(param_1 + 0x12) = uVar6;
          *(undefined8 *)(param_1 + 0x14) = uVar23;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)(puVar20 + 0xc) = uVar18;
          *(undefined8 *)(puVar20 + 0xe) = uVar4;
          *(undefined8 *)puVar16 = uVar14;
          *(undefined8 *)(puVar20 + 10) = uVar3;
        }
      }
      uVar10 = *puVar20;
      if (uVar10 < *puVar15) {
        if (*puVar16 < uVar10) {
          local_88 = *(undefined8 *)puVar15;
          uStack_80 = *(undefined8 *)(puVar20 + -6);
          local_78 = *(undefined8 *)(puVar20 + -4);
          local_70 = *(undefined8 *)(puVar20 + -2);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar20 + -6) = *(undefined8 *)(puVar20 + 10);
          *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + 0xc);
          *(undefined8 *)(puVar20 + -2) = *(undefined8 *)(puVar20 + 0xe);
        }
        else {
          uVar14 = *(undefined8 *)puVar15;
          uVar23 = *(undefined8 *)(puVar20 + -6);
          uVar18 = *(undefined8 *)(puVar20 + -4);
          uVar3 = *(undefined8 *)(puVar20 + -2);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar20 + -6) = *(undefined8 *)(puVar20 + 2);
          *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(puVar20 + -2) = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar3;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar23;
          if ((uint)uVar14 <= *puVar16) goto LAB__text__0038220c;
          local_88 = *(undefined8 *)puVar20;
          uStack_80 = *(undefined8 *)(puVar20 + 2);
          local_78 = *(undefined8 *)(puVar20 + 4);
          local_70 = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)puVar20 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 10);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 0xc);
          *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar20 + 0xe);
        }
        *(undefined8 *)(puVar20 + 0xc) = local_78;
        *(undefined8 *)(puVar20 + 0xe) = local_70;
        *(undefined8 *)puVar16 = local_88;
        *(undefined8 *)(puVar20 + 10) = uStack_80;
      }
      else if (*puVar16 < uVar10) {
        uVar14 = *(undefined8 *)puVar20;
        uVar23 = *(undefined8 *)(puVar20 + 2);
        uVar18 = *(undefined8 *)(puVar20 + 4);
        uVar3 = *(undefined8 *)(puVar20 + 6);
        *(undefined8 *)puVar20 = *(undefined8 *)puVar16;
        *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 10);
        *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 0xc);
        *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar20 + 0xe);
        *(undefined8 *)(puVar20 + 0xc) = uVar18;
        *(undefined8 *)(puVar20 + 0xe) = uVar3;
        *(undefined8 *)puVar16 = uVar14;
        *(undefined8 *)(puVar20 + 10) = uVar23;
        if (*puVar20 < *puVar15) {
          uVar14 = *(undefined8 *)puVar15;
          uVar23 = *(undefined8 *)(puVar20 + -6);
          uVar18 = *(undefined8 *)(puVar20 + -4);
          uVar3 = *(undefined8 *)(puVar20 + -2);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar20 + -6) = *(undefined8 *)(puVar20 + 2);
          *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(puVar20 + -2) = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar3;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar23;
        }
      }
LAB__text__0038220c:
      uVar14 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar18 = *(undefined8 *)(param_1 + 4);
      uVar4 = *(undefined8 *)(param_1 + 6);
      uVar23 = *(undefined8 *)puVar20;
      uVar5 = *(undefined8 *)(puVar20 + 2);
      uVar6 = *(undefined8 *)(puVar20 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + 4);
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)param_1 = uVar23;
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined8 *)(puVar20 + 4) = uVar18;
      *(undefined8 *)(puVar20 + 6) = uVar4;
      *(undefined8 *)puVar20 = uVar14;
      *(undefined8 *)(puVar20 + 2) = uVar3;
      uVar10 = *param_1;
    }
joined_r0x00381d7c:
    if (((local_10c & 1) != 0) || (param_1[-8] < uVar10)) {
      param_4 = param_4 + -1;
      uVar14 = *(undefined8 *)(param_1 + 1);
      uVar18 = *(undefined8 *)(param_1 + 3);
      uVar23 = *(undefined8 *)(param_1 + 5);
      uVar11 = param_1[7];
      lVar13 = 0;
      do {
        lVar1 = lVar13 + 0x20;
        lVar22 = lVar13 + 0x20;
        lVar13 = lVar1;
      } while (*(uint *)((long)param_1 + lVar22) < uVar10);
      puVar15 = (uint *)((long)param_1 + lVar1);
      puVar16 = param_2;
      if (lVar1 == 0x20) {
        do {
          if (puVar16 <= puVar15) break;
          puVar16 = puVar16 + -8;
        } while (uVar10 <= *puVar16);
      }
      else {
        do {
          puVar16 = puVar16 + -8;
        } while (uVar10 <= *puVar16);
      }
      puVar20 = puVar15;
      if (puVar15 < puVar16) {
        puVar19 = puVar16;
        do {
          uVar3 = *(undefined8 *)puVar20;
          uVar6 = *(undefined8 *)(puVar20 + 2);
          uVar4 = *(undefined8 *)(puVar20 + 4);
          uVar7 = *(undefined8 *)(puVar20 + 6);
          uVar5 = *(undefined8 *)puVar19;
          uVar8 = *(undefined8 *)(puVar19 + 2);
          uVar9 = *(undefined8 *)(puVar19 + 6);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar19 + 4);
          *(undefined8 *)(puVar20 + 6) = uVar9;
          *(undefined8 *)puVar20 = uVar5;
          *(undefined8 *)(puVar20 + 2) = uVar8;
          *(undefined8 *)(puVar19 + 4) = uVar4;
          *(undefined8 *)(puVar19 + 6) = uVar7;
          *(undefined8 *)puVar19 = uVar3;
          *(undefined8 *)(puVar19 + 2) = uVar6;
          do {
            puVar20 = puVar20 + 8;
          } while (*puVar20 < uVar10);
          do {
            puVar19 = puVar19 + -8;
          } while (uVar10 <= *puVar19);
        } while (puVar20 < puVar19);
      }
      puVar19 = puVar20 + -8;
      if (puVar19 != param_1) {
        uVar3 = *(undefined8 *)puVar19;
        uVar4 = *(undefined8 *)(puVar20 + -6);
        uVar5 = *(undefined8 *)(puVar20 + -2);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + -4);
        *(undefined8 *)(param_1 + 6) = uVar5;
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 2) = uVar4;
      }
      puVar20[-8] = uVar10;
      puVar20[-1] = uVar11;
      *(undefined8 *)(puVar20 + -3) = uVar23;
      *(undefined8 *)(puVar20 + -5) = uVar18;
      *(undefined8 *)(puVar20 + -7) = uVar14;
      if (puVar16 <= puVar15) {
        uVar12 = FUN__text__003829e0(param_1,puVar19,param_3);
        uVar17 = FUN__text__003829e0(puVar20,param_2,param_3);
        if ((uVar17 & 1) != 0) goto LAB__text__003824e8;
        if ((uVar12 & 1) != 0) goto LAB__text__00381bc4;
      }
      FUN__text__00381b80(param_1,puVar19,param_3,param_4,local_10c & 1);
      local_10c = 0;
      goto LAB__text__00381bc4;
    }
    uVar14 = *(undefined8 *)(param_1 + 1);
    uVar18 = *(undefined8 *)(param_1 + 3);
    uVar23 = *(undefined8 *)(param_1 + 5);
    uVar11 = param_1[7];
    puVar20 = param_1;
    if (uVar10 < param_2[-8]) {
      do {
        puVar20 = puVar20 + 8;
      } while (*puVar20 <= uVar10);
    }
    else {
      do {
        puVar20 = puVar20 + 8;
        if (param_2 <= puVar20) break;
      } while (*puVar20 <= uVar10);
    }
    puVar15 = param_2;
    if (puVar20 < param_2) {
      do {
        puVar15 = puVar15 + -8;
      } while (uVar10 < *puVar15);
    }
    while (puVar20 < puVar15) {
      uVar3 = *(undefined8 *)puVar20;
      uVar6 = *(undefined8 *)(puVar20 + 2);
      uVar4 = *(undefined8 *)(puVar20 + 4);
      uVar7 = *(undefined8 *)(puVar20 + 6);
      uVar5 = *(undefined8 *)puVar15;
      uVar8 = *(undefined8 *)(puVar15 + 2);
      uVar9 = *(undefined8 *)(puVar15 + 6);
      *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar15 + 4);
      *(undefined8 *)(puVar20 + 6) = uVar9;
      *(undefined8 *)puVar20 = uVar5;
      *(undefined8 *)(puVar20 + 2) = uVar8;
      *(undefined8 *)(puVar15 + 4) = uVar4;
      *(undefined8 *)(puVar15 + 6) = uVar7;
      *(undefined8 *)puVar15 = uVar3;
      *(undefined8 *)(puVar15 + 2) = uVar6;
      do {
        puVar20 = puVar20 + 8;
      } while (*puVar20 <= uVar10);
      do {
        puVar15 = puVar15 + -8;
      } while (uVar10 < *puVar15);
    }
    if (puVar20 + -8 != param_1) {
      uVar3 = *(undefined8 *)(puVar20 + -8);
      uVar4 = *(undefined8 *)(puVar20 + -6);
      uVar5 = *(undefined8 *)(puVar20 + -2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + -4);
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar4;
    }
    puVar20[-8] = uVar10;
    local_10c = 0;
    puVar20[-1] = uVar11;
    *(undefined8 *)(puVar20 + -3) = uVar23;
    *(undefined8 *)(puVar20 + -5) = uVar18;
    *(undefined8 *)(puVar20 + -7) = uVar14;
    param_4 = param_4 + -1;
  } while( true );
LAB__text__00382668:
  puVar24 = puVar20;
  uVar10 = puVar21[8];
  if (uVar10 < *puVar21) {
    uVar14 = *(undefined8 *)(puVar21 + 9);
    uVar18 = *(undefined8 *)(puVar21 + 0xb);
    uVar23 = *(undefined8 *)(puVar21 + 0xd);
    uVar11 = puVar21[0xf];
    lVar1 = lVar13;
    do {
      lVar22 = lVar1;
      puVar2 = (undefined8 *)((long)param_1 + lVar22);
      puVar2[4] = *puVar2;
      puVar2[5] = puVar2[1];
      puVar2[6] = puVar2[2];
      puVar2[7] = puVar2[3];
      if (lVar22 == 0) {
        puVar20 = param_1;
        goto LAB__text__00382634;
      }
      lVar1 = lVar22 + -0x20;
    } while (uVar10 < *(uint *)(puVar2 + -4));
    puVar20 = (uint *)((long)param_1 + lVar22);
LAB__text__00382634:
    *puVar20 = uVar10;
    puVar20[7] = uVar11;
    *(undefined8 *)(puVar20 + 5) = uVar23;
    *(undefined8 *)(puVar20 + 3) = uVar18;
    *(undefined8 *)(puVar20 + 1) = uVar14;
  }
  puVar20 = puVar24 + 8;
  lVar13 = lVar13 + 0x20;
  puVar21 = puVar24;
  if (puVar20 == param_2) {
    return;
  }
  goto LAB__text__00382668;
LAB__text__003824e8:
  param_2 = puVar19;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB__text__00381bb4;
}


