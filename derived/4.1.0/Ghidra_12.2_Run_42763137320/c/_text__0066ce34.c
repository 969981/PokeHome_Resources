/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066ce34; name: FUN_.text__0066ce34
 */


undefined8 FUN__text__0066ce34(long *param_1,long param_2,char *param_3,undefined1 *param_4)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  char local_74 [4];
  ulong local_70;
  ulong local_68;
  
  uVar6 = *(uint *)(param_1 + 200);
  *(undefined4 *)(param_1 + 200) = 0;
  if ((*(uint *)(param_2 + 0x1c0) & 0x15) == 1) {
    uVar9 = (undefined4)param_1[0x8a];
  }
  else {
    uVar9 = 0xffffffff;
  }
  if ((*(uint *)(param_2 + 0x1c0) & 0x2a) == 2) {
    uVar13 = *(undefined4 *)((long)param_1 + 0x454);
  }
  else {
    uVar13 = 0xffffffff;
  }
  uVar6 = uVar6 | *(long *)(*param_1 + 0x1520) != 0;
  if (uVar6 == 0) {
    uVar6 = FUN__text__00666b6c(uVar9,0xffffffff,uVar13,0);
  }
  if (uVar6 == 4) {
    FUN__text__0066713c(param_2,0x70bd4f);
    return 0x37;
  }
  uVar15 = *(uint *)(param_2 + 0x1c0);
  plVar1 = (long *)(param_2 + 0xf0);
  if (((uVar15 & 1) == 0) ||
     (((uVar6 & 1) == 0 && ((*(byte *)((long)param_1 + 0x3fe) >> 6 & 1) == 0)))) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    uVar17 = 0;
    local_68 = 0;
    iVar8 = 100;
    local_70 = local_70 & 0xffffffffffffff00;
    *param_3 = '\0';
    *param_4 = 0;
    do {
      lVar14 = *(long *)(param_2 + 0xc10);
      lVar11 = lVar14;
      if (((((*(byte *)(param_1[0x84] + 0x80) & 3) == 0) || ((int)param_1[0x46] != 0x14)) &&
          (*plVar1 != -1)) &&
         (((*(ushort *)(param_2 + 0x660) & 1) == 0 &&
          (lVar11 = *plVar1 - *(long *)(param_2 + 0x100), lVar14 <= lVar11)))) {
        lVar11 = lVar14;
      }
      if (lVar11 != 0) {
        uVar10 = FUN__text__00667800(param_1,(int)param_1[0x8a],*(undefined8 *)(param_2 + 0x1b8),
                                     lVar11,&local_68);
        if ((int)uVar10 == 0) goto LAB__text__0066d088;
        if ((int)uVar10 != 0x51) {
          return uVar10;
        }
LAB__text__0066d628:
        if (0 < iVar8) goto LAB__text__0066d63c;
        break;
      }
      local_68 = 0;
LAB__text__0066d088:
      if (((*(long *)(param_2 + 0x100) == 0) && (*(long *)(param_2 + 0x108) == 0)) &&
         (FUN__text__006663e0(param_2,7), *(int *)(param_2 + 0x198) != 0)) {
        auVar20 = FUN__text__0066c6a8();
        *(undefined1 (*) [16])(param_2 + 0x188) = auVar20;
      }
      if (local_68 == 0) {
        bVar5 = *(long *)(param_2 + 0x1b0) == 0;
      }
      else {
        bVar5 = false;
      }
      if (((long)local_68 < 1) && (!bVar5)) {
        uVar15 = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
LAB__text__0066d620:
        *(uint *)(param_2 + 0x1c0) = uVar15;
LAB__text__0066d624:
        uVar18 = 1;
        goto LAB__text__0066d628;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x1b8) + local_68) = 0;
      *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_2 + 0x1b8);
      if (*(code **)(param_1[0x84] + 0x68) != (code *)0x0) {
        uVar10 = (**(code **)(param_1[0x84] + 0x68))(param_2,param_1,&local_68,&local_70);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if ((char)local_70 == '\0') goto LAB__text__0066d118;
        goto LAB__text__0066d624;
      }
