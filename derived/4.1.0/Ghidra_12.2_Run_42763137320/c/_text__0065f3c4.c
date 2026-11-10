/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f3c4; name: FUN_.text__0065f3c4
 */


ulong FUN__text__0065f3c4(long *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *param_1;
  uVar2 = 0xffffffffffffffbf;
  if (param_1[0x45] != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar3 = *(int *)(lVar6 + 0x180);
  if (iVar3 - 100U < 100) {
    return 0;
  }
  if ((*(ushort *)(lVar6 + 0x15a4) >> 5 & 1) != 0) {
    return (ulong)(-(*(byte *)(lVar6 + 0xf42) & 1) & 0x16);
  }
  if (((*(uint *)((long)param_1 + 0x3fc) >> 7 & 1) == 0) && (param_1[0x45] == 0)) {
    uVar7 = 0;
  }
  else if ((iVar3 == 0x191) ||
          ((uVar7 = 0, iVar3 < 300 && ((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) != 0)))) {
    uVar4 = FUN__text__0065f5c4(lVar6 + 0x1248,uVar2);
    uVar7 = uVar4 & 0xffffffff;
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15a4) = *(ushort *)(lVar6 + 0x15a4) | 0x20;
    }
    if ((*(long *)(lVar6 + 0x1250) == 8) && (0xb < (int)param_1[0x46])) {
      FUN__text__00666f74(lVar6,0x70fcbb);
      FUN__text__00650d38(param_1,1);
      *(undefined8 *)(*param_1 + 0xa40) = 2;
    }
  }
  if (((*(uint *)((long)param_1 + 0x3fc) >> 8 & 1) == 0) ||
     ((*(int *)(lVar6 + 0x180) != 0x197 &&
      (((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) == 0 || (299 < *(int *)(lVar6 + 0x180))))))) {
LAB__text__0065f4ec:
    if ((uVar7 & 1) == 0) {
      if ((((*(int *)(lVar6 + 0x180) < 300) &&
           (pbVar1 = (byte *)(lVar6 + 0x1260), (*pbVar1 & 1) == 0)) &&
          (*(char *)((long)param_1 + 0x3fd) < '\0')) &&
         ((*(int *)(lVar6 + 0xa38) != 1 && (*(int *)(lVar6 + 0xa38) != 6)))) {
        lVar5 = FUN__text__00678404(*(undefined8 *)(lVar6 + 0xf48));
        *(long *)(lVar6 + 0x1d0) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *pbVar1 = *pbVar1 | 1;
      }
      goto LAB__text__0065f590;
    }
  }
  else {
    uVar4 = FUN__text__0065f5c4(lVar6 + 0x1268,0xffffffffffffffbf);
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15a4) = *(ushort *)(lVar6 + 0x15a4) | 0x20;
      goto LAB__text__0065f4ec;
    }
  }
  if (((*(int *)(lVar6 + 0xa38) != 1) && (*(int *)(lVar6 + 0xa38) != 6)) &&
     (((*(byte *)((long)param_1 + 0x3fe) & 1) == 0 &&
      (uVar7 = FUN__text__0065f640(param_1), (int)uVar7 != 0)))) {
    return uVar7;
  }
  FUN__text__006783e4(*(undefined8 *)(lVar6 + 0x1d0));
  *(undefined8 *)(lVar6 + 0x1d0) = 0;
  lVar5 = FUN__text__00678404(*(undefined8 *)(lVar6 + 0xf48));
  *(long *)(lVar6 + 0x1d0) = lVar5;
  if (lVar5 == 0) {
    return 0x1b;
  }
LAB__text__0065f590:
  uVar7 = FUN__text__0065f724(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  FUN__text__0066713c(lVar6,0x71ea53,*(undefined4 *)(lVar6 + 0x180));
  return 0x16;
}


