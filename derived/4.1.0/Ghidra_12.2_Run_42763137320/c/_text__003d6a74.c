/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6a74; name: FUN_.text__003d6a74
 */


undefined8 FUN__text__003d6a74(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  ulong local_28;
  
  if (param_1[3] == 0) {
    if ((int)param_1[5] != 0) {
      return 0;
    }
    local_28 = 0;
    lVar2 = (**(code **)(*param_1 + 0x20))(param_1,&local_28);
    if (lVar2 == 0 || local_28 == 0) {
      if (local_28 == 0) {
        if ((int)param_1[5] == 0) {
          *(undefined4 *)(param_1 + 5) = 0xc;
        }
        return 0;
      }
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,0,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      uVar1 = param_1[4];
    }
    else {
      param_1[3] = lVar2;
      param_1[4] = local_28;
      uVar1 = local_28;
    }
    if (param_1[2] + param_3 <= uVar1) {
      memcpy((void *)(param_1[3] + param_1[2]),param_2,param_3);
      param_1[2] = param_1[2] + param_3;
      return 1;
    }
  }
  if ((int)param_1[5] == 0) {
    if (param_1[3] == 0) {
      local_28 = 0;
      lVar2 = (**(code **)(*param_1 + 0x20))(param_1,&local_28);
      if ((lVar2 == 0) || (local_28 == 0)) {
        if (local_28 == 0) {
          if ((int)param_1[5] == 0) {
            *(undefined4 *)(param_1 + 5) = 0xc;
          }
          return 0;
        }
        uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,0,0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
      }
      else {
        param_1[3] = lVar2;
        param_1[4] = local_28;
      }
    }
    else if (param_1[2] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1[3],param_1[2],0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      param_1[1] = param_1[1] + param_1[2];
      param_1[2] = 0;
    }
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,0);
    if ((uVar1 & 1) != 0) {
      param_1[1] = param_1[1] + param_3;
      param_1[2] = 0;
      return 1;
    }
  }
  return 0;
}


