/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005269e0; name: FUN_.text__005269e0
 */


void FUN__text__005269e0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    plVar10 = *(long **)(param_1 + 0x58);
    do {
      plVar6 = plVar10 + 1;
      lVar5 = *plVar10;
      uVar2 = FUN__text__0052163c(lVar5,param_1);
      *(undefined4 *)(lVar5 + (uVar2 & 0xffffffff) * 0x40 + 200) = 0;
      plVar10 = plVar6;
    } while (plVar6 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
  }
  puVar3 = (undefined4 *)FUN__text__00492bb0(param_3,1,1);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_4 + 8) + 0x20);
  FUN__text__00526e0c(param_1,param_2,lVar5);
  dVar19 = *(double *)(lVar5 + 0x78);
  dVar20 = *(double *)(lVar5 + 0x80);
  dVar21 = *(double *)(lVar5 + 0x88);
  uVar25 = *(undefined4 *)(param_1 + 0x34);
  uVar14 = *(uint *)(param_1 + 0x38);
  uVar16 = *(uint *)(param_1 + 0x24);
  uVar26 = *(undefined4 *)(param_1 + 0x28);
  uVar27 = *(undefined4 *)(param_1 + 0x2c);
  uVar23 = *(undefined4 *)(param_1 + 0x30);
  dVar12 = dVar19;
  dVar15 = dVar20;
  dVar13 = dVar21;
  local_b8 = dVar19;
  dStack_b0 = dVar20;
  local_a8 = dVar21;
  if (*(uint *)(param_1 + 0x60) < 2) {
    if ((*(uint *)(param_1 + 0x60) != 0) &&
       (lVar7 = **(long **)(param_1 + 0x58), *(char *)(lVar7 + 0x568) != '\0')) {
      fVar24 = 1.0;
      goto LAB__text__00526bb8;
    }
    fVar24 = 100.0;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x58);
    fVar11 = 3.4028235e+38;
    lVar7 = 0;
    fVar24 = 3.4028235e+38;
    do {
      lVar8 = *plVar10;
      fVar1 = fVar11;
      if (*(char *)(lVar8 + 0x568) != '\0') {
        dVar12 = (double)FUN__text__00520f94(dVar12,lVar8,&local_b8);
        fVar18 = (float)(dVar12 - local_b8) * (float)(dVar12 - local_b8) +
                 (float)(dVar15 - dStack_b0) * (float)(dVar15 - dStack_b0) +
                 (float)(dVar13 - local_a8) * (float)(dVar13 - local_a8);
        dVar12 = local_b8;
        dVar15 = dStack_b0;
        dVar13 = local_a8;
        if (fVar18 < fVar11) {
          lVar7 = lVar8;
          fVar1 = fVar18;
          fVar24 = fVar11;
        }
        else if (fVar18 < fVar24) {
          fVar24 = fVar18;
        }
      }
      fVar11 = fVar1;
      plVar10 = plVar10 + 1;
    } while (plVar10 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
    if (fVar24 <= fVar11) {
      fVar24 = 1.0;
    }
    else {
      fVar24 = 1.0 - fVar11 / fVar24;
    }
    if (lVar7 == 0) {
      fVar24 = 100.0;
    }
    else {
LAB__text__00526bb8:
      dVar19 = (double)FUN__text__005213f4(dVar12,lVar7);
      fVar11 = (float)FUN__text__00521144(lVar7,&local_b8);
      fVar24 = fVar11 * -15.915494 * fVar24 + 100.0;
      dVar20 = dVar15;
      dVar21 = dVar13;
    }
  }
  dVar15 = (double)(ulong)uVar16;
  dVar12 = (double)(ulong)uVar14;
  uVar4 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x58);
  *puVar3 = uVar23;
  puVar3[1] = uVar25;
  puVar3[2] = uVar14;
  puVar3[3] = uVar16;
  puVar3[4] = uVar26;
  puVar3[5] = uVar27;
  *(double *)(puVar3 + 6) = dVar19;
  *(double *)(puVar3 + 8) = dVar20;
  *(double *)(puVar3 + 10) = dVar21;
  puVar3[0x16] = fVar24;
  puVar3[0x17] = fVar24;
  *(undefined8 *)(puVar3 + 0x19) = 0xffffffff;
  *(undefined8 *)(puVar3 + 0x1c) = uVar4;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  FUN__text__00480e64(lVar5,uVar4,puVar3);
  if (*(long *)(lVar5 + 0x98) == 0) goto LAB__text__00526dc4;
  lVar7 = *(long *)(*(long *)(param_4 + 8) + 0x48);
  dVar13 = (double)FUN__text__0047da2c(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x20));
  local_d0 = dVar13;
  dStack_c8 = dVar12;
  local_c0 = dVar15;
  if (*(uint *)(param_1 + 0x60) < 2) {
    dVar20 = 0.0;
    if ((*(uint *)(param_1 + 0x60) != 0) &&
       (lVar8 = **(long **)(param_1 + 0x58), *(char *)(lVar8 + 0x568) != '\0'))
    goto LAB__text__00526d70;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x58);
    lVar8 = 0;
    fVar11 = 3.4028235e+38;
    fVar24 = 3.4028235e+38;
    dVar21 = dVar13;
    dVar19 = dVar12;
    dVar22 = dVar15;
    do {
      lVar9 = *plVar10;
      fVar1 = fVar11;
      if (*(char *)(lVar9 + 0x568) != '\0') {
        dVar13 = (double)FUN__text__00520f94(lVar9,&local_d0);
        fVar18 = (float)(dVar12 - dStack_c8);
        dVar12 = (double)(ulong)(uint)fVar18;
        fVar17 = (float)(dVar15 - local_c0);
        dVar15 = (double)(ulong)(uint)fVar17;
        fVar18 = (float)(dVar13 - local_d0) * (float)(dVar13 - local_d0) + fVar18 * fVar18 +
                 fVar17 * fVar17;
        dVar13 = (double)(ulong)(uint)fVar18;
        dVar21 = local_d0;
        dVar19 = dStack_c8;
        dVar22 = local_c0;
        if (fVar18 < fVar11) {
          lVar8 = lVar9;
          fVar1 = fVar18;
          fVar24 = fVar11;
        }
        else if (fVar18 < fVar24) {
          fVar24 = fVar18;
        }
      }
      fVar11 = fVar1;
      plVar10 = plVar10 + 1;
    } while (plVar10 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
    dVar20 = dVar13;
    dVar13 = dVar21;
    dVar12 = dVar19;
    dVar15 = dVar22;
    if (lVar8 == 0) {
      dVar20 = 0.0;
    }
    else {
LAB__text__00526d70:
      lVar9 = FUN__text__0047da58(dVar20,*(undefined8 *)(*(long *)(lVar7 + 8) + 0x20));
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) {
        lVar9 = *(long *)(*(long *)(lVar7 + 8) + 0x38);
      }
      dVar20 = (double)FUN__text__00526f60(dVar13,dVar12,dVar15,param_1,lVar8,
                                           *(undefined8 *)(lVar9 + 0x68));
    }
  }
  FUN__text__00480e30(dVar20,lVar5,uVar4,puVar3);
LAB__text__00526dc4:
  FUN__text__00527200(0,param_1,param_2,9,param_3);
  return;
}


