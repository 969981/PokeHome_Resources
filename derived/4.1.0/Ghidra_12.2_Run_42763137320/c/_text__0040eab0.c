/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040eab0; name: FUN_.text__0040eab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040eab0(void)

{
  char *pcVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  piVar4 = _DAT_008a4a30;
  piVar3 = _DAT_008a49d0;
  plVar2 = _DAT_008a45c0;
  pcVar1 = _DAT_008a45a0;
  if (*_DAT_008a45c0 == 0 || *_DAT_008a45a0 == '\0') {
    return 0x66;
  }
  iVar6 = *_DAT_008a4a30;
  if (iVar6 != 1) {
    if (iVar6 == 0 && *_DAT_008a49d0 == 0) {
      do {
        FUN__text__004b8644(*plVar2 + 0x90);
        nn::os::SleepThread(5000000);
        iVar6 = *piVar4;
      } while (iVar6 == 0 && *piVar3 == 0);
    }
    if (iVar6 == 0) {
      uVar7 = 0;
      do {
        lVar5 = *plVar2;
        if (*pcVar1 != '\0') {
          FUN__text__004b0020(lVar5,1,0);
          lVar5 = *plVar2;
        }
        FUN__text__004b8644(lVar5 + 0x90);
        nn::os::SleepThread(5000000);
        iVar6 = *piVar4;
      } while ((uVar7 < 199) && (uVar7 = uVar7 + 1, iVar6 == 0));
    }
    if (iVar6 != 1) {
      return 0x5c;
    }
  }
  return 1;
}


