/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a5cd0; name: FUN_.text__004a5cd0
 */


undefined4 FUN__text__004a5cd0(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  char *pcVar4;
  ulong uVar5;
  char acStack_a0 [128];
  
  if (param_2 == 0) {
    return 1;
  }
  pcVar4 = (char *)FUN__text__004ae940(param_1 + 8);
  if (*pcVar4 != '\0') {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      lVar2 = uVar5 + 1;
      uVar5 = uVar1;
    } while (pcVar4[lVar2] != '\0');
    if ((int)uVar1 != 0) {
      pcVar4 = strncpy(acStack_a0 + (0x80 - ((ulong)((int)uVar1 + 1) + 0xf & 0x1fffffff0)),pcVar4,
                       uVar1 & 0xffffffff);
      pcVar4[uVar1 & 0xffffffff] = '\0';
      uVar3 = FUN__text__00410f30();
      goto LAB__text__004a5d64;
    }
  }
  uVar3 = 1;
LAB__text__004a5d64:
  FUN__text__004aecbc(param_1 + 8);
  return uVar3;
}


