/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7418; name: FUN_.text__003e7418
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e7418(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003e7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x70))
            (*(long **)(param_1 + 0x58),_DAT_008a0448,param_2);
  return;
}


