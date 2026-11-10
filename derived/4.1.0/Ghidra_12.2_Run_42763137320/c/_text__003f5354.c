/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5354; name: FUN_.text__003f5354
 */


void FUN__text__003f5354(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[9];
  (**(code **)*param_1)();
  if (lVar1 == 0) {
    return;
  }
  FUN__text__00400fc0(0xf,lVar1);
  return;
}


