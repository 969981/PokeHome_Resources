/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004edadc; name: FUN_.text__004edadc
 */


void FUN__text__004edadc(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x10))();
  FUN__text__00400fc0(0,param_1);
  return;
}


