/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a150c; name: FUN_.text__003a150c
 */


undefined8 FUN__text__003a150c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x003a1528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x70))
                    (*(long **)(param_1 + 0x98),param_1 + 0x88);
  return uVar1;
}


