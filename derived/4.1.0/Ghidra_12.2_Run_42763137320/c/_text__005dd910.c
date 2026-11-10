/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd910; name: FUN_.text__005dd910
 */


void FUN__text__005dd910(long param_1,long *param_2,int param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *local_38;
  
  if ((char)param_2[0x2e] != '\0') {
    return;
  }
  uVar3 = FUN__text__005e8950();
  pMVar1 = (MutexType *)(param_1 + 0x3d0);
  nn::os::LockMutex(pMVar1);
  if ((uVar3 & 1) != 0) {
    if ((char)param_2[0x2e] != '\0') {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    plVar7 = *(long **)(param_1 + 0x370);
    plVar6 = *(long **)(param_1 + 0x378);
    if (plVar7 != plVar6) {
      do {
        if ((long *)*plVar7 == param_2) goto LAB__text__005dd9f0;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar6);
      plVar7 = plVar6;
    }
LAB__text__005dd9f0:
    if (plVar7 != plVar6) {
      if (plVar7 + 1 != plVar6) {
        plVar8 = plVar7;
        do {
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          }
          plVar7 = plVar7 + 1;
          plVar4 = plVar8 + 1;
          lVar5 = *plVar4;
          *plVar4 = 0;
          *plVar8 = lVar5;
          plVar2 = plVar8 + 2;
          plVar8 = plVar4;
        } while (plVar2 != plVar6);
        plVar6 = *(long **)(param_1 + 0x378);
      }
      if (plVar6 != plVar7) {
        do {
          plVar8 = plVar6 + -1;
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            plVar6[-1] = 0;
          }
          plVar6 = plVar8;
        } while (plVar8 != plVar7);
      }
      *(long **)(param_1 + 0x378) = plVar7;
    }
    plVar7 = *(long **)(param_1 + 0x3a0);
    plVar6 = *(long **)(param_1 + 0x3a8);
    if (plVar7 != plVar6) {
      do {
        if ((long *)*plVar7 == param_2) goto LAB__text__005ddafc;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar6);
      plVar7 = plVar6;
    }
LAB__text__005ddafc:
    if (plVar7 != plVar6) {
      if (plVar7 + 1 != plVar6) {
        plVar8 = plVar7;
        do {
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          }
          plVar7 = plVar7 + 1;
          plVar4 = plVar8 + 1;
          lVar5 = *plVar4;
          *plVar4 = 0;
          *plVar8 = lVar5;
          plVar2 = plVar8 + 2;
          plVar8 = plVar4;
        } while (plVar2 != plVar6);
        plVar6 = *(long **)(param_1 + 0x3a8);
      }
      if (plVar6 != plVar7) {
        do {
          plVar8 = plVar6 + -1;
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            plVar6[-1] = 0;
          }
          plVar6 = plVar8;
        } while (plVar8 != plVar7);
      }
      *(long **)(param_1 + 0x3a8) = plVar7;
    }
    nn::os::UnlockMutex(pMVar1);
    plVar7 = (long *)param_2[1];
    if ((long *)param_2[0x2f] != (long *)0x0) {
      plVar7 = (long *)param_2[0x2f];
    }
    (**(code **)(*plVar7 + 0xa0))();
    (**(code **)(*param_2 + 0x38))(param_2);
    FUN__text__005d9450(param_2);
    plVar7 = (long *)param_2[1];
    if ((long *)param_2[0x2f] != (long *)0x0) {
      plVar7 = (long *)param_2[0x2f];
    }
                    /* WARNING: Could not recover jumptable at 0x005ddc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0xa8))();
    return;
  }
  if ((*(long **)(param_1 + 0x3f8) != param_2) && ((char)param_2[0x2e] == '\0')) {
    plVar7 = *(long **)(param_1 + 0x370);
    plVar6 = *(long **)(param_1 + 0x378);
    if (param_3 < 0) {
      if (plVar7 != plVar6) {
        do {
          if ((long *)*plVar7 == param_2) goto LAB__text__005ddb84;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        plVar7 = plVar6;
      }
LAB__text__005ddb84:
      if (plVar7 != plVar6) {
        if (plVar7 + 1 != plVar6) {
          plVar8 = plVar7;
          do {
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            }
            plVar7 = plVar7 + 1;
            plVar4 = plVar8 + 1;
            lVar5 = *plVar4;
            *plVar4 = 0;
            *plVar8 = lVar5;
            plVar2 = plVar8 + 2;
            plVar8 = plVar4;
          } while (plVar2 != plVar6);
          plVar6 = *(long **)(param_1 + 0x378);
        }
        if (plVar6 != plVar7) {
          do {
            plVar8 = plVar6 + -1;
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              plVar6[-1] = 0;
            }
            plVar6 = plVar8;
          } while (plVar8 != plVar7);
        }
        *(long **)(param_1 + 0x378) = plVar7;
      }
    }
    else {
      if (plVar7 != plVar6) {
        do {
          if ((long *)*plVar7 == param_2) goto LAB__text__005dda7c;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        plVar7 = plVar6;
      }
LAB__text__005dda7c:
      if (plVar7 != plVar6) goto LAB__text__005dd9a4;
    }
    plVar7 = *(long **)(param_1 + 0x3a0);
    plVar6 = *(long **)(param_1 + 0x3a8);
    if (param_3 < 1) {
      if (plVar7 != plVar6) {
        do {
          if ((long *)*plVar7 == param_2) goto LAB__text__005ddd34;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        plVar7 = plVar6;
      }
LAB__text__005ddd34:
      if (plVar7 != plVar6) {
        if (plVar7 + 1 != plVar6) {
          plVar8 = plVar7;
          do {
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            }
            plVar7 = plVar7 + 1;
            plVar4 = plVar8 + 1;
            lVar5 = *plVar4;
            *plVar4 = 0;
            *plVar8 = lVar5;
            plVar2 = plVar8 + 2;
            plVar8 = plVar4;
          } while (plVar2 != plVar6);
          plVar6 = *(long **)(param_1 + 0x3a8);
        }
        if (plVar6 != plVar7) {
          do {
            plVar8 = plVar6 + -1;
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              plVar6[-1] = 0;
            }
            plVar6 = plVar8;
          } while (plVar8 != plVar7);
        }
        *(long **)(param_1 + 0x3a8) = plVar7;
      }
    }
    else {
      if (plVar7 != plVar6) {
        do {
          if ((long *)*plVar7 == param_2) goto LAB__text__005ddd04;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        plVar7 = plVar6;
      }
LAB__text__005ddd04:
      if (plVar7 != plVar6) goto LAB__text__005dd9a4;
    }
    plVar7 = (long *)param_2[1];
    if ((long *)param_2[0x2f] != (long *)0x0) {
      plVar7 = (long *)param_2[0x2f];
    }
    (**(code **)(*plVar7 + 0xa0))();
    lVar5 = param_1 + 0x370 + (long)param_3 * 0x30;
    local_38 = param_2;
    (**(code **)(param_2[9] + 0x10))(param_2 + 9);
    plVar6 = local_38;
    plVar7 = *(long **)(lVar5 + 8);
    if (plVar7 < *(long **)(lVar5 + 0x10)) {
      uVar3 = tpidr_el0;
      uVar3 = uVar3 & 0xffffffffffffe000;
      if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      local_38 = (long *)0x0;
      *plVar7 = (long)plVar6;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      *(long **)(lVar5 + 8) = plVar7 + 1;
    }
    else {
      FUN__text__005de380(lVar5,&local_38);
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(local_38[9] + 0x18))();
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
  }
LAB__text__005dd9a4:
  nn::os::UnlockMutex(pMVar1);
  return;
}


