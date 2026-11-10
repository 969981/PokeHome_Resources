/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a10fc; name: FUN_.text__005a10fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a10fc(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar2 = _DAT_0089f690;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar2 + 0x10;
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar6 + 0x98) != 0) {
      lVar2 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar11 = _DAT_008a55a0;
  *param_1 = _DAT_008a55a0 + 0x10;
  param_1[1] = lVar2;
  param_1[9] = lVar11 + 0x50;
  FUN__text__006ee41c(param_1 + 0xb);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = -1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (((uVar6 == 0) || (*(long *)(uVar6 + 0x98) == 0)) ||
     (lVar2 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10), lVar2 == 0)) {
    lVar2 = FUN__text__005f52b0();
    param_1[0x1d] = 0;
    param_1[0x1a] = lVar2;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if (uVar6 != 0) goto LAB__text__005a11e0;
LAB__text__005a11f4:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    param_1[0x1d] = 0;
    param_1[0x1a] = lVar2;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
LAB__text__005a11e0:
    if ((*(long *)(uVar6 + 0x98) == 0) ||
       (lVar2 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10), lVar2 == 0))
    goto LAB__text__005a11f4;
  }
  plVar12 = param_1 + 0x17;
  param_1[0x20] = lVar2;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_2 <= (ulong)(param_1[0x19] - *plVar12 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c != 0) {
    FUN__text__005a1bfc(plVar12);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x5a13bc);
    (*pcVar1)();
  }
  lVar11 = param_1[0x18] - *plVar12 >> 4;
  lVar2 = (**(code **)(*(long *)param_1[0x1a] + 0x10))((long *)param_1[0x1a],param_2 << 4,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0xb8))();
    lVar3 = param_2 * 0x10;
    plVar5 = (long *)*plVar12;
    plVar10 = (long *)param_1[0x18];
    plVar4 = (long *)(lVar11 * 0x10);
    if (plVar10 != plVar5) goto LAB__text__005a1298;
  }
  else {
    lVar3 = lVar2 + param_2 * 0x10;
    plVar5 = (long *)*plVar12;
    plVar10 = (long *)param_1[0x18];
    plVar4 = (long *)(lVar2 + lVar11 * 0x10);
    if (plVar10 != plVar5) {
LAB__text__005a1298:
      uVar6 = tpidr_el0;
      uVar6 = uVar6 & 0xffffffffffffe000;
      lVar2 = *(long *)(uVar6 + 0x98);
      plVar7 = plVar4;
      do {
        if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar6 | 0x18) + lVar2 * 8) = param_1[0x1a];
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        plVar9 = plVar10 + -2;
        lVar2 = *plVar9;
        *plVar9 = 0;
        plVar8 = plVar7 + -2;
        *plVar8 = lVar2;
        plVar7[-1] = plVar10[-1];
        lVar2 = *(long *)(uVar6 + 0x98) + -1;
        *(long *)(uVar6 + 0x98) = lVar2;
        plVar7 = plVar8;
        plVar10 = plVar9;
      } while (plVar9 != plVar5);
      plVar10 = (long *)*plVar12;
      plVar5 = (long *)param_1[0x18];
      lVar2 = param_1[0x19];
      *plVar12 = (long)plVar8;
      param_1[0x18] = (long)plVar4;
      param_1[0x19] = lVar3;
      if (plVar5 != plVar10) {
        do {
          plVar12 = plVar5 + -2;
          if (*plVar12 != 0) {
            (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
            plVar5[-2] = 0;
          }
          plVar5 = plVar12;
        } while (plVar12 != plVar10);
      }
      goto LAB__text__005a136c;
    }
  }
  lVar2 = param_1[0x19];
  *plVar12 = (long)plVar4;
  param_1[0x18] = (long)plVar4;
  param_1[0x19] = lVar3;
LAB__text__005a136c:
  if (plVar10 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a1398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x1a] + 0x18))
            ((long *)param_1[0x1a],plVar10,lVar2 - (long)plVar10,8);
  return;
}


