/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e8698; name: FUN_.text__002e8698
 */


void FUN__text__002e8698(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long *local_88;
  long *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined4 local_42;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_36;
  
  local_80 = (long *)0x0;
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0x3ffffffff;
  local_54 = 0xffff00ff00000000;
  local_4c = 0x1ff;
  local_60 = 0xffffffffffffffff;
  local_3c = 0xffff;
  local_4a = 0xffffffffffffffff;
  local_42 = 0xffffffff;
  local_78 = 0;
  local_38 = 0;
  local_36 = 0x1000100;
  local_58 = 0;
  FUN__text__002e8d40(&local_88,*(undefined8 *)(param_1 + 8),&local_80);
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    (**(code **)(local_88[9] + 0x10))();
  }
  (**(code **)(*plVar1 + 0x98))(plVar1);
  local_80 = plVar1;
  plVar1 = plVar1 + 9;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN__text__002e8ab0(param_1,&local_80,param_2,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  if (local_88 != (long *)0x0) {
    (**(code **)(local_88[9] + 0x18))();
  }
  return;
}


