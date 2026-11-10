/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00302310; name: FUN_.text__00302310
 */


int FUN__text__00302310(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  local_60 = param_2;
  FUN__text__002a32ac(&local_68,param_2,&local_60);
  FUN__text__002a33c8(&local_70,local_60,&local_68);
  lVar1 = local_70;
  if (local_70 == 0) {
    if (*(int *)(param_1 + 0x700fdc) < 1) {
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      iVar3 = 0;
      do {
        local_58 = 0;
        iVar2 = FUN__text__00302180(param_1,iVar4,&local_58,param_3 & 1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar2 + iVar3;
      } while (iVar4 < *(int *)(param_1 + 0x700fdc));
    }
  }
  else {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    if (*(int *)(param_1 + 0x700fdc) < 1) {
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      iVar3 = 0;
      do {
        local_58 = lVar1;
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(lVar1 + 0x48);
        iVar2 = FUN__text__00302180(param_1,iVar4,&local_58,param_3 & 1);
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(lVar1 + 0x48);
        iVar4 = iVar4 + 1;
        iVar3 = iVar2 + iVar3;
        local_58 = 0;
      } while (iVar4 < *(int *)(param_1 + 0x700fdc));
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return iVar3;
}


