/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00266a3c; name: FUN_.text__00266a3c
 */


void FUN__text__00266a3c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined8 local_18;
  
  local_18 = 0x71ce82;
  FUN__text__0013064c(&local_60,&local_18);
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
  lVar1 = local_40;
  local_40 = 0;
  param_2[3] = local_48;
  param_2[4] = lVar1;
  param_2[1] = local_58;
  param_2[2] = local_50;
  *(undefined4 *)(param_2 + 5) = local_38;
  if ((local_48 != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  lVar1 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  *param_2 = lVar1;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


