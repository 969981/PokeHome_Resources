/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ce7c; name: FUN_.text__0064ce7c
 */


undefined8 FUN__text__0064ce7c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 local_28 [8];
  
  plVar3 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar3 = (long *)0x0;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
      plVar3 = *(long **)(param_1 + 0x20);
    }
  }
  plVar1 = (long *)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3;
  }
  if (DAT_008e1d88 == 0) {
    local_28[0] = 0;
    (**(code **)(*plVar1 + 8))(plVar1,local_28);
    return 1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN__text__0064c89c();
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0;
  }
  uVar2 = FUN__text__0064c8c0();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return 1;
  }
  return 0;
}


