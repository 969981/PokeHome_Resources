/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00465940; name: FUN_.text__00465940
 */


void FUN__text__00465940(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0xd4) >> 1 & 1) != 0) goto LAB__text__004659d0;
  lVar4 = 0;
  do {
    lVar5 = param_1;
    if (lVar4 == 0) {
      lVar4 = *(long *)(lVar5 + 0x80);
    }
  } while (((*(byte *)(lVar5 + 0x9d) >> 2 & 1) == 0) &&
          (param_1 = *(long *)(lVar5 + 0x78), *(long *)(lVar5 + 0x78) != 0));
  if (*(long *)(lVar5 + 0x60) != 0) {
    FUN__text__004655b0(param_2);
  }
  if (lVar4 == 0) {
    do {
      plVar1 = (long *)(lVar5 + 0x78);
      lVar4 = *(long *)(lVar5 + 0x80);
      bVar2 = lVar4 == 0;
      lVar5 = *plVar1;
    } while (bVar2 && *plVar1 != 0);
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    do {
      uVar3 = FUN__text__0045df80(lVar4);
      param_1 = lVar4;
      if ((uVar3 & 1) != 0) {
        return;
      }
LAB__text__004659d0:
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN__text__004655b0(param_2);
      }
      lVar4 = *(long *)(param_1 + 0x80);
    } while (lVar4 != 0);
  }
  return;
}


