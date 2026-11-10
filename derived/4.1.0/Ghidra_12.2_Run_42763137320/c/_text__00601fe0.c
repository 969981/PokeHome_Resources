/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601fe0; name: FUN_.text__00601fe0
 */


void FUN__text__00601fe0(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *__s;
  char acStack_170 [63];
  undefined1 local_131;
  char acStack_130 [255];
  undefined1 local_31;
  
  iVar2 = snprintf(acStack_170,0x3f,(char *)0x7161cb,param_2 & 0xffffffff);
  local_131 = 0;
  lVar3 = FUN__text__00602950(iVar2);
  __s = *(char **)(lVar3 + 8);
  sVar4 = strlen(__s);
  if (sVar4 == 0) {
    uVar5 = 0x70f683;
  }
  else {
    uVar5 = 0x70f683;
    if (__s[sVar4 - 1] != '/') {
      uVar5 = 0x70eff8;
    }
  }
  pcVar1 = (char *)0x70f683;
  if (__s != (char *)0x0) {
    pcVar1 = __s;
  }
  snprintf(acStack_130,0xff,(char *)0x71c4e8,pcVar1,uVar5,acStack_170);
  local_31 = 0;
  FUN__text__0060213c(param_1,acStack_130);
  return;
}


