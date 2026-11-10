/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014953c; name: FUN_.text__0014953c
 */


void FUN__text__0014953c(undefined8 param_1,long param_2)

{
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  long local_18;
  
  local_48 = FUN__text__005cd528(param_2,0);
  local_44 = FUN__text__005cd59c(param_2,0);
  local_3c = *(undefined8 *)(param_2 + 0x4a0);
  uStack_40 = 1;
  local_34 = *(undefined4 *)(param_2 + 0x74);
  local_60 = FUN__text__005cd528(param_2,1);
  local_5c = FUN__text__005cd59c(param_2,1);
  local_54 = *(undefined8 *)(param_2 + 0x4a0);
  uStack_58 = 1;
  local_4c = *(undefined4 *)(param_2 + 0x68);
  local_78 = FUN__text__005cd528(param_2,2);
  local_74 = FUN__text__005cd59c(param_2,2);
  local_6c = *(undefined8 *)(param_2 + 0x4a0);
  uStack_70 = 1;
  local_64 = *(undefined4 *)(param_2 + 0x74);
  local_18 = *(long *)(param_2 + 0x208);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  local_80 = *(long *)(param_2 + 0x350);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  local_88 = *(long *)(param_2 + 0x498);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  FUN__text__005d507c(param_1,&local_18,&local_80,&local_88,&local_48,&local_60,&local_78);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


