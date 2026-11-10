/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cfd20; name: FUN_.text__003cfd20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cfd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  puVar1 = _DAT_0089f550;
  if ((param_5 & 1) == 0) {
    FUN__text__00113bb0(&local_38,*_DAT_0089f550,1,param_2,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    }
    lVar2 = local_38;
    *(long *)(param_1 + 0x18) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x20) != 0 || *(long *)(param_1 + 0xa0) != 0) {
        FUN__text__005d9010(lVar2,param_1 + 0x10,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    FUN__text__00113bb0(&local_38,*puVar1,1,param_3,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
    }
    lVar2 = local_38;
    *(long *)(param_1 + 0x128) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x130) != 0 || *(long *)(param_1 + 0x1b0) != 0) {
        FUN__text__005d9010(lVar2,param_1 + 0x120,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    FUN__text__00113bb0(&local_38,*puVar1,1,param_4,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x238) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x238) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x240) != 0 || *(long *)(param_1 + 0x2c0) != 0) {
        FUN__text__005d9010(local_38,param_1 + 0x230,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  else {
    FUN__text__00113bb0(&local_38,*_DAT_0089f550,0,param_2,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    }
    lVar2 = local_38;
    *(long *)(param_1 + 0x18) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x20) != 0 || *(long *)(param_1 + 0xa0) != 0) {
        FUN__text__005d9010(lVar2,param_1 + 0x10,1);
      }
      FUN__text__005d8de0(lVar2);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
    }
    FUN__text__00113bb0(&local_38,*puVar1,0,param_3,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
    }
    lVar2 = local_38;
    *(long *)(param_1 + 0x128) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x130) != 0 || *(long *)(param_1 + 0x1b0) != 0) {
        FUN__text__005d9010(lVar2,param_1 + 0x120,1);
      }
      FUN__text__005d8de0(lVar2);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
    }
    FUN__text__00113bb0(&local_38,*puVar1,0,param_4,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x238) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x238) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(long *)(param_1 + 0x240) != 0 || *(long *)(param_1 + 0x2c0) != 0) {
        FUN__text__005d9010(local_38,param_1 + 0x230,1);
      }
      FUN__text__005d8de0(local_38);
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(plVar3);
    }
    if ((*(long *)(param_1 + 0x350) == 0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
      *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar2 + 400);
      *(int *)(param_1 + 0x358) = (int)*(undefined8 *)(lVar2 + 0x180);
    }
    if ((*(long *)(param_1 + 0x340) == 0) && (lVar2 = *(long *)(param_1 + 0x128), lVar2 != 0)) {
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(lVar2 + 400);
      *(int *)(param_1 + 0x348) = (int)*(undefined8 *)(lVar2 + 0x180);
    }
    if ((*(long *)(param_1 + 0x360) == 0) && (lVar2 = *(long *)(param_1 + 0x238), lVar2 != 0)) {
      *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar2 + 400);
      *(int *)(param_1 + 0x368) = (int)(*(ulong *)(lVar2 + 0x180) >> 2);
      return;
    }
  }
  return;
}


