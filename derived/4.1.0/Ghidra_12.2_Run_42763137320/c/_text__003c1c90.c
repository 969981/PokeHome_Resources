/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c1c90; name: FUN_.text__003c1c90
 */


long * FUN__text__003c1c90(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1[0xf] == 0) {
    if ((param_3 & 1) == 0) {
      return (long *)0x0;
    }
  }
  else {
    plVar3 = (long *)(param_1[0xf] + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = param_1[0xf];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    plVar3 = (long *)FUN__text__003c1c90(lVar4,param_2,1);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    if ((plVar3 != (long *)0x0) || ((param_3 & 1) == 0)) {
      return plVar3;
    }
  }
  plVar3 = (long *)(**(code **)param_1[10])();
  plVar1 = (long *)FUN__text__003a18b4();
  if (plVar1 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar1 && plVar3 != (long *)0x0);
    if (plVar3 == (long *)0x0) goto LAB__text__003c1dac;
  }
  if (*(char *)((long)param_1 + 0x82) != '\0' || *(char *)((long)param_1 + 0x83) != '\0') {
    lVar4 = *param_2;
    uVar2 = FUN__text__003a150c(param_1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,lVar4 + 8), (uVar2 & 1) != 0)) {
      return param_1;
    }
  }
LAB__text__003c1dac:
  if (param_1[0xe] != 0) {
    plVar3 = (long *)(param_1[0xe] + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = param_1[0xe];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    plVar3 = (long *)FUN__text__003c1c90(lVar4,param_2,1);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    if (plVar3 != (long *)0x0) {
      return plVar3;
    }
  }
  return (long *)0x0;
}


