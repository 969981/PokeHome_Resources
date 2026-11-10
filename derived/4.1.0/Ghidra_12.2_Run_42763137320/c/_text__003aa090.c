/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003aa090; name: FUN_.text__003aa090
 */


void FUN__text__003aa090(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))();
  plVar2 = (long *)FUN__text__00251af8();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB__text__003aa0e0;
  }
  FUN__text__003a2018(param_1);
LAB__text__003aa0e0:
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__003aa090(lVar3,1);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (((param_2 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__003aa090(lVar3,1);
                    /* WARNING: Could not recover jumptable at 0x003aa1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