LAB__text__0066d118:
      if ((*(ushort *)(param_2 + 0x660) & 1) != 0) {
        local_74[0] = '\0';
        uVar10 = FUN__text__00660928(param_2,param_1,&local_68,local_74);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if (((*(code **)(param_1[0x84] + 0x68) != (code *)0x0) && (*(long *)(param_2 + 0xf8) < 1))
           && (0 < (long)local_68)) {
          uVar10 = (**(code **)(param_1[0x84] + 0x68))(param_2,param_1,&local_68,&local_70);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          if ((char)local_70 != '\0') goto LAB__text__0066d624;
        }
        if (local_74[0] != '\0') {
          if (0 < (long)local_68) {
            uVar17 = FUN__text__0065ab48(*(undefined8 *)(*param_1 + 0xd8),1);
            if ((uVar17 & 1) == 0) {
              FUN__text__00666f74(param_2,0x7113de,local_68,*(undefined8 *)(param_2 + 0x1580));
            }
            else {
              FUN__text__00666f74(param_2,0x7120f3,local_68,*(undefined8 *)(param_2 + 0x1580));
              param_1[0x9e] = param_1[0x9e] - local_68;
              *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x400000;
            }
          }
          goto LAB__text__0066d624;
        }
      }
      if ((*(long *)(param_2 + 0x158) != 0) && ((*(ushort *)(param_2 + 0x660) & 1) == 0)) {
        bVar2 = bVar5;
        if (0 < (long)local_68) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((*(byte *)(param_2 + 0xf43) & 1) != 0) {
            FUN__text__00650d38(param_1,2);
            bVar5 = true;
            uVar10 = 8;
            goto LAB__text__0066d978;
          }
          bVar2 = bVar5;
          if (*(long *)(param_2 + 0x1b0) != 0) {
            bVar2 = true;
          }
          if ((!bVar2) && ((*(uint *)(param_1[0x84] + 0x80) & 0x40003) != 0)) {
            if (*(long *)(param_2 + 0x1d0) == 0) {
LAB__text__0066d204:
              if ((((*(long *)(param_2 + 0x14f8) == 0) ||
                   ((*(ushort *)(param_2 + 0x660) >> 1 & 1) != 0)) ||
                  ((*(ushort *)(param_2 + 0x660) >> 3 & 1) != 0)) ||
                 (*(int *)(param_2 + 0xa38) != 1)) {
                if (((*(int *)(param_2 + 0xa28) == 0) || (*(long *)(param_2 + 0x14f0) != 0)) ||
                   (uVar12 = FUN__text__0066cdb0(param_2,*(undefined8 *)(param_2 + 0x1a8)),
                   (uVar12 & 1) != 0)) goto LAB__text__0066d244;
                uVar18 = 1;
                *param_3 = '\x01';
                *(undefined4 *)(param_2 + 0x15f8) = 0x130;
                FUN__text__00666f74(param_2,0x70bd6a);
                FUN__text__00650d38(param_1,1);
                goto LAB__text__0066d670;
              }
              if (*plVar1 != *(long *)(param_2 + 0x14f8)) {
                FUN__text__0066713c(param_2,0x70b3a2);
                return 0x21;
              }
              FUN__text__00666f74(param_2,0x71b114);
              FUN__text__00650d38(param_1,1);
            }
            else if ((*(byte *)((long)param_1 + 0x3fc) & 1) == 0) {
              *(ushort *)(param_2 + 0x660) = *(ushort *)(param_2 + 0x660) | 8;
              FUN__text__00666f74(param_2,0x721334);
              goto LAB__text__0066d204;
            }
            uVar10 = 0;
            *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
            bVar5 = true;
            goto LAB__text__0066d978;
          }
LAB__text__0066d244:
          *(long *)(param_2 + 0x1b0) = *(long *)(param_2 + 0x1b0) + 1;
          if (((*(byte *)(param_2 + 0xf43) >> 2 & 1) != 0) &&
             ((*(int *)(param_2 + 0x140) == 0 ||
              (FUN__text__00667094(param_2,3,*(undefined8 *)(param_2 + 0x1120),
                                   *(undefined8 *)(param_2 + 0x150)), *(int *)(param_2 + 0x140) == 1
              )))) {
            FUN__text__00667094(param_2,3,*(undefined8 *)(param_2 + 0x158),local_68);
          }
          if ((*(ushort *)(param_2 + 0x660) >> 5 & 1) != 0) {
            iVar7 = FUN__text__00664e8c(param_1,*(undefined8 *)(param_2 + 0x158),local_68,&local_68)
            ;
            if (0 < iVar7) {
              if (iVar7 == 4) {
                FUN__text__0066713c(param_2,0x70df96);
                return 0x17;
              }
              uVar10 = FUN__text__00665240();
              FUN__text__0066713c(param_2,0x70f2f1,uVar10);
              return 0x38;
            }
            if (iVar7 == -1) {
              *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
              lVar11 = param_1[9];
              if (lVar11 != 0) {
                FUN__text__00666f74(*param_1,0x71a572,lVar11);
                uVar12 = FUN__text__0065ab48(*(undefined8 *)(*param_1 + 0xd8),1);
                if ((uVar12 & 1) != 0) {
                  FUN__text__00666f74(*param_1,0x71e048,lVar11);
                  param_1[0x9e] = param_1[0x9e] - lVar11;
                  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x400000;
                }
              }
            }
          }
          if (*(int *)(param_2 + 0x140) == 1) {
            lVar11 = *(long *)(param_2 + 0x100);
            if ((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0) {
              lVar11 = *(long *)(param_2 + 0x150) + lVar11;
              *(long *)(param_2 + 0x100) = lVar11;
            }
          }
          else {
            lVar11 = *(long *)(param_2 + 0x100);
          }
          lVar14 = *(long *)(param_2 + 0xf8);
          if (lVar14 != -1) {
            uVar12 = (local_68 + lVar11) - lVar14;
            if (lVar14 <= (long)(local_68 + lVar11)) {
              if ((uVar12 != 0) && ((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0)) {
                uVar17 = FUN__text__0065ab48(*(undefined8 *)(*param_1 + 0xd8),1);
                if ((uVar17 & 1) == 0) {
                  FUN__text__00666f74(param_2,0x717780,uVar12,*(undefined8 *)(param_2 + 0xf0),
                                      *(undefined8 *)(param_2 + 0xf8),
                                      *(undefined8 *)(param_2 + 0x100));
                }
                else {
                  FUN__text__00666f74(param_2,0x71eb68,uVar12,*(undefined8 *)(param_2 + 0x1580),
                                      *(undefined8 *)(param_2 + 0xf0),
                                      *(undefined8 *)(param_2 + 0xf8),
                                      *(undefined8 *)(param_2 + 0x100),local_68);
                  param_1[0x9e] = param_1[0x9e] - uVar12;
                  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x400000;
                }
              }
              lVar11 = *(long *)(param_2 + 0x100);
              local_68 = *(long *)(param_2 + 0xf8) - lVar11;
              local_68 = local_68 & ((long)local_68 >> 0x3f ^ 0xffffffffffffffffU);
              *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
              uVar17 = uVar12;
            }
          }
          *(ulong *)(param_2 + 0x100) = local_68 + lVar11;
          FUN__text__00666674(param_2);
          if ((*(ushort *)(param_2 + 0x660) >> 5 & 1) == 0) {
            uVar15 = *(uint *)(param_2 + 0x140);
            bVar2 = bVar5;
            if (local_68 != 0 || uVar15 != 0) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0) && (uVar15 != 0)) {
                lVar11 = *(long *)(param_2 + 0xf8);
                if (*(long *)(param_2 + 0x150) <= lVar11 || lVar11 == -1) {
                  lVar11 = *(long *)(param_2 + 0x150);
                }
                uVar10 = FUN__text__0066748c(param_1,1,*(undefined8 *)(param_2 + 0x1120),lVar11);
                if ((int)uVar10 != 0) {
                  return uVar10;
                }
                uVar15 = *(uint *)(param_2 + 0x140);
              }
              if (uVar15 < 2) {
                if ((*(byte *)(*param_1 + 0xf45) & 1) == 0) {
                  uVar4 = *(ushort *)(param_2 + 0x660);
                  if (*(long *)(param_2 + 0x1a0) == 0) goto LAB__text__0066d4b8;
                  if ((uVar4 >> 3 & 1) != 0) goto LAB__text__0066d4dc;
                  uVar10 = FUN__text__0066437c(param_1,*(long *)(param_2 + 0x1a0),
                                               *(undefined8 *)(param_2 + 0x158),local_68);
                }
                else {
                  uVar4 = *(ushort *)(param_2 + 0x660);
LAB__text__0066d4b8:
                  if ((uVar4 >> 3 & 1) != 0) goto LAB__text__0066d4dc;
                  uVar10 = FUN__text__0066748c(param_1,1,*(undefined8 *)(param_2 + 0x158),local_68);
                }
                *(undefined4 *)(param_2 + 0x140) = 0;
                if ((int)uVar10 != 0) {
                  return uVar10;
                }
              }
              else {
LAB__text__0066d4dc:
                *(undefined4 *)(param_2 + 0x140) = 0;
              }
            }
          }
        }
      }
      if (((*(long *)(param_1[0x84] + 0x68) != 0) && (uVar17 != 0)) &&
         ((*(byte *)((long)param_1 + 0x3fe) >> 6 & 1) == 0)) {
        lVar11 = *(long *)(param_2 + 0x158) + local_68;
        uVar12 = *(long *)(param_2 + 0x1b8) + *(long *)(param_2 + 0xc10);
        *(long *)(param_2 + 0x158) = lVar11;
        local_68 = uVar12 - lVar11;
        if (lVar11 + uVar17 <= uVar12) {
          local_68 = uVar17;
        }
        uVar10 = (**(code **)(param_1[0x84] + 0x68))(param_2,param_1,&local_68,&local_70);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if ((char)local_70 != '\0') {
          uVar15 = *(uint *)(param_2 + 0x1c0) | 1;
          goto LAB__text__0066d620;
        }
        goto LAB__text__0066d624;
      }
      uVar15 = *(uint *)(param_2 + 0x1c0);
      if (bVar5) {
        uVar15 = uVar15 & 0xfffffffe;
        *(uint *)(param_2 + 0x1c0) = uVar15;
      }
      if (((uVar15 >> 4 & 1) != 0) ||
         ((((*(byte *)(param_1[0x84] + 0x80) & 0x30) == 0 &&
           (uVar12 = FUN__text__00677dd8(param_1,0), (uVar12 & 1) == 0)) &&
          (((*(byte *)(param_1[0x84] + 0x80) & 3) == 0 || ((int)param_1[0x46] != 0x14))))))
      goto LAB__text__0066d624;
      iVar8 = iVar8 + -1;
      uVar18 = 1;
    } while (iVar8 != -1);
    *(undefined4 *)(param_1 + 200) = 1;
    *param_4 = 1;
