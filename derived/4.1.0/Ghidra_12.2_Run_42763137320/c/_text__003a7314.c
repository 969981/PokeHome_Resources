/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a7314; name: FUN_.text__003a7314
 */


void FUN__text__003a7314(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x88);
  if (((*plVar2 == -0x340d631b7bddd9bb || *plVar2 == 0) ||
      ((**(code **)(**(long **)(param_1 + 0x98) + 0x60))
                 (*(long **)(param_1 + 0x98),plVar2,param_2 & 1), (param_2 & 1) == 0)) ||
     (*(undefined1 *)(param_1 + 0x149) = 1, *(long *)(param_1 + 0x140) == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x149) = 0;
  lVar1 = param_1 + 0x140;
  if (*(long *)(param_1 + 0x150) != 0) {
    lVar1 = param_1 + 0x150;
  }
                    /* WARNING: Could not recover jumptable at 0x003a73c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0xd8))(*(long **)(param_1 + 0x98),plVar2,lVar1);
  return;
}


