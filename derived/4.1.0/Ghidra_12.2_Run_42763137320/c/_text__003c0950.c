/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c0950; name: FUN_.text__003c0950
 */


void FUN__text__003c0950(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))();
  plVar2 = (long *)FUN__text__003a18b4();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB__text__003c09d4;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x98) = lVar3;
LAB__text__003c09d4:
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__003c0950(lVar3,param_2,1);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__003c0950(lVar3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x003c0aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


