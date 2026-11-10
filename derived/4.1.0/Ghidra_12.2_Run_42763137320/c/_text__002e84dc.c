/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e84dc; name: FUN_.text__002e84dc
 */


void FUN__text__002e84dc(undefined8 *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_52;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_46;
  
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    local_80 = 0xffffffffffffffff;
    uStack_78 = 0x3ffffffff;
    local_70 = 0xffffffffffffffff;
    local_64 = 0xffff00ff00000000;
    local_5c = 0x1ff;
    local_5a = 0xffffffffffffffff;
    local_4c = 0xffff;
    local_52 = 0xffffffff;
    local_90 = 0;
    local_88 = 0;
    local_48 = 0;
    local_46 = 0x1000100;
    local_68 = 0;
    FUN__text__002e8d40(&local_98,*(undefined8 *)(param_2 + 8),&local_90);
    plVar2 = local_98;
    if (local_98 != (long *)0x0) {
      plVar3 = local_98 + 9;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    (**(code **)(*plVar2 + 0x80))
              (plVar2,*(long *)(param_2 + 0x9c0) + (ulong)param_3 * 0x2fd0 + (ulong)param_4 * 0x198)
    ;
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar2 + 0x90))(plVar2);
    }
    plVar2 = plVar2 + 9;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    (**(code **)(*local_98 + 0xa0))();
  }
  else {
    local_80 = 0xffffffffffffffff;
    uStack_78 = 0x3ffffffff;
    local_70 = 0xffffffffffffffff;
    local_64 = 0xffff00ff00000000;
    local_5a = 0xffffffffffffffff;
    local_5c = 0x1ff;
    local_52 = 0xffffffff;
    local_4c = 0xffff;
    local_90 = 0;
    local_88 = 0;
    local_48 = 0;
    local_46 = 0x1000100;
    local_68 = 0;
    FUN__text__002e8d40(&local_98,*(undefined8 *)(param_2 + 8),&local_90);
  }
  *param_1 = local_98;
  return;
}


