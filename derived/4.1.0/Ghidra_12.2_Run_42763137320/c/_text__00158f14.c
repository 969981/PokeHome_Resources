/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00158f14; name: FUN_.text__00158f14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00158f14(long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_88 [6];
  long local_58;
  
  FUN__text__00109fd4(local_88,*(undefined8 *)(param_2 + 8));
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x68) = local_88[0];
  if ((param_4 & 1) == 0) {
    FUN__text__0015b030(local_88,param_2,param_3);
    puVar1 = _DAT_0089f550;
    FUN__text__00113bb0(&local_58,*_DAT_0089f550,0,local_88,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    }
    lVar2 = local_58;
    *(long *)(param_1 + 0x78) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x80) != 0 || *(long *)(param_1 + 0x100) != 0) {
        FUN__text__005d9010(lVar2,param_1 + 0x70,1);
      }
      FUN__text__005d8de0(lVar2);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
    }
    if ((local_88[3] != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_88[2] = 0x70f683;
    local_88[3] = 0;
    if (local_88[4] != 0) {
      (**(code **)(*(long *)(local_88[4] + 0x48) + 0x18))();
    }
    FUN__text__0015b970(local_88,param_2,param_3);
    FUN__text__001596d0(&local_58,*puVar1,0,local_88,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x188) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 400) != 0 || *(long *)(param_1 + 0x210) != 0) {
        FUN__text__005d9010(local_58,param_1 + 0x180,1);
      }
      FUN__text__005d8de0(local_58);
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(plVar3);
    }
    if ((local_88[3] != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_88[2] = 0x70f683;
    local_88[3] = 0;
    if (local_88[4] != 0) {
      (**(code **)(*(long *)(local_88[4] + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0x78);
    if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) ||
        ((*(long *)(param_1 + 0x188) != 0 && (*(char *)(*(long *)(param_1 + 0x188) + 0x170) != '\0')
         ))) && (*(long *)(param_1 + 0x60) == 0)) {
      local_58 = *(long *)(lVar2 + 400);
      FUN__text__001594b4(local_88,*(undefined8 *)(param_1 + 8),&local_58);
      if (*(long *)(param_1 + 0x60) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
      }
      *(long *)(param_1 + 0x60) = local_88[0];
      FUN__text__005f2c98(local_88[0],param_1 + 0x180);
    }
  }
  else {
    FUN__text__0015b030(local_88,param_2,param_3);
    puVar1 = _DAT_0089f550;
    FUN__text__00113bb0(&local_58,*_DAT_0089f550,1,local_88,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    }
    lVar2 = local_58;
    *(long *)(param_1 + 0x78) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x80) != 0 || *(long *)(param_1 + 0x100) != 0) {
        FUN__text__005d9010(lVar2,param_1 + 0x70,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_88[3] != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_88[2] = 0x70f683;
    local_88[3] = 0;
    if (local_88[4] != 0) {
      (**(code **)(*(long *)(local_88[4] + 0x48) + 0x18))();
    }
    FUN__text__0015b970(local_88,param_2,param_3);
    FUN__text__001596d0(&local_58,*puVar1,1,local_88,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x188) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 400) != 0 || *(long *)(param_1 + 0x210) != 0) {
        FUN__text__005d9010(local_58,param_1 + 0x180,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_88[3] != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_88[2] = 0x70f683;
    local_88[3] = 0;
    if (local_88[4] != 0) {
      (**(code **)(*(long *)(local_88[4] + 0x48) + 0x18))();
    }
  }
  return;
}


