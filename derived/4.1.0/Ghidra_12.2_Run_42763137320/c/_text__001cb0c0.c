/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cb0c0; name: FUN_.text__001cb0c0
 */


void FUN__text__001cb0c0(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint local_50;
  undefined4 uStack_4c;
  ulong local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  local_50 = (uint)((long)(int)uVar1 != 1);
  if (*param_3 < 0) {
    if (*(int *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 != 1) * 4 + 0x1bc) != 0) {
      local_48 = 0;
      uStack_4c = 3;
      FUN__text__0019e97c(*(long *)(param_1 + 0x38),&local_50,0,0);
      FUN__text__005e927c(auStack_40,0x86dfd8);
      FUN__text__003c1e4c(auStack_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      *(undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 != 1) * 8 + 0x1d4) = 5;
      return;
    }
  }
  else if (*param_3 == 0) {
    if (param_3[1] < 0) {
      uVar3 = FUN__text__001a18a0(*(undefined8 *)(param_1 + 0x38));
      local_50 = *(uint *)(param_1 + 0x30);
      lVar2 = *(long *)(param_1 + 0x38);
      if (((uVar3 & 1) == 0) ||
         ((*(ulong *)(lVar2 + (long)(int)local_50 * 8 + 0x1d4) & 0xfffffffc) == 0)) {
        uStack_4c = 1;
      }
      else {
        uStack_4c = 2;
      }
      local_48 = 0;
    }
    else {
      if (param_3[1] == 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x38);
      uStack_4c = 0;
      local_48 = *(ulong *)(lVar2 + (long)(int)uVar1 * 8 + 0x1d4) & 0xffffffff;
      local_50 = uVar1;
    }
    FUN__text__0019e97c(lVar2,&local_50,0,0);
    FUN__text__005e927c(auStack_40,0x86dfd8);
    FUN__text__003c1e4c(auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      return;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 != 1) * 4 + 0x1bc) != 0) {
    local_48 = 0;
    uStack_4c = 3;
    FUN__text__0019e97c(*(long *)(param_1 + 0x38),&local_50,0,0);
    FUN__text__005e927c(auStack_40,0x86dfd8);
    FUN__text__003c1e4c(auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 != 1) * 8 + 0x1d4) = 0;
  }
  return;
}


