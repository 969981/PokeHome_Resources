/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00634754; name: FUN_.text__00634754
 */


undefined8 FUN__text__00634754(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0063476c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00634778 + (ulong)*(byte *)((ulong)param_2 + 0x75a822) * 4))();
    return uVar1;
  }
  return 0;
}


