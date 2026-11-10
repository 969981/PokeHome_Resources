/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027af8c; name: FUN_.text__0027af8c
 */


undefined8 FUN__text__0027af8c(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0027afa4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0027afb0 + (ulong)*(byte *)((ulong)param_2 + 0x72d3c4) * 4))();
    return uVar1;
  }
  return 0;
}


