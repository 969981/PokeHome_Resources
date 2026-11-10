/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029cb84; name: FUN_.text__0029cb84
 */


void FUN__text__0029cb84(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long local_60 [4];
  long *local_40;
  
  plVar3 = local_60;
  param_1[9] = 0;
  if (param_1[8] != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar2 = (long *)param_2[6];
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
    plVar1 = param_2 + 2;
    if (plVar2 == plVar1) {
      local_40 = local_60;
      (**(code **)(*plVar1 + 0x18))(plVar1,local_60);
    }
    else {
      local_40 = (long *)(**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN__text__0019ab90(local_60,param_1 + 2);
  if (local_40 == local_60) {
    puVar4 = (undefined8 *)(local_60[0] + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) {
      return;
    }
    puVar4 = (undefined8 *)(*local_40 + 0x28);
    plVar3 = local_40;
  }
  (*(code *)*puVar4)(plVar3);
  return;
}


