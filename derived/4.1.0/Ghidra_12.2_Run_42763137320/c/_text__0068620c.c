/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068620c; name: FUN_.text__0068620c
 */


undefined8 FUN__text__0068620c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + *(int *)(param_1 + 0xd8);
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  lVar6 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(long *)(param_2 + 0x70) = param_1;
  if (lVar6 != 0) {
    lVar2 = *(long *)(param_2 + 0x78);
    if (*(long *)(param_2 + 0x78) == 0) {
      *(long *)(param_2 + 0x78) = lVar6;
      *(long *)(lVar6 + 0x70) = param_2;
    }
    else {
      do {
        lVar5 = lVar2;
        lVar2 = *(long *)(lVar5 + 0x88);
      } while (*(long *)(lVar5 + 0x88) != 0);
      *(long *)(lVar5 + 0x88) = lVar6;
      *(long *)(lVar6 + 0x80) = lVar5;
    }
    do {
      *(long *)(lVar6 + 0x70) = param_2;
      if ((*(char *)(lVar6 + 0xe6) != '\0') &&
         (uVar4 = FUN__text__00685f20(param_2,param_1,lVar6), (int)uVar4 != 0)) {
        return uVar4;
      }
      lVar6 = *(long *)(lVar6 + 0x88);
    } while (lVar6 != 0);
  }
  if ((((*(long *)(param_2 + 0xa8) == 0) || ((*(byte *)(param_2 + 0xe4) & 0xc) != 0)) &&
      (iVar3 = FUN__text__00685a20(param_2 + 0x18), iVar3 != 0)) ||
     (uVar4 = FUN__text__00685f68(param_1,param_2), (int)uVar4 == 0)) {
    uVar4 = 0;
  }
  return uVar4;
}


