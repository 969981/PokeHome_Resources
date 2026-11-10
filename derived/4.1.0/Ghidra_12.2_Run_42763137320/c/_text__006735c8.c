/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006735c8; name: FUN_.text__006735c8
 */


undefined8 FUN__text__006735c8(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  iVar3 = FUN__text__0064fa18(param_1,0,1);
  uVar2 = *(uint *)(param_2 + 0x3fc);
  if ((uVar2 >> 1 & 1) != 0) {
    *param_3 = 0;
    return 0;
  }
  local_28 = 0;
  if ((uVar2 >> 4 & 1) == 0) {
    lVar1 = param_2 + 0xc0;
    if ((uVar2 & 4) != 0) {
      lVar1 = param_2 + 0xf0;
    }
    lVar4 = 0x198;
    if ((uVar2 & 8) != 0) {
      lVar4 = 0x19c;
    }
    *(long *)(param_2 + 400) = (long)*(int *)(param_2 + lVar4);
    lVar4 = FUN__text__00678404(*(undefined8 *)(lVar1 + 0x10));
    *(long *)(param_2 + 0xe0) = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
    iVar3 = FUN__text__00654b98(param_2,lVar4,*(undefined4 *)(param_2 + 400),&local_28,(long)iVar3);
    if (iVar3 == -2) {
LAB__text__006736f8:
      uVar5 = 0x1c;
      goto LAB__text__00673728;
    }
    if (iVar3 == 1) {
LAB__text__006736e0:
      uVar5 = 0;
      *param_3 = 1;
      goto LAB__text__00673728;
    }
    if (local_28 == 0) {
      FUN__text__0066713c(param_1,0x70b41d,*(undefined8 *)(lVar1 + 0x18));
      uVar5 = 6;
      goto LAB__text__00673728;
    }
  }
  else {
    lVar1 = param_2 + 0x150;
    if ((uVar2 & 0x40) != 0) {
      lVar1 = param_2 + 0x110;
    }
    lVar4 = FUN__text__00678404(*(undefined8 *)(lVar1 + 0x10));
    *(long *)(param_2 + 0xe0) = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
    iVar3 = FUN__text__00654b98(param_2,lVar4,*(undefined4 *)(param_2 + 400),&local_28,(long)iVar3);
    if (iVar3 == -2) goto LAB__text__006736f8;
    if (iVar3 == 1) goto LAB__text__006736e0;
    if (local_28 == 0) {
      FUN__text__0066713c(param_1,0x71fa29,*(undefined8 *)(lVar1 + 0x18));
      uVar5 = 5;
      goto LAB__text__00673728;
    }
  }
  uVar5 = 0;
LAB__text__00673728:
  *(long *)(param_2 + 0x68) = local_28;
  return uVar5;
}


