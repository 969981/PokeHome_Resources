/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002aa790; name: FUN_.text__002aa790
 */


void FUN__text__002aa790(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_48;
  
  local_48 = param_4;
  nn::os::LockMutex((MutexType *)(param_2 + 0x78));
  if ((*(long **)(param_2 + 0x58) == (long *)0x0) ||
     (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
    puVar5 = *(undefined4 **)(param_2 + 0x10);
    plVar6 = *(long **)(param_2 + 0x38);
    if (*(undefined4 **)(param_2 + 0x18) <= puVar5) {
LAB__text__002aa8e4:
      FUN__text__002aa930(param_2 + 8,param_3,plVar6,&local_48);
      puVar5 = *(undefined4 **)(param_2 + 0x10);
      goto LAB__text__002aa8fc;
    }
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x58) + 0x10))();
    puVar5 = *(undefined4 **)(param_2 + 0x10);
    plVar6 = *(long **)(param_2 + 0x38);
    if (*(undefined4 **)(param_2 + 0x18) <= puVar5) goto LAB__text__002aa8e4;
  }
  uVar2 = local_48;
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  uVar1 = *param_3;
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *puVar5 = uVar1;
  *(undefined1 *)(puVar5 + 10) = 1;
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,local_48);
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar2);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    if (lVar3 != 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,uVar2);
    }
    if (lVar4 != 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,uVar2);
    }
  }
  else {
    *(long *)(puVar5 + 2) = lVar3;
    *(long *)(puVar5 + 4) = lVar4;
    *(undefined8 *)(puVar5 + 6) = uVar2;
    *(undefined8 *)(puVar5 + 8) = uVar2;
  }
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  puVar5 = puVar5 + 0xc;
  *(undefined4 **)(param_2 + 0x10) = puVar5;
LAB__text__002aa8fc:
  *param_1 = puVar5 + -0xc;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x78));
  return;
}


