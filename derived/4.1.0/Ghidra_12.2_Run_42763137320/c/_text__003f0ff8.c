/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f0ff8; name: FUN_.text__003f0ff8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__003f0ff8(long param_1,undefined8 param_2,ulong param_3,long *param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  plVar3 = (long *)FUN__text__003f0e70(param_1,param_2);
  if (plVar3 != (long *)0x0) {
    iVar2 = *(int *)((long)plVar3 + 0xc) + -1;
    if (*(int *)((long)plVar3 + 0xc) < 1) {
      iVar2 = 0;
    }
    *(int *)((long)plVar3 + 0xc) = iVar2;
    local_48 = param_5;
    if (*param_4 != 0) {
      plVar1 = (long *)plVar3[10];
      if (plVar1 < (long *)plVar3[0xb]) {
        uVar6 = tpidr_el0;
        uVar6 = uVar6 & 0xffffffffffffe000;
        if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = plVar3[0xc];
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1[3] = 0;
        if ((code *)param_4[2] != (code *)0x0) {
          (*(code *)param_4[2])(param_4 + 4,plVar1 + 4);
          lVar4 = param_4[3];
          plVar1[1] = param_4[1];
          plVar1[3] = lVar4;
          lVar4 = *param_4;
          plVar1[2] = param_4[2];
          *plVar1 = lVar4;
        }
        plVar1[0x10] = param_5;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        plVar3[10] = (long)(plVar1 + 0x12);
      }
      else {
        FUN__text__003f12f0(plVar3 + 9,param_4,&local_48);
      }
    }
    if (iVar2 == 0) {
      if ((param_3 & 1) == 0) {
        uVar5 = 1;
        FUN__text__003f0aa0(plVar3,1);
        lVar4 = _DAT_0089f5c8;
        if (*plVar3 != 0) {
          lVar4 = *plVar3 + 0x58;
        }
        FUN__text__003f1ad0(param_1 + 8,lVar4);
      }
      else {
        uVar5 = 1;
        *(undefined1 *)((long)plVar3 + 0x11) = 1;
      }
      goto LAB__text__003f1100;
    }
  }
  uVar5 = 0;
LAB__text__003f1100:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return uVar5;
}


