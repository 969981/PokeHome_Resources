/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064d180; name: FUN_.text__0064d180
 */


undefined8 FUN__text__0064d180(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_18 [8];
  
  lVar2 = DAT_008e1d88;
  plVar5 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar5 = (long *)0x0;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
      plVar5 = *(long **)(param_1 + 0x20);
    }
  }
  plVar1 = (long *)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5;
  }
  if (DAT_008e1d88 == 0) {
    local_18[0] = 0;
    puVar4 = local_18;
  }
  else if (*(int *)(param_1 + 0x14) == 1) {
    uVar3 = FUN__text__0064c560(DAT_008e1d88);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar3 = FUN__text__0064c54c(lVar2);
    if ((uVar3 & 1) != 0) {
LAB__text__0064d290:
      (**(code **)*plVar1)(plVar1);
      return 1;
    }
    local_40[0] = 0;
    puVar4 = local_40;
  }
  else if (*(int *)(param_1 + 0x14) == 0) {
    uVar3 = FUN__text__0064c54c(DAT_008e1d88);
    if ((uVar3 & 1) != 0) goto LAB__text__0064d290;
    uVar3 = FUN__text__0064c560(lVar2);
    if (((uVar3 & 1) != 0) || (uVar3 = FUN__text__0064c5c8(lVar2), (uVar3 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      return 0;
    }
    local_38[0] = 0;
    puVar4 = local_38;
  }
  else {
    local_48[0] = 0;
    puVar4 = local_48;
  }
  (**(code **)(*plVar1 + 8))(plVar1,puVar4);
  return 1;
}


