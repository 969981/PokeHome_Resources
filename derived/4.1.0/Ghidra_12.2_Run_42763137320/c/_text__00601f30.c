/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601f30; name: FUN_.text__00601f30
 */


void FUN__text__00601f30(undefined8 param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  char acStack_170 [63];
  undefined1 local_131;
  char acStack_130 [255];
  undefined1 local_31;
  
  snprintf(acStack_170,0x3f,(char *)0x715434,param_3 & 0xffffffff);
  local_131 = 0;
  sVar2 = strlen(param_2);
  if (sVar2 == 0) {
    uVar3 = 0x70f683;
  }
  else {
    uVar3 = 0x70f683;
    if (param_2[sVar2 - 1] != '/') {
      uVar3 = 0x70eff8;
    }
  }
  pcVar1 = (char *)0x70f683;
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  snprintf(acStack_130,0xff,(char *)0x71c4e8,pcVar1,uVar3,acStack_170);
  local_31 = 0;
  FUN__text__0060213c(param_1,acStack_130);
  return;
}


