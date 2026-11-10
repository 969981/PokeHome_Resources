/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428734; name: FUN_.text__00428734
 */


undefined8 FUN__text__00428734(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1[3] + 0x315) >> 6 & 1) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00428750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xe0))();
  return uVar1;
}


