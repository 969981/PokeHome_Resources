/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b2e30; name: FUN_.text__002b2e30
 */


void FUN__text__002b2e30(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    FUN__text__002b4d9c(param_1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x2b2fc8);
    (*pcVar1)();
  }
  lVar9 = param_1[1] - *param_1 >> 3;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    lVar3 = param_2 * 8;
    plVar5 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    plVar4 = (long *)(lVar9 * 8);
    if (plVar8 != plVar5) goto LAB__text__002b2ea8;
  }
  else {
    lVar3 = lVar2 + param_2 * 8;
    plVar5 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    plVar4 = (long *)(lVar2 + lVar9 * 8);
    if (plVar8 != plVar5) {
LAB__text__002b2ea8:
      uVar6 = tpidr_el0;
      uVar6 = uVar6 & 0xffffffffffffe000;
      lVar2 = *(long *)(uVar6 + 0x98);
      plVar7 = plVar4;
      do {
        if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar6 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        plVar8 = plVar8 + -1;
        lVar2 = *plVar8;
        *plVar8 = 0;
        plVar7 = plVar7 + -1;
        *plVar7 = lVar2;
        lVar2 = *(long *)(uVar6 + 0x98) + -1;
        *(long *)(uVar6 + 0x98) = lVar2;
      } while (plVar8 != plVar5);
      plVar8 = (long *)*param_1;
      plVar5 = (long *)param_1[1];
      lVar2 = param_1[2];
      *param_1 = (long)plVar7;
      param_1[1] = (long)plVar4;
      param_1[2] = lVar3;
      if (plVar5 != plVar8) {
        do {
          plVar4 = plVar5 + -1;
          if (*plVar4 != 0) {
            (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
            plVar5[-1] = 0;
          }
          plVar5 = plVar4;
        } while (plVar4 != plVar8);
      }
      goto LAB__text__002b2f78;
    }
  }
  lVar2 = param_1[2];
  *param_1 = (long)plVar4;
  param_1[1] = (long)plVar4;
  param_1[2] = lVar3;
LAB__text__002b2f78:
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002b2fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar8,lVar2 - (long)plVar8,8);
  return;
}


