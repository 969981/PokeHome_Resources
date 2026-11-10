/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684c94; name: FUN_.text__00684c94
 */


undefined8 FUN__text__00684c94(long param_1,long param_2,long param_3,long *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar2 = FUN__text__00679d98(*(undefined8 *)(*param_4 + 0x10),*(undefined8 *)(*param_4 + 0x18));
  if (iVar2 == 0) {
    lVar8 = *param_4;
    lVar6 = *(long *)(lVar8 + 0x18);
    if (lVar6 != 0) {
      if (**(char **)(lVar8 + 0x10) == ':') goto LAB__text__00685360;
      pbVar7 = *(byte **)(lVar8 + 0x10);
      do {
        if (0xffffffe5 < *pbVar7 - 0x5b) {
          return 0xfffffded;
        }
        lVar6 = lVar6 + -1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
LAB__text__00684e0c:
    uVar4 = *(ushort *)(param_2 + 0xe2);
    uVar3 = 0xffffff97;
LAB__text__00684e14:
    *(ushort *)(param_2 + 0xe2) = uVar4 | 0x40;
  }
  else {
    iVar2 = (int)param_4[2];
    if (iVar2 == 0x25) {
LAB__text__00684ce4:
      lVar6 = *(long *)(param_4[1] + 0x18);
      if (lVar6 != 0) {
        pbVar7 = *(byte **)(param_4[1] + 0x10);
        do {
          if (*(char *)((ulong)*pbVar7 + 0x7651e8) == '\0') goto LAB__text__00684df8;
          pbVar7 = pbVar7 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else if (iVar2 == 5) {
      lVar6 = *(long *)(param_4[1] + 0x18);
      if ((lVar6 == 0) ||
         (pbVar7 = *(byte **)(param_4[1] + 0x10), 0x19 < (*pbVar7 & 0xffffffdf) - 0x41)) {
LAB__text__00684df8:
        if (**(char **)(*param_4 + 0x10) == ':') goto LAB__text__00685360;
        goto LAB__text__00684e0c;
      }
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        do {
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar7;
          if ((9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) &&
             ((0x2e < bVar1 || ((1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) == 0))))
          goto LAB__text__00684df8;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      if (iVar2 == 0) goto LAB__text__00684ce4;
      iVar2 = FUN__text__00679de4(*(undefined8 *)(param_4[1] + 0x10),
                                  *(undefined8 *)(param_4[1] + 0x18));
      if (iVar2 == 0) goto LAB__text__00684df8;
    }
    if ((*(char *)(param_1 + 0x9aa) == '\0') && (*(char *)(param_3 + 0xc) != '\x05')) {
      if ((**(char **)(*param_4 + 0x10) != ':') ||
         ((param_5 == 0 && ((*(ushort *)(param_2 + 0xe2) >> 6 & 1) == 0)))) {
        iVar2 = (int)param_4[2];
        if (iVar2 < 0x3d) {
          if (iVar2 == 7) {
            iVar2 = FUN__text__00685670(param_2,param_4,0x20);
            if ((iVar2 != 0) && (*(long *)(param_4[1] + 0x18) == 3)) {
              lVar6 = 0;
              lVar8 = 0;
              do {
                uVar5 = (uint)*(byte *)(*(long *)(param_4[1] + 0x10) + lVar6);
                if (uVar5 - 0x3a < 0xfffffff6 || 0xccccccccccccccc < lVar8) {
LAB__text__00685358:
                  *(undefined2 *)(param_2 + 0xe0) = 0xffff;
                  goto LAB__text__00685360;
                }
                uVar10 = (ulong)(uVar5 - 0x30);
                if ((long)(uVar10 ^ 0x7fffffffffffffff) < lVar8 * 10) goto LAB__text__00685358;
                lVar6 = lVar6 + 1;
                lVar8 = uVar10 + lVar8 * 10;
              } while (lVar6 != 3);
              uVar5 = (uint)lVar8 & 0xffff;
              *(short *)(param_2 + 0xe0) = (short)lVar8;
              if (uVar5 != 0x65 && uVar5 != 0xffff) goto LAB__text__00685330;
            }
            goto LAB__text__00685360;
          }
          if (iVar2 == 0x1b) {
            uVar4 = *(ushort *)(param_2 + 0xe0);
            if (uVar4 == 0xcc) {
              if (*(long *)(param_2 + 0x40) != -1) {
                return 0xfffffded;
              }
              if (*(long *)(param_4[1] + 0x18) != 1) {
                return 0xfffffded;
              }
              bVar1 = **(byte **)(param_4[1] + 0x10);
              uVar5 = bVar1 + 0x20;
              if (0x19 < bVar1 - 0x41) {
                uVar5 = (uint)bVar1;
              }
              if ((uVar5 & 0xff) == 0x30) {
                *(undefined8 *)(param_2 + 0x40) = 0;
                return 0xffffff96;
              }
              return 0xfffffded;
            }
            if (uVar4 - 100 < 100) {
              return 0xfffffded;
            }
            if ((uVar4 - 200 < 100) && ((*(ushort *)(param_2 + 0xe2) >> 7 & 1) != 0)) {
              return 0xffffff96;
            }
            if (*(long *)(param_2 + 0x40) != -1) {
              return 0xfffffded;
            }
            goto LAB__text__0068512c;
          }
          if (iVar2 == 0x38) {
            return 0xfffffded;
          }
        }
        else {
          if (iVar2 - 0x3eU < 4) {
            return 0xfffffded;
          }
          if (iVar2 == 0x3d) {
            if (*(long *)(param_4[1] + 0x18) != 8) {
              return 0xfffffded;
            }
            lVar6 = 0;
            do {
              bVar1 = *(byte *)(lVar6 + 0x711327);
              uVar5 = bVar1 + 0x20;
              if (0x19 < bVar1 - 0x41) {
                uVar5 = (uint)bVar1;
              }
              bVar1 = *(byte *)(*(long *)(param_4[1] + 0x10) + lVar6);
              uVar9 = bVar1 + 0x20;
              if (0x19 < bVar1 - 0x41) {
                uVar9 = (uint)bVar1;
              }
              if ((uVar5 & 0xff) != (uVar9 & 0xff)) {
                return 0xfffffded;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 8);
            goto LAB__text__00685330;
          }
        }
        if (**(char **)(*param_4 + 0x10) == ':') {
          return 0xfffffded;
        }
LAB__text__00685330:
        if (**(char **)(*param_4 + 0x10) == ':') {
          return 0;
        }
        uVar4 = *(ushort *)(param_2 + 0xe2);
        uVar3 = 0;
        goto LAB__text__00684e14;
      }
    }
    else if ((**(char **)(*param_4 + 0x10) != ':') ||
            ((param_5 == 0 && ((*(ushort *)(param_2 + 0xe2) >> 6 & 1) == 0)))) {
      uVar5 = *(uint *)(param_4 + 2);
      if ((int)uVar5 < 0x38) {
        if (uVar5 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00684efc */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)(&UNK__text__00684f08 + (ulong)*(byte *)((ulong)uVar5 + 0x7651cc) * 4))
                            ();
          return uVar3;
        }
        if (uVar5 == 0x1b) {
          if (*(long *)(param_2 + 0x40) == -1) {
LAB__text__0068512c:
            lVar6 = FUN__text__006856c0(*(undefined8 *)(param_4[1] + 0x10),
                                        *(undefined8 *)(param_4[1] + 0x18));
            *(long *)(param_2 + 0x40) = lVar6;
            if (lVar6 != -1) goto LAB__text__00685330;
          }
        }
        else {
          if (uVar5 != 0x25) goto LAB__text__00685114;
          iVar2 = FUN__text__00685670(param_2,param_4,0x10);
          if (iVar2 != 0) goto LAB__text__00685330;
        }
      }
      else {
        if (uVar5 - 0x38 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00684e74 */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)(&UNK__text__00684e84 +
                            (ulong)*(ushort *)((ulong)(uVar5 - 0x38) * 2 + 0x7651d2) * 4))
                            (0xfffffded);
          return uVar3;
        }
LAB__text__00685114:
        if (**(char **)(*param_4 + 0x10) != ':') goto LAB__text__00685330;
      }
    }
LAB__text__00685360:
    uVar3 = 0xfffffded;
  }
  return uVar3;
}


