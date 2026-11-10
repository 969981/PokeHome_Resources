/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664288; name: FUN_.text__00664288
 */


char * FUN__text__00664288(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *__dest;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = 0;
  puVar7 = (undefined8 *)&DAT_0089a108;
  puVar6 = (undefined8 *)&DAT_0089a090;
  do {
    iVar1 = FUN__text__0066c234(*puVar7,0x71afde);
    if (iVar1 == 0) {
      sVar2 = strlen((char *)*puVar7);
      lVar5 = lVar5 + sVar2 + 2;
    }
    puVar7 = (undefined8 *)*puVar6;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (undefined8 *)0x0);
  if (lVar5 == 0) {
    pcVar3 = (char *)FUN__text__00678404(0x71afde);
    return pcVar3;
  }
  pcVar3 = (char *)FUN__text__006783d4(lVar5);
  if (pcVar3 != (char *)0x0) {
    puVar7 = (undefined8 *)&DAT_0089a108;
    __dest = pcVar3;
    puVar6 = (undefined8 *)&DAT_0089a090;
    do {
      iVar1 = FUN__text__0066c234(*puVar7,0x71afde);
      if (iVar1 == 0) {
        pcVar4 = strcpy(__dest,(char *)*puVar7);
        sVar2 = strlen(pcVar4);
        pcVar4 = __dest + sVar2;
        __dest = pcVar4 + 2;
        pcVar4[0] = ',';
        pcVar4[1] = ' ';
      }
      puVar7 = (undefined8 *)*puVar6;
      puVar6 = puVar6 + 1;
    } while (puVar7 != (undefined8 *)0x0);
    __dest[-2] = '\0';
  }
  return pcVar3;
}


