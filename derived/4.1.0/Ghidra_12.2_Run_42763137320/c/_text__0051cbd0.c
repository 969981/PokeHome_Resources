/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051cbd0; name: FUN_.text__0051cbd0
 */


void FUN__text__0051cbd0(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  *(undefined4 *)(param_1 + 2) = 0;
  if ((int)param_1[1] == 0) {
    uVar11 = 0;
  }
  else {
    plVar15 = (long *)*param_1;
    plVar16 = (long *)*param_2;
    plVar17 = plVar15;
LAB__text__0051cc78:
    do {
      if ((plVar16 == (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x20)) ||
         ((ulong)plVar15[3] < (ulong)plVar16[3])) {
        *(int *)(param_1 + 2) = (int)param_1[2] + (int)plVar15[1];
joined_r0x0051ccb0:
        if (plVar17 != plVar15) {
          if (*plVar17 != 0) {
            *(undefined4 *)(plVar17 + 1) = 0;
            FUN__text__00400fc0(0xb);
            *plVar17 = 0;
            *(undefined4 *)((long)plVar17 + 0xc) = 0;
          }
          *plVar17 = *plVar15;
          *(int *)(plVar17 + 1) = (int)plVar15[1];
          *(undefined4 *)((long)plVar17 + 0xc) = *(undefined4 *)((long)plVar15 + 0xc);
          *plVar15 = 0;
          plVar15[1] = 0;
          plVar17[2] = plVar15[2];
          plVar17[3] = plVar15[3];
        }
        plVar17 = plVar17 + 4;
      }
      else {
        if (plVar15[3] != plVar16[3]) {
          plVar16 = plVar16 + 4;
          lVar3 = *param_1;
          uVar14 = (ulong)*(uint *)(param_1 + 1);
          if (plVar15 == (long *)(lVar3 + uVar14 * 0x20)) break;
          goto LAB__text__0051cc78;
        }
        uVar11 = *(uint *)(plVar15 + 1);
        if (uVar11 == 0) {
          uVar12 = 0;
          *(undefined4 *)(plVar15 + 1) = 0;
        }
        else {
          puVar2 = (undefined8 *)*plVar15;
          puVar4 = (undefined8 *)*plVar16;
          puVar5 = puVar2;
          puVar7 = puVar2;
          do {
            while ((puVar4 != (undefined8 *)(*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 8) &&
                   (puVar9 = (uint *)*puVar4, *puVar9 <= *(uint *)*puVar7))) {
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + (*(uint *)*puVar7 == *puVar9);
              if (puVar7 == puVar2 + uVar11) goto LAB__text__0051cd68;
            }
            if (puVar5 != puVar7) {
              *puVar5 = *puVar7;
              puVar2 = (undefined8 *)*plVar15;
              uVar11 = *(uint *)(plVar15 + 1);
            }
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar2 + uVar11);
LAB__text__0051cd68:
          uVar12 = (uint)((ulong)((long)puVar5 - (long)puVar2) >> 3);
          if ((uVar12 < uVar11) || (uVar12 <= *(uint *)((long)plVar15 + 0xc))) {
LAB__text__0051ce8c:
            *(uint *)(plVar15 + 1) = uVar12;
          }
          else {
            if (puVar2 == (undefined8 *)0x0) {
              lVar3 = FUN__text__00400f80(0xb,(long)puVar5 - (long)puVar2 & 0x7fffffff8);
              if (lVar3 != 0) {
                lVar8 = *plVar15;
                if ((lVar8 != 0) && (lVar8 != lVar3)) {
                  if (uVar11 != 0) {
                    if (uVar11 < 4) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = 0;
                      puVar4 = (undefined8 *)(lVar3 + 0x10);
                      do {
                        lVar8 = uVar14 * 8;
                        uVar14 = uVar14 + 4;
                        puVar4[-2] = *(undefined8 *)(*plVar15 + lVar8);
                        puVar4[-1] = *(undefined8 *)(*plVar15 + lVar8 + 8);
                        *puVar4 = *(undefined8 *)(*plVar15 + lVar8 + 0x10);
                        puVar4[1] = *(undefined8 *)(*plVar15 + lVar8 + 0x18);
                        puVar4 = puVar4 + 4;
                      } while (((ulong)uVar11 & 0xfffffffc) != uVar14);
                    }
                    uVar10 = (ulong)uVar11 & 3;
                    if ((uVar11 & 3) != 0) {
                      lVar8 = uVar14 << 3;
                      do {
                        uVar10 = uVar10 - 1;
                        *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(*plVar15 + lVar8);
                        lVar8 = lVar8 + 8;
                      } while (uVar10 != 0);
                    }
                    lVar8 = *plVar15;
                  }
                  FUN__text__00400fc0(0xb,lVar8);
                }
                goto LAB__text__0051ce84;
              }
            }
            else {
              lVar3 = FUN__text__00400fa0();
              if (lVar3 != 0) {
LAB__text__0051ce84:
                *plVar15 = lVar3;
                *(uint *)((long)plVar15 + 0xc) = uVar12;
                goto LAB__text__0051ce8c;
              }
            }
            uVar12 = *(uint *)(plVar15 + 1);
          }
        }
        if (uVar12 != 0) {
          *(uint *)(param_1 + 2) = (int)param_1[2] + uVar12;
          goto joined_r0x0051ccb0;
        }
        plVar16 = plVar16 + 4;
      }
      plVar15 = plVar15 + 4;
      lVar3 = *param_1;
      uVar14 = (ulong)*(uint *)(param_1 + 1);
    } while (plVar15 != (long *)(lVar3 + uVar14 * 0x20));
    uVar10 = (long)plVar17 - lVar3;
    uVar11 = (uint)(uVar10 >> 5);
    uVar12 = (uint)uVar14;
    if (uVar11 < uVar12) {
      iVar13 = uVar12 - uVar11;
      uVar10 = uVar10 & 0x1fffffffe0;
      do {
        if (*(long *)(*param_1 + uVar10) != 0) {
          puVar4 = (undefined8 *)(*param_1 + uVar10);
          *(undefined4 *)(puVar4 + 1) = 0;
          FUN__text__00400fc0(0xb);
          *puVar4 = 0;
          *(undefined4 *)((long)puVar4 + 0xc) = 0;
        }
        iVar13 = iVar13 + -1;
        uVar10 = uVar10 + 0x20;
      } while (iVar13 != 0);
    }
    else {
      iVar13 = uVar11 - *(uint *)((long)param_1 + 0xc);
      if (*(uint *)((long)param_1 + 0xc) <= uVar11 && iVar13 != 0) {
        uVar1 = FUN__text__0051de40(param_1,iVar13);
        if ((uVar1 & 1) == 0) {
          return;
        }
        lVar3 = *param_1;
      }
      if ((uVar12 < uVar11) && (lVar3 != 0)) {
        lVar8 = uVar14 << 5;
        lVar6 = uVar14 - (uVar10 >> 5 & 0xffffffff);
        while( true ) {
          lVar6 = lVar6 + 1;
          if (lVar3 != 0) {
            puVar4 = (undefined8 *)(lVar3 + lVar8);
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0xffffffffffffffff;
          }
          if (lVar6 == 0) break;
          lVar3 = *param_1;
          lVar8 = lVar8 + 0x20;
        }
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar11;
  return;
}


