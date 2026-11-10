/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c1b20; name: FUN_.text__003c1b20
 */


long FUN__text__003c1b20(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    if ((param_2 & 1) == 0) {
      return 0;
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar1 = FUN__text__003c1b20(lVar4,1);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    if ((lVar1 != 0) || ((param_2 & 1) == 0)) {
      return lVar1;
    }
  }
  plVar3 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))();
  plVar2 = (long *)FUN__text__003a18b4();
  if (plVar2 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar2 && plVar3 != (long *)0x0);
    if (plVar3 == (long *)0x0) goto LAB__text__003c1bfc;
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    return param_1;
  }
LAB__text__003c1bfc:
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar1 = FUN__text__003c1b20(lVar4,1);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}


