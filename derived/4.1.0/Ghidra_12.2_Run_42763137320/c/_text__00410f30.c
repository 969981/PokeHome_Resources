/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00410f30; name: FUN_.text__00410f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00410f30(char *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  size_t sVar3;
  char *__dest;
  undefined4 uVar4;
  
  puVar1 = _DAT_008a4620;
  if ((char *)*_DAT_008a4620 != (char *)0x0) {
    iVar2 = strcmp(param_1,(char *)*_DAT_008a4620);
    uVar4 = 0x53;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  sVar3 = strlen(param_1);
  __dest = (char *)FUN__text__00400f80(0x10,sVar3 + 1);
  *puVar1 = __dest;
  if (__dest == (char *)0x0) {
    return 0x34;
  }
  strcpy(__dest,param_1);
  return 1;
}


