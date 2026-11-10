/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431180; name: FUN_.text__00431180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00431180(undefined8 *param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  uint3 *puVar1;
  void *__dest;
  int iVar2;
  int *piVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined2 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ushort *puVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ushort *puVar20;
  float *pfVar21;
  int *piVar22;
  long *plVar23;
  int iVar24;
  float *pfVar25;
  undefined8 *puVar26;
  ulong uVar27;
  float fVar28;
  long local_a8;
  ulong uStack_a0;
  float local_98;
  float fStack_94;
  int local_90;
  undefined8 local_8c;
  byte local_84;
  undefined2 local_83;
  
  piVar14 = (int *)*param_1;
  uVar19 = *(uint *)(param_1 + 1);
  piVar22 = piVar14;
  if (uVar19 == 0) {
LAB__text__004311f0:
    if ((piVar22 != piVar14 + (ulong)uVar19 * 4) &&
       ((((piVar22 = *(int **)(piVar22 + 2), (param_5 & 1) != 0 ||
          (FUN__text__00431600(param_1,param_2,piVar22[1],param_3), DAT_00ae9dd8 == (code *)0x0)) ||
         ((param_4 & 1) != 0)) || (uVar8 = (*DAT_00ae9dd8)(param_2,param_3), (uVar8 & 1) == 0)))) {
      if ((param_4 & 1) == 0) {
        if (piVar22[1] == param_3) {
          return;
        }
        piVar14 = *(int **)(piVar22 + 4);
        uVar19 = piVar22[6];
        piVar16 = piVar14 + (ulong)uVar19 * 3;
        if (uVar19 != 0) {
          lVar17 = (ulong)uVar19 * 0xc;
          do {
            if (*piVar14 == piVar22[1] && piVar14[1] == param_3) goto LAB__text__004312a4;
            piVar14 = piVar14 + 3;
            lVar17 = lVar17 + -0xc;
          } while (lVar17 != 0);
          piVar14 = piVar16;
        }
LAB__text__004312a4:
        piVar3 = piVar22;
        if (piVar14 != piVar16) {
          piVar3 = piVar14 + 2;
        }
        iVar24 = *piVar3;
        lVar17 = *(long *)(piVar22 + 2);
      }
      else {
        iVar24 = 0;
        lVar17 = *(long *)(piVar22 + 2);
      }
      if (lVar17 != 0) {
        puVar26 = _DAT_008a4648;
        do {
          *(int *)(lVar17 + 0x3c) = param_3;
          plVar23 = *(long **)(lVar17 + 0x18);
          lVar9 = FUN__text__0042eca0(lVar17);
          plVar10 = (long *)(**(code **)(*plVar23 + 0x38))(plVar23);
          if ((plVar10 != (long *)0x0) && ((int)plVar10[1] != 0)) {
            uVar8 = 0;
            do {
              puVar1 = (uint3 *)(*plVar10 + uVar8 * 4);
              puVar15 = *(ushort **)(lVar17 + 0x20);
              uVar5 = (ushort)*puVar1;
              iVar2 = 0;
              if (*(char *)((long)puVar1 + 2) != '\x04') {
                iVar2 = iVar24;
              }
              if (puVar15 != (ushort *)0x0) {
                uVar6 = *puVar15;
                uVar19 = (uint)uVar6;
                if (uVar6 < 2) {
                  uVar19 = 1;
                }
                uVar18 = (ulong)uVar19;
                pfVar25 = (float *)((long)puVar15 + ((ulong)((uint)uVar6 * 2 + 9) & 0x3fff8));
                puVar20 = puVar15;
                do {
                  puVar20 = puVar20 + 1;
                  if (*puVar20 == uVar5) goto LAB__text__004313bc;
                  pfVar25 = pfVar25 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              pfVar25 = (float *)0x0;
LAB__text__004313bc:
              fVar28 = 1.0;
              if (*(char *)((long)puVar1 + 2) != '\x03') {
                fVar28 = 0.0;
              }
              if ((lVar9 != 0) && (puVar20 = *(ushort **)(lVar9 + 0x18), puVar20 != (ushort *)0x0))
              {
                uVar6 = *puVar20;
                uVar19 = (uint)uVar6;
                if (uVar6 < 2) {
                  uVar19 = 1;
                }
                uVar18 = (ulong)uVar19;
                pfVar21 = (float *)((long)puVar20 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc));
                do {
                  puVar20 = puVar20 + 1;
                  if (*puVar20 == uVar5) {
                    bVar4 = *(byte *)((long)puVar1 + 3);
                    uVar18 = (ulong)*puVar1 | ((ulong)bVar4 & 1) << 0x18;
                    fVar7 = *pfVar21;
                    goto joined_r0x0043145c;
                  }
                  pfVar21 = pfVar21 + 1;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              bVar4 = *(byte *)((long)puVar1 + 3);
              uVar18 = (ulong)*puVar1 | ((ulong)bVar4 & 1) << 0x18;
              fVar7 = fVar28;
joined_r0x0043145c:
              if (pfVar25 == (float *)0x0) {
                if (fVar28 != fVar7) {
                  if (puVar15 == (ushort *)0x0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = (ulong)*puVar15;
                  }
                  lVar12 = uVar13 + 1;
                  uVar27 = (ulong)((int)lVar12 * 2 + 9) & 0x7fff8;
                  puVar11 = (undefined2 *)FUN__text__00400f80(0,uVar27 + lVar12 * 0x10);
                  pfVar25 = (float *)0x0;
                  if (puVar11 != (undefined2 *)0x0) {
                    __dest = (void *)((long)puVar11 + uVar27);
                    if (*(long *)(lVar17 + 0x20) != 0) {
                      memcpy(puVar11 + 1,(void *)(*(long *)(lVar17 + 0x20) + 2),uVar13 << 1);
                      memcpy(__dest,(void *)(*(long *)(lVar17 + 0x20) +
                                            ((ulong)((int)(uVar13 << 1) + 9) & 0x3fff8)),uVar13 << 4
                            );
                      FUN__text__00400fc0(0,*(undefined8 *)(lVar17 + 0x20));
                    }
                    puVar11[lVar12] = uVar5;
                    *puVar11 = (short)lVar12;
                    *(undefined2 **)(lVar17 + 0x20) = puVar11;
                    pfVar25 = (float *)((long)__dest + uVar13 * 0x10);
                    *pfVar25 = 0.0;
                    pfVar25[2] = 0.0;
                    pfVar25[3] = 0.0;
                  }
                  puVar26 = _DAT_008a4648;
                  if (iVar2 == 0) {
LAB__text__004315a8:
                    FUN__text__0042eec0(fVar7,lVar17,uVar18,1);
                  }
                  else {
LAB__text__00431518:
                    local_84 = bVar4 & 1;
                    local_8c = 0xc00000004;
                    local_83 = 1;
                    local_a8 = lVar17;
                    uStack_a0 = uVar18;
                    local_98 = fVar28;
                    fStack_94 = fVar7;
                    local_90 = iVar2;
                    lVar12 = FUN__text__0042f18c(*puVar26,&local_a8,1);
                    if (pfVar25 == (float *)0x0) {
                      if (lVar12 != 0) {
LAB__text__00431590:
                        FUN__text__0042f5a0(*puVar26,lVar12,lVar17);
                      }
                    }
                    else {
                      *(long *)(pfVar25 + 2) = lVar12;
                      if (lVar12 == 0) {
                        *pfVar25 = fVar7;
                        goto LAB__text__004315a8;
                      }
                      uVar13 = (**(code **)(*plVar23 + 0x10))();
                      if ((uVar13 & 1) == 0) {
                        FUN__text__0042eec0(fVar7,lVar17,uVar18,1);
                        goto LAB__text__00431590;
                      }
                    }
                  }
                }
              }
              else if (*(long *)(pfVar25 + 2) == 0) {
                fVar28 = *pfVar25;
                if (fVar28 != fVar7) {
                  if (iVar2 != 0) goto LAB__text__00431518;
                  goto LAB__text__004315a8;
                }
              }
              else {
                FUN__text__0042f65c(fVar7,*puVar26,*(long *)(pfVar25 + 2),uVar18,iVar2,4,0);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(plVar10 + 1));
          }
          lVar17 = *(long *)(lVar17 + 8);
        } while (lVar17 != 0);
      }
      piVar22[1] = param_3;
    }
  }
  else {
    lVar17 = (ulong)uVar19 << 4;
    do {
      if (*piVar22 == param_2) goto LAB__text__004311f0;
      piVar22 = piVar22 + 4;
      lVar17 = lVar17 + -0x10;
    } while (lVar17 != 0);
  }
  return;
}


