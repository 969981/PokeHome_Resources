/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00445fa4; name: FUN_.text__00445fa4
 */


undefined8 FUN__text__00445fa4(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  
  if (*(char *)(param_1 + 0x29) != *(char *)(param_2 + 0x29)) {
    return 0;
  }
  bVar5 = *(byte *)(param_1 + 0x28);
  uVar2 = bVar5 - 0x80;
  if (0x20 < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  uVar2 = *(byte *)(param_2 + 0x28) - 0x80;
  if (0x20 < uVar2) {
    return 0;
  }
  if ((1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_2 + 0x2c)) {
    return 0;
  }
  bVar3 = *(byte *)(param_2 + 0x38);
  if ((bVar3 >> 2 & 1) != 0) {
    return 0;
  }
  if (bVar5 == 0x80) {
LAB__text__00446030:
    if ((*(byte *)(param_2 + 0x28) == 0x90) && (*(char *)(param_2 + 0x2d) != '\0')) {
      *(undefined1 *)(param_1 + 0x28) = 0x80;
      *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
      piVar4 = *(int **)(param_2 + 0x10);
      *(int **)(param_1 + 0x10) = piVar4;
      *piVar4 = *piVar4 + 1;
      bVar5 = *(byte *)(param_1 + 0x28);
    }
LAB__text__00446068:
    if (bVar5 == 0x80) {
      bVar3 = *(byte *)(param_2 + 0x38);
      goto LAB__text__004460a8;
    }
    if (bVar5 != 0x90) {
      *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) & 0xfb;
      return 1;
    }
    cVar1 = *(char *)(param_1 + 0x2d);
    bVar3 = *(byte *)(param_2 + 0x38);
  }
  else {
    if (bVar5 != 0x90) goto LAB__text__00446068;
    cVar1 = *(char *)(param_1 + 0x2d);
    if (cVar1 == '\0') goto LAB__text__00446030;
  }
  if (cVar1 != '\0') {
    *(byte *)(param_2 + 0x38) = bVar3 & 0xfb;
    return 1;
  }
LAB__text__004460a8:
  *(byte *)(param_2 + 0x38) = bVar3 & 0xfb | 4;
  return 1;
}


