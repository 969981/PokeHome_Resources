/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b090; name: FUN_.text__0042b090
 */


void FUN__text__0042b090(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN__text__004cf6e0(param_2 + 0xb0,param_3,0);
  if (lVar1 == 0) {
    *param_1 = 0;
    return;
  }
  FUN__text__004ce250(param_1);
  return;
}


