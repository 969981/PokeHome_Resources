/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00490660; name: FUN_.text__00490660
 */


void FUN__text__00490660(float param_1,undefined4 param_2,undefined4 param_3,long param_4,
                        long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  
  lVar5 = -4;
  if (*(long *)(param_4 + 0x68) != -1) {
    lVar5 = *(long *)(param_4 + 0x68);
  }
  if ((*(int *)(param_4 + 0x70) != 0) && (0.0 < *(float *)(param_4 + 0x74))) {
    uVar6 = *(uint *)(param_5 + 1);
    uVar15 = (ulong)uVar6;
    uVar7 = *(uint *)((long)param_5 + 0xc);
    lVar14 = *param_5;
    if (uVar6 < uVar7) {
      *(uint *)(param_5 + 1) = uVar6 + 1;
      if (lVar14 == 0) goto LAB__text__00490820;
    }
    else {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      if (lVar14 == 0) {
        lVar14 = FUN__text__00400f80(0,(ulong)uVar7 << 5);
        if (lVar14 == 0) goto LAB__text__00490820;
        lVar10 = *param_5;
        if ((lVar10 != 0) && (lVar10 != lVar14)) {
          if (uVar6 != 0) {
            if (uVar6 == 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              lVar10 = 0x20;
              puVar12 = (undefined8 *)(lVar14 + 0x20);
              do {
                uVar11 = uVar11 + 2;
                lVar2 = *param_5 + lVar10;
                uVar8 = *(undefined8 *)(lVar2 + -0x20);
                uVar9 = *(undefined8 *)(lVar2 + -0x18);
                uVar13 = *(undefined8 *)(lVar2 + -0x10);
                *(undefined4 *)(puVar12 + -1) = *(undefined4 *)(lVar2 + -8);
                puVar12[-3] = uVar9;
                puVar12[-2] = uVar13;
                puVar12[-4] = uVar8;
                puVar3 = (undefined8 *)(*param_5 + lVar10);
                lVar10 = lVar10 + 0x40;
                uVar8 = *puVar3;
                uVar9 = puVar3[1];
                uVar13 = puVar3[2];
                *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar3 + 3);
                puVar12[1] = uVar9;
                puVar12[2] = uVar13;
                *puVar12 = uVar8;
                puVar12 = puVar12 + 8;
              } while ((uVar15 & 0xfffffffe) != uVar11);
            }
            if ((uVar6 & 1) != 0) {
              puVar12 = (undefined8 *)(*param_5 + uVar11 * 0x20);
              puVar3 = (undefined8 *)(lVar14 + uVar11 * 0x20);
              uVar8 = *puVar12;
              uVar9 = puVar12[1];
              uVar13 = puVar12[2];
              *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar12 + 3);
              puVar3[1] = uVar9;
              puVar3[2] = uVar13;
              *puVar3 = uVar8;
            }
            lVar10 = *param_5;
          }
          FUN__text__00400fc0(0,lVar10);
        }
      }
      else {
        lVar14 = FUN__text__00400fa0(0,lVar14);
        if (lVar14 == 0) goto LAB__text__00490820;
      }
      *param_5 = lVar14;
      *(uint *)((long)param_5 + 0xc) = uVar7;
      if (uVar7 <= uVar6) goto LAB__text__00490820;
      uVar15 = (ulong)*(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) + 1;
    }
    plVar4 = (long *)(lVar14 + uVar15 * 0x20);
    *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(param_4 + 0x70);
    fVar16 = *(float *)(param_4 + 0x74);
    *plVar4 = lVar5;
    *(undefined4 *)((long)plVar4 + 0x14) = param_2;
    *(undefined4 *)(plVar4 + 3) = param_3;
    *(undefined4 *)(plVar4 + 2) = 1;
    *(float *)((long)plVar4 + 0xc) = fVar16 * param_1;
  }
LAB__text__00490820:
  lVar5 = -4;
  if (*(long *)(param_4 + 0x80) != -1) {
    lVar5 = *(long *)(param_4 + 0x80);
  }
  if ((*(int *)(param_4 + 0x88) != 0) && (0.0 < *(float *)(param_4 + 0x8c))) {
    uVar6 = *(uint *)(param_5 + 1);
    uVar15 = (ulong)uVar6;
    uVar7 = *(uint *)((long)param_5 + 0xc);
    lVar14 = *param_5;
    if (uVar6 < uVar7) {
      *(uint *)(param_5 + 1) = uVar6 + 1;
      if (lVar14 == 0) {
        return;
      }
    }
    else {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      if (lVar14 == 0) {
        lVar14 = FUN__text__00400f80(0,(ulong)uVar7 << 5);
        if (lVar14 == 0) {
          return;
        }
        lVar10 = *param_5;
        if ((lVar10 != 0) && (lVar10 != lVar14)) {
          if (uVar6 != 0) {
            if (uVar6 == 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              lVar10 = 0x20;
              puVar12 = (undefined8 *)(lVar14 + 0x20);
              do {
                uVar11 = uVar11 + 2;
                lVar2 = *param_5 + lVar10;
                uVar8 = *(undefined8 *)(lVar2 + -0x20);
                uVar9 = *(undefined8 *)(lVar2 + -0x18);
                uVar13 = *(undefined8 *)(lVar2 + -0x10);
                *(undefined4 *)(puVar12 + -1) = *(undefined4 *)(lVar2 + -8);
                puVar12[-3] = uVar9;
                puVar12[-2] = uVar13;
                puVar12[-4] = uVar8;
                puVar3 = (undefined8 *)(*param_5 + lVar10);
                lVar10 = lVar10 + 0x40;
                uVar8 = *puVar3;
                uVar9 = puVar3[1];
                uVar13 = puVar3[2];
                *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar3 + 3);
                puVar12[1] = uVar9;
                puVar12[2] = uVar13;
                *puVar12 = uVar8;
                puVar12 = puVar12 + 8;
              } while ((uVar15 & 0xfffffffe) != uVar11);
            }
            if ((uVar6 & 1) != 0) {
              puVar12 = (undefined8 *)(*param_5 + uVar11 * 0x20);
              puVar3 = (undefined8 *)(lVar14 + uVar11 * 0x20);
              uVar8 = *puVar12;
              uVar9 = puVar12[1];
              uVar13 = puVar12[2];
              *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar12 + 3);
              puVar3[1] = uVar9;
              puVar3[2] = uVar13;
              *puVar3 = uVar8;
            }
            lVar10 = *param_5;
          }
          FUN__text__00400fc0(0,lVar10);
        }
      }
      else {
        lVar14 = FUN__text__00400fa0(0,lVar14);
        if (lVar14 == 0) {
          return;
        }
      }
      *param_5 = lVar14;
      *(uint *)((long)param_5 + 0xc) = uVar7;
      if (uVar7 <= uVar6) {
        return;
      }
      uVar15 = (ulong)*(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) + 1;
    }
    plVar4 = (long *)(lVar14 + uVar15 * 0x20);
    *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(param_4 + 0x88);
    fVar16 = *(float *)(param_4 + 0x8c);
    *plVar4 = lVar5;
    *(undefined8 *)((long)plVar4 + 0x14) = 0;
    *(undefined4 *)(plVar4 + 2) = 1;
    *(float *)((long)plVar4 + 0xc) = fVar16 * param_1;
  }
  return;
}


