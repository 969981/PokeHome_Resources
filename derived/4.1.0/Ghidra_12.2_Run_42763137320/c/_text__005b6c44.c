/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b6c44; name: FUN_.text__005b6c44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b6c44(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN__text__005e927c(&local_60,0x8960d8);
  FUN__text__005a2540(param_1,&local_60,2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  lVar2 = _DAT_008a5800;
  param_1[0x4b] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[9] = lVar2 + 0xb0;
  param_1[10] = lVar2 + 0xf0;
  uVar1 = param_2[2];
  *(undefined4 *)(param_2 + 2) = 0x1201;
  *(undefined4 *)((long)param_2 + 0x1c) = 0x1201;
  local_40 = param_2[4];
  uStack_38 = param_2[5];
  local_30 = param_2[6];
  uStack_28 = param_2[7];
  local_60 = *param_2;
  uStack_58 = param_2[1];
  local_50 = CONCAT44((int)((ulong)uVar1 >> 0x20),0x1307);
  local_48 = CONCAT44(0x1307,(int)param_2[3]);
  FUN__text__00146354(&local_68,param_1[1],param_2);
  lVar2 = local_68;
  local_68 = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  FUN__text__00146470(&local_70,param_1[1],&local_60);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  lVar3 = param_1[0x4b];
  param_1[0x4b] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
  }
  lVar3 = local_70;
  param_1[0x16] = lVar2;
  local_70 = 0;
  if (param_1[0x26] == 0) {
    param_1[0x26] = lVar3;
    *(undefined1 *)(param_1 + 0x17) = 1;
    *(undefined1 *)((long)param_1 + 0x1ac) = 1;
    *(undefined4 *)(param_1 + 0x35) = 0xffffff9c;
  }
  else {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = lVar3;
    *(undefined1 *)(param_1 + 0x17) = 1;
    *(undefined1 *)((long)param_1 + 0x1ac) = 1;
    *(undefined4 *)(param_1 + 0x35) = 0xffffff9c;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
  }
  local_70 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


