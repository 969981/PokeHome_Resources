/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00160f90; name: FUN_.text__00160f90
 */


void FUN__text__00160f90(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(long *)(param_1 + 0x260) == 0) {
    uVar5 = 0;
    uVar1 = 0;
    if (*(long *)(param_1 + 0x268) == 0) {
      uVar2 = 0;
      goto LAB__text__00160fc4;
    }
  }
  else {
    uVar1 = FUN__text__00162c9c();
    uVar2 = 0;
    uVar5 = uVar1;
    if (*(long *)(param_1 + 0x268) == 0) goto LAB__text__00160fc4;
  }
  uVar2 = FUN__text__00162c9c();
  uVar5 = (uint)uVar2 | uVar1;
LAB__text__00160fc4:
  if (((uVar5 & 1) != 0) || (*(char *)(param_1 + 0xc20) != '\0')) {
    uVar2 = FUN__text__00161070(param_1);
    *(undefined1 *)(param_1 + 0xc20) = 0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xaf0) + 0x48);
  if (lVar4 != 0) {
    lVar4 = lVar4 << 4;
    puVar6 = (undefined4 *)(*(long *)(*(long *)(param_1 + 0xaf0) + 0x40) + 8);
    do {
      lVar3 = *(long *)(puVar6 + -2);
      if (lVar3 != 0) {
        uVar2 = FUN__text__00160c50(uVar2,*(undefined8 *)(lVar3 + 0xd8),lVar3,
                                    *(undefined2 *)(lVar3 + 0x112),*puVar6,puVar6[1],0xffffffff);
      }
      lVar4 = lVar4 + -0x10;
      puVar6 = puVar6 + 4;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN__text__00162c58();
  }
  if (*(long *)(param_1 + 0x268) == 0) {
    return;
  }
  FUN__text__00162c58();
  return;
}


