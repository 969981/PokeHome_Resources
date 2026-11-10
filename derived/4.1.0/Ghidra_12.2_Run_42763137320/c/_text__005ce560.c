/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ce560; name: FUN_.text__005ce560
 */


long * FUN__text__005ce560(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  lVar11 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar11 + 1;
  if (uVar7 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar9 = (long)uVar4 >> 2;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 != 0) {
      plVar1 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 3,8);
      if (plVar1 != (long *)0x0) goto LAB__text__005ce5e8;
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    plVar1 = (long *)0x0;
LAB__text__005ce5e8:
    uVar7 = tpidr_el0;
    uVar7 = uVar7 & 0xffffffffffffe000;
    if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__005ce6c4:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = param_1[3];
    plVar8 = plVar1 + lVar11;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    plVar10 = plVar8 + 1;
    *plVar8 = *param_2;
    lVar11 = *(long *)(uVar7 + 0x98) + -1;
    *(long *)(uVar7 + 0x98) = lVar11;
    plVar5 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    if (plVar3 != plVar5) {
      do {
        if (lVar11 == 0x10) goto LAB__text__005ce6c4;
        *(long *)(uVar7 + 0x18 + lVar11 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        plVar3 = plVar3 + -1;
        plVar8 = plVar8 + -1;
        *plVar8 = *plVar3;
        lVar11 = *(long *)(uVar7 + 0x98) + -1;
        *(long *)(uVar7 + 0x98) = lVar11;
      } while (plVar3 != plVar5);
      plVar3 = (long *)*param_1;
    }
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar10;
    lVar11 = param_1[2];
    param_1[2] = (long)(plVar1 + uVar9);
    if (plVar3 == (long *)0x0) {
      return plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x005ce6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar1 = (long *)(**(code **)(*(long *)param_1[3] + 0x18))
                               ((long *)param_1[3],plVar3,lVar11 - (long)plVar3,8);
    return plVar1;
  }
  auVar12 = FUN__text__005ae4c0(param_1);
  plVar1 = auVar12._0_8_;
  uVar9 = *auVar12._8_8_;
  uVar7 = plVar1[1];
  if (uVar7 != 0) {
    uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x24 = uVar7 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar7 <= uVar9) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar9 / uVar7;
        }
        unaff_x24 = uVar9 - uVar2 * uVar7;
      }
    }
    plVar8 = *(long **)(*plVar1 + unaff_x24 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar8[1] == uVar9) {
            if (plVar8[2] == uVar9) {
              return plVar8;
            }
          }
          else if ((plVar8[1] & uVar7 - 1) != unaff_x24) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar8[1];
          if (uVar4 == uVar9) {
            if (plVar8[2] == uVar9) {
              return plVar8;
            }
          }
          else {
            if (uVar7 <= uVar4) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar2 * uVar7;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)(**(code **)(*(long *)plVar1[6] + 0x10))((long *)plVar1[6],0x20,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)plVar1[6] + 0xb8))();
  }
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar1[6];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar8[2] = *(long *)*param_4;
  plVar8[3] = 0;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *plVar8 = 0;
  plVar8[1] = uVar9;
  if ((uVar7 == 0) || (*(float *)(plVar1 + 10) * (float)uVar7 < (float)(plVar1[9] + 1))) {
    if (uVar7 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar4 = uVar4 | uVar7 << 1;
    uVar7 = (ulong)((float)(plVar1[9] + 1) / *(float *)(plVar1 + 10));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar7 = plVar1[1];
    if (uVar4 < uVar7 || uVar4 == uVar7) {
      if (uVar4 < uVar7) {
        uVar2 = (ulong)((float)(ulong)plVar1[9] / *(float *)(plVar1 + 10));
        if ((uVar7 < 3) ||
           (uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
           uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
           1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar2 = std::__next_prime(uVar2);
          if (uVar4 <= uVar2) {
            uVar4 = uVar2;
          }
        }
        else {
          if (1 < uVar2) {
            uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
          }
          if (uVar4 <= uVar2) {
            uVar4 = uVar2;
          }
        }
        if (uVar4 < uVar7) goto LAB__text__005ce924;
      }
    }
    else {
LAB__text__005ce924:
      FUN__text__005ceab0(plVar1,uVar4);
    }
    uVar7 = plVar1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar9;
      plVar5 = *(long **)(*plVar1 + unaff_x24 * 8);
      goto joined_r0x005cea3c;
    }
    if (uVar9 < uVar7) {
      plVar5 = *(long **)(*plVar1 + uVar9 * 8);
      unaff_x24 = uVar9;
      goto joined_r0x005cea3c;
    }
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = uVar9 / uVar7;
    }
    unaff_x24 = uVar9 - uVar4 * uVar7;
    plVar5 = *(long **)(*plVar1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) goto LAB__text__005ce8b4;
LAB__text__005ce9f0:
    plVar5 = plVar1 + 5;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(*plVar1 + unaff_x24 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB__text__005cea78;
    uVar9 = *(ulong *)(*plVar8 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar9 = uVar9 & uVar7 - 1;
    }
    else if (uVar7 <= uVar9) {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar9 / uVar7;
      }
      uVar9 = uVar9 - uVar4 * uVar7;
    }
    plVar5 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    plVar5 = *(long **)(*plVar1 + unaff_x24 * 8);
joined_r0x005cea3c:
    if (plVar5 == (long *)0x0) goto LAB__text__005ce9f0;
LAB__text__005ce8b4:
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB__text__005cea78:
  plVar1[9] = plVar1[9] + 1;
  return plVar8;
}


