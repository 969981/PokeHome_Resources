/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002207c8; name: FUN_.text__002207c8
 */


void FUN__text__002207c8(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0xb3bef4a80c51a974;
  uStack_38 = 0x7193dd;
  local_30 = 0x1b;
  local_28 = 0;
  FUN__text__003c1e4c(&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = *(undefined8 *)(param_1 + 0x1c8);
  local_30 = CONCAT35(local_30._5_3_,0x100000000);
  uStack_38 = 1;
  local_30 = CONCAT44(local_30._4_4_,0x1000100);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x640) + 0x60);
  (**(code **)(*plVar1 + 8))(plVar1,0);
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0xf0),&local_40);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0);
  return;
}


