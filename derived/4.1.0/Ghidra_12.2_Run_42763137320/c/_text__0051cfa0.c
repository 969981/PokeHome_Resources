/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051cfa0; name: FUN_.text__0051cfa0
 */


undefined8 FUN__text__0051cfa0(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  uint uVar25;
  long *local_60;
  undefined8 local_58;
  
  *(undefined4 *)(param_1 + 2) = 0;
  uVar25 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)(param_2 + 1);
  iVar13 = 0;
  if (uVar25 != 0 && uVar6 != 0) {
    lVar15 = *param_1;
    iVar13 = 0;
    lVar12 = lVar15 + (ulong)uVar25 * 0x20;
    lVar18 = *param_2;
    lVar5 = lVar18 + (ulong)uVar6 * 0x20;
    do {
      puVar1 = (ulong *)(lVar18 + 0x18);
      lVar3 = lVar18 + 0x20;
      lVar4 = lVar15 + 0x20;
      puVar2 = (ulong *)(lVar15 + 0x18);
      lVar7 = lVar3;
      if (*puVar2 < *puVar1) {
        lVar15 = lVar4;
        lVar7 = lVar18;
      }
      lVar18 = lVar7;
      if (*puVar2 == *puVar1) {
        iVar13 = iVar13 + 1;
        lVar18 = lVar3;
        lVar15 = lVar4;
      }
    } while ((lVar15 != lVar12) && (lVar18 != lVar5));
  }
  uVar25 = (uVar6 + uVar25) - iVar13;
  uVar20 = (ulong)uVar25;
  local_60 = (long *)0x0;
  local_58 = 0;
  if (uVar25 != 0) {
    uVar8 = FUN__text__0051de40(&local_60,uVar20);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (local_60 != (long *)0x0) {
      lVar12 = 0;
      do {
        if (local_60 != (long *)0x0) {
          puVar21 = (undefined8 *)((long)local_60 + lVar12);
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0xffffffffffffffff;
        }
        uVar20 = uVar20 - 1;
        lVar12 = lVar12 + 0x20;
      } while (uVar20 != 0);
    }
  }
  puVar9 = (undefined8 *)*param_2;
  local_58 = CONCAT44(local_58._4_4_,uVar25);
  plVar24 = (long *)*param_1;
  plVar19 = local_60;
  puVar21 = puVar9;
