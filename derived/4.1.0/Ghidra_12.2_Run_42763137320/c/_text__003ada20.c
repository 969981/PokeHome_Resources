/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ada20; name: FUN_.text__003ada20
 */


void FUN__text__003ada20(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x710);
  local_70 = *(undefined8 *)(param_1 + 0x720);
  uStack_58 = *(undefined8 *)(param_1 + 0x728);
  local_60 = *(undefined8 *)(param_1 + 0x718);
  uStack_78 = *(undefined8 *)(param_1 + 0x708);
  uStack_48 = *(undefined8 *)(param_1 + 0x738);
  local_40 = *(undefined1 *)(param_1 + 0x740);
  local_50 = *(undefined8 *)(param_1 + 0x730);
  local_34 = *(undefined4 *)(param_1 + 0x744);
  uStack_38 = *(undefined4 *)(param_1 + 0x6c0);
  local_3c = *(undefined4 *)(*(long *)(param_1 + 0x800) + 0xc);
  local_80 = lVar1;
  FUN__text__003b6864(*(undefined8 *)(param_1 + 0x7e0),&local_80);
  FUN__text__003b6b04((float)*(int *)(*(long *)(param_1 + 0x800) + 0x10),
                      *(undefined8 *)(param_1 + 0x7e0));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


