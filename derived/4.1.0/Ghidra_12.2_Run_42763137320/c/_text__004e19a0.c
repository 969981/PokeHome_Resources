/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e19a0; name: FUN_.text__004e19a0
 */


void FUN__text__004e19a0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_2[1] != 0) {
    FUN__text__004df354();
    lVar1 = param_2[1];
    if (lVar1 != 0) {
      FUN__text__004df354(lVar1);
      FUN__text__00400fc0(6,lVar1);
    }
    param_2[1] = 0;
  }
  (**(code **)*param_2)(param_2);
  FUN__text__00400fc0(6,param_2);
  return;
}


