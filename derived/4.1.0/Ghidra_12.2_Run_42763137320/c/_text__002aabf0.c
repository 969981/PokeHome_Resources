/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002aabf0; name: FUN_.text__002aabf0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__002aabf0(uint *param_1,uint *param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint *puVar27;
  uint *puVar28;
  uint local_c4;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined1 local_68;
  
  local_c4 = param_5;
LAB__text__002aac24:
  puVar20 = param_2 + -0xc;
  puVar28 = param_2 + -0x18;
  puVar27 = param_2 + -0x24;
  puVar19 = param_1;
LAB__text__002aac34:
  do {
    param_1 = puVar19;
    uVar16 = (long)param_2 - (long)param_1;
    uVar11 = ((long)uVar16 >> 4) * -0x5555555555555555;
    if (uVar11 < 6) {
                    /* WARNING: Could not recover jumptable at 0x002ab9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__002ab9f4 +
                (ulong)*(ushort *)(((long)uVar16 >> 4) * 0x5555555555555556 + 0x7333a2) * 4))();
      return;
    }
    if ((long)uVar16 < 0x480) {
      puVar19 = param_1 + 0xc;
      if ((local_c4 & 1) == 0) {
        if (!(param_1 == param_2 || puVar19 == param_2)) {
          do {
            puVar20 = puVar19;
            uVar9 = param_1[0xc];
            if (uVar9 < *param_1) {
              uVar13 = *(undefined8 *)(param_1 + 0x11);
              uVar23 = *(undefined8 *)(param_1 + 0x13);
              uVar25 = *(undefined8 *)(param_1 + 0xd);
              uStack_73 = (undefined3)((ulong)uVar23 >> 0x28);
              uVar17 = *(undefined8 *)(param_1 + 0xf);
              local_70 = (undefined5)*(undefined8 *)(param_1 + 0x15);
              puVar19 = puVar20;
              do {
                puVar27 = puVar19;
                *(undefined8 *)(puVar27 + 8) = *(undefined8 *)(puVar27 + -4);
                *(char *)(puVar27 + 10) = (char)puVar27[-2];
                *(undefined8 *)(puVar27 + 4) = *(undefined8 *)(puVar27 + -8);
                *(undefined8 *)(puVar27 + 6) = *(undefined8 *)(puVar27 + -6);
                puVar19 = puVar27 + -0xc;
                *(undefined8 *)puVar27 = *(undefined8 *)puVar19;
                *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar27 + -10);
              } while (uVar9 < puVar27[-0x18]);
              *puVar19 = uVar9;
              *(undefined8 *)(puVar27 + -0xb) = uVar25;
              *(ulong *)((long)puVar27 - 0xf) = CONCAT53(local_70,uStack_73);
              *(undefined8 *)(puVar27 + -5) = uVar23;
              *(undefined8 *)(puVar27 + -7) = uVar13;
              *(undefined8 *)(puVar27 + -9) = uVar17;
            }
            puVar19 = puVar20 + 0xc;
            param_1 = puVar20;
          } while (puVar20 + 0xc != param_2);
          return;
        }
        return;
      }
      if (param_1 == param_2 || puVar19 == param_2) {
        return;
      }
      lVar12 = 0;
      puVar20 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      FUN__text__002ace50(param_1,param_2,param_2,param_3);
      return;
    }
    uVar11 = uVar11 >> 1;
    uVar9 = *puVar20;
    puVar19 = param_1 + uVar11 * 0xc;
    if (uVar16 < 0x1801) {
      uVar10 = *param_1;
      if (uVar10 < *puVar19) {
        if (uVar9 < uVar10) {
          local_90 = *(undefined8 *)puVar19;
          local_88 = *(undefined8 *)(puVar19 + 2);
          local_80 = *(undefined8 *)(puVar19 + 4);
          local_68 = (undefined1)*(undefined8 *)(puVar19 + 10);
          local_70 = (undefined5)*(undefined8 *)(puVar19 + 8);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(puVar19 + 6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(puVar19 + 6) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -6);
          uVar17 = *(undefined8 *)(param_2 + -4);
          uVar23 = *(undefined8 *)(param_2 + -8);
          *(char *)(puVar19 + 10) = (char)param_2[-2];
          *(undefined8 *)(puVar19 + 6) = uVar13;
          *(undefined8 *)(puVar19 + 8) = uVar17;
          *(undefined8 *)(puVar19 + 4) = uVar23;
          uVar13 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar19 + 2) = uVar13;
        }
        else {
          uVar13 = *(undefined8 *)puVar19;
          uVar3 = *(undefined8 *)(puVar19 + 2);
          uVar17 = *(undefined8 *)(puVar19 + 4);
          uVar4 = *(undefined8 *)(puVar19 + 6);
          uVar23 = *(undefined8 *)(puVar19 + 8);
          uVar24 = *(undefined8 *)(puVar19 + 10);
          uVar25 = *(undefined8 *)(param_1 + 6);
          uVar5 = *(undefined8 *)(param_1 + 8);
          uVar22 = *(undefined8 *)(param_1 + 4);
          *(char *)(puVar19 + 10) = (char)param_1[10];
          *(undefined8 *)(puVar19 + 6) = uVar25;
          *(undefined8 *)(puVar19 + 8) = uVar5;
          *(undefined8 *)(puVar19 + 4) = uVar22;
          uVar25 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)param_1;
          *(undefined8 *)(puVar19 + 2) = uVar25;
          *(undefined8 *)param_1 = uVar13;
          *(undefined8 *)(param_1 + 2) = uVar3;
          local_68 = (undefined1)uVar24;
          *(undefined1 *)(param_1 + 10) = local_68;
          *(undefined8 *)(param_1 + 6) = uVar4;
          *(undefined8 *)(param_1 + 8) = uVar23;
          *(undefined8 *)(param_1 + 4) = uVar17;
          if (*param_1 <= *puVar20) goto LAB__text__002ab180;
          local_90 = *(undefined8 *)param_1;
          local_88 = *(undefined8 *)(param_1 + 2);
          local_80 = *(undefined8 *)(param_1 + 4);
          local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
          local_70 = (undefined5)*(undefined8 *)(param_1 + 8);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 8) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(param_1 + 6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 6) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -6);
          uVar17 = *(undefined8 *)(param_2 + -4);
          uVar23 = *(undefined8 *)(param_2 + -8);
          *(char *)(param_1 + 10) = (char)param_2[-2];
          *(undefined8 *)(param_1 + 6) = uVar13;
          *(undefined8 *)(param_1 + 8) = uVar17;
          *(undefined8 *)(param_1 + 4) = uVar23;
          uVar13 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)param_1 = *(undefined8 *)puVar20;
          *(undefined8 *)(param_1 + 2) = uVar13;
        }
        *(undefined8 *)puVar20 = local_90;
        *(undefined8 *)(param_2 + -10) = local_88;
        *(undefined1 *)(param_2 + -2) = local_68;
        *(ulong *)(param_2 + -6) = CONCAT35(uStack_73,local_78);
        *(ulong *)(param_2 + -4) = CONCAT35(uStack_6b,local_70);
        *(undefined8 *)(param_2 + -8) = local_80;
      }
      else if (uVar9 < uVar10) {
        uVar13 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 2);
        uVar17 = *(undefined8 *)(param_1 + 4);
        uVar4 = *(undefined8 *)(param_1 + 6);
        uVar23 = *(undefined8 *)(param_1 + 8);
        uVar24 = *(undefined8 *)(param_1 + 10);
        uVar25 = *(undefined8 *)(param_2 + -6);
        uVar5 = *(undefined8 *)(param_2 + -4);
        uVar22 = *(undefined8 *)(param_2 + -8);
        *(char *)(param_1 + 10) = (char)param_2[-2];
        *(undefined8 *)(param_1 + 6) = uVar25;
        *(undefined8 *)(param_1 + 8) = uVar5;
        *(undefined8 *)(param_1 + 4) = uVar22;
        uVar25 = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)param_1 = *(undefined8 *)puVar20;
        *(undefined8 *)(param_1 + 2) = uVar25;
        *(undefined8 *)puVar20 = uVar13;
        *(undefined8 *)(param_2 + -10) = uVar3;
        local_68 = (undefined1)uVar24;
        *(undefined1 *)(param_2 + -2) = local_68;
        *(undefined8 *)(param_2 + -6) = uVar4;
        *(undefined8 *)(param_2 + -4) = uVar23;
        *(undefined8 *)(param_2 + -8) = uVar17;
        if (*param_1 < *puVar19) {
          uVar13 = *(undefined8 *)puVar19;
          uVar3 = *(undefined8 *)(puVar19 + 2);
          uVar17 = *(undefined8 *)(puVar19 + 4);
          uVar4 = *(undefined8 *)(puVar19 + 6);
          uVar23 = *(undefined8 *)(puVar19 + 8);
          uVar24 = *(undefined8 *)(puVar19 + 10);
          uVar25 = *(undefined8 *)(param_1 + 6);
          uVar5 = *(undefined8 *)(param_1 + 8);
          uVar22 = *(undefined8 *)(param_1 + 4);
          *(char *)(puVar19 + 10) = (char)param_1[10];
          *(undefined8 *)(puVar19 + 6) = uVar25;
          *(undefined8 *)(puVar19 + 8) = uVar5;
          *(undefined8 *)(puVar19 + 4) = uVar22;
          uVar25 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)param_1;
          *(undefined8 *)(puVar19 + 2) = uVar25;
          *(undefined8 *)param_1 = uVar13;
          *(undefined8 *)(param_1 + 2) = uVar3;
          local_68 = (undefined1)uVar24;
          *(undefined1 *)(param_1 + 10) = local_68;
          *(undefined8 *)(param_1 + 6) = uVar4;
          *(undefined8 *)(param_1 + 8) = uVar23;
          *(undefined8 *)(param_1 + 4) = uVar17;
          uVar9 = *param_1;
          goto joined_r0x002aaec4;
        }
      }
LAB__text__002ab180:
      uVar9 = *param_1;
    }
    else {
      uVar10 = *puVar19;
      if (uVar10 < *param_1) {
        if (uVar9 < uVar10) {
          local_90 = *(undefined8 *)param_1;
          local_88 = *(undefined8 *)(param_1 + 2);
          local_80 = *(undefined8 *)(param_1 + 4);
          local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
          local_70 = (undefined5)*(undefined8 *)(param_1 + 8);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 8) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(param_1 + 6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 6) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -6);
          uVar17 = *(undefined8 *)(param_2 + -4);
          uVar23 = *(undefined8 *)(param_2 + -8);
          *(char *)(param_1 + 10) = (char)param_2[-2];
          *(undefined8 *)(param_1 + 6) = uVar13;
          *(undefined8 *)(param_1 + 8) = uVar17;
          *(undefined8 *)(param_1 + 4) = uVar23;
          uVar13 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)param_1 = *(undefined8 *)puVar20;
          *(undefined8 *)(param_1 + 2) = uVar13;
        }
        else {
          uVar13 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar17 = *(undefined8 *)(param_1 + 4);
          uVar4 = *(undefined8 *)(param_1 + 6);
          uVar23 = *(undefined8 *)(param_1 + 8);
          uVar24 = *(undefined8 *)(param_1 + 10);
          uVar25 = *(undefined8 *)(puVar19 + 6);
          uVar5 = *(undefined8 *)(puVar19 + 8);
          uVar22 = *(undefined8 *)(puVar19 + 4);
          *(char *)(param_1 + 10) = (char)puVar19[10];
          *(undefined8 *)(param_1 + 6) = uVar25;
          *(undefined8 *)(param_1 + 8) = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar22;
          uVar25 = *(undefined8 *)(puVar19 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)puVar19;
          *(undefined8 *)(param_1 + 2) = uVar25;
          *(undefined8 *)puVar19 = uVar13;
          *(undefined8 *)(puVar19 + 2) = uVar3;
          local_68 = (undefined1)uVar24;
          *(undefined1 *)(puVar19 + 10) = local_68;
          *(undefined8 *)(puVar19 + 6) = uVar4;
          *(undefined8 *)(puVar19 + 8) = uVar23;
          *(undefined8 *)(puVar19 + 4) = uVar17;
          if (*puVar19 <= *puVar20) goto LAB__text__002aaf8c;
          local_90 = *(undefined8 *)puVar19;
          local_88 = *(undefined8 *)(puVar19 + 2);
          local_80 = *(undefined8 *)(puVar19 + 4);
          local_68 = (undefined1)*(undefined8 *)(puVar19 + 10);
          local_70 = (undefined5)*(undefined8 *)(puVar19 + 8);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(puVar19 + 6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(puVar19 + 6) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -6);
          uVar17 = *(undefined8 *)(param_2 + -4);
          uVar23 = *(undefined8 *)(param_2 + -8);
          *(char *)(puVar19 + 10) = (char)param_2[-2];
          *(undefined8 *)(puVar19 + 6) = uVar13;
          *(undefined8 *)(puVar19 + 8) = uVar17;
          *(undefined8 *)(puVar19 + 4) = uVar23;
          uVar13 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar19 + 2) = uVar13;
        }
        *(undefined8 *)puVar20 = local_90;
        *(undefined8 *)(param_2 + -10) = local_88;
        *(undefined1 *)(param_2 + -2) = local_68;
        *(ulong *)(param_2 + -6) = CONCAT35(uStack_73,local_78);
        *(ulong *)(param_2 + -4) = CONCAT35(uStack_6b,local_70);
        *(undefined8 *)(param_2 + -8) = local_80;
      }
      else if (uVar9 < uVar10) {
        uVar13 = *(undefined8 *)puVar19;
        uVar3 = *(undefined8 *)(puVar19 + 2);
        uVar17 = *(undefined8 *)(puVar19 + 4);
        uVar4 = *(undefined8 *)(puVar19 + 6);
        uVar23 = *(undefined8 *)(puVar19 + 8);
        uVar24 = *(undefined8 *)(puVar19 + 10);
        uVar25 = *(undefined8 *)(param_2 + -6);
        uVar5 = *(undefined8 *)(param_2 + -4);
        uVar22 = *(undefined8 *)(param_2 + -8);
        *(char *)(puVar19 + 10) = (char)param_2[-2];
        *(undefined8 *)(puVar19 + 6) = uVar25;
        *(undefined8 *)(puVar19 + 8) = uVar5;
        *(undefined8 *)(puVar19 + 4) = uVar22;
        uVar25 = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)puVar19 = *(undefined8 *)puVar20;
        *(undefined8 *)(puVar19 + 2) = uVar25;
        *(undefined8 *)puVar20 = uVar13;
        *(undefined8 *)(param_2 + -10) = uVar3;
        local_68 = (undefined1)uVar24;
        *(undefined1 *)(param_2 + -2) = local_68;
        *(undefined8 *)(param_2 + -6) = uVar4;
        *(undefined8 *)(param_2 + -4) = uVar23;
        *(undefined8 *)(param_2 + -8) = uVar17;
        if (*puVar19 < *param_1) {
          uVar13 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar17 = *(undefined8 *)(param_1 + 4);
          uVar4 = *(undefined8 *)(param_1 + 6);
          uVar23 = *(undefined8 *)(param_1 + 8);
          uVar24 = *(undefined8 *)(param_1 + 10);
          uVar25 = *(undefined8 *)(puVar19 + 6);
          uVar5 = *(undefined8 *)(puVar19 + 8);
          uVar22 = *(undefined8 *)(puVar19 + 4);
          *(char *)(param_1 + 10) = (char)puVar19[10];
          *(undefined8 *)(param_1 + 6) = uVar25;
          *(undefined8 *)(param_1 + 8) = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar22;
          uVar25 = *(undefined8 *)(puVar19 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)puVar19;
          *(undefined8 *)(param_1 + 2) = uVar25;
          *(undefined8 *)puVar19 = uVar13;
          *(undefined8 *)(puVar19 + 2) = uVar3;
          local_68 = (undefined1)uVar24;
          *(undefined1 *)(puVar19 + 10) = local_68;
          *(undefined8 *)(puVar19 + 6) = uVar4;
          *(undefined8 *)(puVar19 + 8) = uVar23;
          *(undefined8 *)(puVar19 + 4) = uVar17;
        }
      }
LAB__text__002aaf8c:
      puVar15 = param_1 + 0xc;
      puVar14 = param_1 + uVar11 * 0xc + -0xc;
      uVar9 = *puVar14;
      if (uVar9 < *puVar15) {
        if (*puVar28 < uVar9) {
          local_80 = *(undefined8 *)(param_1 + 0x10);
          local_68 = (undefined1)*(undefined8 *)(param_1 + 0x16);
          local_78 = (undefined5)*(undefined8 *)(param_1 + 0x12);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x28);
          local_90 = *(undefined8 *)puVar15;
          local_88 = *(undefined8 *)(param_1 + 0xe);
          local_70 = (undefined5)*(undefined8 *)(param_1 + 0x14);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -0x16);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar28;
          *(undefined8 *)(param_1 + 0xe) = uVar13;
          uVar13 = *(undefined8 *)(param_2 + -0x12);
          uVar17 = *(undefined8 *)(param_2 + -0x10);
          uVar23 = *(undefined8 *)(param_2 + -0x14);
          *(char *)(param_1 + 0x16) = (char)param_2[-0xe];
          *(undefined8 *)(param_1 + 0x12) = uVar13;
          *(undefined8 *)(param_1 + 0x14) = uVar17;
          *(undefined8 *)(param_1 + 0x10) = uVar23;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = *(undefined8 *)(param_1 + 0x12);
          uVar17 = *(undefined8 *)(param_1 + 0x14);
          uVar4 = *(undefined8 *)(param_1 + 0x16);
          uVar23 = *(undefined8 *)puVar15;
          uVar24 = *(undefined8 *)(param_1 + 0xe);
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar14;
          *(undefined8 *)(param_1 + 0xe) = uVar25;
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + -6);
          uVar5 = *(undefined8 *)(param_1 + uVar11 * 0xc + -4);
          uVar22 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
          *(char *)(param_1 + 0x16) = (char)param_1[uVar11 * 0xc + -2];
          *(undefined8 *)(param_1 + 0x12) = uVar25;
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar22;
          *(undefined8 *)puVar14 = uVar23;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -10) = uVar24;
          local_68 = (undefined1)uVar4;
          *(undefined1 *)(param_1 + uVar11 * 0xc + -2) = local_68;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -6) = uVar3;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -4) = uVar17;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -8) = uVar13;
          if (*puVar14 <= *puVar28) goto LAB__text__002ab254;
          local_90 = *(undefined8 *)puVar14;
          local_88 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
          local_80 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
          local_68 = (undefined1)*(undefined8 *)(param_1 + uVar11 * 0xc + -2);
          local_70 = (undefined5)*(undefined8 *)(param_1 + uVar11 * 0xc + -4);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + uVar11 * 0xc + -4) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(param_1 + uVar11 * 0xc + -6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + uVar11 * 0xc + -6) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -0x12);
          uVar17 = *(undefined8 *)(param_2 + -0x10);
          uVar23 = *(undefined8 *)(param_2 + -0x14);
          *(char *)(param_1 + uVar11 * 0xc + -2) = (char)param_2[-0xe];
          *(undefined8 *)(param_1 + uVar11 * 0xc + -6) = uVar13;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -4) = uVar17;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -8) = uVar23;
          uVar13 = *(undefined8 *)(param_2 + -0x16);
          *(undefined8 *)puVar14 = *(undefined8 *)puVar28;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -10) = uVar13;
        }
        *(undefined8 *)puVar28 = local_90;
        *(undefined8 *)(param_2 + -0x16) = local_88;
        *(undefined1 *)(param_2 + -0xe) = local_68;
        *(ulong *)(param_2 + -0x12) = CONCAT35(uStack_73,local_78);
        *(ulong *)(param_2 + -0x10) = CONCAT35(uStack_6b,local_70);
        *(undefined8 *)(param_2 + -0x14) = local_80;
      }
      else if (*puVar28 < uVar9) {
        uVar13 = *(undefined8 *)puVar14;
        uVar3 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
        uVar17 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
        uVar4 = *(undefined8 *)(param_1 + uVar11 * 0xc + -6);
        uVar23 = *(undefined8 *)(param_1 + uVar11 * 0xc + -4);
        uVar24 = *(undefined8 *)(param_1 + uVar11 * 0xc + -2);
        uVar25 = *(undefined8 *)(param_2 + -0x12);
        uVar5 = *(undefined8 *)(param_2 + -0x10);
        uVar22 = *(undefined8 *)(param_2 + -0x14);
        *(char *)(param_1 + uVar11 * 0xc + -2) = (char)param_2[-0xe];
        *(undefined8 *)(param_1 + uVar11 * 0xc + -6) = uVar25;
        *(undefined8 *)(param_1 + uVar11 * 0xc + -4) = uVar5;
        *(undefined8 *)(param_1 + uVar11 * 0xc + -8) = uVar22;
        uVar25 = *(undefined8 *)(param_2 + -0x16);
        *(undefined8 *)puVar14 = *(undefined8 *)puVar28;
        *(undefined8 *)(param_1 + uVar11 * 0xc + -10) = uVar25;
        *(undefined8 *)puVar28 = uVar13;
        *(undefined8 *)(param_2 + -0x16) = uVar3;
        local_68 = (undefined1)uVar24;
        *(undefined1 *)(param_2 + -0xe) = local_68;
        *(undefined8 *)(param_2 + -0x12) = uVar4;
        *(undefined8 *)(param_2 + -0x10) = uVar23;
        *(undefined8 *)(param_2 + -0x14) = uVar17;
        if (*puVar14 < *puVar15) {
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = *(undefined8 *)(param_1 + 0x12);
          uVar17 = *(undefined8 *)(param_1 + 0x14);
          uVar4 = *(undefined8 *)(param_1 + 0x16);
          uVar23 = *(undefined8 *)puVar15;
          uVar24 = *(undefined8 *)(param_1 + 0xe);
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar14;
          *(undefined8 *)(param_1 + 0xe) = uVar25;
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + -6);
          uVar5 = *(undefined8 *)(param_1 + uVar11 * 0xc + -4);
          uVar22 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
          *(char *)(param_1 + 0x16) = (char)param_1[uVar11 * 0xc + -2];
          *(undefined8 *)(param_1 + 0x12) = uVar25;
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar22;
          *(undefined8 *)puVar14 = uVar23;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -10) = uVar24;
          local_68 = (undefined1)uVar4;
          *(undefined1 *)(param_1 + uVar11 * 0xc + -2) = local_68;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -6) = uVar3;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -4) = uVar17;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -8) = uVar13;
        }
      }
LAB__text__002ab254:
      puVar18 = param_1 + 0x18;
      puVar15 = param_1 + uVar11 * 0xc + 0xc;
      uVar9 = *puVar15;
      if (uVar9 < *puVar18) {
        if (*puVar27 < uVar9) {
          local_80 = *(undefined8 *)(param_1 + 0x1c);
          local_68 = (undefined1)*(undefined8 *)(param_1 + 0x22);
          local_78 = (undefined5)*(undefined8 *)(param_1 + 0x1e);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x28);
          local_90 = *(undefined8 *)puVar18;
          local_88 = *(undefined8 *)(param_1 + 0x1a);
          local_70 = (undefined5)*(undefined8 *)(param_1 + 0x20);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -0x22);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar27;
          *(undefined8 *)(param_1 + 0x1a) = uVar13;
          uVar13 = *(undefined8 *)(param_2 + -0x1e);
          uVar17 = *(undefined8 *)(param_2 + -0x1c);
          uVar23 = *(undefined8 *)(param_2 + -0x20);
          *(char *)(param_1 + 0x22) = (char)param_2[-0x1a];
          *(undefined8 *)(param_1 + 0x1e) = uVar13;
          *(undefined8 *)(param_1 + 0x20) = uVar17;
          *(undefined8 *)(param_1 + 0x1c) = uVar23;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0x1c);
          uVar3 = *(undefined8 *)(param_1 + 0x1e);
          uVar17 = *(undefined8 *)(param_1 + 0x20);
          uVar4 = *(undefined8 *)(param_1 + 0x22);
          uVar23 = *(undefined8 *)puVar18;
          uVar24 = *(undefined8 *)(param_1 + 0x1a);
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + 0x1a) = uVar25;
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
          uVar5 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
          uVar22 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
          *(char *)(param_1 + 0x22) = (char)param_1[uVar11 * 0xc + 0x16];
          *(undefined8 *)(param_1 + 0x1e) = uVar25;
          *(undefined8 *)(param_1 + 0x20) = uVar5;
          *(undefined8 *)(param_1 + 0x1c) = uVar22;
          *(undefined8 *)puVar15 = uVar23;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe) = uVar24;
          local_68 = (undefined1)uVar4;
          *(undefined1 *)(param_1 + uVar11 * 0xc + 0x16) = local_68;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12) = uVar3;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14) = uVar17;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10) = uVar13;
          if (*puVar15 <= *puVar27) goto LAB__text__002ab440;
          local_90 = *(undefined8 *)puVar15;
          local_88 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
          local_80 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
          local_68 = (undefined1)*(undefined8 *)(param_1 + uVar11 * 0xc + 0x16);
          local_70 = (undefined5)*(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + uVar11 * 0xc + 0x14) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + uVar11 * 0xc + 0x12) >> 0x28);
          uVar13 = *(undefined8 *)(param_2 + -0x1e);
          uVar17 = *(undefined8 *)(param_2 + -0x1c);
          uVar23 = *(undefined8 *)(param_2 + -0x20);
          *(char *)(param_1 + uVar11 * 0xc + 0x16) = (char)param_2[-0x1a];
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12) = uVar13;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14) = uVar17;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10) = uVar23;
          uVar13 = *(undefined8 *)(param_2 + -0x22);
          *(undefined8 *)puVar15 = *(undefined8 *)puVar27;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe) = uVar13;
        }
        *(undefined8 *)puVar27 = local_90;
        *(undefined8 *)(param_2 + -0x22) = local_88;
        *(undefined1 *)(param_2 + -0x1a) = local_68;
        *(ulong *)(param_2 + -0x1e) = CONCAT35(uStack_73,local_78);
        *(ulong *)(param_2 + -0x1c) = CONCAT35(uStack_6b,local_70);
        *(undefined8 *)(param_2 + -0x20) = local_80;
      }
      else if (*puVar27 < uVar9) {
        uVar13 = *(undefined8 *)puVar15;
        uVar3 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
        uVar17 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
        uVar4 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
        uVar23 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
        uVar24 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x16);
        uVar25 = *(undefined8 *)(param_2 + -0x1e);
        uVar5 = *(undefined8 *)(param_2 + -0x1c);
        uVar22 = *(undefined8 *)(param_2 + -0x20);
        *(char *)(param_1 + uVar11 * 0xc + 0x16) = (char)param_2[-0x1a];
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12) = uVar25;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14) = uVar5;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10) = uVar22;
        uVar25 = *(undefined8 *)(param_2 + -0x22);
        *(undefined8 *)puVar15 = *(undefined8 *)puVar27;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe) = uVar25;
        *(undefined8 *)puVar27 = uVar13;
        *(undefined8 *)(param_2 + -0x22) = uVar3;
        local_68 = (undefined1)uVar24;
        *(undefined1 *)(param_2 + -0x1a) = local_68;
        *(undefined8 *)(param_2 + -0x1e) = uVar4;
        *(undefined8 *)(param_2 + -0x1c) = uVar23;
        *(undefined8 *)(param_2 + -0x20) = uVar17;
        if (*puVar15 < *puVar18) {
          uVar13 = *(undefined8 *)(param_1 + 0x1c);
          uVar3 = *(undefined8 *)(param_1 + 0x1e);
          uVar17 = *(undefined8 *)(param_1 + 0x20);
          uVar4 = *(undefined8 *)(param_1 + 0x22);
          uVar23 = *(undefined8 *)puVar18;
          uVar24 = *(undefined8 *)(param_1 + 0x1a);
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + 0x1a) = uVar25;
          uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
          uVar5 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
          uVar22 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
          *(char *)(param_1 + 0x22) = (char)param_1[uVar11 * 0xc + 0x16];
          *(undefined8 *)(param_1 + 0x1e) = uVar25;
          *(undefined8 *)(param_1 + 0x20) = uVar5;
          *(undefined8 *)(param_1 + 0x1c) = uVar22;
          *(undefined8 *)puVar15 = uVar23;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe) = uVar24;
          local_68 = (undefined1)uVar4;
          *(undefined1 *)(param_1 + uVar11 * 0xc + 0x16) = local_68;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12) = uVar3;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14) = uVar17;
          *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10) = uVar13;
        }
      }
LAB__text__002ab440:
      uVar9 = *puVar19;
      if (uVar9 < *puVar14) {
        if (*puVar15 < uVar9) {
          local_90 = *(undefined8 *)puVar14;
          local_88 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
          local_80 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
          local_68 = (undefined1)*(undefined8 *)(param_1 + uVar11 * 0xc + -2);
          local_70 = (undefined5)*(undefined8 *)(param_1 + uVar11 * 0xc + -4);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + uVar11 * 0xc + -4) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(param_1 + uVar11 * 0xc + -6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + uVar11 * 0xc + -6) >> 0x28);
          *(char *)(param_1 + uVar11 * 0xc + -2) = (char)param_1[uVar11 * 0xc + 0x16];
          *(undefined8 *)(param_1 + uVar11 * 0xc + -6) =
               *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
          *(undefined8 *)(param_1 + uVar11 * 0xc + -4) =
               *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
          *(undefined8 *)puVar14 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -10) =
               *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
          *(undefined8 *)(param_1 + uVar11 * 0xc + -8) =
               *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
        }
        else {
          uVar13 = *(undefined8 *)puVar14;
          uVar3 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
          uVar17 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
          uVar4 = *(undefined8 *)(param_1 + uVar11 * 0xc + -6);
          uVar23 = *(undefined8 *)(param_1 + uVar11 * 0xc + -4);
          uVar24 = *(undefined8 *)(param_1 + uVar11 * 0xc + -2);
          uVar25 = *(undefined8 *)(puVar19 + 6);
          uVar5 = *(undefined8 *)(puVar19 + 8);
          *(char *)(param_1 + uVar11 * 0xc + -2) = (char)puVar19[10];
          *(undefined8 *)(param_1 + uVar11 * 0xc + -6) = uVar25;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -4) = uVar5;
          uVar25 = *(undefined8 *)(puVar19 + 2);
          uVar5 = *(undefined8 *)(puVar19 + 4);
          *(undefined8 *)puVar14 = *(undefined8 *)puVar19;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -10) = uVar25;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -8) = uVar5;
          *(undefined8 *)puVar19 = uVar13;
          *(undefined8 *)(puVar19 + 2) = uVar3;
          local_68 = (undefined1)uVar24;
          *(undefined8 *)(puVar19 + 6) = uVar4;
          *(undefined8 *)(puVar19 + 8) = uVar23;
          *(undefined8 *)(puVar19 + 4) = uVar17;
          uVar9 = *puVar15;
          *(undefined1 *)(puVar19 + 10) = local_68;
          if (*puVar19 <= uVar9) goto LAB__text__002ab624;
          local_90 = *(undefined8 *)puVar19;
          local_88 = *(undefined8 *)(puVar19 + 2);
          local_80 = *(undefined8 *)(puVar19 + 4);
          local_68 = (undefined1)*(undefined8 *)(puVar19 + 10);
          local_70 = (undefined5)*(undefined8 *)(puVar19 + 8);
          uStack_6b = (undefined3)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x28);
          local_78 = (undefined5)*(undefined8 *)(puVar19 + 6);
          uStack_73 = (undefined3)((ulong)*(undefined8 *)(puVar19 + 6) >> 0x28);
          uVar13 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
          uVar17 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
          *(char *)(puVar19 + 10) = (char)param_1[uVar11 * 0xc + 0x16];
          *(undefined8 *)(puVar19 + 6) = uVar13;
          *(undefined8 *)(puVar19 + 8) = uVar17;
          uVar13 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
          uVar17 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar19 + 2) = uVar13;
          *(undefined8 *)(puVar19 + 4) = uVar17;
        }
        *(undefined8 *)puVar15 = local_90;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe) = local_88;
        *(undefined1 *)(param_1 + uVar11 * 0xc + 0x16) = local_68;
        *(ulong *)(param_1 + uVar11 * 0xc + 0x12) = CONCAT35(uStack_73,local_78);
        *(ulong *)(param_1 + uVar11 * 0xc + 0x14) = CONCAT35(uStack_6b,local_70);
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10) = local_80;
      }
      else if (*puVar15 < uVar9) {
        uVar13 = *(undefined8 *)puVar19;
        uVar3 = *(undefined8 *)(puVar19 + 2);
        uVar17 = *(undefined8 *)(puVar19 + 4);
        uVar4 = *(undefined8 *)(puVar19 + 6);
        uVar23 = *(undefined8 *)(puVar19 + 8);
        uVar24 = *(undefined8 *)(puVar19 + 10);
        uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12);
        uVar5 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14);
        *(char *)(puVar19 + 10) = (char)param_1[uVar11 * 0xc + 0x16];
        *(undefined8 *)(puVar19 + 6) = uVar25;
        *(undefined8 *)(puVar19 + 8) = uVar5;
        uVar25 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe);
        uVar5 = *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10);
        *(undefined8 *)puVar19 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar19 + 2) = uVar25;
        *(undefined8 *)(puVar19 + 4) = uVar5;
        *(undefined8 *)puVar15 = uVar13;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0xe) = uVar3;
        local_68 = (undefined1)uVar24;
        *(undefined1 *)(param_1 + uVar11 * 0xc + 0x16) = local_68;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x12) = uVar4;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x14) = uVar23;
        *(undefined8 *)(param_1 + uVar11 * 0xc + 0x10) = uVar17;
        if (*puVar19 < *puVar14) {
          uVar13 = *(undefined8 *)puVar14;
          uVar3 = *(undefined8 *)(param_1 + uVar11 * 0xc + -10);
          uVar17 = *(undefined8 *)(param_1 + uVar11 * 0xc + -8);
          uVar4 = *(undefined8 *)(param_1 + uVar11 * 0xc + -6);
          uVar23 = *(undefined8 *)(param_1 + uVar11 * 0xc + -4);
          uVar24 = *(undefined8 *)(param_1 + uVar11 * 0xc + -2);
          uVar25 = *(undefined8 *)(puVar19 + 6);
          uVar5 = *(undefined8 *)(puVar19 + 8);
          *(char *)(param_1 + uVar11 * 0xc + -2) = (char)puVar19[10];
          *(undefined8 *)(param_1 + uVar11 * 0xc + -6) = uVar25;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -4) = uVar5;
          uVar25 = *(undefined8 *)(puVar19 + 2);
          uVar5 = *(undefined8 *)(puVar19 + 4);
          *(undefined8 *)puVar14 = *(undefined8 *)puVar19;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -10) = uVar25;
          *(undefined8 *)(param_1 + uVar11 * 0xc + -8) = uVar5;
          *(undefined8 *)puVar19 = uVar13;
          *(undefined8 *)(puVar19 + 2) = uVar3;
          local_68 = (undefined1)uVar24;
          *(undefined1 *)(puVar19 + 10) = local_68;
          *(undefined8 *)(puVar19 + 6) = uVar4;
          *(undefined8 *)(puVar19 + 8) = uVar23;
          *(undefined8 *)(puVar19 + 4) = uVar17;
        }
      }
LAB__text__002ab624:
      uVar13 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar17 = *(undefined8 *)(param_1 + 4);
      uVar4 = *(undefined8 *)(param_1 + 6);
      uVar23 = *(undefined8 *)(param_1 + 8);
      uVar24 = *(undefined8 *)(param_1 + 10);
      uVar25 = *(undefined8 *)(puVar19 + 6);
      uVar5 = *(undefined8 *)(puVar19 + 8);
      uVar22 = *(undefined8 *)(puVar19 + 4);
      *(char *)(param_1 + 10) = (char)puVar19[10];
      *(undefined8 *)(param_1 + 6) = uVar25;
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar22;
      uVar25 = *(undefined8 *)(puVar19 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)puVar19;
      *(undefined8 *)(param_1 + 2) = uVar25;
      *(undefined8 *)puVar19 = uVar13;
      *(undefined8 *)(puVar19 + 2) = uVar3;
      local_68 = (undefined1)uVar24;
      *(undefined1 *)(puVar19 + 10) = local_68;
      *(undefined8 *)(puVar19 + 6) = uVar4;
      *(undefined8 *)(puVar19 + 8) = uVar23;
      *(undefined8 *)(puVar19 + 4) = uVar17;
      uVar9 = *param_1;
    }
joined_r0x002aaec4:
    if (((local_c4 & 1) != 0) || (param_1[-0xc] < uVar9)) {
      param_4 = param_4 + -1;
      uVar17 = *(undefined8 *)(param_1 + 5);
      uVar23 = *(undefined8 *)(param_1 + 7);
      uVar13 = *(undefined8 *)(param_1 + 1);
      uVar25 = *(undefined8 *)(param_1 + 3);
      uStack_a3 = (undefined3)((ulong)uVar23 >> 0x28);
      uStack_a0 = (undefined5)*(undefined8 *)(param_1 + 9);
      lVar12 = 0;
      do {
        lVar1 = lVar12 + 0x30;
        lVar21 = lVar12 + 0x30;
        lVar12 = lVar1;
      } while (*(uint *)((long)param_1 + lVar21) < uVar9);
      puVar14 = (uint *)((long)param_1 + lVar1);
      puVar15 = param_2;
      if (lVar1 == 0x30) {
        do {
          if (puVar15 <= puVar14) break;
          puVar15 = puVar15 + -0xc;
        } while (uVar9 <= *puVar15);
      }
      else {
        do {
          puVar15 = puVar15 + -0xc;
        } while (uVar9 <= *puVar15);
      }
      puVar19 = puVar14;
      if (puVar14 < puVar15) {
        puVar18 = puVar15;
        do {
          uVar3 = *(undefined8 *)puVar19;
          uVar22 = *(undefined8 *)(puVar19 + 2);
          uVar4 = *(undefined8 *)(puVar19 + 4);
          uVar6 = *(undefined8 *)(puVar19 + 6);
          uVar24 = *(undefined8 *)(puVar19 + 8);
          uVar7 = *(undefined8 *)(puVar19 + 10);
          uVar5 = *(undefined8 *)(puVar18 + 6);
          uVar8 = *(undefined8 *)(puVar18 + 8);
          uVar26 = *(undefined8 *)(puVar18 + 4);
          *(char *)(puVar19 + 10) = (char)puVar18[10];
          *(undefined8 *)(puVar19 + 6) = uVar5;
          *(undefined8 *)(puVar19 + 8) = uVar8;
          *(undefined8 *)(puVar19 + 4) = uVar26;
          uVar5 = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar19 + 2) = uVar5;
          *(undefined8 *)puVar18 = uVar3;
          *(undefined8 *)(puVar18 + 2) = uVar22;
          local_68 = (undefined1)uVar7;
          *(undefined1 *)(puVar18 + 10) = local_68;
          *(undefined8 *)(puVar18 + 6) = uVar6;
          *(undefined8 *)(puVar18 + 8) = uVar24;
          *(undefined8 *)(puVar18 + 4) = uVar4;
          do {
            puVar19 = puVar19 + 0xc;
          } while (*puVar19 < uVar9);
          do {
            puVar18 = puVar18 + -0xc;
          } while (uVar9 <= *puVar18);
        } while (puVar19 < puVar18);
      }
      puVar18 = puVar19 + -0xc;
      if (puVar18 != param_1) {
        uVar3 = *(undefined8 *)(puVar19 + -10);
        *(undefined8 *)param_1 = *(undefined8 *)puVar18;
        *(undefined8 *)(param_1 + 2) = uVar3;
        uVar24 = *(undefined8 *)(puVar19 + -4);
        uVar3 = *(undefined8 *)(puVar19 + -8);
        uVar4 = *(undefined8 *)(puVar19 + -6);
        *(char *)(param_1 + 10) = (char)puVar19[-2];
        *(undefined8 *)(param_1 + 6) = uVar4;
        *(undefined8 *)(param_1 + 8) = uVar24;
        *(undefined8 *)(param_1 + 4) = uVar3;
      }
      puVar19[-0xc] = uVar9;
      *(undefined8 *)(puVar19 + -0xb) = uVar13;
      *(ulong *)((long)puVar19 - 0xf) = CONCAT53(uStack_a0,uStack_a3);
      *(undefined8 *)(puVar19 + -5) = uVar23;
      *(undefined8 *)(puVar19 + -7) = uVar17;
      *(undefined8 *)(puVar19 + -9) = uVar25;
      if (puVar15 <= puVar14) {
        uVar11 = FUN__text__002ac110(param_1,puVar18,param_3);
        uVar16 = FUN__text__002ac110(puVar19,param_2,param_3);
        if ((uVar16 & 1) != 0) goto LAB__text__002ab9d0;
        if ((uVar11 & 1) != 0) goto LAB__text__002aac34;
      }
      FUN__text__002aabf0(param_1,puVar18,param_3,param_4,local_c4 & 1);
      local_c4 = 0;
      goto LAB__text__002aac34;
    }
    uVar13 = *(undefined8 *)(param_1 + 5);
    uVar17 = *(undefined8 *)(param_1 + 7);
    uVar23 = *(undefined8 *)(param_1 + 1);
    uVar25 = *(undefined8 *)(param_1 + 3);
    uStack_a3 = (undefined3)((ulong)uVar17 >> 0x28);
    uStack_a0 = (undefined5)*(undefined8 *)(param_1 + 9);
    puVar19 = param_1;
    if (uVar9 < param_2[-0xc]) {
      do {
        puVar19 = puVar19 + 0xc;
      } while (*puVar19 <= uVar9);
    }
    else {
      do {
        puVar19 = puVar19 + 0xc;
        if (param_2 <= puVar19) break;
      } while (*puVar19 <= uVar9);
    }
    puVar14 = param_2;
    if (puVar19 < param_2) {
      do {
        puVar14 = puVar14 + -0xc;
      } while (uVar9 < *puVar14);
    }
    while (puVar19 < puVar14) {
      uVar3 = *(undefined8 *)puVar19;
      uVar22 = *(undefined8 *)(puVar19 + 2);
      uVar4 = *(undefined8 *)(puVar19 + 4);
      uVar6 = *(undefined8 *)(puVar19 + 6);
      uVar24 = *(undefined8 *)(puVar19 + 8);
      uVar7 = *(undefined8 *)(puVar19 + 10);
      uVar5 = *(undefined8 *)(puVar14 + 6);
      uVar8 = *(undefined8 *)(puVar14 + 8);
      uVar26 = *(undefined8 *)(puVar14 + 4);
      *(char *)(puVar19 + 10) = (char)puVar14[10];
      *(undefined8 *)(puVar19 + 6) = uVar5;
      *(undefined8 *)(puVar19 + 8) = uVar8;
      *(undefined8 *)(puVar19 + 4) = uVar26;
      uVar5 = *(undefined8 *)(puVar14 + 2);
      *(undefined8 *)puVar19 = *(undefined8 *)puVar14;
      *(undefined8 *)(puVar19 + 2) = uVar5;
      *(undefined8 *)puVar14 = uVar3;
      *(undefined8 *)(puVar14 + 2) = uVar22;
      local_68 = (undefined1)uVar7;
      *(undefined1 *)(puVar14 + 10) = local_68;
      *(undefined8 *)(puVar14 + 6) = uVar6;
      *(undefined8 *)(puVar14 + 8) = uVar24;
      *(undefined8 *)(puVar14 + 4) = uVar4;
      do {
        puVar19 = puVar19 + 0xc;
      } while (*puVar19 <= uVar9);
      do {
        puVar14 = puVar14 + -0xc;
      } while (uVar9 < *puVar14);
    }
    if (puVar19 + -0xc != param_1) {
      uVar3 = *(undefined8 *)(puVar19 + -10);
      *(undefined8 *)param_1 = *(undefined8 *)(puVar19 + -0xc);
      *(undefined8 *)(param_1 + 2) = uVar3;
      uVar24 = *(undefined8 *)(puVar19 + -4);
      uVar3 = *(undefined8 *)(puVar19 + -8);
      uVar4 = *(undefined8 *)(puVar19 + -6);
      *(char *)(param_1 + 10) = (char)puVar19[-2];
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar24;
      *(undefined8 *)(param_1 + 4) = uVar3;
    }
    puVar19[-0xc] = uVar9;
    local_c4 = 0;
    *(undefined8 *)(puVar19 + -0xb) = uVar23;
    *(ulong *)((long)puVar19 + -0xf) = CONCAT53(uStack_a0,uStack_a3);
    *(undefined8 *)(puVar19 + -5) = uVar17;
    *(undefined8 *)(puVar19 + -7) = uVar13;
    *(undefined8 *)(puVar19 + -9) = uVar25;
    param_4 = param_4 + -1;
  } while( true );
LAB__text__002abba4:
  puVar27 = puVar19;
  uVar9 = puVar20[0xc];
  if (uVar9 < *puVar20) {
    uVar17 = *(undefined8 *)(puVar20 + 0x11);
    uVar23 = *(undefined8 *)(puVar20 + 0x13);
    uStack_73 = (undefined3)((ulong)uVar23 >> 0x28);
    uVar25 = *(undefined8 *)(puVar20 + 0xd);
    local_70 = (undefined5)*(undefined8 *)(puVar20 + 0x15);
    uVar13 = *(undefined8 *)(puVar20 + 0xf);
    lVar1 = lVar12;
    do {
      lVar21 = lVar1;
      puVar2 = (undefined8 *)((long)param_1 + lVar21);
      puVar2[8] = puVar2[2];
      puVar2[9] = puVar2[3];
      puVar2[10] = puVar2[4];
      *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(puVar2 + 5);
      puVar2[6] = *puVar2;
      puVar2[7] = puVar2[1];
      if (lVar21 == 0) {
        puVar19 = param_1;
        goto LAB__text__002abb68;
      }
      lVar1 = lVar21 + -0x30;
    } while (uVar9 < *(uint *)(puVar2 + -6));
    puVar19 = (uint *)((long)param_1 + lVar21);
LAB__text__002abb68:
    *puVar19 = uVar9;
    *(undefined8 *)(puVar19 + 1) = uVar25;
    *(ulong *)((long)puVar19 + 0x21) = CONCAT53(local_70,uStack_73);
    *(undefined8 *)(puVar19 + 7) = uVar23;
    *(undefined8 *)(puVar19 + 5) = uVar17;
    *(undefined8 *)(puVar19 + 3) = uVar13;
  }
  puVar19 = puVar27 + 0xc;
  lVar12 = lVar12 + 0x30;
  puVar20 = puVar27;
  if (puVar19 == param_2) {
    return;
  }
  goto LAB__text__002abba4;
LAB__text__002ab9d0:
  param_2 = puVar18;
  if ((uVar11 & 1) != 0) {
    return;
  }
  goto LAB__text__002aac24;
}


