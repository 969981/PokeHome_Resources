/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c1080; name: FUN_.text__005c1080
 */


long * FUN__text__005c1080(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  
  iVar2 = *param_2;
  uVar8 = (ulong)iVar2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x24 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar9 <= uVar8) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar8 / uVar9;
        }
        unaff_x24 = uVar8 - uVar3 * uVar9;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar7[1] == uVar8) {
            if ((int)plVar7[2] == iVar2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar9 - 1) != unaff_x24) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar7[1];
          if (uVar4 == uVar8) {
            if ((int)plVar7[2] == iVar2) {
              return plVar7;
            }
          }
          else {
            if (uVar9 <= uVar4) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar4 / uVar9;
              }
              uVar4 = uVar4 - uVar3 * uVar9;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x20,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_1[6];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  uVar1 = *(undefined4 *)*param_4;
  plVar7[3] = 0;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *plVar7 = 0;
  plVar7[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 10) * (float)uVar9 < (float)(param_1[9] + 1))) {
    if (uVar9 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar9 = param_1[1];
    if (uVar4 < uVar9 || uVar4 == uVar9) {
      if (uVar4 < uVar9) {
        uVar3 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
        if ((uVar9 < 3) ||
           (uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
           uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
           1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar3 = std::__next_prime(uVar3);
          if (uVar4 <= uVar3) {
            uVar4 = uVar3;
          }
        }
        else {
          if (1 < uVar3) {
            uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
          }
          if (uVar4 <= uVar3) {
            uVar4 = uVar3;
          }
        }
        if (uVar4 < uVar9) goto LAB__text__005c12d8;
      }
    }
    else {
LAB__text__005c12d8:
      FUN__text__005c1460(param_1,uVar4);
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar8;
      plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x005c13f0;
    }
    if (uVar8 < uVar9) {
      plVar5 = *(long **)(*param_1 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x005c13f0;
    }
    uVar4 = 0;
    if (uVar9 != 0) {
      uVar4 = uVar8 / uVar9;
    }
    unaff_x24 = uVar8 - uVar4 * uVar9;
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) goto LAB__text__005c1268;
LAB__text__005c13a4:
    plVar5 = param_1 + 5;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB__text__005c142c;
    uVar8 = *(ulong *)(*plVar7 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar8 = uVar8 & uVar9 - 1;
    }
    else if (uVar9 <= uVar8) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar4 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x005c13f0:
    if (plVar5 == (long *)0x0) goto LAB__text__005c13a4;
LAB__text__005c1268:
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB__text__005c142c:
  param_1[9] = param_1[9] + 1;
  return plVar7;
}


