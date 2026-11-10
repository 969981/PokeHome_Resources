/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cb2ac; name: FUN_.text__001cb2ac
 */


void FUN__text__001cb2ac(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar7 = (long)(int)uVar2;
  local_60 = (uint)(lVar7 != 1);
  if (*param_3 < 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (*(int *)(lVar5 + (ulong)(uVar2 != 1) * 4 + 0x1bc) == 0) {
      uVar4 = FUN__text__001a18a0(lVar5,uVar2);
      if ((uVar4 & 1) == 0) {
        return;
      }
      local_60 = *(uint *)(param_1 + 0x30);
      local_58 = 0;
      uStack_5c = 2;
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_60,0,0);
      FUN__text__005e927c(auStack_50,0x86dfd8);
      FUN__text__003c1e4c(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      lVar7 = *(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8;
    }
    else {
      uVar4 = FUN__text__001a18a0(lVar5,lVar7 != 1);
      if ((uVar4 & 1) == 0) {
        uStack_5c = 1;
      }
      else {
        uStack_5c = 2;
      }
      local_58 = 0;
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_60,0,0);
      FUN__text__005e927c(auStack_50,0x86dfd8);
      FUN__text__003c1e4c(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      lVar7 = *(long *)(param_1 + 0x38) + (ulong)(uVar2 != 1) * 8;
    }
    *(undefined8 *)(lVar7 + 0x1d4) = 5;
    return;
  }
  if (*param_3 == 0) {
    if (param_3[1] < 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + lVar7 * 8 + 0x1d4);
      bVar3 = FUN__text__001a18a0(*(long *)(param_1 + 0x38),uVar2);
      local_60 = *(uint *)(param_1 + 0x30);
      uStack_5c = 0;
      uVar2 = 3;
      if ((bVar3 & 3 < uVar1) == 0) {
        uVar2 = uVar1;
      }
      local_58 = CONCAT44(4,uVar2);
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_60,0,0);
      FUN__text__005e927c(auStack_50,0x86dfd8);
      FUN__text__003c1e4c(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        return;
      }
    }
    else if (param_3[1] != 0) {
      local_58 = 0;
      uStack_5c = 3;
      local_60 = uVar2;
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_60,0,0);
      FUN__text__005e927c(auStack_50,0x86dfd8);
      FUN__text__003c1e4c(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8 + 0x1d4);
      bVar3 = FUN__text__001a18a0();
      uVar4 = 3;
      if ((bVar3 & (uVar6 & 0xfffffffc) != 0) == 0) {
        uVar4 = uVar6 & 0xffffffff;
      }
      *(ulong *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8 + 0x1d4) =
           uVar4 | uVar6 & 0xffffffff00000000;
      return;
    }
  }
  else {
    uVar4 = FUN__text__001a18a0(*(undefined8 *)(param_1 + 0x38),uVar2);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)(param_1 + 0x38) + (ulong)(uVar2 != 1) * 4 + 0x1bc) != 0) {
        local_58 = 0;
        uStack_5c = 1;
        FUN__text__0019e97c(*(long *)(param_1 + 0x38),&local_60,0,0);
        FUN__text__005e927c(auStack_50,0x86dfd8);
        FUN__text__003c1e4c(auStack_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(uVar2 != 1) * 8 + 0x1d4) = 0;
        return;
      }
    }
    else {
      local_60 = *(uint *)(param_1 + 0x30);
      local_58 = 0;
      uStack_5c = 2;
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_60,0,0);
      FUN__text__005e927c(auStack_50,0x86dfd8);
      FUN__text__003c1e4c(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8 + 0x1d4) = 4;
    }
  }
  return;
}


