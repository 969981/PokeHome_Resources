/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00672cd8; name: FUN_.text__00672cd8
 */


undefined8
FUN__text__00672cd8(long param_1,long *param_2,undefined8 *param_3,undefined1 *param_4,
                   undefined1 *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *__s2;
  uint uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong local_a0;
  
  uVar4 = FUN__text__00673334();
  *param_4 = 0;
  *param_5 = 0;
  uVar14 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar6 = FUN__text__00665a24(param_1,param_2);
    uVar14 = uVar4 & 2;
    if ((uVar6 & 1) == 0) {
      uVar14 = uVar4;
    }
  }
  piVar7 = (int *)FUN__text__00650fc0(param_2,*(undefined8 *)(param_1 + 0x1100));
  if (piVar7 == (int *)0x0) goto LAB__text__006732f0;
  if (*piVar7 == 2) {
    uVar6 = 0;
    uVar13 = 0x70b40f;
  }
  else {
    if (*(long *)(param_1 + 0xd8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(*(long *)(param_1 + 0xd8) + 0x168);
    }
    uVar13 = 0x70ea44;
  }
  lVar9 = 0xd0;
  if ((*(uint *)((long)param_2 + 0x3fc) & 4) != 0) {
    lVar9 = 0x100;
  }
  uVar1 = 0x71fa1c;
  if (*piVar7 != 1) {
    uVar1 = uVar13;
  }
  FUN__text__00666f74(param_1,0x71f9f9,*(undefined8 *)((long)param_2 + lVar9),piVar7,uVar1);
  if (uVar14 != 0) {
    iVar5 = *piVar7;
    if (iVar5 < 1) {
      if ((iVar5 == 0) && ((*(byte *)(param_1 + 0xf46) >> 1 & 1) != 0)) {
        FUN__text__00666f74(param_1,0x70d5ba);
        *param_5 = 1;
        goto LAB__text__006732f0;
      }
      FUN__text__00666f74(param_1,0x70d5e6);
      iVar5 = *piVar7;
      uVar14 = 0;
    }
    if (iVar5 == 1) {
      uVar8 = FUN__text__0065ab48(*(undefined8 *)(param_1 + 0xd8),1);
      if ((uVar8 & 1) != 0) {
        iVar5 = *piVar7;
        goto LAB__text__00672e10;
      }
      uVar13 = 0x71e0a7;
    }
    else {
LAB__text__00672e10:
      if ((iVar5 != 2) ||
         (uVar8 = FUN__text__0065ab48(*(undefined8 *)(param_1 + 0xd8),2), (uVar8 & 1) != 0))
      goto LAB__text__00672e48;
      uVar13 = 0x72136d;
    }
    FUN__text__00666f74(param_1,uVar13);
    uVar14 = 0;
  }
LAB__text__00672e48:
  puVar15 = *(undefined8 **)(piVar7 + 4);
  if (puVar15 == (undefined8 *)0x0) {
LAB__text__006732f0:
    FUN__text__00650eec(param_1);
    return 0;
  }
  bVar3 = false;
  plVar16 = (long *)0x0;
  local_a0 = uVar6;
LAB__text__00672e84:
  plVar17 = (long *)*puVar15;
  puVar15 = (undefined8 *)puVar15[2];
  if (-1 < *(int *)((long)plVar17 + 0x3fc)) {
    uVar8 = FUN__text__00673c98(plVar17,param_1);
    if ((uVar8 & 1) == 0) {
      uVar8 = plVar17[0x9c] + plVar17[0x98];
      if (uVar14 == 0) {
        if (uVar8 == 0) {
          if ((char)plVar17[0x11] == '\0') {
            uVar8 = plVar17[0xc];
            uVar13 = 0x712131;
          }
          else {
            uVar4 = *(uint *)((long)plVar17 + 0x3fc) & 1;
            if ((int)plVar17[0x4b] != -1) {
              if (uVar4 == 0) goto LAB__text__00672f5c;
              uVar4 = 1;
            }
            uVar8 = plVar17[0xc];
            uVar13 = 0x71bd5c;
            if (uVar4 == 0) {
              bVar3 = true;
            }
          }
          goto LAB__text__00673128;
        }
      }
      else if (((*(uint *)((long)plVar17 + 0x3fc) ^ 0xffffffff) & 0x1001) != 0) {
        if ((*(uint *)((long)plVar17 + 0x3fc) >> 0x1a & 1) == 0) {
          if ((long *)plVar17[0x95] == (long *)0x0) {
            plVar12 = (long *)plVar17[0x99];
            if (plVar12 != (long *)0x0) {
LAB__text__00672f48:
              lVar9 = *plVar12;
              goto LAB__text__00672f4c;
            }
          }
          else {
            lVar9 = *(long *)plVar17[0x95];
            plVar12 = (long *)plVar17[0x99];
            if (plVar12 == (long *)0x0) {
LAB__text__00672f4c:
              if (lVar9 == 0) goto LAB__text__00672f5c;
            }
            else if (lVar9 == 0) goto LAB__text__00672f48;
            uVar10 = FUN__text__00673334(lVar9,plVar17);
            if ((uVar10 & 1) == 0) goto LAB__text__0067312c;
          }
        }
LAB__text__00672f5c:
        lVar9 = param_2[0x84];
        if (((*(uint *)(plVar17[0x84] + 0x84) ^ *(uint *)(lVar9 + 0x84)) & 1) == 0) {
LAB__text__00672f90:
          uVar11 = *(uint *)((long)param_2 + 0x3fc);
          uVar4 = *(uint *)((long)plVar17 + 0x3fc) ^ uVar11;
          if ((uVar4 >> 5 & 1) == 0) {
            uVar2 = uVar11 >> 6 & 1;
            if (uVar2 == (*(uint *)((long)plVar17 + 0x3fc) >> 6 & 1)) {
              if (uVar2 != 0) {
                uVar10 = FUN__text__00673ef4(param_2 + 0x22,plVar17 + 0x22);
                if ((uVar10 & 1) == 0) goto LAB__text__0067312c;
                uVar11 = *(uint *)((long)param_2 + 0x3fc);
                uVar4 = *(uint *)((long)plVar17 + 0x3fc) ^ uVar11;
              }
              if ((uVar4 & 0xc) == 0) {
                if ((uVar11 >> 5 & 1) == 0) {
LAB__text__00672fdc:
                  if ((uVar14 != 0) || (*plVar17 == 0)) {
                    if ((plVar17[0x98] + plVar17[0x9c] != 0) && (*plVar17 != 0)) {
                      if (*(long *)(*plVar17 + 0xd8) != *(long *)(*param_2 + 0xd8))
                      goto LAB__text__0067312c;
                    }
                    __s2 = (char *)param_2[0xc9];
                    if (((__s2 == (char *)0x0) && ((short)param_2[0xca] == 0)) ||
                       ((((short)plVar17[0xca] == (short)param_2[0xca] &&
                         (*(int *)((long)plVar17 + 0x654) == *(int *)((long)param_2 + 0x654))) &&
                        ((__s2 == (char *)0x0 ||
                         (((char *)plVar17[0xc9] != (char *)0x0 &&
                          (iVar5 = strcmp((char *)plVar17[0xc9],__s2), iVar5 == 0)))))))) {
                      puVar18 = (undefined8 *)param_2[0x84];
                      uVar4 = *(uint *)((long)puVar18 + 0x84);
                      if ((uVar4 >> 7 & 1) == 0) {
                        iVar5 = strcmp((char *)param_2[0x42],(char *)plVar17[0x42]);
                        if (iVar5 == 0) {
                          iVar5 = strcmp((char *)param_2[0x43],(char *)plVar17[0x43]);
                          if (iVar5 == 0) goto LAB__text__00673050;
                        }
                      }
                      else {
LAB__text__00673050:
                        if (((*(uint *)((long)param_2 + 0x3fc) >> 5 & 1) != 0) &&
                           ((*(uint *)((long)param_2 + 0x3fc) & 0x4000) == 0 && (uVar4 & 1) == 0))
                        goto LAB__text__006730f0;
                        iVar5 = FUN__text__0066c234(*puVar18,*(undefined8 *)plVar17[0x84]);
                        if ((iVar5 != 0) ||
                           ((iVar5 = FUN__text__00673d4c(*(undefined4 *)(plVar17[0x84] + 0x80)),
                            iVar5 == *(int *)(param_2[0x84] + 0x80) &&
                            ((*(byte *)((long)plVar17 + 0x66c) & 1) != 0)))) {
                          uVar4 = *(uint *)((long)param_2 + 0x3fc);
                          if ((uVar4 >> 2 & 1) != 0) {
                            iVar5 = FUN__text__0066c234(param_2[0x20],plVar17[0x20]);
                            if (iVar5 == 0) goto LAB__text__0067312c;
                            uVar4 = *(uint *)((long)param_2 + 0x3fc);
                          }
                          if ((uVar4 >> 3 & 1) != 0) {
                            if (*(int *)((long)param_2 + 0x19c) != *(int *)((long)plVar17 + 0x19c))
                            goto LAB__text__0067312c;
                          }
                          iVar5 = FUN__text__0066c234(param_2[0x1a],plVar17[0x1a]);
                          if (iVar5 != 0) {
                            if ((int)param_2[0x33] == (int)plVar17[0x33]) {
                              if ((*(byte *)(param_2[0x84] + 0x84) & 1) == 0) {
LAB__text__006730f0:
                                if ((uVar14 == 0) || (uVar8 == 0)) goto LAB__text__00673284;
                                if (uVar6 - 1 < uVar8) {
                                  uVar13 = 0x719a97;
                                }
                                else {
                                  if (((*(byte *)((long)plVar17 + 0x3ff) >> 2 & 1) == 0) ||
                                     (uVar8 < *(uint *)(plVar17 + 0xbd))) {
                                    uVar10 = FUN__text__00665868(param_1,plVar17);
                                    if ((uVar10 & 1) != 0) {
                                      FUN__text__00666f74(param_1,0x7207e2);
                                      goto LAB__text__0067312c;
                                    }
                                    if (uVar6 == 0) {
                                      FUN__text__00666f74(param_1,0x71a602);
                                      goto LAB__text__00673284;
                                    }
                                    if (uVar8 < local_a0) {
                                      plVar16 = plVar17;
                                      local_a0 = uVar8;
                                    }
                                    goto LAB__text__0067312c;
                                  }
                                  uVar13 = 0x717806;
                                }
LAB__text__00673128:
                                FUN__text__00666f74(param_1,uVar13,uVar8);
                              }
                              else {
                                uVar10 = FUN__text__006776cc(param_2 + 0x5f,plVar17 + 0x5f);
                                if ((uVar10 & 1) != 0) {
                                  if ((int)plVar17[0x52] == 2) goto LAB__text__006730f0;
                                  bVar3 = true;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar10 = FUN__text__00673ef4(param_2 + 0x2a,plVar17 + 0x2a);
                  if (((uVar10 & 1) != 0) &&
                     (((*(uint *)((long)plVar17 + 0x3fc) ^ *(uint *)((long)param_2 + 0x3fc)) >> 0xe
                      & 1) == 0)) {
                    if ((int)param_2[0x2f] != 2) goto LAB__text__00672fdc;
                    if ((*(byte *)(param_2[0x84] + 0x84) & 1) == 0) {
                      uVar10 = FUN__text__006776cc(param_2 + 0x5f,plVar17 + 0x5f);
                      if ((uVar10 & 1) != 0) {
                        iVar5 = (int)plVar17[0x52];
                        goto LAB__text__00673200;
                      }
                    }
                    else {
                      uVar10 = FUN__text__006776cc(param_2 + 0x6f,plVar17 + 0x6f);
                      if ((uVar10 & 1) != 0) {
                        iVar5 = (int)plVar17[0x58];
LAB__text__00673200:
                        if (iVar5 == 2) goto LAB__text__00672fdc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar5 = FUN__text__00673d4c(*(undefined4 *)(plVar17[0x84] + 0x80));
          if (iVar5 == *(int *)(lVar9 + 0x80)) {
            if ((*(byte *)((long)plVar17 + 0x66c) & 1) != 0) goto LAB__text__00672f90;
          }
        }
      }
    }
    else {
      FUN__text__00670414(param_1,plVar17,1);
    }
  }
LAB__text__0067312c:
  if (puVar15 == (undefined8 *)0x0) {
    plVar17 = plVar16;
    if (plVar16 == (long *)0x0) {
      FUN__text__00650eec(param_1);
      if (!bVar3) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0xf46) >> 1 & 1) == 0) {
        return 0;
      }
      FUN__text__00666f74(param_1,0x71b1b1);
      *param_5 = 1;
      return 0;
    }
LAB__text__00673284:
    *plVar17 = param_1;
    FUN__text__00650eec(param_1);
    *param_3 = plVar17;
    return 1;
  }
  goto LAB__text__00672e84;
}


