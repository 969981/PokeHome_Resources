/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006351c4; name: FUN_.text__006351c4
 */


undefined8 FUN__text__006351c4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x006351e4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__006351f0 + (ulong)*(byte *)((ulong)param_2 + 0x75a82e) * 4))();
    return uVar1;
  }
  return 0;
}


