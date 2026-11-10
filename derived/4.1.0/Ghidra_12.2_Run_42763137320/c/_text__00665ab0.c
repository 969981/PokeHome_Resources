/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665ab0; name: FUN_.text__00665ab0
 */


undefined8 FUN__text__00665ab0(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN__text__00656c1c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN__text__00656b14(param_2,&LAB__text__00665ba0);
    pcVar2 = (char *)*param_1;
    while (pcVar2 != (char *)0x0) {
      sVar3 = strlen(pcVar2);
      lVar4 = FUN__text__006783d4(sVar3 + 0x20);
      if (lVar4 == 0) {
        FUN__text__00656c1c(param_2,0);
        return 3;
      }
      pcVar2 = strcpy((char *)(lVar4 + 0x1a),(char *)*param_1);
      pcVar2 = strchr(pcVar2,0x3a);
      if (pcVar2 == (char *)0x0) {
        uVar1 = 0x50;
      }
      else {
        *pcVar2 = '\0';
        lVar5 = strtol(pcVar2 + 1,(char **)0x0,10);
        uVar1 = (undefined2)lVar5;
      }
      *(undefined2 *)(lVar4 + 0x18) = uVar1;
      FUN__text__00656b20(param_2,*(undefined8 *)(param_2 + 8),lVar4,lVar4);
      pcVar2 = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


