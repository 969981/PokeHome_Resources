/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00613f00; name: FUN_.text__00613f00
 */


char FUN__text__00613f00(long param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar2 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar2 + 0xc) == '\0') {
    pcVar1 = (char *)(*(long *)(param_1 + 8) + 0xd8);
    uVar3 = FUN__text__0060e994(param_1,pcVar1);
    while ((uVar3 & 1) != 0) {
      if (*pcVar1 == '\x01') {
        cVar4 = pcVar1[0x2d];
        if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0') {
          return cVar4;
        }
        goto LAB__text__00613fbc;
      }
      pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
      uVar3 = FUN__text__0060e994(param_1,pcVar1);
    }
    cVar4 = DAT_00c15ea2;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0') {
      return DAT_00c15ea2;
    }
  }
  else {
    cVar4 = DAT_00c15ea2;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0') {
      return DAT_00c15ea2;
    }
  }
LAB__text__00613fbc:
  lVar2 = FUN__text__0060e7c4(param_1);
  if (lVar2 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return cVar4;
}


