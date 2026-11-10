/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9010; name: FUN_.text__005d9010
 */


void FUN__text__005d9010(long param_1,long *param_2,int param_3)

{
  size_t sVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *local_58;
  
  local_58 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x110));
  plVar8 = *(long **)(param_1 + 0xe0);
  plVar6 = *(long **)(param_1 + 0xe8);
  if (plVar8 == plVar6) {
    plVar2 = *(long **)(param_1 + 0xb8);
    plVar6 = *(long **)(param_1 + 0xb0);
    *(long **)(param_1 + 0xe8) = plVar8;
    plVar8 = plVar2;
    if (plVar6 != plVar2) goto LAB__text__005d9110;
  }
  else {
    plVar2 = *(long **)(param_1 + 0xb8);
    do {
      plVar5 = *(long **)(param_1 + 0xb0);
      plVar7 = plVar2;
      if (plVar5 != plVar2) {
        do {
          plVar7 = plVar5;
          if (*plVar5 == *plVar8) goto LAB__text__005d90ac;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar2);
        plVar7 = plVar2;
      }
LAB__text__005d90ac:
      if (plVar7 != plVar2) {
        sVar1 = (long)plVar2 - (long)(plVar7 + 1);
        if (sVar1 != 0) {
          memmove(plVar7,plVar7 + 1,sVar1);
        }
        plVar2 = (long *)((long)plVar7 + sVar1);
        *(long **)(param_1 + 0xb8) = plVar2;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
    plVar6 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    plVar8 = plVar2;
    if (plVar6 != plVar2) {
LAB__text__005d9110:
      do {
        plVar8 = plVar6;
        if ((long *)*plVar6 == param_2) goto LAB__text__005d912c;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar2);
      plVar8 = plVar2;
    }
  }
LAB__text__005d912c:
  if (plVar8 != plVar2) goto LAB__text__005d9268;
  if (plVar2 == *(long **)(param_1 + 0xc0)) {
    FUN__text__005d95d0((long *)(param_1 + 0xb0),&local_58);
    if (param_3 == 2) goto LAB__text__005d91a4;
LAB__text__005d91bc:
    if ((param_3 == 1) && (*(char *)(param_1 + 0x170) != '\0')) {
      puVar3 = (undefined8 *)*local_58;
      goto LAB__text__005d91d4;
    }
  }
  else {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 200);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar2 = (long)local_58;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_1 + 0xb8) = plVar2 + 1;
    if (param_3 != 2) goto LAB__text__005d91bc;
LAB__text__005d91a4:
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB__text__005d91bc;
    puVar3 = (undefined8 *)(*local_58 + 8);
LAB__text__005d91d4:
    (*(code *)*puVar3)();
  }
  plVar8 = *(long **)(param_1 + 0xe0);
  plVar6 = *(long **)(param_1 + 0xe8);
  if (plVar8 != plVar6) {
    plVar2 = *(long **)(param_1 + 0xb8);
    do {
      plVar5 = *(long **)(param_1 + 0xb0);
      plVar7 = plVar2;
      if (plVar5 != plVar2) {
        do {
          plVar7 = plVar5;
          if (*plVar5 == *plVar8) goto LAB__text__005d923c;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar2);
        plVar7 = plVar2;
      }
LAB__text__005d923c:
      if (plVar7 != plVar2) {
        sVar1 = (long)plVar2 - (long)(plVar7 + 1);
        if (sVar1 != 0) {
          memmove(plVar7,plVar7 + 1,sVar1);
        }
        plVar2 = (long *)((long)plVar7 + sVar1);
        *(long **)(param_1 + 0xb8) = plVar2;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
    plVar8 = *(long **)(param_1 + 0xe0);
  }
  *(long **)(param_1 + 0xe8) = plVar8;
LAB__text__005d9268:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x110));
  return;
}


