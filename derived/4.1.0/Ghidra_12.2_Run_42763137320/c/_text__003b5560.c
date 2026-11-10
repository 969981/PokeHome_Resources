/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5560; name: FUN_.text__003b5560
 */


void FUN__text__003b5560(long param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))();
  plVar3 = (long *)FUN__text__00251af8();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    if (plVar2 == (long *)0x0) goto LAB__text__003b55d4;
  }
  bVar1 = FUN__text__003a2534(param_1);
  *(byte *)*param_2 = bVar1 & *(byte *)*param_2 != 0;
LAB__text__003b55d4:
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__003b5560(lVar4,param_2,1);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    return;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__003b5560(lVar4,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x003b56a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


