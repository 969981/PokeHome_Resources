/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dc7c0; name: FUN_.text__002dc7c0
 */


void FUN__text__002dc7c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long *local_38;
  
  if ((ulong)param_1[0xe] < 0x10) {
    uVar6 = param_1[2] - param_1[1] >> 3;
    lVar3 = param_1[4];
    uVar4 = lVar3 - *param_1;
    if ((ulong)((long)uVar4 >> 3) <= uVar6) {
      uVar4 = uVar4 >> 2;
      local_38 = param_1 + 6;
      if (lVar3 == *param_1) {
        uVar4 = 1;
      }
      local_58 = (**(code **)(*(long *)*local_38 + 0x10))((long *)*local_38,uVar4 * 8,0x10);
      lStack_50 = local_58 + uVar6 * 8;
      lStack_40 = local_58 + uVar4 * 8;
      local_48 = lStack_50;
      local_60 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x1200,0x10);
      FUN__text__002dcee0(&local_58,&local_60);
      lVar3 = param_1[2];
      lVar5 = lVar3;
      if (lVar3 != param_1[1]) {
        do {
          lVar5 = lVar5 + -8;
          FUN__text__002dd090(&local_58,lVar5);
        } while (lVar5 != param_1[1]);
        lVar3 = param_1[2];
      }
      lVar1 = *param_1;
      *param_1 = local_58;
      param_1[1] = lStack_50;
      param_1[2] = local_48;
      lVar2 = param_1[4];
      param_1[4] = lStack_40;
      local_48 = lVar3;
      if (lVar3 != lVar5) {
        local_48 = lVar3 + ((lVar5 - lVar3) + 7U & 0xfffffffffffffff8);
      }
      if (lVar1 == 0) {
        return;
      }
      local_58 = lVar1;
      lStack_50 = lVar5;
      lStack_40 = lVar2;
      (**(code **)(*(long *)*local_38 + 0x18))((long *)*local_38,lVar1,lVar2 - lVar1,0x10);
      return;
    }
    if (lVar3 != param_1[2]) {
      local_58 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x1200,0x10);
      FUN__text__002dcb70(param_1,&local_58);
      return;
    }
    local_58 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x1200,0x10);
    FUN__text__002dcd20(param_1,&local_58);
  }
  else {
    param_1[0xe] = param_1[0xe] - 0x10;
  }
  local_58 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN__text__002dc9c0(param_1,&local_58);
  return;
}


