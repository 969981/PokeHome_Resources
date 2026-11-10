/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042fd80; name: FUN_.text__0042fd80
 */


undefined1  [16] FUN__text__0042fd80(uint param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0042fd98 */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (*(code *)(&UNK__text__0042fda4 + (ulong)*(byte *)((ulong)param_1 + 0x73b15b) * 4))();
    return auVar1;
  }
  return ZEXT816(0);
}


