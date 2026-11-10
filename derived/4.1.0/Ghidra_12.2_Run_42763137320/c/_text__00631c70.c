/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631c70; name: FUN_.text__00631c70
 */


void FUN__text__00631c70(long param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x54) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00631c94 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x75a7fb) * 4 + 0x631ca0))();
    return;
  }
  FUN__text__00636950(param_1,3);
  return;
}


