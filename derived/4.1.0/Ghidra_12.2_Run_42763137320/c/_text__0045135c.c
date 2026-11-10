/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045135c; name: FUN_.text__0045135c
 */


undefined8 FUN__text__0045135c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x90))();
    uVar3 = FUN__text__004d8f20(plVar1 + 2,param_2,uVar2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x90))();
    uVar3 = FUN__text__004d8f20(plVar1 + 2,param_2,uVar2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x90))();
    uVar3 = FUN__text__004d8f20(plVar1 + 2,param_2,uVar2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0xc0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x90))();
    uVar3 = FUN__text__004d8f20(plVar1 + 2,param_2,uVar2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0xe0);
  if ((plVar1 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar1 + 0x98))(plVar1,param_2), (uVar3 & 1) != 0)) {
    return 1;
  }
  plVar1 = *(long **)(param_1 + 0xe8);
  if ((plVar1 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar1 + 0x98))(plVar1,param_2), (uVar3 & 1) == 0)) {
    return 0;
  }
  return 1;
}


