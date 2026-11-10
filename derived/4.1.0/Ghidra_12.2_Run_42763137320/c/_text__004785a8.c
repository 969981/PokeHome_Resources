/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004785a8; name: FUN_.text__004785a8
 */


int FUN__text__004785a8(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  
  if ((1 < (*(ushort *)(param_1 + 0x19c) & 7) - 1) ||
     (piVar5 = *(int **)(param_1 + 0x1c8), piVar5 == (int *)0x0)) {
    return 1;
  }
  iVar6 = *piVar5;
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar6)) {
    *(long *)(param_1 + 0x150) = *param_2;
    *(int *)(param_1 + 0x158) = (int)param_2[1];
  }
  iVar1 = 1;
  if (((*(long *)(piVar5 + 10) != 0) && ((piVar5[0xc] & 0x7fffffffU) != 0)) &&
     ((*(long *)(param_1 + 0x150) == 0 || ((*(byte *)(piVar5 + 4) >> 2 & 1) != 0)))) {
    lVar2 = FUN__text__0047bad4(DAT_00ae9a68);
    *(long *)(param_1 + 0x150) = lVar2;
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x1c8);
      uVar3 = FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1d0));
      iVar1 = FUN__text__0047b4a4(uVar4,lVar2,uVar3);
      if (iVar1 != 1) {
        FUN__text__0047bb70(DAT_00ae9a68,*(undefined8 *)(param_1 + 0x150));
        iVar6 = 0;
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      *(int *)(param_1 + 0x158) = iVar6;
    }
  }
  if (((*(ushort *)(param_1 + 0x19c) >> 8 & 1) != 0) &&
     (lVar2 = *(long *)(param_1 + 0x150), lVar2 != 0)) {
    uVar4 = FUN__text__0044a594(*(undefined8 *)(param_1 + 8));
    FUN__text__0047d160(lVar2,uVar4);
  }
  return iVar1;
}


