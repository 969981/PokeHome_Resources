/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064f508; name: FUN_.text__0064f508
 */


undefined4 FUN__text__0064f508(long *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar9 = *param_1;
  lVar8 = param_1[0xa6];
  *param_2 = 0;
  if (lVar8 == 0) {
    return 6;
  }
  nnosLockMutex(*(undefined8 *)(lVar8 + 0x18));
  iVar2 = *(int *)(lVar8 + 0x20);
  nnosUnlockMutex(*(undefined8 *)(lVar8 + 0x18));
  if (iVar2 != 0) {
    lVar8 = param_1[0xa6];
    FUN__text__006542dc(param_1,*(undefined4 *)(lVar8 + 0x34),*(undefined8 *)(lVar8 + 0x38));
    *(undefined8 *)(lVar8 + 0x38) = 0;
    if (param_1[0xa4] != 0) {
      FUN__text__0064f344(param_1 + 0xa2);
      *param_2 = param_1[0xa4];
      return 0;
    }
    bVar4 = (*(uint *)((long)param_1 + 0x3fc) & 0x20) != 0;
    uVar1 = 0x71bba2;
    if (bVar4) {
      uVar1 = 0x712b3c;
    }
    uVar7 = 5;
    if (!bVar4) {
      uVar7 = 6;
    }
    FUN__text__0066713c(*param_1,0x7111f9,uVar1,param_1[0xa2]);
    FUN__text__0064f344(param_1 + 0xa2);
    return uVar7;
  }
  auVar10 = FUN__text__0066c6a8();
  uVar5 = FUN__text__0066c6d8(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(lVar9 + 0x1008),
                              *(undefined8 *)(lVar9 + 0x1010));
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (*(int *)(lVar8 + 8) == 0) {
    uVar6 = 1;
  }
  else {
    uVar3 = *(int *)(lVar8 + 8) << (*(long *)(lVar8 + 0x10) <= (long)(ulong)uVar5);
    uVar6 = uVar3;
    if (0xf9 < uVar3) {
      uVar6 = 0xfa;
    }
    if (((long)(ulong)uVar5 < *(long *)(lVar8 + 0x10)) && (uVar3 < 0xfb)) goto LAB__text__0064f628;
  }
  *(uint *)(lVar8 + 8) = uVar6;
LAB__text__0064f628:
  *(ulong *)(lVar8 + 0x10) = (ulong)(uVar6 + uVar5);
  FUN__text__0065a050(*param_1,uVar6,1);
  return 0;
}


