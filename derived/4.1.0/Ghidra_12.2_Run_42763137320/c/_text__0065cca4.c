/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065cca4; name: FUN_.text__0065cca4
 */


int FUN__text__0065cca4(long *param_1,int param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 local_78;
  long local_70;
  undefined4 local_64;
  
  lVar24 = param_1[0xcb];
  if (lVar24 == 0) {
    lVar24 = FUN__text__00678414(1,0x4028);
    if (lVar24 == 0) {
      return 0x1b;
    }
    FUN__text__00666f74(*param_1,0x716dc5);
    param_1[0xcb] = lVar24;
    *(undefined4 *)(lVar24 + 0x4020) = 0;
    *(undefined4 *)(lVar24 + 0x4004) = 1;
    *(long *)(lVar24 + 0x4008) = lVar24;
    *(long *)(lVar24 + 0x4010) = lVar24;
    *(undefined8 *)(lVar24 + 0x4018) = 0;
    *(byte *)(lVar24 + 0x4024) = *(byte *)(lVar24 + 0x4024) & 0xfd;
    lVar24 = param_1[0xcb];
    local_64 = 0;
    if (lVar24 != 0) goto LAB__text__0065cce4;
  }
  else {
LAB__text__0065cce4:
    local_64 = 0;
    piVar3 = (int *)(lVar24 + 0x4000);
    if (*(int *)(lVar24 + 0x4020) != 2) {
      lVar22 = *param_1;
      puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 600);
      uVar8 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600);
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xff7fffff;
      piVar2 = (int *)(lVar22 + 0x180);
      plVar4 = (long *)(lVar24 + 0x4018);
      do {
        if (*(int *)(lVar24 + 0x4020) == 0) {
          local_70 = 0;
          FUN__text__00666f74(lVar22,0x7154b8,param_3,param_4);
          FUN__text__006783e4(*(undefined8 *)(lVar22 + 0x1d0));
          *(undefined8 *)(lVar22 + 0x1d0) = 0;
          local_70 = FUN__text__0065fd58();
          if (local_70 == 0) {
LAB__text__0065d6dc:
            iVar11 = 0x1b;
          }
          else {
            lVar13 = FUN__text__00659a28(0x72065d,param_3,param_4);
            if (lVar13 == 0) {
LAB__text__0065d754:
              iVar11 = 0x1b;
            }
            else {
              iVar11 = FUN__text__0065f778(param_1,0x70fcd5,lVar13,1);
              FUN__text__006783e4(lVar13);
              if (iVar11 == 0) {
                uVar23 = 0x70d501;
                if ((int)param_1[0x2f] != 1) {
                  uVar23 = 0x7112a1;
                }
                if ((char *)param_1[0x1a] == param_3) {
                  bVar10 = (bool)(*(byte *)((long)param_1 + 0x3fd) >> 1 & 1);
                }
                else {
                  pcVar14 = strchr(param_3,0x3a);
                  bVar10 = pcVar14 != (char *)0x0;
                }
                uVar5 = 0x711fca;
                if (bVar10 == false) {
                  uVar5 = 0x70f683;
                }
                uVar6 = 0x71813d;
                if (bVar10 == false) {
                  uVar6 = 0x70f683;
                }
                lVar13 = FUN__text__00659a28(0x70fcdd,uVar5,param_3,uVar6,param_4);
                if (lVar13 == 0) goto LAB__text__0065d754;
                lVar15 = FUN__text__0065f248(param_1,0x710887);
                if (lVar15 == 0) {
                  lVar15 = FUN__text__00659a28(0x71df2a,lVar13);
                  if (lVar15 == 0) {
                    FUN__text__006783e4(lVar13);
                    goto LAB__text__0065d754;
                  }
                }
                else {
                  lVar15 = 0;
                }
                lVar16 = FUN__text__0065f248(param_1,0x716277);
                uVar5 = 0x712bb1;
                if (lVar16 != 0) {
                  uVar5 = 0x70f683;
                }
                lVar16 = FUN__text__0065f248(param_1,0x71bc0a);
                lVar18 = 0x70f683;
                if (lVar16 == 0) {
                  if (*(long *)(lVar22 + 0xdb0) == 0) {
                    lVar18 = 0x70f683;
                  }
                  else {
                    lVar18 = param_1[0x8c];
                  }
                }
                lVar16 = 0x70f683;
                if (lVar15 != 0) {
                  lVar16 = lVar15;
                }
                lVar7 = 0x70f683;
                if (param_1[0x8b] != 0) {
                  lVar7 = param_1[0x8b];
                }
                iVar11 = FUN__text__00660068(&local_70,0x7112a5,lVar13,uVar23,lVar16,lVar7,lVar18,
                                             uVar5);
                if (lVar15 != 0) {
                  FUN__text__006783e4(lVar15);
                }
                FUN__text__006783e4(lVar13);
                if (((iVar11 == 0) &&
                    (iVar11 = FUN__text__00660400(param_1,1,local_70), iVar11 == 0)) &&
                   (iVar11 = FUN__text__00660068(&local_70,0x7149a6), iVar11 == 0)) {
                  iVar11 = FUN__text__0065fd9c(&local_70,param_1,lVar22 + 0x1618,0,param_2);
                  local_70 = 0;
                  if (iVar11 == 0) {
                    FUN__text__0065fd64(&local_70);
                    *(undefined4 *)(lVar24 + 0x4020) = 1;
                    *piVar3 = 0;
                    goto LAB__text__0065cfc4;
                  }
                }
                local_70 = 0;
                FUN__text__0066713c(lVar22,0x71088c);
              }
            }
            FUN__text__0065fd64(&local_70);
          }
          goto LAB__text__0065d760;
        }
LAB__text__0065cfc4:
        iVar11 = FUN__text__0064fa18(lVar22,0,1);
        if (iVar11 < 1) {
          FUN__text__0066713c(lVar22,0x712bd0);
          iVar11 = 0x1c;
          goto LAB__text__0065d760;
        }
        uVar17 = FUN__text__00650d84(param_1,param_2);
        if ((uVar17 & 1) == 0) goto LAB__text__0065ccf4;
LAB__text__0065cfec:
        do {
          if (*(int *)(lVar24 + 0x4004) == 0) {
            bVar10 = false;
            goto LAB__text__0065d494;
          }
          local_70 = 0;
          if (piVar3 <= *(int **)(lVar24 + 0x4010)) {
            FUN__text__0066713c(lVar22,0x70de67);
            goto LAB__text__0065d5d8;
          }
          iVar11 = FUN__text__00667800(param_1,uVar8,*(int **)(lVar24 + 0x4010),1,&local_70);
          if (iVar11 == 0x51) goto LAB__text__0065ccf4;
          iVar12 = FUN__text__00665e14(param_1);
          if (iVar12 != 0) goto LAB__text__0065d5c0;
          if (iVar11 != 0) {
LAB__text__0065d474:
            bVar10 = false;
LAB__text__0065d490:
            *(undefined4 *)(lVar24 + 0x4004) = 0;
            goto LAB__text__0065d494;
          }
          if (local_70 < 1) {
            if ((*(long *)(lVar22 + 0x6b8) != 0) && (*(long *)(lVar22 + 0x1278) != 0)) {
              *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x800000;
              FUN__text__00666f74(lVar22,0x712bf5);
              goto LAB__text__0065d474;
            }
            FUN__text__0066713c(lVar22,0x720663);
            bVar10 = true;
            goto LAB__text__0065d490;
          }
          if (*(int *)(lVar24 + 0x4004) < 2) {
            iVar11 = *piVar3 + 1;
            *piVar3 = iVar11;
            if (**(char **)(lVar24 + 0x4010) == '\n') {
              uVar17 = *(ulong *)(lVar22 + 0xf40);
              if (((uint)uVar17 >> 0x1a & 1) != 0) {
                FUN__text__00667094(lVar22,1,*(undefined8 *)(lVar24 + 0x4008));
                uVar17 = *(ulong *)(lVar22 + 0xf40);
                iVar11 = *piVar3;
              }
              if ((uVar17 >> 0x32 & 1) == 0) {
                uVar19 = 2;
                if ((uVar17 & 0x200000) != 0) {
                  uVar19 = 3;
                }
                iVar11 = FUN__text__0066748c(param_1,uVar19,*(undefined8 *)(lVar24 + 0x4008),
                                             (long)iVar11);
                if (iVar11 != 0) goto LAB__text__0065d760;
                iVar11 = *piVar3;
              }
              *(long *)(lVar22 + 0x1610) = *(long *)(lVar22 + 0x1610) + (long)iVar11;
              *(long *)(lVar22 + 0x110) = *(long *)(lVar22 + 0x110) + (long)*piVar3;
              cVar9 = **(char **)(lVar24 + 0x4008);
              if ((cVar9 == '\r') || (cVar9 == '\n')) {
                *(long *)(lVar24 + 0x4010) = lVar24;
                if ((*piVar2 == 0x197) && ((*(ushort *)(lVar22 + 0x15a4) >> 5 & 1) == 0)) {
                  *(undefined4 *)(lVar24 + 0x4004) = 2;
                  if (*plVar4 == 0) {
                    if ((*(byte *)(lVar24 + 0x4024) & 1) == 0) goto LAB__text__0065d290;
                    FUN__text__00666f74(lVar22,0x7108ac);
                    *(ushort *)(lVar22 + 0x660) = *(ushort *)(lVar22 + 0x660) | 8;
                    pcVar21 = *(char **)(lVar24 + 0x4008) + 1;
                    pcVar14 = *(char **)(lVar24 + 0x4008);
                    if (*pcVar21 == '\n') {
                      *(char **)(lVar24 + 0x4008) = pcVar21;
                      pcVar14 = pcVar21;
                    }
                    iVar11 = FUN__text__00664e8c(param_1,pcVar14 + 1,1,&local_70);
                    if (iVar11 == -1) {
                      FUN__text__00666f74(lVar22,0x7134ee);
                      *(undefined4 *)(lVar24 + 0x4004) = 0;
                      *(undefined4 *)(lVar24 + 0x4020) = 2;
                    }
                  }
                  else {
                    FUN__text__00666f74(lVar22,0x7154de);
                  }
                }
                else {
LAB__text__0065d290:
                  *(undefined4 *)(lVar24 + 0x4004) = 0;
                }
                if (*plVar4 == 0) goto LAB__text__0065d2a0;
              }
              else {
                (*(char **)(lVar24 + 0x4008))[*piVar3] = '\0';
                iVar11 = thunk_FUN__text__0066c2d8(0x713502,*(undefined8 *)(lVar24 + 0x4008),0x11);
                if ((iVar11 == 0) || (*piVar2 != 0x191)) {
                  iVar11 = thunk_FUN__text__0066c2d8(0x71df35,*(undefined8 *)(lVar24 + 0x4008),0x13)
                  ;
                  if ((iVar11 != 0) && (*piVar2 == 0x197)) {
                    uVar23 = 1;
                    goto LAB__text__0065d204;
                  }
                  iVar11 = thunk_FUN__text__0066c2d8(0x70b205,*(undefined8 *)(lVar24 + 0x4008),0xf);
                  if (iVar11 == 0) {
                    uVar17 = FUN__text__00660220(*(undefined8 *)(lVar24 + 0x4008),0x7149a9,0x712c16)
                    ;
                    if ((uVar17 & 1) == 0) {
                      iVar11 = thunk_FUN__text__0066c2d8
                                         (0x70e8f1,*(undefined8 *)(lVar24 + 0x4008),0x12);
                      if (iVar11 == 0) {
                        uVar17 = FUN__text__00660220(*(undefined8 *)(lVar24 + 0x4008),0x71813f,
                                                     0x712c16);
                        if ((uVar17 & 1) != 0) goto LAB__text__0065d2c8;
                        iVar11 = sscanf(*(char **)(lVar24 + 0x4008),(char *)0x71a43a,&local_64,
                                        piVar2);
                        if (iVar11 == 2) {
                          *(undefined4 *)(lVar22 + 0x15fc) = *(undefined4 *)(lVar22 + 0x180);
                        }
                      }
                      else {
                        if (*piVar2 - 200U < 100) {
                          uVar23 = 0x7149b5;
                          goto LAB__text__0065d280;
                        }
                        uVar17 = FUN__text__00660220(*(undefined8 *)(lVar24 + 0x4008),0x70e8f1,
                                                     0x7108fc);
                        if ((uVar17 & 1) != 0) {
                          FUN__text__00666f74(lVar22,0x7211a7);
                          *(byte *)(lVar24 + 0x4024) = *(byte *)(lVar24 + 0x4024) | 1;
                          FUN__text__00664e80(param_1);
                        }
                      }
                    }
                    else {
LAB__text__0065d2c8:
                      *(byte *)(lVar24 + 0x4024) = *(byte *)(lVar24 + 0x4024) | 2;
                    }
                  }
                  else if (*piVar2 - 200U < 100) {
                    uVar23 = 0x7108ca;
LAB__text__0065d280:
                    FUN__text__00666f74(lVar22,uVar23);
                  }
                  else {
                    FUN__text__0066c5d8(*(long *)(lVar24 + 0x4008) + 0xf,0,10,plVar4);
                  }
                }
                else {
                  uVar23 = 0;
LAB__text__0065d204:
                  lVar13 = FUN__text__0065f2d8(*(undefined8 *)(lVar24 + 0x4008));
                  if (lVar13 == 0) goto LAB__text__0065d6dc;
                  iVar11 = FUN__text__0065fb80(param_1,uVar23,lVar13);
                  FUN__text__006783e4(lVar13);
                  if (iVar11 != 0) goto LAB__text__0065d760;
                }
                *piVar3 = 0;
                *(long *)(lVar24 + 0x4010) = lVar24;
                *(long *)(lVar24 + 0x4008) = lVar24;
              }
            }
            else {
              *(char **)(lVar24 + 0x4010) = *(char **)(lVar24 + 0x4010) + 1;
            }
            goto LAB__text__0065cfec;
          }
          lVar13 = *(long *)(lVar24 + 0x4018);
          *(long *)(lVar24 + 0x4010) = lVar24;
          if (lVar13 == 0) {
            local_78 = 0;
            iVar11 = FUN__text__00664e8c(param_1,lVar24,1,&local_78);
            if (iVar11 == -1) {
              FUN__text__00666f74(lVar22,0x7134ee);
              *(undefined4 *)(lVar24 + 0x4004) = 0;
LAB__text__0065d2a0:
              *(undefined4 *)(lVar24 + 0x4020) = 2;
            }
            goto LAB__text__0065cfec;
          }
          *plVar4 = lVar13 + -1;
        } while (lVar13 + -1 != 0 && 0 < lVar13);
        bVar10 = false;
        *(undefined4 *)(lVar24 + 0x4004) = 0;
        *(undefined4 *)(lVar24 + 0x4020) = 2;
LAB__text__0065d494:
        iVar11 = FUN__text__00665e14(param_1);
        if (iVar11 != 0) {
LAB__text__0065d5c0:
          iVar11 = 0x2a;
          goto LAB__text__0065d760;
        }
        if (bVar10) goto LAB__text__0065d5d8;
        if (*(int *)(lVar22 + 0x15fc) - 200U < 100) {
          uVar20 = (uint)*(byte *)(lVar24 + 0x4024);
        }
        else {
          iVar11 = FUN__text__0065f3c4(param_1);
          if (iVar11 != 0) goto LAB__text__0065d760;
          uVar20 = (uint)*(byte *)(lVar24 + 0x4024);
          if ((*(byte *)((long)param_1 + 0x3fc) & 1) != 0) {
            uVar20 = uVar20 | 2;
            *(char *)(lVar24 + 0x4024) = (char)uVar20;
          }
        }
        lVar13 = *(long *)(lVar22 + 0x1d0);
        if ((uVar20 >> 1 & 1) != 0) {
          if (lVar13 != 0) {
            FUN__text__0065031c(param_1,*puVar1);
            *puVar1 = 0xffffffff;
          }
          break;
        }
        if (lVar13 == 0) break;
        if (*(int *)(lVar24 + 0x4020) == 2) {
          lVar13 = param_1[0xcb];
          *(long *)(lVar13 + 0x4008) = lVar13;
          *(long *)(lVar13 + 0x4010) = lVar13;
          *(undefined8 *)(lVar13 + 0x4018) = 0;
          *(undefined4 *)(lVar13 + 0x4020) = 0;
          *(undefined4 *)(lVar13 + 0x4004) = 1;
          *(byte *)(lVar13 + 0x4024) = *(byte *)(lVar13 + 0x4024) & 0xfd;
          lVar13 = *(long *)(lVar22 + 0x1d0);
        }
      } while (lVar13 != 0);
      if (*(int *)(lVar22 + 0x15fc) - 200U < 100) {
        *(undefined4 *)(lVar24 + 0x4020) = 2;
        FUN__text__006783e4(param_1[0x8b]);
        param_1[0x8b] = 0;
        *(byte *)(lVar22 + 0x1280) = *(byte *)(lVar22 + 0x1280) | 1;
        FUN__text__00666f74(lVar22,0x713514,*(undefined4 *)(lVar22 + 0x15fc));
        *(ushort *)(lVar22 + 0x660) = *(ushort *)(lVar22 + 0x660) & 0xfff7;
        *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xfffeffff;
      }
      else {
        if (((*(byte *)(lVar24 + 0x4024) >> 1 & 1) == 0) || (*(long *)(lVar22 + 0x1d0) == 0)) {
          FUN__text__006783e4();
          *(undefined8 *)(lVar22 + 0x1d0) = 0;
          FUN__text__00650d38(param_1,2);
          FUN__text__0065031c(param_1,*puVar1);
          *puVar1 = 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x800000;
          FUN__text__00666f74(lVar22,0x711fcc);
          *(undefined4 *)(param_1[0xcb] + 0x4020) = 2;
          FUN__text__00666f74(*param_1,0x71f842);
        }
        *(undefined4 *)(lVar24 + 0x4020) = 0;
        if (-1 < *(char *)((long)param_1 + 0x3fe)) {
          FUN__text__0066713c(lVar22,0x71af5c,*(undefined4 *)(lVar22 + 0x180));
LAB__text__0065d5d8:
          iVar11 = 0x38;
          goto LAB__text__0065d760;
        }
      }
    }
  }
LAB__text__0065ccf4:
  if (param_1[0xcb] == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    if (*(int *)(param_1[0xcb] + 0x4020) != 2) {
      return 0;
    }
  }
LAB__text__0065d760:
  *(undefined4 *)(param_1[0xcb] + 0x4020) = 2;
  FUN__text__00666f74(*param_1,0x71f842);
  return iVar11;
}


