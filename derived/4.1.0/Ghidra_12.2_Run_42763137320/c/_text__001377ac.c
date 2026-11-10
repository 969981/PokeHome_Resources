/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001377ac; name: FUN_.text__001377ac
 */


void FUN__text__001377ac(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined8 local_28;
  
  local_28 = 0x713a2a;
  if (*(int *)(param_1 + 0x64c) != 0) {
    local_28 = 0x718683;
  }
  FUN__text__0013064c(&local_70,&local_28);
  if ((param_2[3] != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  *param_2 = 0;
  param_2[1] = -0x340d631b7bddd9bb;
  param_2[2] = 0x70f683;
  param_2[3] = 0;
  if (param_2[4] != 0) {
    (**(code **)(*(long *)(param_2[4] + 0x48) + 0x18))();
  }
  lVar1 = local_50;
  local_50 = 0;
  param_2[3] = local_58;
  param_2[4] = lVar1;
  param_2[1] = local_68;
  param_2[2] = local_60;
  *(undefined4 *)(param_2 + 5) = local_48;
  if ((local_58 != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  lVar1 = local_70;
  local_70 = 0;
  local_68 = -0x340d631b7bddd9bb;
  *param_2 = lVar1;
  local_60 = 0x70f683;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_28 = 0x70d9a7;
  if (*(int *)(param_1 + 0x64c) != 0) {
    local_28 = 0x7102bb;
  }
  FUN__text__0013064c(&local_70,&local_28);
  if ((param_3[3] != 0) && (*param_3 != 0)) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
  }
  *param_3 = 0;
  param_3[1] = -0x340d631b7bddd9bb;
  param_3[2] = 0x70f683;
  param_3[3] = 0;
  if (param_3[4] != 0) {
    (**(code **)(*(long *)(param_3[4] + 0x48) + 0x18))();
  }
  lVar1 = local_50;
  local_50 = 0;
  param_3[3] = local_58;
  param_3[4] = lVar1;
  param_3[1] = local_68;
  param_3[2] = local_60;
  *(undefined4 *)(param_3 + 5) = local_48;
  if ((local_58 != 0) && (*param_3 != 0)) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
  }
  lVar1 = local_70;
  local_70 = 0;
  local_68 = 0xcbf29ce484222645;
  *param_3 = lVar1;
  local_60 = 0x70f683;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


