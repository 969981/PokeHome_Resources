/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b04ac; name: FUN_.text__001b04ac
 */


void FUN__text__001b04ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar1 = lVar5 + 0x110;
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 == 3) {
    if ((*(long *)(lVar5 + 0x2d0) == 0) ||
       (uVar2 = FUN__text__003c7ec0(*(long *)(lVar5 + 0x2d0),param_1 + 0x40), (uVar2 & 1) != 0)) {
      iVar3 = 1;
      iVar6 = *(int *)(param_1 + 0x30);
      goto joined_r0x001b0518;
    }
LAB__text__001b05a8:
    iVar3 = 0;
    iVar6 = *(int *)(param_1 + 0x30);
    if (iVar6 != 0) goto LAB__text__001b0538;
LAB__text__001b051c:
    if (*(int *)(param_1 + 0x34) != 1) goto LAB__text__001b0570;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    if (iVar6 == 1) {
      if ((*(long *)(lVar5 + 0x2d0) != 0) &&
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar5 + 0x2d0),param_1 + 0x38), (uVar2 & 1) == 0))
      goto LAB__text__001b05a8;
      iVar3 = 3;
      iVar6 = *(int *)(param_1 + 0x30);
    }
    else {
      iVar3 = 0;
    }
joined_r0x001b0518:
    if (iVar6 == 0) goto LAB__text__001b051c;
LAB__text__001b0538:
    if ((iVar6 == 2) && (*(int *)(param_1 + 0x34) == 2)) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      FUN__text__0012c898(lVar1,param_1 + 0x38);
      FUN__text__0012c378(lVar1,param_1 + 0x40);
      uVar4 = 3;
      goto LAB__text__001b05c4;
    }
LAB__text__001b0570:
    if (iVar3 == 1) {
      uVar4 = 0;
      goto LAB__text__001b05c4;
    }
    if (iVar3 == 3) {
      uVar4 = 2;
      goto LAB__text__001b05c4;
    }
    if (iVar3 != 2) {
      return;
    }
  }
  FUN__text__0012c898(lVar1,param_1 + 0x40);
  FUN__text__0012c378(lVar1,param_1 + 0x38);
  uVar4 = 1;
LAB__text__001b05c4:
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  return;
}


