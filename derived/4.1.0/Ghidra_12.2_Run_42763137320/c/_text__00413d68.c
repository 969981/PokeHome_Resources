/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413d68; name: FUN_.text__00413d68
 */


void FUN__text__00413d68(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,long param_4)

{
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = *param_2;
  if (param_4 == -1) {
    FUN__text__00412dc0(param_2,1,0);
    return;
  }
  FUN__text__00413460(param_2,param_4);
  FUN__text__00412dc0(param_2,1,1);
  return;
}


