/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a4140; name: FUN_.text__003a4140
 */


bool FUN__text__003a4140(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (((*(char *)(param_1 + 0x82) == '\0' && *(char *)(param_1 + 0x83) == '\0') ||
      (uVar2 = FUN__text__003a150c(param_1), (uVar2 & 1) == 0)) ||
     (*(char *)(param_1 + 0x15a) == '\0')) goto LAB__text__003a41ac;
  uVar2 = *(ulong *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & uVar2) != 0) goto LAB__text__003a41a4;
LAB__text__003a41c4:
    if (((uVar3 >> 0x20 & 1) == 0) || (*(int *)(param_1 + 0xa0) != 0)) {
LAB__text__003a41ac:
      return *(char *)(param_1 + 0x81) == '\0';
    }
    *(undefined1 *)(param_1 + 0x100) = 1;
    if (*(char *)(param_1 + 0x159) != '\0') goto LAB__text__003a422c;
    cVar1 = *(char *)(param_1 + 0x82);
    lVar4 = param_1 + 0x118;
    lVar5 = param_1 + 0x1d0;
  }
  else {
    if ((*(ulong *)(param_2 + 0x18) & uVar2) == 0) {
      uVar3 = *(ulong *)(param_2 + 8);
      goto LAB__text__003a41c4;
    }
LAB__text__003a41a4:
    if ((*(int *)(param_1 + 0xa0) != 0) ||
       ((*(char *)(param_1 + 0x270) != '\0' && ((*(ulong *)(param_2 + 8) & uVar2) == 0))))
    goto LAB__text__003a41ac;
    *(undefined1 *)(param_1 + 0x100) = 1;
    if (*(char *)(param_1 + 0x159) != '\0') goto LAB__text__003a422c;
    cVar1 = *(char *)(param_1 + 0x82);
    lVar4 = param_1 + 0x138;
    lVar5 = param_1 + 0x1f0;
  }
  if (cVar1 != '\0') {
    lVar5 = lVar4;
  }
  FUN__text__003c1e4c(lVar5);
LAB__text__003a422c:
  FUN__text__003a1648(param_1,1);
  return false;
}


