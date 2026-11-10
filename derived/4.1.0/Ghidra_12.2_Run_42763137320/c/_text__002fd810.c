/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd810; name: FUN_.text__002fd810
 */


undefined8 FUN__text__002fd810(void)

{
  undefined8 uVar1;
  
  if (DAT_008e5510 == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x002fd824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_008e5510)(0x8e5530);
  return uVar1;
}


