/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472874; name: FUN_.text__00472874
 */


void FUN__text__00472874(long param_1)

{
  long *plVar1;
  undefined1 uStack_1;
  
  plVar1 = (long *)FUN__text__00472a30(&DAT_00aea7b0,*(undefined8 *)(param_1 + 0x20),&uStack_1);
  if (plVar1 != (long *)0x0) {
    *plVar1 = param_1;
  }
  return;
}


