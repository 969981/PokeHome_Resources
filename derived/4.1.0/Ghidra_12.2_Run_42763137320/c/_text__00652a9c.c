/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00652a9c; name: FUN_.text__00652a9c
 */


byte FUN__text__00652a9c(char *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_14;
  
  bVar5 = 0;
  if (param_1 != (char *)0x0) {
    local_14 = 0;
    iVar2 = FUN__text__006569e8(2,param_1,&local_14);
    if (iVar2 == 0) {
      pcVar3 = (char *)strlen(param_1);
      lVar4 = FUN__text__006535c4(param_1,0x2e,pcVar3);
      if ((lVar4 == 0) ||
         (lVar4 = FUN__text__006535c4(param_1,0x2e,lVar4 - (long)param_1), lVar4 == 0)) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)(lVar4 + 1);
        pcVar3 = param_1 + ((long)pcVar3 - (long)pcVar6);
      }
      if (pcVar6 != (char *)0x0) {
        param_1 = pcVar6;
      }
      if ((long)pcVar3 < 1) {
        bVar5 = 5;
      }
      else {
        bVar5 = 5;
        pcVar6 = param_1;
        do {
          pcVar7 = pcVar6 + 1;
          bVar1 = FUN__text__0066c21c(*pcVar6);
          bVar5 = bVar5 * '!' ^ bVar1;
          pcVar6 = pcVar7;
        } while (pcVar7 < param_1 + (long)pcVar3);
      }
    }
    else {
      bVar5 = 0;
    }
  }
  return bVar5;
}


