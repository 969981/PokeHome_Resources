/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00660928; name: FUN_.text__00660928
 */


int FUN__text__00660928(long param_1,long param_2,size_t *param_3,char *param_4)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  ushort uVar17;
  size_t sVar18;
  char *pcVar19;
  undefined4 uVar20;
  long lVar21;
  ulong local_70;
  char local_68 [4];
  int local_64;
  
  sVar18 = *param_3;
  pcVar19 = *(char **)(param_1 + 0x158);
  plVar1 = (long *)(param_1 + 0xf0);
  piVar2 = (int *)(param_1 + 0x180);
  piVar3 = (int *)(param_2 + 0x230);
  piVar4 = (int *)(param_2 + 0x234);
  pcVar14 = pcVar19;
  do {
    *(char **)(param_1 + 0x160) = pcVar14;
    pvVar11 = memchr(pcVar14,10,*param_3);
    *(void **)(param_1 + 0x168) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      iVar9 = FUN__text__00661764(param_1,plVar1,*param_3);
      if (iVar9 != 0) {
        return iVar9;
      }
      if (*(int *)(param_1 + 0x144) != 0) {
        return 0;
      }
      iVar9 = FUN__text__00661854(param_1,*(undefined8 *)(param_1 + 0x1120),
                                  *(undefined8 *)(param_1 + 0x150));
      if (iVar9 != 2) {
        return 0;
      }
      *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
      *(undefined4 *)(param_1 + 0x140) = 2;
      FUN__text__00650d38(param_2,2);
      if ((*(byte *)(param_1 + 0xf47) >> 2 & 1) != 0) {
        return 0;
      }
LAB__text__006615ec:
      uVar16 = 0x71c610;
      goto LAB__text__00661724;
    }
    *param_3 = (size_t)(pcVar14 + ~(ulong)pvVar11 + *param_3);
    lVar21 = *(long *)(param_1 + 0x168) + 1;
    *(long *)(param_1 + 0x158) = lVar21;
    iVar9 = FUN__text__00661764(param_1,plVar1,lVar21 - *(long *)(param_1 + 0x160));
    if (iVar9 != 0) {
      return iVar9;
    }
    pcVar14 = *(char **)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x148);
    *(char **)(param_1 + 0x170) = pcVar14;
    if (*(int *)(param_1 + 0x144) == 0) {
      iVar9 = FUN__text__00661854(param_1,pcVar14,*(undefined8 *)(param_1 + 0x150));
      if (iVar9 == 2) {
        FUN__text__00650d38(param_2,2);
        if ((*(byte *)(param_1 + 0xf47) >> 2 & 1) != 0) {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          if (*param_3 == 0) {
            *(undefined4 *)(param_1 + 0x140) = 2;
            *param_3 = sVar18;
            *(char **)(param_1 + 0x158) = pcVar19;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x140) = 1;
          return 0;
        }
        goto LAB__text__006615ec;
      }
      pcVar14 = *(char **)(param_1 + 0x170);
    }
    pcVar15 = pcVar14;
    if (*pcVar14 == '\n') {
LAB__text__00660a38:
      *(char **)(param_1 + 0x170) = pcVar15 + 1;
LAB__text__00660a40:
      iVar9 = *piVar2;
      if (iVar9 - 100U < 100) {
        if (iVar9 == 0x65) {
          if (*(int *)(param_1 + 0x19c) != 1) {
            uVar17 = *(ushort *)(param_1 + 0x660) & 0xfffe;
            goto LAB__text__00660bf0;
          }
          FUN__text__00666f74(param_1,0x720694);
          *(undefined4 *)(param_1 + 0x19c) = 2;
          *(undefined4 *)(param_1 + 0x144) = 0;
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          iVar9 = FUN__text__00661ff0(param_2,*(undefined8 *)(param_1 + 0x158),*param_3);
          if (iVar9 != 0) {
            return iVar9;
          }
          *param_3 = 0;
        }
        else if (iVar9 == 100) {
          *(undefined4 *)(param_1 + 0x144) = 0;
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          if (*(int *)(param_1 + 0x198) != 0) {
            *(undefined4 *)(param_1 + 0x198) = 0;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            thunk_FUN__text__0065ca34(param_1,0);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x144) = 0;
          uVar17 = *(ushort *)(param_1 + 0x660) | 1;
LAB__text__00660bf0:
          *(ushort *)(param_1 + 0x660) = uVar17;
        }
      }
      else {
        uVar17 = *(ushort *)(param_1 + 0x660);
        *(ushort *)(param_1 + 0x660) = uVar17 & 0xfffe;
        if (((((*(long *)(param_1 + 0xf0) == -1) && ((uVar17 >> 5 & 1) == 0)) &&
             ((*(byte *)(param_2 + 0x3fc) & 1) == 0)) &&
            ((*piVar3 == 0xb && ((*(byte *)(*(long *)(param_2 + 0x420) + 0x82) >> 2 & 1) == 0)))) &&
           (*(int *)(param_1 + 0xa38) != 6)) {
          FUN__text__00666f74(param_1,0x71354b);
          FUN__text__00650d38(param_2,2);
        }
      }
      iVar9 = FUN__text__0065f724(param_2);
      if (iVar9 != 0) {
        FUN__text__0066713c(param_1,0x71ea53,*(undefined4 *)(param_1 + 0x180));
        return 0x16;
      }
      uVar20 = 2;
      if ((*(ulong *)(param_1 + 0xf40) & 0x200000) != 0) {
        uVar20 = 3;
      }
      lVar21 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x1120);
      iVar9 = FUN__text__0066748c(param_2,uVar20,*(long *)(param_1 + 0x1120),lVar21);
      if (iVar9 != 0) {
        return iVar9;
      }
      *(long *)(param_1 + 0x1610) = *(long *)(param_1 + 0x1610) + lVar21;
      lVar5 = *(long *)(param_1 + 0x110) + lVar21;
      lVar6 = lVar5;
      if (99 < *(int *)(param_1 + 0x180) - 100U) {
        lVar6 = 0;
      }
      *(long *)(param_1 + 0x110) = lVar5;
      *(long *)(param_1 + 0x118) = lVar6;
      iVar9 = FUN__text__0065f3c4(param_2);
      if (iVar9 != 0) {
        return iVar9;
      }
      if (299 < *piVar2) {
        if ((((*(uint *)(param_2 + 0x3fc) & 0x18001) == 0) && (*(int *)(param_1 + 0xa38) - 2U < 4))
           && (thunk_FUN__text__0065ca34(param_1,0), (*(ushort *)(param_1 + 0x660) >> 2 & 1) == 0))
        {
          if ((*(byte *)(param_1 + 0xf42) >> 1 & 1) == 0) {
            FUN__text__00666f74(param_1,0x70de9e);
            FUN__text__00650d38(param_2,2);
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 4;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffd;
            if ((*(byte *)(param_1 + 0x15a5) & 1) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 3;
            }
          }
          else {
            FUN__text__00666f74(param_1,0x71551e);
            if (*(int *)(param_1 + 0x198) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 0;
              *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            }
          }
        }
        if ((*(byte *)(param_2 + 0x3fe) & 1) != 0) {
          FUN__text__00666f74(param_1,0x7198a8);
          *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
        }
      }
      if ((*(ushort *)(param_1 + 0x660) & 1) == 0) {
        if ((*(byte *)(param_1 + 0xf43) & 1) == 0) {
          if ((*(ushort *)(param_1 + 0x660) >> 5 & 1) == 0) goto LAB__text__00661604;
          *plVar1 = -1;
          *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
LAB__text__00661678:
          if (*param_4 == '\0') goto LAB__text__006616ac;
        }
        else {
          *param_4 = '\x01';
LAB__text__00661604:
          if (*plVar1 == -1) {
            if (*(long *)(param_1 + 0xf8) == 0) goto LAB__text__0066165c;
            goto LAB__text__00661678;
          }
          FUN__text__00666390(param_1);
          *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
          if (*(long *)(param_1 + 0xf0) != 0) goto LAB__text__00661678;
LAB__text__0066165c:
          if (((*(byte *)(*(long *)(param_2 + 0x420) + 0x80) & 3) != 0) && (*piVar3 == 0x14))
          goto LAB__text__00661678;
          *param_4 = '\x01';
        }
        *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffe;
LAB__text__006616ac:
        if ((*(byte *)(param_1 + 0xf43) >> 2 & 1) == 0) {
          return 0;
        }
        FUN__text__00667094(param_1,1,*(undefined8 *)(param_1 + 0x160),lVar21);
        return 0;
      }
    }
    else {
      if (*pcVar14 == '\r') {
        pcVar15 = pcVar14 + 1;
        *(char **)(param_1 + 0x170) = pcVar15;
        if (pcVar14[1] == '\n') goto LAB__text__00660a38;
        goto LAB__text__00660a40;
      }
      iVar9 = *(int *)(param_1 + 0x144);
      *(int *)(param_1 + 0x144) = iVar9 + 1;
      if (iVar9 == 0) {
        local_70 = local_70 & 0xffffffff00000000;
        local_64 = 0;
        uVar7 = *(uint *)(*(long *)(param_2 + 0x420) + 0x80);
        if ((uVar7 & 3) == 0) {
          if ((uVar7 >> 0x12 & 1) == 0) goto LAB__text__00661684;
          local_68[0] = '\0';
          iVar10 = sscanf(pcVar14,(char *)0x713584,&local_64,piVar4,local_68,piVar2);
          iVar9 = 0;
          if ((iVar10 == 4) && (local_68[0] == ' ')) {
            *piVar4 = *piVar4 + local_64 * 10;
            *piVar3 = 0xb;
            goto LAB__text__00660da4;
          }
        }
        else {
          local_68[0] = '\0';
          iVar9 = sscanf(pcVar14,(char *)0x716dfb,&local_70,piVar3,local_68,piVar2);
          if ((iVar9 == 1) && ((int)local_70 == 2)) {
            iVar9 = sscanf(*(char **)(param_1 + 0x170),(char *)0x7206a2,piVar2);
            if (iVar9 != 1) goto LAB__text__0066171c;
            *piVar3 = 0;
            local_68[0] = ' ';
          }
          else if ((iVar9 != 4) || (local_68[0] != ' ')) {
            if (iVar9 == 0) {
              iVar9 = sscanf(*(char **)(param_1 + 0x170),(char *)0x71dfba,piVar2);
              *piVar3 = 10;
              if (iVar9 == 0) {
                iVar9 = FUN__text__00661854(param_1,*(undefined8 *)(param_1 + 0x170),
                                            *(undefined8 *)(param_1 + 0x150));
                if (iVar9 == 1) {
                  *piVar2 = 200;
                  *piVar3 = 10;
                  iVar9 = 1;
                }
                else {
                  iVar9 = 0;
                }
              }
              goto LAB__text__00660da8;
            }
LAB__text__0066171c:
            uVar16 = 0x71a46e;
LAB__text__00661724:
            FUN__text__0066713c(param_1,uVar16);
            return 1;
          }
          iVar9 = 4;
          iVar10 = *piVar3 + (int)local_70 * 10;
          *piVar3 = iVar10;
          if ((*(int *)(param_1 + 0x19c) == 2) && (iVar10 != 0x14)) {
            FUN__text__00666f74(param_1,0x71a44c);
LAB__text__00660da4:
            iVar9 = 4;
          }
        }
LAB__text__00660da8:
        if (iVar9 == 0) {
LAB__text__00661684:
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          return 0;
        }
        iVar9 = *(int *)(param_1 + 0x180);
        *(int *)(param_1 + 0x15f8) = iVar9;
        *(int *)(param_1 + 0x1600) = *piVar3;
        if ((*(int *)(param_1 + 0x14e0) == 0) || (*piVar3 < *(int *)(param_1 + 0x14e0))) {
          *(int *)(param_1 + 0x14e0) = *piVar3;
        }
        if (((*(long *)(param_1 + 0x14f8) == 0) || (*(int *)(param_1 + 0xa38) != 1)) ||
           (iVar9 != 0x1a0)) {
          if (((*(byte *)(param_1 + 0xf42) & 1) != 0) && (399 < iVar9)) {
            if (iVar9 == 0x197) {
              if ((*(byte *)(param_2 + 0x3fd) & 1) == 0) goto LAB__text__00661710;
            }
            else if ((iVar9 != 0x191) || (-1 < *(char *)(param_2 + 0x3fc))) {
LAB__text__00661710:
              FUN__text__00661900(param_1);
              return 0x16;
            }
          }
        }
        else {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 8;
        }
        iVar10 = *piVar3;
        if (iVar10 == 0x14) {
LAB__text__00660e7c:
          **(undefined4 **)(param_2 + 0x660) = 2;
        }
        else if (iVar10 == 10) {
          FUN__text__00666f74(param_1,0x718d9b);
          FUN__text__00650d38(param_2,1);
        }
        else {
          if ((*(int *)(param_1 + 0x19c) == 1) && (iVar9 == 0x65)) goto LAB__text__00660e7c;
          if ((((10 < iVar10) && ((*(byte *)(param_2 + 0x3fc) & 1) == 0)) &&
              (*(long *)(param_2 + 0x660) != 0)) &&
             (uVar12 = FUN__text__00665a24(param_1,param_2), (uVar12 & 1) == 0)) {
            **(undefined4 **)(param_2 + 0x660) = 1;
          }
        }
        if (*piVar2 != 0xcc) {
          if (*piVar2 != 0x130) goto LAB__text__00660ec0;
          if (*(int *)(param_1 + 0xa28) != 0) {
            *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
          }
        }
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 0x10;
      }
LAB__text__00660ec0:
      if ((*(ushort *)(param_1 + 0x660) >> 4 & 1) == 0) {
        lVar21 = *(long *)(param_1 + 0x170);
        if ((*(byte *)(param_1 + 0xf44) >> 4 & 1) != 0) goto LAB__text__00660f38;
        iVar9 = thunk_FUN__text__0066c2d8(0x70b205,lVar21,0xf);
        lVar21 = *(long *)(param_1 + 0x170);
        if (iVar9 == 0) goto LAB__text__00660f38;
        local_70 = 0;
        iVar9 = FUN__text__0066c5d8(lVar21 + 0xf,0,10,&local_70);
        if (iVar9 != 1) {
          if (iVar9 != 0) {
            iVar9 = 8;
            uVar16 = 0x71af8b;
            goto LAB__text__00661750;
          }
          if ((*(long *)(param_1 + 0xc38) != 0) && (*(long *)(param_1 + 0xc38) < (long)local_70))
          goto LAB__text__00661734;
          *(ulong *)(param_1 + 0xf0) = local_70;
          *(ulong *)(param_1 + 0xf8) = local_70;
          FUN__text__00666390(param_1);
          goto LAB__text__0066121c;
        }
        if (*(long *)(param_1 + 0xc38) != 0) {
LAB__text__00661734:
          iVar9 = 0x3f;
          uVar16 = 0x71554b;
LAB__text__00661750:
          FUN__text__0066713c(param_1,uVar16);
          return iVar9;
        }
        FUN__text__00650d38(param_2,2);
        uVar16 = 0x71815f;
LAB__text__006611b8:
        FUN__text__00666f74(param_1,uVar16);
        goto LAB__text__0066121c;
      }
      lVar21 = *(long *)(param_1 + 0x170);
LAB__text__00660f38:
      iVar9 = thunk_FUN__text__0066c2d8(0x71df49,lVar21,0xd);
      if (iVar9 == 0) {
        iVar10 = thunk_FUN__text__0066c2d8(0x7198cf,*(undefined8 *)(param_1 + 0x170),7);
        iVar9 = *piVar3;
        if (iVar10 == 0) {
          if (iVar9 == 10) {
            if ((*(byte *)(param_2 + 0x3fc) >> 5 & 1) != 0) {
              uVar12 = FUN__text__00660220(*(undefined8 *)(param_1 + 0x170),0x71813f,0x70b25c);
              if ((uVar12 & 1) != 0) {
                FUN__text__00650d38(param_2,0);
                uVar16 = 0x7198d7;
                goto LAB__text__006611b8;
              }
              iVar9 = *piVar3;
              goto LAB__text__00661128;
            }
LAB__text__00661184:
            uVar12 = FUN__text__00660220(*(undefined8 *)(param_1 + 0x170),0x7149a9,0x70b25c);
            if ((uVar12 & 1) != 0) {
              FUN__text__00650d38(param_2,0);
              uVar16 = 0x70d505;
              goto LAB__text__006611b8;
            }
          }
          else {
LAB__text__00661128:
            if (iVar9 == 0xb) {
              if ((*(byte *)(param_2 + 0x3fc) >> 5 & 1) != 0) {
                uVar12 = FUN__text__00660220(*(undefined8 *)(param_1 + 0x170),0x71813f,0x712c16);
                if ((uVar12 & 1) != 0) {
                  FUN__text__00650d38(param_2,1);
                  uVar16 = 0x713597;
                  goto LAB__text__006611b8;
                }
                iVar9 = *piVar3;
                goto LAB__text__0066117c;
              }
            }
            else {
LAB__text__0066117c:
              if (iVar9 == 10) goto LAB__text__00661184;
            }
          }
          uVar12 = FUN__text__00660220(*(undefined8 *)(param_1 + 0x170),0x7149a9,0x712c16);
          if ((uVar12 & 1) == 0) {
            iVar9 = thunk_FUN__text__0066c2d8(0x70e8f1,*(undefined8 *)(param_1 + 0x170),0x12);
            if (iVar9 == 0) {
              iVar9 = thunk_FUN__text__0066c2d8(0x70c9b4,*(long *)(param_1 + 0x170),0x11);
              if ((iVar9 != 0) && (*(long *)(param_1 + 0xcc8) != 0)) {
                uVar16 = 0;
                lVar21 = *(long *)(param_1 + 0x170) + 0x11;
                goto LAB__text__00661214;
              }
              iVar9 = thunk_FUN__text__0066c2d8(0x71dfc4,*(undefined8 *)(param_1 + 0x170),0xe);
              if (iVar9 != 0) {
                pcVar14 = (char *)(*(long *)(param_1 + 0x170) + 0xe);
                cVar8 = *pcVar14;
                while (cVar8 != '\0') {
                  iVar9 = FUN__text__00656830();
                  if ((iVar9 != 0) || (*pcVar14 == '*')) break;
                  pcVar14 = pcVar14 + 1;
                  cVar8 = *pcVar14;
                }
                iVar9 = FUN__text__00656830();
                if (iVar9 == 0) {
                  *(undefined8 *)(param_1 + 0x14f8) = 0;
                }
                else {
                  iVar9 = FUN__text__0066c5d8(pcVar14,0,10,param_1 + 0x178);
                  if ((iVar9 == 0) && (*(long *)(param_1 + 0x14f8) == *(long *)(param_1 + 0x178))) {
                    *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 2;
                  }
                }
                goto LAB__text__0066121c;
              }
              if ((*(long *)(param_1 + 0xf70) != 0) &&
                 (iVar9 = thunk_FUN__text__0066c2d8(0x70b1f4,*(undefined8 *)(param_1 + 0x170),0xb),
                 iVar9 != 0)) {
                FUN__text__00667a44(param_1,2,2);
                lVar21 = *(long *)(param_2 + 0x490);
                if (lVar21 == 0) {
                  lVar21 = *(long *)(param_2 + 0xd0);
                }
                FUN__text__00651c70(param_1,*(undefined8 *)(param_1 + 0xf70),1,0,
                                    *(long *)(param_1 + 0x170) + 0xb,lVar21,
                                    *(undefined8 *)(param_1 + 0x1580),
                                    *(uint *)(*(long *)(param_2 + 0x420) + 0x80) >> 1 & 1);
                FUN__text__00667a8c(param_1,2);
                goto LAB__text__0066121c;
              }
              iVar9 = thunk_FUN__text__0066c2d8(0x71201f,*(undefined8 *)(param_1 + 0x170),0xe);
              if ((iVar9 != 0) &&
                 ((*(int *)(param_1 + 0xa28) != 0 || ((*(byte *)(param_1 + 0xf41) >> 1 & 1) != 0))))
              {
                local_70 = 0;
                local_70 = FUN__text__00679878(0);
                uVar16 = FUN__text__00665284(*(long *)(param_1 + 0x170) + 0xe,&local_70);
                *(undefined8 *)(param_1 + 0x1a8) = uVar16;
                if ((*(byte *)(param_1 + 0xf41) >> 1 & 1) != 0) {
                  *(undefined8 *)(param_1 + 0x1608) = uVar16;
                }
                goto LAB__text__0066121c;
              }
              iVar9 = thunk_FUN__text__0066c2d8(0x713502,*(undefined8 *)(param_1 + 0x170),0x11);
              if ((iVar9 != 0) && (*piVar2 == 0x191)) {
                uVar16 = 0;
LAB__text__00661470:
                pcVar14 = (char *)FUN__text__0065f2d8(*(undefined8 *)(param_1 + 0x170));
                if (pcVar14 == (char *)0x0) {
                  return 0x1b;
                }
                FUN__text__0065fb80(param_2,uVar16,pcVar14);
                goto LAB__text__00660fd8;
              }
              iVar9 = thunk_FUN__text__0066c2d8(0x71df35,*(undefined8 *)(param_1 + 0x170),0x13);
              if ((iVar9 != 0) && (*(int *)(param_1 + 0x180) == 0x197)) {
                uVar16 = 1;
                goto LAB__text__00661470;
              }
              if (((99 < *(int *)(param_1 + 0x180) - 300U) ||
                  (iVar9 = thunk_FUN__text__0066c2d8(0x717630,*(undefined8 *)(param_1 + 0x170),9),
                  iVar9 == 0)) || (*(long *)(param_1 + 0x1c8) != 0)) {
                if ((*(byte *)(*(long *)(param_2 + 0x420) + 0x82) >> 2 & 1) != 0) {
                  return 4;
                }
                goto LAB__text__0066121c;
              }
              pcVar14 = (char *)FUN__text__0065f2d8(*(undefined8 *)(param_1 + 0x170));
              if (pcVar14 == (char *)0x0) {
                return 0x1b;
              }
              if (*pcVar14 == '\0') goto LAB__text__00660fd8;
              *(char **)(param_1 + 0x1c8) = pcVar14;
              if ((*(byte *)(param_1 + 0xf42) >> 2 & 1) == 0) goto LAB__text__0066121c;
              if (*(char *)(param_1 + 0x6c1) == '\0') {
                uVar16 = FUN__text__0067951c();
                uVar13 = FUN__text__00678404();
                *(undefined8 *)(param_1 + 0x1d0) = uVar13;
                FUN__text__006783e4(uVar16);
                lVar21 = *(long *)(param_1 + 0x1d0);
              }
              else {
                lVar21 = FUN__text__00678404();
                *(long *)(param_1 + 0x1d0) = lVar21;
              }
              if (lVar21 == 0) {
                return 0x1b;
              }
              iVar9 = FUN__text__0065f640(param_2);
            }
            else {
              lVar21 = *(long *)(param_1 + 0x170) + 0x12;
              uVar16 = 1;
LAB__text__00661214:
              iVar9 = FUN__text__006643f0(param_2,lVar21,uVar16);
            }
            if (iVar9 != 0) {
              return iVar9;
            }
          }
          else {
            FUN__text__00650d38(param_2,2);
          }
        }
        else if (iVar9 < 0x14) {
          pcVar14 = (char *)FUN__text__0065f2d8(*(undefined8 *)(param_1 + 0x170));
          if (((*(int **)(param_2 + 0x660) != (int *)0x0) && (**(int **)(param_2 + 0x660) == 1)) &&
             (uVar12 = FUN__text__00665ba8(param_1,pcVar14), (uVar12 & 1) != 0)) {
            **(undefined4 **)(param_2 + 0x660) = 0xffffffff;
          }
          goto LAB__text__00660fd8;
        }
      }
      else {
        pcVar14 = (char *)FUN__text__0065f2d8(*(undefined8 *)(param_1 + 0x170));
        if (pcVar14 == (char *)0x0) {
          return 0x1b;
        }
        if (*pcVar14 != '\0') {
          FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1638));
          *(char **)(param_1 + 0x1638) = pcVar14;
          goto LAB__text__0066121c;
        }
LAB__text__00660fd8:
        FUN__text__006783e4(pcVar14);
      }
LAB__text__0066121c:
      uVar20 = 2;
      if ((*(ulong *)(param_1 + 0xf40) & 0x200000) != 0) {
        uVar20 = 3;
      }
      if (((uint)*(ulong *)(param_1 + 0xf40) >> 0x1a & 1) != 0) {
        FUN__text__00667094(param_1,1,*(undefined8 *)(param_1 + 0x170),
                            *(undefined8 *)(param_1 + 0x150));
      }
      iVar9 = FUN__text__0066748c(param_2,uVar20,*(undefined8 *)(param_1 + 0x170),
                                  *(undefined8 *)(param_1 + 0x150));
      if (iVar9 != 0) {
        return iVar9;
      }
      *(long *)(param_1 + 0x1610) = *(long *)(param_1 + 0x1610) + *(long *)(param_1 + 0x150);
      *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x150);
    }
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x150) = 0;
    pcVar14 = *(char **)(param_1 + 0x158);
    if (*pcVar14 == '\0') {
      return 0;
    }
  } while( true );
}


