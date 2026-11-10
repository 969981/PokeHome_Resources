/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b3330; name: FUN_.text__003b3330
 */


void FUN__text__003b3330(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_40;
  undefined1 auStack_38 [8];
  
  plVar1 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))();
  plVar2 = (long *)FUN__text__003a7000();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB__text__003b3418;
  }
  puVar4 = *(undefined8 **)*param_2;
  local_40 = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  lVar5 = local_40;
  plVar1 = (long *)(puVar4[8] + puVar4[9] * 8);
  if (puVar4[9] == puVar4[10]) {
    FUN__text__003b3520(auStack_38,puVar4,plVar1,1,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  else {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *puVar4;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    local_40 = 0;
    *plVar1 = lVar5;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    puVar4[9] = puVar4[9] + 1;
  }
LAB__text__003b3418:
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar5 = *(long *)(param_1 + 0x78);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__003b3330(lVar5,param_2,1);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__003b3330(lVar5,param_2,1);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


