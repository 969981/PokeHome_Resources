/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc600; name: FUN_.text__005dc600
 */


void FUN__text__005dc600(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN__text__003efebc(param_1);
  }
  lVar8 = param_1[1] - *param_1 >> 3;
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    lVar2 = param_2 * 8;
    plVar4 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
    plVar3 = (long *)(lVar8 * 8);
    if (plVar7 != plVar4) goto LAB__text__005dc678;
  }
  else {
    lVar2 = lVar1 + param_2 * 8;
    plVar4 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
    plVar3 = (long *)(lVar1 + lVar8 * 8);
    if (plVar7 != plVar4) {
LAB__text__005dc678:
      uVar5 = tpidr_el0;
      uVar5 = uVar5 & 0xffffffffffffe000;
      lVar1 = *(long *)(uVar5 + 0x98);
      plVar6 = plVar3;
      do {
        if (lVar1 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar5 | 0x18) + lVar1 * 8) = param_1[3];
        *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
        plVar7 = plVar7 + -1;
        lVar1 = *plVar7;
        *plVar7 = 0;
        plVar6 = plVar6 + -1;
        *plVar6 = lVar1;
        lVar1 = *(long *)(uVar5 + 0x98) + -1;
        *(long *)(uVar5 + 0x98) = lVar1;
      } while (plVar7 != plVar4);
      plVar7 = (long *)*param_1;
      plVar4 = (long *)param_1[1];
      lVar1 = param_1[2];
      *param_1 = (long)plVar6;
      param_1[1] = (long)plVar3;
      param_1[2] = lVar2;
      if (plVar4 != plVar7) {
        do {
          plVar3 = plVar4 + -1;
          if (*plVar3 != 0) {
            (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
            plVar4[-1] = 0;
          }
          plVar4 = plVar3;
        } while (plVar3 != plVar7);
      }
      goto LAB__text__005dc748;
    }
  }
  lVar1 = param_1[2];
  *param_1 = (long)plVar3;
  param_1[1] = (long)plVar3;
  param_1[2] = lVar2;
LAB__text__005dc748:
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005dc774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar1 - (long)plVar7,8);
  return;
}


