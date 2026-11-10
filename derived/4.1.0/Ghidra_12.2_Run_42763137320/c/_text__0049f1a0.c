/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049f1a0; name: FUN_.text__0049f1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0049f1a0(long param_1,long param_2,undefined1 *param_3,short *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  short sVar17;
  int iVar18;
  undefined2 *puVar19;
  
  *param_3 = 1;
  plVar16 = *(long **)(param_1 + 0x108);
  if (*(short *)(param_2 + 0x12) == 0) {
    plVar9 = plVar16;
    if (param_4 != (short *)0x0) {
      if ((*(byte *)(param_4 + 1) & 1) == 0) {
LAB__text__0049f280:
        *param_3 = 0;
        return 0;
      }
      if ((*(byte *)(param_4 + 1) >> 1 & 1) == 0) {
        sVar17 = *param_4;
        *param_4 = sVar17 + -1;
        if ((short)(sVar17 + -1) == 0) goto LAB__text__0049f280;
        plVar9 = *(long **)(param_1 + 0x108);
      }
    }
    uVar3 = (**(code **)(*plVar9 + 0x20))();
    *(undefined2 *)(param_2 + 0x12) = uVar3;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
    FUN__text__004cdac4(param_2,uVar4);
    iVar7 = *(int *)(param_2 + 8);
    sVar17 = *(short *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x20) != 0) {
      puVar10 = *(undefined2 **)(param_2 + 0x18);
      do {
        puVar19 = puVar10 + 1;
        uVar3 = *puVar10;
        iVar5 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar3);
        iVar7 = iVar7 - iVar5;
        sVar17 = sVar17 + -1;
        FUN__text__004cdb00(param_2,uVar3);
        puVar10 = puVar19;
      } while (puVar19 !=
               (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2));
    }
    if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0x10) {
      *(int *)(param_2 + 0xc) = iVar7;
    }
    *(short *)(param_2 + 0x10) = sVar17;
    if ((*(ushort *)(param_1 + 0x13d) >> 3 & 1) != 0) goto LAB__text__0049f354;
