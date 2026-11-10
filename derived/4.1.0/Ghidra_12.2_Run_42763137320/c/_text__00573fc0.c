/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00573fc0; name: FUN_.text__00573fc0
 */


void FUN__text__00573fc0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  } while (plVar1[1] != param_2);
  *(undefined1 *)(plVar1 + 0xf) = 1;
  return;
}