LAB__text__0051d09c:
  plVar22 = (long *)*param_1;
  if (puVar21 != puVar9 + (ulong)*(uint *)(param_2 + 1) * 4) {
    if ((plVar24 != plVar22 + (ulong)*(uint *)(param_1 + 1) * 4) &&
       ((ulong)plVar24[3] <= (ulong)puVar21[3])) {
      if ((ulong)plVar24[3] < (ulong)puVar21[3]) goto LAB__text__0051d110;
      if (*plVar19 != 0) {
        *(undefined4 *)(plVar19 + 1) = 0;
        FUN__text__00400fc0(0xb);
        *plVar19 = 0;
        *(undefined4 *)((long)plVar19 + 0xc) = 0;
      }
      iVar13 = 0;
      *plVar19 = *plVar24;
      *(int *)(plVar19 + 1) = (int)plVar24[1];
      *(undefined4 *)((long)plVar19 + 0xc) = *(undefined4 *)((long)plVar24 + 0xc);
      *plVar24 = 0;
      plVar24[1] = 0;
      uVar25 = *(uint *)(plVar19 + 1);
      puVar9 = (undefined8 *)*plVar19;
      plVar19[2] = plVar24[2];
      plVar19[3] = plVar24[3];
      uVar6 = *(uint *)(puVar21 + 1);
      puVar10 = (undefined8 *)*puVar21;
      if ((uVar25 != 0) && (uVar6 != 0)) {
        iVar13 = 0;
        puVar23 = puVar9;
        puVar17 = puVar10;
        do {
          if (*(uint *)*puVar23 == *(uint *)*puVar17) {
            iVar13 = iVar13 + 1;
            puVar23 = puVar23 + 1;
LAB__text__0051d200:
            puVar17 = puVar17 + 1;
          }
          else {
            if (*(uint *)*puVar17 <= *(uint *)*puVar23) goto LAB__text__0051d200;
            puVar23 = puVar23 + 1;
          }
        } while ((puVar23 != puVar9 + uVar25) && (puVar17 != puVar10 + uVar6));
      }
      uVar25 = (uVar6 + uVar25) - iVar13;
      if (uVar25 == 0) {
        puVar23 = (undefined8 *)0x0;
LAB__text__0051d244:
        puVar14 = puVar10;
        puVar16 = puVar9;
        puVar17 = puVar23;
        do {
          if (puVar14 == puVar10 + *(uint *)(puVar21 + 1)) {
            if (puVar16 == puVar9 + *(uint *)(plVar19 + 1)) goto LAB__text__0051d2d4;
            puVar11 = (uint *)*puVar16;
LAB__text__0051d254:
            *puVar17 = puVar11;
            puVar16 = puVar16 + 1;
          }
          else {
            if (puVar16 == puVar9 + *(uint *)(plVar19 + 1)) {
LAB__text__0051d2a0:
              *puVar17 = (uint *)*puVar14;
            }
            else {
              puVar11 = (uint *)*puVar16;
              uVar6 = *(uint *)*puVar14;
              if (uVar6 < *puVar11) goto LAB__text__0051d2a0;
              if (*puVar11 < uVar6) goto LAB__text__0051d254;
              puVar16 = puVar16 + 1;
              *puVar17 = puVar11;
            }
            puVar14 = puVar14 + 1;
          }
          puVar10 = (undefined8 *)*puVar21;
          puVar17 = puVar17 + 1;
          puVar9 = (undefined8 *)*plVar19;
        } while( true );
      }
      puVar23 = (undefined8 *)FUN__text__00400f80(0xb,(ulong)uVar25 << 3);
      if (puVar23 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*plVar19;
        puVar10 = (undefined8 *)*puVar21;
        goto LAB__text__0051d244;
      }
      uVar25 = *(uint *)(plVar19 + 1);
      goto LAB__text__0051d2ec;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + *(int *)(puVar21 + 1);
    FUN__text__0051d3f0(plVar19,puVar21);
    goto LAB__text__0051d0ec;
  }
  if (plVar24 == plVar22 + (ulong)*(uint *)(param_1 + 1) * 4) {
    if (plVar22 != (long *)0x0) {
      if (*(uint *)(param_1 + 1) != 0) {
        do {
          if (*plVar22 != 0) {
            *(undefined4 *)(plVar22 + 1) = 0;
            FUN__text__00400fc0(0xb);
            *plVar22 = 0;
            *(undefined4 *)((long)plVar22 + 0xc) = 0;
          }
          plVar22 = plVar22 + 4;
        } while (plVar22 != plVar24);
        plVar22 = (long *)*param_1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      FUN__text__00400fc0(10,plVar22);
    }
    *param_1 = (long)local_60;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_58;
    *(undefined4 *)((long)param_1 + 0xc) = local_58._4_4_;
    return 1;
  }
LAB__text__0051d110:
  *(int *)(param_1 + 2) = (int)param_1[2] + (int)plVar24[1];
  if (*plVar19 != 0) {
    *(undefined4 *)(plVar19 + 1) = 0;
    FUN__text__00400fc0(0xb);
    *plVar19 = 0;
    *(undefined4 *)((long)plVar19 + 0xc) = 0;
  }
  *plVar19 = *plVar24;
  *(int *)(plVar19 + 1) = (int)plVar24[1];
  *(undefined4 *)((long)plVar19 + 0xc) = *(undefined4 *)((long)plVar24 + 0xc);
  *plVar24 = 0;
  plVar24[1] = 0;
  plVar19[2] = plVar24[2];
  plVar22 = plVar24 + 3;
  plVar24 = plVar24 + 4;
  plVar19[3] = *plVar22;
  goto LAB__text__0051d094;
LAB__text__0051d2d4:
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(plVar19 + 1) = 0;
    FUN__text__00400fc0(0xb);
  }
  *plVar19 = (long)puVar23;
  *(uint *)(plVar19 + 1) = uVar25;
  *(uint *)((long)plVar19 + 0xc) = uVar25;
LAB__text__0051d2ec:
  plVar24 = plVar24 + 4;
  *(uint *)(param_1 + 2) = (int)param_1[2] + uVar25;
LAB__text__0051d0ec:
  puVar21 = puVar21 + 4;
LAB__text__0051d094:
  puVar9 = (undefined8 *)*param_2;
  plVar19 = plVar19 + 4;
  goto LAB__text__0051d09c;
}


