/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00168178; name: FUN_.text__00168178
 */


long * FUN__text__00168178(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1[3] != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
  }
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = 0x70f683;
  param_1[3] = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    param_1[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    lVar2 = param_2[3];
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = param_1[4];
    param_1[4] = lVar2;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 5) = (int)param_2[5];
    lVar2 = param_2[3];
  }
  if (lVar2 == 0) {
    *param_1 = *param_2;
    return param_1;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  return param_1;
}


