/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003faa50; name: FUN_.text__003faa50
 */


undefined8 FUN__text__003faa50(long param_1,ulong param_2,char param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  plVar5 = (long *)*param_4;
  if (plVar5 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      plVar7 = (long *)0x0;
LAB__text__003fab98:
      do {
        plVar8 = plVar5;
        if ((char)plVar8[0xd] == '\0') {
          plVar5 = (long *)plVar8[2];
        }
        else {
          uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar5 = (long *)plVar8[2];
          if ((uVar3 & 1) != 0) {
            plVar6 = param_4;
            if ((long *)*param_4 != plVar8) {
              plVar6 = plVar7 + 2;
            }
            *plVar6 = (long)plVar5;
            (**(code **)*plVar8)(plVar8);
            FUN__text__00400fc0(7,plVar8);
            if (plVar5 == (long *)0x0) break;
            goto LAB__text__003fab98;
          }
        }
        plVar7 = plVar8;
      } while (plVar5 != (long *)0x0);
    }
    else {
      plVar7 = (long *)0x0;
      plVar8 = (long *)0x0;
      do {
        plVar6 = plVar5;
        if ((char)plVar6[0xd] == '\0') {
          if (((plVar7 == (long *)0x0) ||
              (*(char *)((long)plVar6 + 100) < *(char *)((long)plVar7 + 100))) &&
             (*(char *)((long)plVar6 + 100) < param_3)) {
            nn::os::LockMutex((MutexType *)(plVar6 + 5));
            cVar2 = *(char *)((long)plVar6 + 0x6c);
            nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
            if (cVar2 != '\0') {
              plVar5 = (long *)plVar6[2];
              plVar7 = plVar6;
              goto LAB__text__003faaa4;
            }
          }
          plVar5 = (long *)plVar6[2];
        }
        else {
          uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
          plVar5 = (long *)plVar6[2];
          if ((uVar3 & 1) != 0) {
            plVar1 = param_4;
            if ((long *)*param_4 != plVar6) {
              plVar1 = plVar8 + 2;
            }
            *plVar1 = (long)plVar5;
            (**(code **)*plVar6)(plVar6);
            FUN__text__00400fc0(7,plVar6);
            plVar6 = plVar8;
          }
        }
LAB__text__003faaa4:
        plVar8 = plVar6;
      } while (plVar5 != (long *)0x0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        uVar4 = 1;
        goto LAB__text__003fac04;
      }
    }
  }
  uVar4 = 0;
LAB__text__003fac04:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return uVar4;
}


