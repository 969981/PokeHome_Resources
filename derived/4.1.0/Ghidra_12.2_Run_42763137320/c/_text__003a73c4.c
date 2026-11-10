/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a73c4; name: FUN_.text__003a73c4
 */


void FUN__text__003a73c4(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x140) == 0) || (*(char *)(param_1 + 0x149) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x149) = 0;
  lVar1 = param_1 + 0x140;
  if (*(long *)(param_1 + 0x150) != 0) {
    lVar1 = param_1 + 0x150;
  }
                    /* WARNING: Could not recover jumptable at 0x003a7400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0xd8))(*(long **)(param_1 + 0x98),param_1 + 0x88,lVar1)
  ;
  return;
}


