/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472950; name: FUN_.text__00472950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472950(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  pcVar2 = _DAT_008a4d20;
  lVar5 = *(long *)(_DAT_008a4d08 + 0x10);
  if (*_DAT_008a4d20 == '\0' || *_DAT_008a4d28 != '\0') {
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x240)) {
      *(ushort *)(lVar5 + 0x220) = *(ushort *)(lVar5 + 0x220) & 0xfeff;
    }
  }
  else {
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x240)) {
      FUN__text__00474280(lVar5);
      *(ushort *)(lVar5 + 0x220) = *(ushort *)(lVar5 + 0x220) & 0xfeff;
    }
    *pcVar2 = '\0';
  }
  puVar1 = _DAT_008a4d10;
  uVar3 = (ulong)*(uint *)(_DAT_008a4d10 + 1);
  if (*(uint *)(_DAT_008a4d10 + 1) != 0) {
    plVar4 = (long *)*_DAT_008a4d10;
    plVar6 = plVar4;
    do {
      if (*plVar6 != 0) {
        FUN__text__00463a10();
        plVar4 = (long *)*puVar1;
        uVar3 = (ulong)*(uint *)(puVar1 + 1);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4 + uVar3);
  }
  return;
}


