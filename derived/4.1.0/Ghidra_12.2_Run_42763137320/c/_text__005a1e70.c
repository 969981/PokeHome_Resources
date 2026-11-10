/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1e70; name: FUN_.text__005a1e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a1e70(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar4 = lVar10 + 1;
  if (uVar4 >> 0x3c != 0) {
    auVar12 = FUN__text__005a1bfc(param_1);
    plVar2 = auVar12._0_8_;
    lVar1 = *(long *)(*_DAT_008a0228 + 0x10);
    lVar10 = _DAT_008a55a8 + 0x10;
    *(undefined4 *)(plVar2 + 3) = param_3;
    plVar2[2] = lVar1;
    *plVar2 = lVar10;
    plVar2[1] = auVar12._8_8_;
    return;
  }
  uVar3 = param_1[2] - *param_1;
  uVar5 = (long)uVar3 >> 3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x7fffffffffffffef < uVar3) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 != 0) {
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 4,8);
    if (lVar1 != 0) goto LAB__text__005a1efc;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__005a1efc:
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
LAB__text__005a203c:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = (long *)(lVar1 + lVar10 * 0x10);
  lVar1 = lVar1 + uVar5 * 0x10;
  *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_1[3];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar10 = *param_2;
  *param_2 = 0;
  *plVar2 = lVar10;
  plVar2[1] = param_2[1];
  lVar10 = *(long *)(uVar4 + 0x98) + -1;
  *(long *)(uVar4 + 0x98) = lVar10;
  plVar11 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  plVar6 = plVar2;
  if (plVar9 == plVar11) {
    lVar10 = param_1[2];
    *param_1 = (long)plVar2;
    param_1[1] = (long)(plVar2 + 2);
    param_1[2] = lVar1;
  }
  else {
    do {
      if (lVar10 == 0x10) goto LAB__text__005a203c;
      *(long *)(uVar4 + 0x18 + lVar10 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      plVar8 = plVar9 + -2;
      lVar10 = *plVar8;
      *plVar8 = 0;
      plVar7 = plVar6 + -2;
      *plVar7 = lVar10;
      plVar6[-1] = plVar9[-1];
      lVar10 = *(long *)(uVar4 + 0x98) + -1;
      *(long *)(uVar4 + 0x98) = lVar10;
      plVar6 = plVar7;
      plVar9 = plVar8;
    } while (plVar8 != plVar11);
    plVar9 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    lVar10 = param_1[2];
    *param_1 = (long)plVar7;
    param_1[1] = (long)(plVar2 + 2);
    param_1[2] = lVar1;
    if (plVar11 != plVar9) {
      do {
        plVar2 = plVar11 + -2;
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          plVar11[-2] = 0;
        }
        plVar11 = plVar2;
      } while (plVar2 != plVar9);
    }
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a2024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar9,lVar10 - (long)plVar9,8);
  return;
}


