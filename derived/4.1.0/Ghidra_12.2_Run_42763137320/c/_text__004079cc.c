/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004079cc; name: FUN_.text__004079cc
 */


void FUN__text__004079cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1e0);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x11) == 0) {
      (**(code **)(*(long *)(param_1 + 0x158) + 0x10))();
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x11) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = *(long **)(param_1 + 0x270);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x12) == 0) {
      (**(code **)(*(long *)(param_1 + 0x1e8) + 0x10))();
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x12) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = *(long **)(param_1 + 0x300);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x14) == 0) {
      (**(code **)(*(long *)(param_1 + 0x278) + 0x10))();
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x14) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = *(long **)(param_1 + 0x390);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x18) == 0) {
      (**(code **)(*(long *)(param_1 + 0x308) + 0x10))();
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x18) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}


