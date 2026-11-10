/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015e700; name: FUN_.text__0015e700
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN__text__0015e700(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x22;
  long *local_48 [3];
  
  uVar1 = *param_2;
  uVar6 = (ulong)uVar1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x22 = (ulong)((int)uVar7 - 1U & uVar1);
    }
    else {
      unaff_x22 = uVar6;
      if (uVar7 <= uVar6) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar6 / uVar7;
        }
        unaff_x22 = uVar6 - uVar2 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x22 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar5[1] == uVar6) {
            if (*(uint *)(plVar5 + 2) == uVar1) {
              return plVar5;
            }
          }
          else if ((plVar5[1] & uVar7 - 1) != unaff_x22) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar5[1];
          if (uVar3 == uVar6) {
            if (*(uint *)(plVar5 + 2) == uVar1) {
              return plVar5;
            }
          }
          else {
            if (uVar7 <= uVar3) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar3 / uVar7;
              }
              uVar3 = uVar3 - uVar2 * uVar7;
            }
            if (uVar3 != unaff_x22) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  FUN__text__0015ea6c(local_48,param_1,uVar6);
  if ((uVar7 != 0) && ((float)(param_1[9] + 1) <= *(float *)(param_1 + 10) * (float)uVar7)) {
    plVar5 = *(long **)(*param_1 + unaff_x22 * 8);
    goto joined_r0x0015ea0c;
  }
  if (uVar7 < 3) {
    uVar3 = 1;
  }
  else {
    uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
  }
  uVar3 = uVar3 | uVar7 << 1;
  uVar7 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
  if (uVar3 <= uVar7) {
    uVar3 = uVar7;
  }
  if (uVar3 - 1 == 0) {
    uVar3 = 2;
  }
  else if ((uVar3 & uVar3 - 1) != 0) {
    uVar3 = std::__next_prime(uVar3);
  }
  uVar7 = param_1[1];
  if (uVar3 < uVar7 || uVar3 == uVar7) {
    if (uVar3 < uVar7) {
      uVar2 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
      if ((uVar7 < 3) ||
         (uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
         uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
         1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
        if (uVar3 <= uVar2) {
          uVar3 = uVar2;
        }
      }
      else {
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
        if (uVar3 <= uVar2) {
          uVar3 = uVar2;
        }
      }
      if (uVar3 < uVar7) goto LAB__text__0015e8e4;
    }
  }
  else {
LAB__text__0015e8e4:
    FUN__text__0015ec20(param_1,uVar3);
  }
  uVar7 = param_1[1];
  if ((uVar7 & uVar7 - 1) == 0) {
    unaff_x22 = (ulong)((int)uVar7 - 1U & uVar1);
    plVar5 = *(long **)(*param_1 + unaff_x22 * 8);
  }
  else if (uVar6 < uVar7) {
    plVar5 = *(long **)(*param_1 + uVar6 * 8);
    unaff_x22 = uVar6;
  }
  else {
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar6 / uVar7;
    }
    unaff_x22 = uVar6 - uVar3 * uVar7;
    plVar5 = *(long **)(*param_1 + unaff_x22 * 8);
  }
joined_r0x0015ea0c:
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 5;
    *local_48[0] = *plVar5;
    *plVar5 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar5;
    if (*local_48[0] != 0) {
      uVar6 = *(ulong *)(*local_48[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar3 * uVar7;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar5;
    *plVar5 = (long)local_48[0];
  }
  param_1[9] = param_1[9] + 1;
  return local_48[0];
}


