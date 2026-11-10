/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00154864; name: FUN_.text__00154864
 */


void FUN__text__00154864(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x260) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00154890 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001548a0 + (ulong)*(byte *)((ulong)uVar1 + 0x724d2c) * 4))();
    return;
  }
  return;
}


