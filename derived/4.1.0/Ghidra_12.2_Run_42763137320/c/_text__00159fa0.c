/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00159fa0; name: FUN_.text__00159fa0
 */


void FUN__text__00159fa0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 8))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00159fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
            (*(long **)(param_1 + 0x60),plVar1,*(undefined8 *)(param_1 + 0x68),
             *(undefined8 *)(param_1 + 0x70));
  return;
}


