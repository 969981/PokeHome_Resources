/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3b4c; name: FUN_.text__003c3b4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c3b4c(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_50;
  long local_48;
  
  FUN__text__003c4ed0(&local_48,*_DAT_0089f550,0,param_2,0,param_1[0xe],0);
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
  }
  lVar4 = local_48;
  param_1[0x1f] = local_48;
  if (local_48 != 0) {
    plVar5 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (param_1[0x20] != 0 || param_1[0x30] != 0) {
      FUN__text__005d9010(lVar4,param_1 + 0x1e,1);
    }
    FUN__text__005d8de0(lVar4);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  }
  FUN__text__003c4944(&local_48,param_1[0xd]);
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
  }
  param_1[0x17] = local_48;
  FUN__text__003e705c(local_48,param_1 + 0x1e);
  uVar2 = FUN__text__00160ae8(*_DAT_0089f4d0,2,0);
  FUN__text__003e6e68(param_1[0x17],uVar2,0x7167b7);
  FUN__text__003c4a48(&local_48,param_1[0xd]);
  if (param_1[0x18] != 0) {
    (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
  }
  lVar4 = local_48;
  param_1[0x18] = local_48;
  local_50 = param_1[0x17];
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  uVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  FUN__text__003e8c40(lVar4,&local_50,uVar1,param_3,0,0);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((param_4 & 1) != 0) {
    plVar5 = param_1 + 0x54;
    FUN__text__003e5784(plVar5,0x73a7d4,_DAT_0089f838);
    local_48 = 0x438078000000000;
    FUN__text__003e57b4(plVar5,&local_48);
    FUN__text__003e9668(param_1[0x18],plVar5);
  }
  lVar4 = param_1[0x1a];
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (param_1[0x18] != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar5);
      lVar3 = param_1[0x1a];
      param_1[0x1a] = lVar4;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        lVar4 = param_1[0x1a];
      }
      FUN__text__005c60c0(lVar4,param_1[0x18]);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN__text__003e716c(param_1[0x17]);
  (**(code **)(param_1[0xc] + 8))(param_1 + 0xc,0);
  return;
}