LAB__text__0049f1e0:
    iVar5 = 0;
    iVar7 = -1;
    lVar15 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
    *_DAT_008a45e8 = lVar15;
    uVar2 = *(ushort *)(param_2 + 0x10);
    uVar13 = 0;
    uVar12 = (uint)((ulong)lVar15 >> 0x21);
    if (uVar2 != 0) {
      uVar13 = uVar12 / uVar2;
    }
    do {
      if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
        if (*(short *)(param_1 + 0x13a) != 0) goto LAB__text__0049f25c;
LAB__text__0049f224:
        iVar7 = iVar7 + 1;
      }
      else {
        uVar8 = FUN__text__004cdaa8(param_2,iVar5);
        if ((uVar8 & 1) == 0) {
LAB__text__0049f25c:
          uVar8 = FUN__text__004cdb48(param_2,iVar5);
          if ((uVar8 & 1) == 0) goto LAB__text__0049f224;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar7 < (int)(uVar12 - uVar13 * uVar2));
  }
  else {
    if ((*(ushort *)(param_1 + 0x13d) >> 3 & 1) == 0) goto LAB__text__0049f1e0;
LAB__text__0049f354:
    iVar7 = FUN__text__004cdb6c(param_2);
    if (iVar7 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      iVar18 = -1;
      do {
        if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
          if (*(short *)(param_1 + 0x13a) != 0) goto LAB__text__0049f3bc;
LAB__text__0049f370:
          iVar6 = (**(code **)(*plVar16 + 0x58))(plVar16,iVar5);
          iVar18 = iVar6 + iVar18;
        }
        else {
          uVar8 = FUN__text__004cdaa8(param_2,iVar5);
          if ((uVar8 & 1) == 0) {
LAB__text__0049f3bc:
            uVar8 = FUN__text__004cdb48(param_2,iVar5);
            if ((uVar8 & 1) == 0) goto LAB__text__0049f370;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar18 < iVar7);
    }
  }
  iVar5 = iVar5 + -1;
  if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
    uVar8 = FUN__text__004cdaa8(param_2,iVar5);
    if ((uVar8 & 1) == 0) {
      FUN__text__004cda84(param_2,iVar5);
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    }
    FUN__text__0049ef40(param_1,param_2,iVar5);
    return iVar5;
  }
  uVar13 = (uint)*(ushort *)(param_1 + 0x13a);
  if (*(ushort *)(param_1 + 0x13a) < 2) {
    uVar13 = 1;
  }
  iVar7 = (**(code **)(*plVar16 + 0x58))(plVar16,iVar5);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar7;
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
  FUN__text__004cda84(param_2,iVar5);
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar8 = (ulong)uVar1;
  uVar12 = *(uint *)(param_2 + 0x24);
  lVar15 = *(long *)(param_2 + 0x18);
  if (uVar1 < uVar12) {
    *(uint *)(param_2 + 0x20) = uVar1 + 1;
    if (lVar15 == 0) goto LAB__text__0049f5d4;
LAB__text__0049f56c:
    *(short *)(lVar15 + uVar8 * 2) = (short)iVar5;
    FUN__text__004cdb00(param_2,iVar5);
    iVar7 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
    uVar12 = iVar7 - 1U & 0xffff;
    uVar1 = *(uint *)(param_2 + 0x20);
    if (uVar12 <= uVar13) {
      uVar13 = uVar12;
    }
    if (uVar13 < uVar1) {
      puVar10 = *(undefined2 **)(param_2 + 0x18);
      uVar3 = *puVar10;
      if (uVar1 < 2) {
        iVar7 = 0;
      }
      else {
        memmove(puVar10,puVar10 + 1,(ulong)(uVar1 * 2 - 2));
        iVar7 = *(int *)(param_2 + 0x20) + -1;
      }
      *(int *)(param_2 + 0x20) = iVar7;
      FUN__text__004cdb24(param_2,uVar3);
      uVar8 = FUN__text__004cdaa8(param_2,uVar3);
      if ((uVar8 & 1) == 0) {
        iVar7 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar3);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar7;
        *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
      }
    }
  }
  else {
    iVar7 = uVar12 + (uVar12 >> 1);
    if (uVar12 == 0) {
      iVar7 = 1;
    }
    uVar12 = iVar7 + uVar12;
    if (lVar15 == 0) {
      lVar15 = FUN__text__00400f80(0,(ulong)uVar12 << 1);
      if (lVar15 != 0) {
        lVar11 = *(long *)(param_2 + 0x18);
        if ((lVar11 != 0) && (lVar11 != lVar15)) {
          if (uVar1 != 0) {
            if (uVar1 == 1) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              do {
                lVar11 = uVar14 * 2;
                uVar14 = uVar14 + 2;
                *(undefined2 *)(lVar15 + lVar11) =
                     *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar11);
                ((undefined2 *)(lVar15 + lVar11))[1] =
                     *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar11 + 2);
              } while ((uVar8 & 0xfffffffe) != uVar14);
            }
            if ((uVar1 & 1) != 0) {
              *(undefined2 *)(lVar15 + uVar14 * 2) =
                   *(undefined2 *)(*(long *)(param_2 + 0x18) + uVar14 * 2);
            }
            lVar11 = *(long *)(param_2 + 0x18);
          }
          FUN__text__00400fc0(0,lVar11);
        }
        goto LAB__text__0049f550;
      }
    }
    else {
      lVar15 = FUN__text__00400fa0(0,lVar15);
      if (lVar15 != 0) {
LAB__text__0049f550:
        *(long *)(param_2 + 0x18) = lVar15;
        *(uint *)(param_2 + 0x24) = uVar12;
        if (uVar1 < uVar12) {
          uVar8 = (ulong)*(uint *)(param_2 + 0x20);
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
          goto LAB__text__0049f56c;
        }
      }
    }
LAB__text__0049f5d4:
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  return iVar5;
}


