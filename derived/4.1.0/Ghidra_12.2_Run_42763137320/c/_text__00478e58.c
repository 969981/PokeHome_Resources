/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00478e58; name: FUN_.text__00478e58
 */


undefined8 FUN__text__00478e58(long param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0x208) >> 6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00478e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1d0) + 0x110))();
    return uVar1;
  }
  return 0;
}


