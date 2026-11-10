/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00623208; name: FUN_.text__00623208
 */


void FUN__text__00623208(undefined8 param_1,undefined8 *param_2)

{
  short sVar1;
  undefined8 *puVar2;
  undefined1 local_34 [4];
  undefined8 local_18;
  
  puVar2 = param_2 + 4;
  local_34[0] = 0;
  local_18 = param_1;
  sVar1 = (*(code *)*param_2)(puVar2,&local_18,local_34);
  if (sVar1 == 0) {
    FUN__text__00622ffc(param_1,param_2,0,1);
    FUN__text__00622ffc(param_1,param_2,1,2);
    FUN__text__00622ffc(param_1,param_2,2,3);
  }
  local_34[0] = 1;
  local_18 = param_1;
  sVar1 = (*(code *)*param_2)(puVar2,&local_18,local_34);
  if (sVar1 == 0) {
    FUN__text__00622ffc(param_1,param_2,1,2);
    FUN__text__00622ffc(param_1,param_2,2,3);
  }
  local_34[0] = 2;
  local_18 = param_1;
  sVar1 = (*(code *)*param_2)(puVar2,&local_18,local_34);
  if (sVar1 == 0) {
    FUN__text__00622ffc(param_1,param_2,2,3);
    return;
  }
  return;
}


