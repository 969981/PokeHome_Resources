/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a718c; name: FUN_.text__003a718c
 */


void FUN__text__003a718c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0xa0);
  if ((*plVar2 == -0x340d631b7bddd9bb || *plVar2 == 0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x90))(*(long **)(param_1 + 0x98),plVar2),
     (uVar1 & 1) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a71fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar2);
  return;
}


