/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683bec; name: FUN_.text__00683bec
 */


void FUN__text__00683bec(long param_1)

{
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0xc);
    if (bVar1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00683c08 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__00683c14 + (ulong)*(byte *)((ulong)bVar1 + 0x7651bc) * 4))();
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN__text__00683f40();
      return;
    }
    if (bVar1 == 0xc) {
      FUN__text__00683f60();
      return;
    }
    if (bVar1 == 10) {
      FUN__text__00683f44();
      return;
    }
  }
  return;
}


