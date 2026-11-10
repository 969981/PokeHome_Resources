/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010a15c; name: FUN_.text__0010a15c
 */


void FUN__text__0010a15c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_60 [8];
  long local_58 [2];
  char *local_48;
  
  pcVar3 = (char *)*param_2;
  sVar1 = strlen(pcVar3);
  pcVar2 = acStack_60 + -(sVar1 + 0x10 & 0xfffffffffffffff0);
  local_48 = pcVar2;
  pcVar3 = strcpy(pcVar2,pcVar3);
  pcVar3 = strrchr(pcVar3,0x2e);
  pcVar2 = strrchr(pcVar2,0x2f);
  if (pcVar2 < pcVar3) {
    *pcVar3 = '\0';
  }
  if (param_4 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0010a1f0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0010a1fc + (ulong)*(byte *)((ulong)param_4 + 0x7216b4) * 4))();
    return;
  }
  FUN__text__0010a50c(local_58,&local_48,param_3);
  FUN__text__005dd198(param_1,local_58,param_4);
  if (local_58[0] != 0) {
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
  }
  return;
}


