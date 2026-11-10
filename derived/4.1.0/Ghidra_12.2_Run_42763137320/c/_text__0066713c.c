/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066713c; name: FUN_.text__0066713c
 */


void FUN__text__0066713c(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_1f8 [128];
  char acStack_152 [258];
  
  if (((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0) || (*(long *)(param_1 + 0x678) != 0)) {
    memset(acStack_152,0,0x102);
    FUN__text__006587d8(acStack_152,0x100,param_2,auStack_1f8 + 0x80);
    sVar1 = strlen(acStack_152);
    if ((*(char **)(param_1 + 0x678) != (char *)0x0) &&
       ((*(ushort *)(param_1 + 0x15a4) >> 3 & 1) == 0)) {
      strcpy(*(char **)(param_1 + 0x678),acStack_152);
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 8;
    }
    if ((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0) {
      (acStack_152 + sVar1)[0] = '\n';
      (acStack_152 + sVar1)[1] = '\0';
      FUN__text__00667094(param_1,0,acStack_152,sVar1 + 1);
    }
  }
  return;
}


