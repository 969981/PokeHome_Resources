/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00152ba4; name: FUN_.text__00152ba4
 */


void FUN__text__00152ba4(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined1 local_3c [4];
  undefined8 local_38;
  
  local_3c[0] = param_3;
  local_38 = param_2;
  FUN__text__005c5640(param_1,0);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *param_1 = 0x86ae50;
  param_1[9] = 0x86aee0;
  param_1[10] = 0x86af20;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  lVar2 = *(long *)(DAT_008e15a0 + 0x78);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00145f44(&local_48,lVar2);
  FUN__text__00145f88(&local_50,lVar2);
  local_78 = param_1;
  FUN__text__00152db0(&local_70,param_2,&local_78,&local_38,&local_48,&local_50,local_3c);
  lVar1 = local_70;
  local_70 = 0;
  lVar3 = param_1[0x27];
  param_1[0x27] = lVar1;
  if (lVar3 == 0) {
    param_1[0x28] = local_68;
    param_1[0x29] = local_60;
    param_1[0x2a] = local_58;
  }
  else {
    if (*(long *)(lVar3 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    if (*(long *)(lVar3 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    (**(code **)(*(long *)param_1[0x28] + 0x18))
              ((long *)param_1[0x28],lVar3,param_1[0x29],param_1[0x2a]);
    lVar1 = local_70;
    local_70 = 0;
    param_1[0x2a] = local_58;
    param_1[0x28] = local_68;
    param_1[0x29] = local_60;
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 0x18) = 0;
      }
      if (*(long *)(lVar1 + 0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      if (*(long *)(lVar1 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      (**(code **)(*local_68 + 0x18))(local_68,lVar1,local_60,local_58);
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


