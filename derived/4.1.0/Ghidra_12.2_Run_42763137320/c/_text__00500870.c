/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00500870; name: FUN_.text__00500870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00500870(ulong param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  short sVar11;
  int iVar12;
  ushort *puVar14;
  ushort *puVar13;
  
  *param_3 = 0;
  lVar8 = param_2[2];
  if (lVar8 == 0) {
LAB__text__00500934:
    *param_3 = 1;
    return 0;
  }
  lVar9 = *param_2;
  plVar1 = (long *)(lVar9 + 0x20);
  if (*(short *)(lVar8 + 0x12) == 0) {
    if (((*(byte *)((long)param_2 + 10) & 1) == 0) ||
       (((*(byte *)((long)param_2 + 10) >> 1 & 1) == 0 &&
        (sVar11 = (short)param_2[1] + -1, *(short *)(param_2 + 1) = sVar11, sVar11 == 0))))
    goto LAB__text__00500934;
    *(short *)(lVar8 + 0x12) = (short)*(undefined4 *)(lVar9 + 0x28);
    param_1 = FUN__text__004cdac4(lVar8,*(undefined4 *)(lVar9 + 0x28));
    iVar5 = *(int *)(lVar8 + 8);
    sVar11 = *(short *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x20) != 0) {
      puVar13 = *(ushort **)(lVar8 + 0x18);
      do {
        puVar14 = puVar13 + 1;
        sVar11 = sVar11 + -1;
        iVar5 = iVar5 - *(int *)(*(long *)(*plVar1 + (ulong)*puVar13 * 8) + 0x1c);
        param_1 = FUN__text__004cdb00(lVar8);
        puVar13 = puVar14;
      } while (puVar14 != (ushort *)(*(long *)(lVar8 + 0x18) + (ulong)*(uint *)(lVar8 + 0x20) * 2));
    }
    *(int *)(lVar8 + 0xc) = iVar5;
    *(short *)(lVar8 + 0x10) = sVar11;
    cVar2 = *(char *)(lVar9 + 0x34);
  }
  else {
    cVar2 = *(char *)(lVar9 + 0x34);
  }
  if (cVar2 == '\0') {
    uVar3 = *(ushort *)(lVar8 + 0x10);
    if (uVar3 == 0) goto LAB__text__00500a7c;
    uVar10 = 0;
    iVar5 = -1;
    lVar7 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
    *_DAT_008a45e8 = lVar7;
    uVar4 = 0;
    uVar6 = (uint)((ulong)lVar7 >> 0x21);
    if (uVar3 != 0) {
      uVar4 = uVar6 / uVar3;
    }
    do {
      if (*(char *)(lVar9 + 0x35) == '\0') {
        if (*(short *)(lVar9 + 0x38) != 0) goto LAB__text__00500a68;
LAB__text__00500a30:
        iVar5 = iVar5 + 1;
      }
      else {
        param_1 = FUN__text__004cdaa8(lVar8,uVar10);
        if ((param_1 & 1) == 0) {
LAB__text__00500a68:
          param_1 = FUN__text__004cdb48(lVar8,uVar10);
          if ((param_1 & 1) == 0) goto LAB__text__00500a30;
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (iVar5 < (int)(uVar6 - uVar4 * uVar3));
  }
  else {
    if (*(int *)(lVar8 + 0xc) == 0) {
LAB__text__00500a7c:
      *(undefined2 *)(lVar8 + 0x12) = 0;
      return 0;
    }
    param_1 = FUN__text__004cdb6c(lVar8);
    iVar5 = (int)param_1;
    if (iVar5 < 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      iVar12 = -1;
      do {
        if (*(char *)(lVar9 + 0x35) == '\0') {
          if (*(short *)(lVar9 + 0x38) != 0) goto LAB__text__00500918;
LAB__text__005008d0:
          iVar12 = *(int *)(*(long *)(*plVar1 + uVar10 * 8) + 0x1c) + iVar12;
        }
        else {
          param_1 = FUN__text__004cdaa8(lVar8,uVar10 & 0xffffffff);
          if ((param_1 & 1) == 0) {
LAB__text__00500918:
            param_1 = FUN__text__004cdb48(lVar8,uVar10 & 0xffffffff);
            if ((param_1 & 1) == 0) goto LAB__text__005008d0;
          }
        }
        uVar10 = uVar10 + 1;
      } while (iVar12 < iVar5);
    }
  }
  iVar5 = (int)uVar10 + -1;
  FUN__text__00500c70(param_1,lVar9,iVar5,plVar1,lVar8);
  return iVar5;
}


