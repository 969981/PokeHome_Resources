/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b3d60; name: FUN_.text__005b3d60
 */


void FUN__text__005b3d60(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long *local_48;
  long local_28;
  
  if ((ulong)param_1[7] < 0x38) {
    lVar4 = param_1[3];
    uVar5 = param_1[2] - param_1[1] >> 3;
    lVar3 = lVar4 - *param_1;
    if ((ulong)(lVar3 >> 3) <= uVar5) {
      lVar3 = lVar3 >> 2;
      plVar6 = param_1 + 4;
      if (lVar4 == *param_1) {
        lVar3 = 1;
      }
      local_48 = plVar6;
      local_68 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar3 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
      lStack_60 = local_68 + uVar5 * 8;
      lStack_50 = local_68 + lVar3 * 8;
      local_58 = lStack_60;
      local_28 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0xfc0,8);
      if (local_28 == 0) {
        (**(code **)(*(long *)param_1[9] + 0xb8))();
      }
      FUN__text__005b4560(&local_68,&local_28);
      lVar3 = param_1[2];
      lVar4 = lVar3;
      if (lVar3 != param_1[1]) {
        do {
          lVar4 = lVar4 + -8;
          FUN__text__005b4750(&local_68,lVar4);
        } while (lVar4 != param_1[1]);
        lVar3 = param_1[2];
      }
      lVar1 = *param_1;
      *param_1 = local_68;
      param_1[1] = lStack_60;
      lVar2 = param_1[3];
      param_1[2] = local_58;
      param_1[3] = lStack_50;
      local_58 = lVar3;
      if (lVar3 != lVar4) {
        local_58 = lVar3 + ((lVar4 - lVar3) + 7U & 0xfffffffffffffff8);
      }
      if (lVar1 == 0) {
        return;
      }
      local_68 = lVar1;
      lStack_60 = lVar4;
      lStack_50 = lVar2;
      (**(code **)(*(long *)*local_48 + 0x18))((long *)*local_48,lVar1,lVar2 - lVar1,8);
      return;
    }
    if (lVar4 != param_1[2]) {
      local_68 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0xfc0,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[9] + 0xb8))();
      }
      FUN__text__005b41a0(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0xfc0,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[9] + 0xb8))();
    }
    FUN__text__005b4380(param_1,&local_68);
  }
  else {
    param_1[7] = param_1[7] - 0x38;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN__text__005b3fc0(param_1,&local_68);
  return;
}


