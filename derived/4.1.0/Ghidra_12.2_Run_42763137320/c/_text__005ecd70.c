/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ecd70; name: FUN_.text__005ecd70
 */


long * FUN__text__005ecd70(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar6 = *param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x24 = uVar7 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        unaff_x24 = uVar6 - uVar1 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar5[1] == uVar6) {
            if (plVar5[2] == uVar6) {
              return plVar5;
            }
          }
          else if ((plVar5[1] & uVar7 - 1) != unaff_x24) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar5[1];
          if (uVar2 == uVar6) {
            if (plVar5[2] == uVar6) {
              return plVar5;
            }
          }
          else {
            if (uVar7 <= uVar2) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar2 / uVar7;
              }
              uVar2 = uVar2 - uVar1 * uVar7;
            }
            if (uVar2 != unaff_x24) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  plVar5 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x20,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_1[6];
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  plVar5[2] = *(long *)*param_4;
  plVar5[3] = 0;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  *plVar5 = 0;
  plVar5[1] = uVar6;
  if ((uVar7 == 0) || (*(float *)(param_1 + 10) * (float)uVar7 < (float)(param_1[9] + 1))) {
    if (uVar7 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = std::__next_prime(uVar2);
    }
    uVar7 = param_1[1];
    if (uVar2 < uVar7 || uVar2 == uVar7) {
      if (uVar2 < uVar7) {
        uVar1 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
        if ((uVar7 < 3) ||
           (uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
           uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
           1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar1 = std::__next_prime(uVar1);
          if (uVar2 <= uVar1) {
            uVar2 = uVar1;
          }
        }
        else {
          if (1 < uVar1) {
            uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
          }
          if (uVar2 <= uVar1) {
            uVar2 = uVar1;
          }
        }
        if (uVar2 < uVar7) goto LAB__text__005ecfc4;
      }
    }
    else {
LAB__text__005ecfc4:
      FUN__text__005ed150(param_1,uVar2);
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar6;
      plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x005ed0dc;
    }
    if (uVar6 < uVar7) {
      plVar3 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x24 = uVar6;
      goto joined_r0x005ed0dc;
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar6 / uVar7;
    }
    unaff_x24 = uVar6 - uVar2 * uVar7;
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar3 != (long *)0x0) goto LAB__text__005ecf54;
LAB__text__005ed090:
    plVar3 = param_1 + 5;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB__text__005ed118;
    uVar6 = *(ulong *)(*plVar5 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar6 & uVar7 - 1;
    }
    else if (uVar7 <= uVar6) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x005ed0dc:
    if (plVar3 == (long *)0x0) goto LAB__text__005ed090;
LAB__text__005ecf54:
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB__text__005ed118:
  param_1[9] = param_1[9] + 1;
  return plVar5;
}


