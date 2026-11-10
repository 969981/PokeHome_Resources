/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063df98; name: FUN_.text__0063df98
 */


undefined8 FUN__text__0063df98(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0063dfb0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0063dfc0 + (ulong)*(byte *)((ulong)param_2 + 0x75c72c) * 4))
                      (0x20);
    return uVar1;
  }
  return 0;
}


