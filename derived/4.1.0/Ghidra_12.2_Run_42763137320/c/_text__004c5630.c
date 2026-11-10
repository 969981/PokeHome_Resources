/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5630; name: FUN_.text__004c5630
 */


void FUN__text__004c5630(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)DAT_00aeabc0;
  lVar1 = DAT_00aeabb8;
  if (DAT_00aeabc0 != 0) {
    lVar3 = DAT_00aeabb8;
    do {
      if ((*(char *)(lVar3 + 0x24) != '\0') && (*(long *)(lVar3 + 0x18) != 0)) {
        FUN__text__00400fc0(5,*(long *)(lVar3 + 0x18));
        uVar2 = (ulong)DAT_00aeabc0;
        lVar1 = DAT_00aeabb8;
      }
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != lVar1 + uVar2 * 0x28);
  }
  if (lVar1 != 0) {
    DAT_00aeabc0 = 0;
    FUN__text__00400fc0(0);
    DAT_00aeabb8 = 0;
    DAT_00aeabc4 = 0;
  }
  return;
}


