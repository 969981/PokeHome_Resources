/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015236c; name: FUN_.text__0015236c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015236c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  FUN__text__005c5640(param_1,0);
  lVar1 = _DAT_008a01e0 + 0xa0;
  lVar2 = _DAT_008a01e0 + 0xe0;
  *param_1 = _DAT_008a01e0 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_60 = param_1;
  FUN__text__001524e0(&local_58,param_2,&local_60,&local_38,param_3,param_4);
  lVar1 = local_58;
  local_58 = 0;
  lVar2 = param_1[0x27];
  param_1[0x27] = lVar1;
  if (lVar2 == 0) {
    param_1[0x28] = (long)local_50;
    param_1[0x29] = local_48;
    param_1[0x2a] = local_40;
    return;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  if (*(long *)(lVar2 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 8) = 0;
  }
  (**(code **)(*(long *)param_1[0x28] + 0x18))
            ((long *)param_1[0x28],lVar2,param_1[0x29],param_1[0x2a]);
  lVar1 = local_58;
  local_58 = 0;
  param_1[0x2a] = local_40;
  param_1[0x28] = (long)local_50;
  param_1[0x29] = local_48;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    if (*(long *)(lVar1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    (**(code **)(*local_50 + 0x18))(local_50,lVar1,local_48,local_40);
  }
  return;
}


