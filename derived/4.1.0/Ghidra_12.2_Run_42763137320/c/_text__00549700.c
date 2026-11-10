/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00549700; name: FUN_.text__00549700
 */


/* WARNING: Removing unreachable block (ram,0x005497c8) */

void FUN__text__00549700(long *param_1,long *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  
  if (*(int *)((long)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    uVar18 = (ulong)*(ushort *)((long)param_2 + 0x12);
    goto LAB__text__00549864;
  }
  uVar8 = *(uint *)(param_1 + 3);
  uVar17 = *(uint *)(param_1 + 8);
  if (uVar8 == 0xffffffff) {
LAB__text__00549770:
    *(uint *)(param_1 + 3) = uVar17;
    uVar8 = uVar17;
LAB__text__0054977c:
    *(uint *)((long)param_1 + 0x1c) = uVar17;
    uVar17 = (uint)*(ushort *)((long)param_2 + 0x12);
  }
  else {
    if (uVar8 == 0) {
      if (*(short *)((long)param_2 + 0x12) == 0) {
        uVar18 = 0;
        goto LAB__text__00549864;
      }
      goto LAB__text__00549770;
    }
    if (*(short *)((long)param_2 + 0x12) != 0) goto LAB__text__00549770;
    if (*(uint *)((long)param_1 + 0x1c) < uVar17) {
      uVar8 = (uVar8 + uVar17) - *(uint *)((long)param_1 + 0x1c);
      *(uint *)(param_1 + 3) = uVar8;
      goto LAB__text__0054977c;
    }
    uVar17 = 0;
  }
  iVar9 = 0;
  if (*(ushort *)(param_2 + 2) - uVar17 <= uVar8) {
    iVar9 = uVar8 - (*(ushort *)(param_2 + 2) - uVar17);
  }
  *(int *)(param_1 + 3) = iVar9;
  uVar4 = *(ushort *)((long)param_2 + 0x12);
  uVar18 = (ulong)uVar4;
  uVar5 = *(ushort *)(param_2 + 2);
  if ((uint)uVar4 < (uint)uVar5) {
    bVar3 = *(byte *)(param_2 + 1);
    if (bVar3 == 0) {
      uVar18 = (ulong)(uint)uVar5;
    }
    else {
      uVar10 = (ulong)(((uint)uVar5 - (uint)uVar4) * 4);
      if (bVar3 == 1) {
        lVar13 = 0;
LAB__text__00549830:
        memset((void *)(*param_2 + lVar13 * (ulong)*(ushort *)(param_2 + 2) + uVar18 * 4),0,uVar10);
      }
      else {
        uVar12 = (ulong)bVar3 & 0xfe;
        lVar1 = 4;
        do {
          lVar13 = lVar1;
          memset((void *)(*param_2 + (lVar13 + -4) * (ulong)*(ushort *)(param_2 + 2) + uVar18 * 4),0
                 ,uVar10);
          memset((void *)(*param_2 + lVar13 * (ulong)*(ushort *)(param_2 + 2) + uVar18 * 4),0,uVar10
                );
          uVar12 = uVar12 - 2;
          lVar1 = lVar13 + 8;
        } while (uVar12 != 0);
        lVar13 = lVar13 + 4;
        if ((bVar3 & 1) != 0) goto LAB__text__00549830;
      }
      uVar18 = (ulong)*(ushort *)(param_2 + 2);
    }
    *(short *)((long)param_2 + 0x12) = (short)uVar18;
    iVar9 = (int)param_1[3];
  }
  if (iVar9 != 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
  }
LAB__text__00549864:
  if (*(char *)(param_3 + 3) == '\0') {
    *param_3 = 0.0;
    uVar8 = *(uint *)(param_1 + 7);
  }
  else {
    uVar8 = *(uint *)(param_1 + 7);
  }
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar12 = (ulong)uVar8;
    auVar24 = NEON_fmov(0x3f800000,4);
    uVar10 = 0;
    fVar28 = 1.0 / (float)uVar18;
    do {
      uVar8 = *(uint *)((long)param_1 + 0xc);
      uVar17 = (uint)uVar18;
      if (uVar17 != 0) {
        fVar33 = *(float *)(param_1 + 4);
        fVar36 = *(float *)((long)param_1 + 0x24);
        uVar11 = 0;
        fVar35 = *(float *)(param_1 + 5);
        fVar31 = (param_3[1] - fVar36) * fVar28;
        puVar14 = (undefined8 *)(*param_2 + uVar10 * *(ushort *)(param_2 + 2) * 4);
        uVar2 = *(uint *)(param_1 + 1);
        fVar34 = (param_3[2] - fVar35) * fVar28;
        fVar37 = (*param_3 - fVar33) * fVar28;
        fVar29 = fVar31 + fVar36;
        fVar71 = fVar31 * 4.0;
        fVar46 = fVar37 + fVar33;
        fVar52 = fVar34 + fVar35;
        fVar57 = fVar34 * 4.0;
        fVar58 = fVar37 * 4.0;
        fVar30 = fVar29 + fVar31;
        fVar31 = fVar30 + fVar31;
        fVar32 = fVar46 + fVar37;
        fVar47 = fVar52 + fVar34;
        fVar37 = fVar32 + fVar37;
        fVar34 = fVar47 + fVar34;
        fVar23 = auVar24._0_4_;
        fVar38 = fVar23 - fVar36;
        fVar25 = auVar24._4_4_;
        fVar40 = fVar25 - fVar29;
        fVar26 = auVar24._8_4_;
        fVar42 = fVar26 - fVar30;
        fVar27 = auVar24._12_4_;
        fVar44 = fVar27 - fVar31;
        fVar39 = fVar36;
        fVar41 = fVar29;
        fVar43 = fVar30;
        fVar45 = fVar31;
        fVar48 = fVar35;
        fVar49 = fVar52;
        fVar50 = fVar47;
        fVar51 = fVar34;
        fVar53 = fVar33;
        fVar54 = fVar46;
        fVar55 = fVar32;
        fVar56 = fVar37;
        do {
          uVar7 = uVar2 - uVar8;
          if (uVar17 - uVar11 <= uVar7) {
            uVar7 = uVar17 - uVar11;
          }
          if (uVar7 < 4) {
LAB__text__00549960:
          }
          else {
            uVar6 = uVar7 >> 2;
            puVar15 = (undefined8 *)(*(long *)(*param_1 + uVar10 * 8) + (ulong)uVar8 * 4);
            fVar19 = fVar39;
            fVar20 = fVar41;
            fVar21 = fVar43;
            fVar22 = fVar45;
            fVar59 = fVar48;
            fVar60 = fVar49;
            fVar61 = fVar50;
            fVar62 = fVar51;
            fVar63 = fVar53;
            fVar65 = fVar54;
            fVar67 = fVar55;
            fVar69 = fVar56;
            uVar16 = uVar6;
            if ((uVar7 >> 2 & 1) != 0) {
              fVar36 = fVar36 + fVar71;
              fVar29 = fVar29 + fVar71;
              fVar30 = fVar30 + fVar71;
              fVar31 = fVar31 + fVar71;
              fVar35 = fVar35 + fVar57;
              fVar52 = fVar52 + fVar57;
              fVar47 = fVar47 + fVar57;
              fVar34 = fVar34 + fVar57;
              fVar33 = fVar33 + fVar58;
              fVar46 = fVar46 + fVar58;
              fVar32 = fVar32 + fVar58;
              fVar37 = fVar37 + fVar58;
              fVar63 = (float)*puVar15;
              fVar65 = (float)((ulong)*puVar15 >> 0x20);
              fVar67 = (float)puVar15[1];
              fVar69 = (float)((ulong)puVar15[1] >> 0x20);
              fVar59 = (float)*puVar14;
              fVar19 = fVar59 * fVar38;
              fVar60 = (float)((ulong)*puVar14 >> 0x20);
              fVar20 = fVar60 * fVar40;
              fVar61 = (float)puVar14[1];
              fVar21 = fVar61 * fVar42;
              fVar62 = (float)((ulong)puVar14[1] >> 0x20);
              fVar22 = fVar62 * fVar44;
              fVar38 = fVar23 - fVar36;
              fVar40 = fVar25 - fVar29;
              fVar42 = fVar26 - fVar30;
              fVar44 = fVar27 - fVar31;
              puVar14[1] = CONCAT44((fVar69 * fVar45 + fVar22) * fVar51,
                                    (fVar67 * fVar43 + fVar21) * fVar50);
              *puVar14 = CONCAT44((fVar65 * fVar41 + fVar20) * fVar49,
                                  (fVar63 * fVar39 + fVar19) * fVar48);
              puVar15[1] = CONCAT44(fVar62 + fVar56 * fVar69,fVar61 + fVar55 * fVar67);
              *puVar15 = CONCAT44(fVar60 + fVar54 * fVar65,fVar59 + fVar53 * fVar63);
              fVar19 = fVar36;
              fVar20 = fVar29;
              fVar21 = fVar30;
              fVar22 = fVar31;
              fVar59 = fVar35;
              fVar60 = fVar52;
              fVar61 = fVar47;
              fVar62 = fVar34;
              fVar63 = fVar33;
              fVar65 = fVar46;
              fVar67 = fVar32;
              fVar69 = fVar37;
              uVar16 = uVar6 - 1;
              puVar14 = puVar14 + 2;
              puVar15 = puVar15 + 2;
            }
            fVar39 = fVar36;
            fVar41 = fVar29;
            fVar43 = fVar30;
            fVar45 = fVar31;
            fVar48 = fVar35;
            fVar49 = fVar52;
            fVar50 = fVar47;
            fVar51 = fVar34;
            fVar53 = fVar33;
            fVar54 = fVar46;
            fVar55 = fVar32;
            fVar56 = fVar37;
            if (uVar6 != 1) {
              do {
                fVar53 = fVar33 + fVar58;
                fVar54 = fVar46 + fVar58;
                fVar55 = fVar32 + fVar58;
                fVar56 = fVar37 + fVar58;
                fVar48 = fVar35 + fVar57;
                fVar49 = fVar52 + fVar57;
                fVar50 = fVar47 + fVar57;
                fVar51 = fVar34 + fVar57;
                uVar16 = uVar16 - 2;
                fVar64 = (float)*puVar15;
                fVar66 = (float)((ulong)*puVar15 >> 0x20);
                fVar68 = (float)puVar15[1];
                fVar70 = (float)((ulong)puVar15[1] >> 0x20);
                fVar35 = (float)*puVar14;
                fVar52 = (float)((ulong)*puVar14 >> 0x20);
                fVar47 = (float)puVar14[1];
                fVar34 = (float)((ulong)puVar14[1] >> 0x20);
                fVar39 = fVar36 + fVar71;
                fVar41 = fVar29 + fVar71;
                fVar43 = fVar30 + fVar71;
                fVar45 = fVar31 + fVar71;
                fVar33 = fVar53 + fVar58;
                fVar46 = fVar54 + fVar58;
                fVar32 = fVar55 + fVar58;
                fVar37 = fVar56 + fVar58;
                fVar36 = fVar39 + fVar71;
                fVar29 = fVar41 + fVar71;
                fVar30 = fVar43 + fVar71;
                fVar31 = fVar45 + fVar71;
                puVar14[1] = CONCAT44((fVar70 * fVar22 + fVar34 * fVar44) * fVar62,
                                      (fVar68 * fVar21 + fVar47 * fVar42) * fVar61);
                *puVar14 = CONCAT44((fVar66 * fVar20 + fVar52 * fVar40) * fVar60,
                                    (fVar64 * fVar19 + fVar35 * fVar38) * fVar59);
                puVar15[1] = CONCAT44(fVar34 + fVar69 * fVar70,fVar47 + fVar67 * fVar68);
                *puVar15 = CONCAT44(fVar52 + fVar65 * fVar66,fVar35 + fVar63 * fVar64);
                fVar59 = (float)puVar15[2];
                fVar60 = (float)((ulong)puVar15[2] >> 0x20);
                fVar61 = (float)puVar15[3];
                fVar62 = (float)((ulong)puVar15[3] >> 0x20);
                fVar19 = (float)puVar14[2];
                fVar20 = (float)((ulong)puVar14[2] >> 0x20);
                fVar21 = (float)puVar14[3];
                fVar22 = (float)((ulong)puVar14[3] >> 0x20);
                fVar35 = fVar48 + fVar57;
                fVar52 = fVar49 + fVar57;
                fVar47 = fVar50 + fVar57;
                fVar34 = fVar51 + fVar57;
                puVar14[3] = CONCAT44((fVar62 * fVar45 + fVar22 * (fVar27 - fVar45)) * fVar51,
                                      (fVar61 * fVar43 + fVar21 * (fVar26 - fVar43)) * fVar50);
                puVar14[2] = CONCAT44((fVar60 * fVar41 + fVar20 * (fVar25 - fVar41)) * fVar49,
                                      (fVar59 * fVar39 + fVar19 * (fVar23 - fVar39)) * fVar48);
                fVar38 = fVar23 - fVar36;
                fVar40 = fVar25 - fVar29;
                fVar42 = fVar26 - fVar30;
                fVar44 = fVar27 - fVar31;
                puVar14 = puVar14 + 4;
                puVar15[3] = CONCAT44(fVar22 + fVar56 * fVar62,fVar21 + fVar55 * fVar61);
                puVar15[2] = CONCAT44(fVar20 + fVar54 * fVar60,fVar19 + fVar53 * fVar59);
                puVar15 = puVar15 + 4;
                fVar19 = fVar36;
                fVar20 = fVar29;
                fVar21 = fVar30;
                fVar22 = fVar31;
                fVar59 = fVar35;
                fVar60 = fVar52;
                fVar61 = fVar47;
                fVar62 = fVar34;
                fVar63 = fVar33;
                fVar65 = fVar46;
                fVar67 = fVar32;
                fVar69 = fVar37;
              } while (uVar16 != 0);
              fVar39 = fVar36;
              fVar41 = fVar29;
              fVar43 = fVar30;
              fVar45 = fVar31;
              fVar48 = fVar35;
              fVar49 = fVar52;
              fVar50 = fVar47;
              fVar51 = fVar34;
              fVar53 = fVar33;
              fVar54 = fVar46;
              fVar55 = fVar32;
              fVar56 = fVar37;
              goto LAB__text__00549960;
            }
          }
          uVar6 = uVar7 + uVar8;
          uVar11 = uVar7 + uVar11;
          uVar8 = 0;
          if (uVar6 != uVar2) {
            uVar8 = uVar6;
          }
        } while (uVar11 < uVar17);
        uVar12 = (ulong)*(uint *)(param_1 + 7);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar12);
  }
  *(uint *)((long)param_1 + 0xc) = uVar8;
  lVar1 = *(long *)param_3;
  lVar13 = *(long *)(param_3 + 4);
  param_1[5] = *(long *)(param_3 + 2);
  param_1[6] = lVar13;
  param_1[4] = lVar1;
  return;
}


