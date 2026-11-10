/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013201c; name: FUN_.text__0013201c
 */


undefined8 FUN__text__0013201c(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  FUN__text__003c4c74(*(undefined8 *)(param_1 + 0x640));
  FUN__text__003c4510(*(undefined8 *)(param_1 + 0x640));
  if ((*(char *)(param_1 + 0x690) == '\0') ||
     (iVar4 = FUN__text__003c485c(*(undefined8 *)(param_1 + 0x640)), iVar4 != 0)) {
    cVar1 = *(char *)(param_1 + 0x691);
  }
  else {
    if (*(long *)(param_1 + 0x650) != 0) {
      FUN__text__00132bf4();
    }
    if (*(long *)(param_1 + 0x670) != 0) {
      FUN__text__001337ac();
    }
    *(undefined1 *)(param_1 + 0x690) = 0;
    cVar1 = *(char *)(param_1 + 0x691);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  iVar4 = FUN__text__003c4854(*(undefined8 *)(param_1 + 0x640));
  if (*(long *)(param_1 + 0x650) == 0) {
    bVar2 = true;
    lVar5 = *(long *)(param_1 + 0x670);
  }
  else {
    bVar2 = *(char *)(*(long *)(param_1 + 0x650) + 0x58) == '\0';
    lVar5 = *(long *)(param_1 + 0x670);
  }
  if (lVar5 == 0) {
    bVar3 = true;
    bVar2 = (bool)(bVar2 ^ 1);
    if (iVar4 != 6) {
      bVar2 = true;
    }
  }
  else {
    bVar3 = *(char *)(lVar5 + 0x50) == '\0';
    bVar2 = (bool)(bVar2 ^ 1);
    if (iVar4 != 6) {
      bVar2 = true;
    }
  }
  if ((!bVar2) && (bVar3)) {
    FUN__text__003c4754(*(undefined8 *)(param_1 + 0x640),1);
    if (*(long *)(param_1 + 0x650) != 0 || *(long *)(param_1 + 0x670) != 0) {
      *(undefined1 *)(param_1 + 0x690) = 0;
      FUN__text__0012bca0(param_1 + 0x110,0);
    }
    *(undefined1 *)(param_1 + 0x691) = 0;
    return 0;
  }
  return 0;
}