LAB__text__0066d63c:
    if (((*(uint *)(param_2 + 0x1c0) & 3) == 2) && ((*(byte *)((long)param_1 + 0x3fc) & 1) != 0)) {
      FUN__text__00666f74(param_2,0x71142e);
      *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffd;
    }
LAB__text__0066d670:
    if (*param_3 != '\0') {
      return 0;
    }
    uVar15 = *(uint *)(param_2 + 0x1c0);
  }
  uVar19 = uVar18;
  if (((uVar6 & uVar15) >> 1 & 1) != 0) {
    if ((*(long *)(param_2 + 0x100) == 0) && (*(long *)(param_2 + 0x108) == 0)) {
      FUN__text__006663e0(param_2,7);
    }
    uVar19 = uVar18 | 2;
    local_68 = 0;
    uVar17 = *(ulong *)(param_2 + 0x1d8);
    if (*(ulong *)(param_2 + 0x1d8) == 0) {
      lVar11 = *(long *)(param_2 + 0x1138);
      if (lVar11 == 0) {
        lVar11 = FUN__text__006783d4(*(undefined8 *)(param_2 + 0xc18));
        *(long *)(param_2 + 0x1138) = lVar11;
        if (lVar11 == 0) {
          return 0x1b;
        }
      }
      *(long *)(param_2 + 0x1e0) = lVar11;
      if ((*(ushort *)(param_2 + 0x660) >> 2 & 1) == 0) {
        local_70 = 0;
        if ((*(int *)(param_2 + 0x198) == 2) && (*(int *)(*(long *)(param_2 + 0x1e8) + 0x208) == 2))
        {
          *(undefined4 *)(param_2 + 0x198) = 1;
          *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffd;
          auVar20 = FUN__text__0066c6a8();
          *(undefined1 (*) [16])(param_2 + 0x188) = auVar20;
          FUN__text__0065a050(param_2,*(undefined8 *)(param_2 + 0xee0),0);
          uVar19 = uVar18;
          goto LAB__text__0066d838;
        }
        if ((*(uint *)(param_1[0x84] + 0x80) & 0x40003) == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = *(int *)(*(long *)(param_2 + 0x1e8) + 0x208) == 1;
        }
        uVar10 = FUN__text__0066c818(param_1,*(undefined8 *)(param_2 + 0xc18),&local_70);
        uVar12 = local_70;
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if (local_70 != 0) {
          if (0 < (long)local_70) {
            *(ulong *)(param_2 + 0x1d8) = local_70;
            uVar17 = local_70;
            if ((!bVar5) && ((*(ushort *)(param_2 + 0xf40) & 0x840) != 0)) {
              if (*(long *)(param_2 + 0x11b8) == 0) {
                lVar11 = FUN__text__006783d4(*(long *)(param_2 + 0xc18) << 1);
                *(long *)(param_2 + 0x11b8) = lVar11;
                if (lVar11 == 0) {
                  FUN__text__0066713c(param_2,0x714ab7);
                  return 0x1b;
                }
              }
              uVar16 = 0;
              uVar17 = 0;
              do {
                cVar3 = *(char *)(*(long *)(param_2 + 0x1e0) + uVar16);
                if (cVar3 == '\n') {
                  *(undefined1 *)(*(long *)(param_2 + 0x11b8) + uVar17) = 0xd;
                  uVar17 = uVar17 + 1;
                  *(undefined1 *)(*(long *)(param_2 + 0x11b8) + uVar17) = 10;
                  if (((*(byte *)(param_2 + 0xf40) >> 6 & 1) == 0) &&
                     (*(long *)(param_2 + 0x1518) != -1)) {
                    *(long *)(param_2 + 0x1518) = *(long *)(param_2 + 0x1518) + 1;
                  }
                }
                else {
                  *(char *)(*(long *)(param_2 + 0x11b8) + uVar17) = cVar3;
                }
                uVar16 = uVar16 + 1;
                uVar17 = uVar17 + 1;
              } while (uVar12 != uVar16);
              if (uVar17 == uVar12) {
                uVar17 = *(ulong *)(param_2 + 0x1d8);
              }
              else {
                *(ulong *)(param_2 + 0x1d8) = uVar17;
                *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x11b8);
              }
            }
            goto LAB__text__0066cf34;
          }
          goto LAB__text__0066d824;
        }
      }
      if ((*(byte *)(param_2 + 0x1c0) >> 5 & 1) == 0) {
LAB__text__0066d824:
        uVar10 = FUN__text__0066e2cc(param_1,plVar1);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
      }
    }
    else {
LAB__text__0066cf34:
      uVar10 = FUN__text__00667248(param_1,*(undefined4 *)((long)param_1 + 0x454),
                                   *(undefined8 *)(param_2 + 0x1e0),uVar17,&local_68);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      if ((*(byte *)(param_2 + 0xf43) >> 2 & 1) != 0) {
        FUN__text__00667094(param_2,4,*(undefined8 *)(param_2 + 0x1e0),local_68);
      }
      *(ulong *)(param_2 + 0x108) = *(long *)(param_2 + 0x108) + local_68;
      FUN__text__0066667c(param_2);
      if (((*(ushort *)(param_2 + 0x660) & 0x140) != 0x40) &&
         (*(long *)(param_2 + 0x108) == *(long *)(param_2 + 0x1518))) {
        *(ushort *)(param_2 + 0x660) = *(ushort *)(param_2 + 0x660) | 4;
        FUN__text__00666f74(param_2,0x71a597);
      }
      lVar11 = *(long *)(param_2 + 0x1d8) - local_68;
      if (lVar11 == 0) {
        lVar11 = *(long *)(param_2 + 0x1138);
        if (lVar11 == 0) {
          lVar11 = FUN__text__006783d4(*(undefined8 *)(param_2 + 0xc18));
          *(long *)(param_2 + 0x1138) = lVar11;
          if (lVar11 == 0) {
            return 0x1b;
          }
        }
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        *(long *)(param_2 + 0x1e0) = lVar11;
        if ((*(ushort *)(param_2 + 0x660) >> 2 & 1) != 0) goto LAB__text__0066d824;
      }
      else {
        *(long *)(param_2 + 0x1d8) = lVar11;
        *(ulong *)(param_2 + 0x1e0) = *(long *)(param_2 + 0x1e0) + local_68;
      }
    }
  }
