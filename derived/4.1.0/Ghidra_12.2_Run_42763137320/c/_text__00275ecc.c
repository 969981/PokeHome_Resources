/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00275ecc; name: FUN_.text__00275ecc
 */


undefined8 FUN__text__00275ecc(long param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0x90) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00275ef4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00275f04 +
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x90) + 0x72d194) * 4))();
    return uVar1;
  }
  return 0;
}


