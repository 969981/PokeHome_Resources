/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd0cc; name: FUN_.text__005dd0cc
 */


void FUN__text__005dd0cc(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = nn::fs::ReadFile(param_1[2],param_1[1],param_2,param_3);
  if (iVar2 != 0) {
    return;
  }
  lVar1 = *param_1;
  if (param_1[1] + param_3 <= *param_1) {
    lVar1 = param_1[1] + param_3;
  }
  param_1[1] = lVar1;
  return;
}


