/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cb640; name: FUN_.text__001cb640
 */


void FUN__text__001cb640(long param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint local_50 [4];
  undefined1 auStack_40 [24];
  long local_28;
  
  local_50[0] = *(uint *)(param_1 + 0x30);
  if (*param_3 < 0) {
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[1] = 1;
    FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),local_50,0,0);
    FUN__text__005e927c(auStack_40,0x86dfd8);
    FUN__text__003c1e4c(auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8 + 0x1d4) = 3;
  }
  else {
    if (*param_3 != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      bVar1 = local_50[0] != 1;
      if (*(int *)(lVar2 + (ulong)bVar1 * 4 + 0x1bc) == 0) {
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[1] = 1;
        FUN__text__0019e97c(lVar2,local_50,0,0);
        FUN__text__005e927c(auStack_40,0x86dfd8);
        FUN__text__003c1e4c(auStack_40);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8 + 0x1d4) = 0;
        return;
      }
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[0] = (uint)((long)(int)local_50[0] != 1);
      local_50[1] = 1;
      FUN__text__0019e97c(lVar2,local_50,0,0);
      FUN__text__005e927c(auStack_40,0x86dfd8);
      FUN__text__003c1e4c(auStack_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      *(undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)bVar1 * 8 + 0x1d4) = 0;
      return;
    }
    if (param_3[1] < 0) {
      local_50[2] = *(uint *)(*(long *)(param_1 + 0x38) + (long)(int)local_50[0] * 8 + 0x1d4);
      local_50[1] = 0;
      if (local_50[2] < 5) {
        local_50[2] = 4;
      }
      local_50[3] = 4;
      FUN__text__0019e97c(*(long *)(param_1 + 0x38),local_50,0,0);
      FUN__text__005e927c(auStack_40,0x86dfd8);
      FUN__text__003c1e4c(auStack_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        return;
      }
    }
    else if (param_3[1] != 0) {
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[1] = 3;
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),local_50,0,0);
      FUN__text__005e927c(auStack_40,0x86dfd8);
      FUN__text__003c1e4c(auStack_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      lVar2 = *(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8;
      uVar3 = *(uint *)(lVar2 + 0x1d4);
      if (uVar3 < 5) {
        uVar3 = 4;
      }
      *(uint *)(lVar2 + 0x1d4) = uVar3;
      return;
    }
  }
  return;
}


