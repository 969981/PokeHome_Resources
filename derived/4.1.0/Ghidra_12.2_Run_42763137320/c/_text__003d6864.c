/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6864; name: FUN_.text__003d6864
 */


bool FUN__text__003d6864(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (0x400 < param_2) {
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      *(undefined4 *)((long)param_1 + 0x3c) = 0x16;
      return false;
    }
    return false;
  }
  if (*(char *)((long)param_1 + 0x39) == '\0') {
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      *(undefined4 *)((long)param_1 + 0x3c) = 0x5f;
      return false;
    }
    return false;
  }
  if (((param_1[5] == 0) && (param_1[2] == param_1[3])) &&
     (FUN__text__003d6818(param_1), param_1[2] == param_1[3])) {
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      *(undefined4 *)((long)param_1 + 0x3c) = 9;
      return false;
    }
    return false;
  }
  if ((char)param_1[7] == '\0') {
    lVar1 = param_1[2];
    if ((ulong)(param_1[3] - lVar1) < param_2) {
      memmove((void *)param_1[5],(void *)(param_1[5] + lVar1),param_1[3] - lVar1);
      lVar1 = param_1[3] - param_1[2];
      param_1[1] = param_1[1] + param_1[2];
      param_1[2] = 0;
      param_1[3] = lVar1;
      if (param_2 <= (ulong)param_1[6]) {
        lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1[5] + lVar1,param_1[6] - lVar1);
        param_1[3] = param_1[3] + lVar1;
        param_1[4] = param_1[2];
        return *(int *)((long)param_1 + 0x3c) == 0;
      }
      if (*(int *)((long)param_1 + 0x3c) == 0) {
        *(undefined4 *)((long)param_1 + 0x3c) = 5;
        return false;
      }
      return false;
    }
  }
  else {
    lVar1 = param_1[2];
  }
  param_1[4] = lVar1;
  return true;
}


