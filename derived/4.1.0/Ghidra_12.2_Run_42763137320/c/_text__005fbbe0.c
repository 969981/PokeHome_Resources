/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fbbe0; name: FUN_.text__005fbbe0
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN__text__005fbbe0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  long *local_48 [3];
  
  uVar5 = *param_2;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar2 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x22 = uVar6 - 1 & uVar5;
    }
    else {
      unaff_x22 = uVar5;
      if (uVar6 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        unaff_x22 = uVar5 - uVar1 * uVar6;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar4[1] == uVar5) {
            if (plVar4[2] == uVar5) {
              return plVar4;
            }
          }
          else if ((plVar4[1] & uVar6 - 1) != unaff_x22) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar4[1];
          if (uVar2 == uVar5) {
            if (plVar4[2] == uVar5) {
              return plVar4;
            }
          }
          else {
            if (uVar6 <= uVar2) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar2 / uVar6;
              }
              uVar2 = uVar2 - uVar1 * uVar6;
            }
            if (uVar2 != unaff_x22) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  FUN__text__005fbf48(local_48,param_1,uVar5);
  if ((uVar6 != 0) && ((float)(param_1[9] + 1) <= *(float *)(param_1 + 10) * (float)uVar6)) {
    plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
    goto joined_r0x005fbee8;
  }
  if (uVar6 < 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = (ulong)((uVar6 & uVar6 - 1) != 0);
  }
  uVar2 = uVar2 | uVar6 << 1;
  uVar6 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
  if (uVar2 <= uVar6) {
    uVar2 = uVar6;
  }
  if (uVar2 - 1 == 0) {
    uVar2 = 2;
  }
  else if ((uVar2 & uVar2 - 1) != 0) {
    uVar2 = std::__next_prime(uVar2);
  }
  uVar6 = param_1[1];
  if (uVar2 < uVar6 || uVar2 == uVar6) {
    if (uVar2 < uVar6) {
      uVar1 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
      if ((uVar6 < 3) ||
         (uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555),
         uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333),
         1 < (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
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
      if (uVar2 < uVar6) goto LAB__text__005fbdc4;
    }
  }
  else {
LAB__text__005fbdc4:
    FUN__text__005fa6d0(param_1,uVar2);
  }
  uVar6 = param_1[1];
  if ((uVar6 & uVar6 - 1) == 0) {
    unaff_x22 = uVar6 - 1 & uVar5;
    plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
  }
  else if (uVar5 < uVar6) {
    plVar4 = *(long **)(*param_1 + uVar5 * 8);
    unaff_x22 = uVar5;
  }
  else {
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar5 / uVar6;
    }
    unaff_x22 = uVar5 - uVar2 * uVar6;
    plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
  }
joined_r0x005fbee8:
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 5;
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar4;
    if (*local_48[0] != 0) {
      uVar5 = *(ulong *)(*local_48[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar5 = uVar5 & uVar6 - 1;
      }
      else if (uVar6 <= uVar5) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar5 / uVar6;
        }
        uVar5 = uVar5 - uVar2 * uVar6;
      }
      *(long **)(*param_1 + uVar5 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
  }
  param_1[9] = param_1[9] + 1;
  return local_48[0];
}


