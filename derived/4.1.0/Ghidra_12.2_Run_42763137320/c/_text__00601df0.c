/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601df0; name: FUN_.text__00601df0
 */


void FUN__text__00601df0(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *__s;
  char acStack_130 [255];
  undefined1 local_31;
  
  lVar2 = FUN__text__00602950();
  __s = *(char **)(lVar2 + 0x40);
  sVar3 = strlen(__s);
  if (sVar3 == 0) {
    uVar4 = 0x70f683;
  }
  else {
    uVar4 = 0x70f683;
    if (__s[sVar3 - 1] != '/') {
      uVar4 = 0x70eff8;
    }
  }
  pcVar1 = (char *)0x70f683;
  if (__s != (char *)0x0) {
    pcVar1 = __s;
  }
  snprintf(acStack_130,0xff,(char *)0x71c4e8,pcVar1,uVar4,0x70bbf6);
  local_31 = 0;
  FUN__text__0060213c(param_1,acStack_130);
  return;
}