LAB__text__0066d838:
  auVar20 = FUN__text__0066c6a8();
  *(undefined1 (*) [16])(param_2 + 0x130) = auVar20;
  if (((uVar19 == 0) && (*(int *)(param_2 + 0x198) == 1)) &&
     (iVar8 = FUN__text__0066c6d8(auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(param_2 + 0x188),
                                  *(undefined8 *)(param_2 + 400)),
     *(long *)(param_2 + 0xee0) <= (long)iVar8)) {
    *(undefined4 *)(param_2 + 0x198) = 0;
    *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) | 2;
    thunk_FUN__text__0065ca34(param_2,0);
    FUN__text__00666f74(param_2,0x70f2d2);
  }
  iVar8 = FUN__text__00665e14(param_1);
  if (iVar8 == 0) {
    uVar10 = FUN__text__0066bdd0(param_2,*(undefined8 *)(param_2 + 0x130),
                                 *(undefined8 *)(param_2 + 0x138));
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    if (*(int *)(param_2 + 0x1c0) == 0) {
      if ((*(byte *)(param_2 + 0xf43) & 1) == 0) {
        lVar11 = *plVar1;
        if (lVar11 != -1) {
          lVar14 = lVar11 - *(long *)(param_2 + 0x100);
          if (((lVar14 != 0) && (*(long *)(param_2 + 0x100) != *(long *)(param_2 + 0x14e8) + lVar11)
              ) && (*(long *)(param_2 + 0x1d0) == 0)) {
            FUN__text__0066713c(param_2,0x70fdc2,lVar14);
            return 0x12;
          }
        }
        if (((*(ushort *)(param_2 + 0x660) >> 5 & 1) != 0) && ((int)param_1[7] != 4)) {
          FUN__text__0066713c(param_2,0x70df61);
          return 0x12;
        }
      }
      iVar8 = FUN__text__00665e14(param_1);
      if (iVar8 != 0) goto LAB__text__0066d89c;
    }
    else {
      iVar8 = FUN__text__0064fa18(param_2,param_2 + 0x130,0);
      if (iVar8 < 0) {
        lVar11 = *(long *)(param_2 + 0xf0);
        uVar9 = FUN__text__0066c6d8(*(undefined8 *)(param_2 + 0x130),
                                    *(undefined8 *)(param_2 + 0x138),
                                    *(undefined8 *)(param_2 + 0x1008),
                                    *(undefined8 *)(param_2 + 0x1010));
        if (lVar11 == -1) {
          FUN__text__0066713c(param_2,0x7180fb,uVar9,*(undefined8 *)(param_2 + 0x100));
        }
        else {
          FUN__text__0066713c(param_2,0x70de1a,uVar9,*(undefined8 *)(param_2 + 0x100),
                              *(undefined8 *)(param_2 + 0xf0));
        }
        return 0x1c;
      }
    }
    uVar10 = 0;
    bVar5 = (*(uint *)(param_2 + 0x1c0) & 0x33) == 0;
LAB__text__0066d978:
    *param_3 = bVar5;
  }
  else {
LAB__text__0066d89c:
    uVar10 = 0x2a;
  }
  return uVar10;
}


