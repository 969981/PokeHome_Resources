/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e8e5c; name: FUN_.text__002e8e5c
 */


void FUN__text__002e8e5c(long param_1,long *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long local_50;
  long *local_48;
  
  if (*param_2 == 0) {
    return;
  }
  FUN__text__0063116c();
  FUN__text__002e8fc8(&local_48,*(undefined8 *)(param_1 + 8));
  plVar1 = local_48;
  if (local_48 == (long *)0x0) {
    plVar3 = (long *)0x0;
    if ((0x1f < param_3) || (0x1d < param_4)) goto LAB__text__002e8f60;
LAB__text__002e8ef0:
    (**(code **)(*plVar1 + 0x80))
              (plVar1,*(long *)(param_1 + 0x9c0) + (ulong)param_3 * 0x2fd0 + (ulong)param_4 * 0x198)
    ;
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,2);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar1 + 0x90))(plVar1);
    }
    (**(code **)(plVar1[9] + 0x18))();
  }
  else {
    plVar3 = local_48 + 9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((param_3 < 0x20) && (param_4 < 0x1e)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      goto LAB__text__002e8ef0;
    }
  }
  (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
  plVar3 = local_48;
LAB__text__002e8f60:
  local_50 = *param_2;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN__text__002eae38(plVar3,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
  }
  return;
}


