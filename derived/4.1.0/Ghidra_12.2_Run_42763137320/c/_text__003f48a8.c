/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f48a8; name: FUN_.text__003f48a8
 */


undefined8
FUN__text__003f48a8(long *param_1,char *param_2,long param_3,int param_4,char *param_5,char *param_6
                   )

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  
  if (param_2 == (char *)0x0) {
    return 0x1f;
  }
  uVar1 = strlen(param_2);
  if (0x103 < uVar1) {
    return 0x1f;
  }
  if (param_6 == (char *)0x0) {
    pcVar3 = param_5;
    if (*param_1 == 0) goto LAB__text__003f4954;
    param_6 = (char *)(*param_1 + 8);
  }
  sVar2 = strlen(param_6);
  sVar4 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar4 = sVar2 + 1;
  }
  strncpy(param_5,param_6,sVar4);
  pcVar3 = param_5 + sVar4;
LAB__text__003f4954:
  *pcVar3 = '\0';
  if (((param_3 != 0) && (param_4 == 0)) && (*(char *)(param_3 + 0x18) != '\0')) {
    pcVar3 = (char *)FUN__text__003f5990();
    sVar4 = strlen(pcVar3);
    if (sVar4 != 0) {
      uVar1 = uVar1 + sVar4 + 1;
      if (0x103 < uVar1) {
        return 2;
      }
      pcVar3 = (char *)FUN__text__003f5990();
      sVar4 = strlen(param_5);
      sVar4 = (size_t)(0x103 - (int)sVar4);
      sVar2 = strlen(pcVar3);
      if ((ulong)(long)(int)sVar2 <= sVar4) {
        sVar4 = (long)(int)sVar2;
      }
      pcVar3 = strncat(param_5,pcVar3,sVar4);
      sVar4 = strlen(pcVar3);
      strncat(param_5,(char *)0x70eff8,(ulong)((int)sVar4 != 0x103));
    }
  }
  sVar4 = strlen(param_5);
  if (0x103 < sVar4 + uVar1) {
    return 2;
  }
  sVar4 = (size_t)(0x103 - (int)sVar4);
  sVar2 = strlen(param_2);
  if ((ulong)(long)(int)sVar2 <= sVar4) {
    sVar4 = (long)(int)sVar2;
  }
  strncat(param_5,param_2,sVar4);
  return 1;
}


