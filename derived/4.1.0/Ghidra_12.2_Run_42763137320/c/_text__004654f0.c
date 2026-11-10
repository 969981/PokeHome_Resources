/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004654f0; name: FUN_.text__004654f0
 */


int FUN__text__004654f0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0xd4) >> 1 & 1) == 0) {
    lVar5 = 0;
    do {
      lVar3 = param_1;
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar3 + 0x80);
      }
    } while (((*(byte *)(lVar3 + 0x9d) >> 2 & 1) == 0) &&
            (param_1 = *(long *)(lVar3 + 0x78), *(long *)(lVar3 + 0x78) != 0));
    if (*(long *)(lVar3 + 0x60) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(long *)(lVar3 + 0x60) + 0x10);
    }
    if (lVar5 == 0) {
      do {
        plVar1 = (long *)(lVar3 + 0x78);
        lVar5 = *(long *)(lVar3 + 0x80);
        lVar3 = *plVar1;
      } while (lVar5 == 0 && *plVar1 != 0);
      if (lVar5 == 0) {
        return iVar4;
      }
    }
    uVar2 = FUN__text__0045df80(lVar5);
    param_1 = lVar5;
    if ((uVar2 & 1) != 0) {
      return iVar4;
    }
  }
  else {
    iVar4 = 0;
  }
  do {
    if (*(long *)(param_1 + 0x60) != 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x60) + 0x10) + iVar4;
    }
    param_1 = *(long *)(param_1 + 0x80);
  } while ((param_1 != 0) && (uVar2 = FUN__text__0045df80(param_1), (uVar2 & 1) == 0));
  return iVar4;
}


