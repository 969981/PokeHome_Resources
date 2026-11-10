/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d9d50; name: FUN_.text__002d9d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d9d50(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_50 [24];
  long local_38;
  long *local_18;
  
  FUN__text__002d9e70(&local_18,*(undefined8 *)(param_1 + 8));
  puVar3 = *(undefined8 **)(param_1 + 0x1f0);
  if (puVar3 < *(undefined8 **)(param_1 + 0x1f8)) {
    uVar8 = tpidr_el0;
    uVar8 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x200);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    *puVar3 = local_18;
    if (local_18 != (long *)0x0) {
      (**(code **)(local_18[9] + 0x10))();
    }
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x1f0) = puVar3 + 1;
  }
  else {
    FUN__text__002d9fa0(param_1 + 0x1e8,&local_18);
  }
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar6 = FUN__text__002f95a0(param_1,auStack_50);
  FUN__text__002f2760(uVar6,local_18);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*local_18 + 0x18))();
    }
  }
  return;
}


