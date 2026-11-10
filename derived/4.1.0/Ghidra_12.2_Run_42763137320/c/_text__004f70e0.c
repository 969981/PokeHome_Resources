/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f70e0; name: FUN_.text__004f70e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004f70e0(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  undefined1 auVar8 [16];
  uint *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  
  iVar10 = FUN__text__004f2550();
  if (iVar10 == 1) {
    FUN__text__004f7010();
    uVar4 = *(uint *)*param_2;
    *param_2 = (uint *)*param_2 + 1;
    if (uVar4 != 0) {
      iVar10 = uVar4 - *(uint *)(param_1 + 0x134);
      if ((*(uint *)(param_1 + 0x134) <= uVar4 && iVar10 != 0) &&
         (uVar11 = FUN__text__004f8050(param_1 + 0x128,iVar10), (uVar11 & 1) == 0)) {
        return 2;
      }
      uVar19 = 0;
      do {
        uVar17 = *(uint *)(param_1 + 0x130);
        uVar18 = *(uint *)(param_1 + 0x134);
        if (uVar17 < uVar18) {
LAB__text__004f71ac:
          *(uint *)(param_1 + 0x130) = uVar17 + 1;
          if (*(long *)(param_1 + 0x128) != 0) {
            plVar20 = (long *)(*(long *)(param_1 + 0x128) + (ulong)uVar17 * 0x60);
            plVar20[10] = 0;
            *plVar20 = 0;
            plVar20[1] = 0;
            plVar20[2] = 0;
            plVar20[3] = 0;
            goto LAB__text__004f71d0;
          }
          plVar20 = (long *)0x0;
          uVar17 = *(uint *)*param_2;
          uVar11 = (ulong)uVar17;
          *param_2 = (uint *)*param_2 + 1;
          if (uVar17 <= uRam000000000000000c) goto LAB__text__004f7230;
LAB__text__004f71e8:
          if (*plVar20 == 0) {
            uVar17 = *(uint *)(plVar20 + 1);
            lVar12 = FUN__text__00400f80(0,uVar11 << 2);
            if (lVar12 == 0) {
              return 2;
            }
            lVar14 = *plVar20;
            if ((lVar14 != 0) && (lVar14 != lVar12)) {
              if (uVar17 != 0) {
                if (uVar17 < 4) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  puVar13 = (undefined4 *)(lVar12 + 8);
                  do {
                    lVar14 = uVar16 * 4;
                    uVar16 = uVar16 + 4;
                    puVar13[-2] = *(undefined4 *)(*plVar20 + lVar14);
                    puVar13[-1] = *(undefined4 *)(*plVar20 + lVar14 + 4);
                    *puVar13 = *(undefined4 *)(*plVar20 + lVar14 + 8);
                    puVar13[1] = *(undefined4 *)(*plVar20 + lVar14 + 0xc);
                    puVar13 = puVar13 + 4;
                  } while (((ulong)uVar17 & 0xfffffffc) != uVar16);
                }
                uVar15 = (ulong)uVar17 & 3;
                if ((uVar17 & 3) != 0) {
                  lVar14 = uVar16 << 2;
                  do {
                    uVar15 = uVar15 - 1;
                    *(undefined4 *)(lVar12 + lVar14) = *(undefined4 *)(*plVar20 + lVar14);
                    lVar14 = lVar14 + 4;
                  } while (uVar15 != 0);
                }
                lVar14 = *plVar20;
              }
              FUN__text__00400fc0(0,lVar14);
            }
          }
          else {
            lVar12 = FUN__text__00400fa0(0);
            if (lVar12 == 0) {
              return 2;
            }
          }
          *plVar20 = lVar12;
          iVar10 = (int)uVar11;
          *(int *)((long)plVar20 + 0xc) = iVar10;
        }
        else {
          iVar10 = uVar18 + (uVar18 >> 1);
          if (uVar18 == 0) {
            iVar10 = 1;
          }
          uVar11 = FUN__text__004f8050(param_1 + 0x128,iVar10);
          plVar20 = (long *)0x0;
          if (((uVar11 & 1) != 0) && (uVar17 < *(uint *)(param_1 + 0x134))) {
            uVar17 = *(uint *)(param_1 + 0x130);
            goto LAB__text__004f71ac;
          }
LAB__text__004f71d0:
          uVar17 = *(uint *)*param_2;
          uVar11 = (ulong)uVar17;
          *param_2 = (uint *)*param_2 + 1;
          if (*(uint *)((long)plVar20 + 0xc) < uVar17) goto LAB__text__004f71e8;
LAB__text__004f7230:
          iVar10 = (int)uVar11;
        }
        if (iVar10 != 0) {
          iVar10 = 0;
          do {
            uVar5 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            uVar18 = *(uint *)(plVar20 + 1);
            uVar16 = (ulong)uVar18;
            uVar17 = *(uint *)((long)plVar20 + 0xc);
            lVar12 = *plVar20;
            if (uVar18 < uVar17) {
              *(uint *)(plVar20 + 1) = uVar18 + 1;
              if (lVar12 == 0) goto LAB__text__004f7330;
LAB__text__004f732c:
              *(undefined4 *)(lVar12 + uVar16 * 4) = uVar5;
            }
            else {
              iVar1 = uVar17 + (uVar17 >> 1);
              if (uVar17 == 0) {
                iVar1 = 1;
              }
              uVar17 = iVar1 + uVar17;
              if (lVar12 == 0) {
                lVar12 = FUN__text__00400f80(0,(ulong)uVar17 << 2);
                if (lVar12 != 0) {
                  lVar14 = *plVar20;
                  if ((lVar14 != 0) && (lVar14 != lVar12)) {
                    if (uVar18 != 0) {
                      if (uVar18 < 4) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = 0;
                        puVar13 = (undefined4 *)(lVar12 + 8);
                        do {
                          lVar14 = uVar15 * 4;
                          uVar15 = uVar15 + 4;
                          puVar13[-2] = *(undefined4 *)(*plVar20 + lVar14);
                          puVar13[-1] = *(undefined4 *)(*plVar20 + lVar14 + 4);
                          *puVar13 = *(undefined4 *)(*plVar20 + lVar14 + 8);
                          puVar13[1] = *(undefined4 *)(*plVar20 + lVar14 + 0xc);
                          puVar13 = puVar13 + 4;
                        } while ((uVar16 & 0xfffffffc) != uVar15);
                      }
                      uVar16 = uVar16 & 3;
                      if ((uVar18 & 3) != 0) {
                        lVar14 = uVar15 << 2;
                        do {
                          uVar16 = uVar16 - 1;
                          *(undefined4 *)(lVar12 + lVar14) = *(undefined4 *)(*plVar20 + lVar14);
                          lVar14 = lVar14 + 4;
                        } while (uVar16 != 0);
                      }
                      lVar14 = *plVar20;
                    }
                    FUN__text__00400fc0(0,lVar14);
                  }
                  goto LAB__text__004f7454;
                }
              }
              else {
                lVar12 = FUN__text__00400fa0(0,lVar12);
                if (lVar12 != 0) {
LAB__text__004f7454:
                  *plVar20 = lVar12;
                  *(uint *)((long)plVar20 + 0xc) = uVar17;
                  if (uVar18 < uVar17) {
                    uVar16 = (ulong)*(uint *)(plVar20 + 1);
                    *(uint *)(plVar20 + 1) = *(uint *)(plVar20 + 1) + 1;
                    goto LAB__text__004f732c;
                  }
                }
              }
            }
LAB__text__004f7330:
            iVar10 = iVar10 + 1;
          } while (iVar10 != (int)uVar11);
        }
        uVar17 = *(uint *)*param_2;
        *param_2 = (uint *)*param_2 + 1;
        if (*(uint *)((long)plVar20 + 0x1c) < uVar17) {
          if (plVar20[2] == 0) {
            uVar18 = *(uint *)(plVar20 + 3);
            lVar12 = FUN__text__00400f80(0,(ulong)uVar17 << 2);
            if (lVar12 == 0) {
              return 2;
            }
            lVar14 = plVar20[2];
            if ((lVar14 != 0) && (lVar14 != lVar12)) {
              if (uVar18 != 0) {
                if (uVar18 < 4) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = 0;
                  puVar13 = (undefined4 *)(lVar12 + 8);
                  do {
                    lVar14 = uVar11 * 4;
                    uVar11 = uVar11 + 4;
                    puVar13[-2] = *(undefined4 *)(plVar20[2] + lVar14);
                    puVar13[-1] = *(undefined4 *)(plVar20[2] + lVar14 + 4);
                    *puVar13 = *(undefined4 *)(plVar20[2] + lVar14 + 8);
                    puVar13[1] = *(undefined4 *)(plVar20[2] + lVar14 + 0xc);
                    puVar13 = puVar13 + 4;
                  } while (((ulong)uVar18 & 0xfffffffc) != uVar11);
                }
                uVar16 = (ulong)uVar18 & 3;
                if ((uVar18 & 3) != 0) {
                  lVar14 = uVar11 << 2;
                  do {
                    uVar16 = uVar16 - 1;
                    *(undefined4 *)(lVar12 + lVar14) = *(undefined4 *)(plVar20[2] + lVar14);
                    lVar14 = lVar14 + 4;
                  } while (uVar16 != 0);
                }
                lVar14 = plVar20[2];
              }
              FUN__text__00400fc0(0,lVar14);
            }
          }
          else {
            lVar12 = FUN__text__00400fa0(0);
            if (lVar12 == 0) {
              return 2;
            }
          }
          plVar20[2] = lVar12;
          *(uint *)((long)plVar20 + 0x1c) = uVar17;
        }
        if (uVar17 != 0) {
          uVar18 = 0;
          do {
            uVar5 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            uVar2 = *(uint *)(plVar20 + 3);
            uVar11 = (ulong)uVar2;
            uVar3 = *(uint *)((long)plVar20 + 0x1c);
            lVar12 = plVar20[2];
            if (uVar2 < uVar3) {
              *(uint *)(plVar20 + 3) = uVar2 + 1;
              if (lVar12 == 0) goto LAB__text__004f75a0;
LAB__text__004f759c:
              *(undefined4 *)(lVar12 + uVar11 * 4) = uVar5;
            }
            else {
              iVar10 = uVar3 + (uVar3 >> 1);
              if (uVar3 == 0) {
                iVar10 = 1;
              }
              uVar3 = iVar10 + uVar3;
              if (lVar12 == 0) {
                lVar12 = FUN__text__00400f80(0,(ulong)uVar3 << 2);
                if (lVar12 != 0) {
                  lVar14 = plVar20[2];
                  if ((lVar14 != 0) && (lVar14 != lVar12)) {
                    if (uVar2 != 0) {
                      if (uVar2 < 4) {
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = 0;
                        puVar13 = (undefined4 *)(lVar12 + 8);
                        do {
                          lVar14 = uVar16 * 4;
                          uVar16 = uVar16 + 4;
                          puVar13[-2] = *(undefined4 *)(plVar20[2] + lVar14);
                          puVar13[-1] = *(undefined4 *)(plVar20[2] + lVar14 + 4);
                          *puVar13 = *(undefined4 *)(plVar20[2] + lVar14 + 8);
                          puVar13[1] = *(undefined4 *)(plVar20[2] + lVar14 + 0xc);
                          puVar13 = puVar13 + 4;
                        } while ((uVar11 & 0xfffffffc) != uVar16);
                      }
                      uVar11 = uVar11 & 3;
                      if ((uVar2 & 3) != 0) {
                        lVar14 = uVar16 << 2;
                        do {
                          uVar11 = uVar11 - 1;
                          *(undefined4 *)(lVar12 + lVar14) = *(undefined4 *)(plVar20[2] + lVar14);
                          lVar14 = lVar14 + 4;
                        } while (uVar11 != 0);
                      }
                      lVar14 = plVar20[2];
                    }
                    FUN__text__00400fc0(0,lVar14);
                  }
                  goto LAB__text__004f76c4;
                }
              }
              else {
                lVar12 = FUN__text__00400fa0(0,lVar12);
                if (lVar12 != 0) {
LAB__text__004f76c4:
                  plVar20[2] = lVar12;
                  *(uint *)((long)plVar20 + 0x1c) = uVar3;
                  if (uVar2 < uVar3) {
                    uVar11 = (ulong)*(uint *)(plVar20 + 3);
                    *(uint *)(plVar20 + 3) = *(uint *)(plVar20 + 3) + 1;
                    goto LAB__text__004f759c;
                  }
                }
              }
            }
LAB__text__004f75a0:
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar17);
        }
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)(plVar20 + 4) = uVar5;
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)((long)plVar20 + 0x24) = uVar5;
        iVar10 = *(int *)*param_2;
        *param_2 = (int *)*param_2 + 1;
        puVar9 = _DAT_008a4b68;
        auVar8 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)iVar10)) * SEXT816(0x20c49ba5e353f7cf)
        ;
        *(int *)(plVar20 + 5) = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
        bVar6 = *(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 4;
        *(byte *)(plVar20 + 6) = *(byte *)(plVar20 + 6) & 0xe0 | bVar6 & 0x1f;
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)((long)plVar20 + 0x2c) = uVar5;
        bVar6 = *(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 1;
        *(byte *)(plVar20 + 6) = *(byte *)(plVar20 + 6) & 0xdf | (bVar6 & 1) << 5;
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)((long)plVar20 + 0x34) = uVar5;
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)(plVar20 + 7) = uVar5;
        iVar10 = *(int *)*param_2;
        *param_2 = (int *)*param_2 + 1;
        auVar8 = SEXT816((long)((ulong)*puVar9 * (long)iVar10)) * SEXT816(0x20c49ba5e353f7cf);
        *(int *)((long)plVar20 + 0x3c) = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)(plVar20 + 8) = uVar5;
        uVar5 = *(undefined4 *)*param_2;
        *param_2 = (undefined4 *)*param_2 + 1;
        *(undefined4 *)((long)plVar20 + 0x44) = uVar5;
        bVar6 = *(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 2;
        *(byte *)(plVar20 + 9) = *(byte *)(plVar20 + 9) & 0xf8 | bVar6 & 7;
        bVar6 = *(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 2;
        *(byte *)(plVar20 + 9) = *(byte *)(plVar20 + 9) & 199 | (bVar6 & 7) << 3;
        bVar6 = *(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 1;
        *(byte *)(plVar20 + 9) = *(byte *)(plVar20 + 9) & 0xbf | (bVar6 & 1) << 6;
        cVar7 = *(char *)*param_2;
        *param_2 = (char *)*param_2 + 1;
        *(byte *)(plVar20 + 9) = *(byte *)(plVar20 + 9) & 0x7f | cVar7 << 7;
        cVar7 = *(char *)*param_2;
        *param_2 = (char *)*param_2 + 1;
        if (cVar7 != '\0') {
          puVar13 = (undefined4 *)FUN__text__00400f80(2,0x20);
          plVar20[10] = (long)puVar13;
          if (puVar13 == (undefined4 *)0x0) {
            return 2;
          }
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *puVar13 = uVar5;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          puVar13[1] = uVar5;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          puVar13[2] = uVar5;
          iVar10 = *(int *)*param_2;
          *param_2 = (int *)*param_2 + 1;
          puVar9 = _DAT_008a4b68;
          auVar8 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)iVar10)) *
                   SEXT816(0x20c49ba5e353f7cf);
          puVar13[3] = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          puVar13[4] = uVar5;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          puVar13[5] = uVar5;
          iVar10 = *(int *)*param_2;
          *param_2 = (int *)*param_2 + 1;
          auVar8 = SEXT816((long)((ulong)*puVar9 * (long)iVar10)) * SEXT816(0x20c49ba5e353f7cf);
          puVar13[6] = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
          bVar6 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(byte *)(puVar13 + 7) = *(byte *)(puVar13 + 7) & 0xfe | bVar6 & 1;
          bVar6 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(byte *)(puVar13 + 7) = *(byte *)(puVar13 + 7) & 0xfd | (bVar6 & 1) << 1;
        }
        *(uint *)(plVar20 + 0xb) = uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar4);
    }
    iVar10 = 1;
  }
  return iVar10;
}


