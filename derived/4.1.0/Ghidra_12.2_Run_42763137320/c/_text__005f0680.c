/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f0680; name: FUN_.text__005f0680
 */


long * FUN__text__005f0680(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar1 < 2) {
      uVar4 = uVar5 - 1 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar5 <= param_2) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = param_2 / uVar5;
        }
        uVar4 = param_2 - uVar4 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar4 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar1 < 2) {
        do {
          if (plVar3[1] == param_2) {
            if (plVar3[2] == *param_3) {
              return plVar3;
            }
          }
          else if ((plVar3[1] & uVar5 - 1) != uVar4) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar1 = plVar3[1];
          if (uVar1 == param_2) {
            if (plVar3[2] == *param_3) {
              return plVar3;
            }
          }
          else {
            if (uVar5 <= uVar1) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar1 / uVar5;
              }
              uVar1 = uVar1 - uVar2 * uVar5;
            }
            if (uVar1 != uVar4) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  if ((uVar5 != 0) && ((float)(param_1[9] + 1) <= *(float *)(param_1 + 10) * (float)uVar5)) {
    return (long *)0x0;
  }
  uVar1 = 1;
  if (2 < uVar5) {
    uVar1 = (ulong)((uVar5 & uVar5 - 1) != 0);
  }
  uVar1 = uVar1 | uVar5 << 1;
  uVar4 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (uVar1 - 1 == 0) {
    uVar1 = 2;
  }
  else if ((uVar1 & uVar1 - 1) != 0) {
    uVar1 = std::__next_prime(uVar1);
    uVar5 = param_1[1];
  }
  if (uVar1 <= uVar5) {
    if (uVar5 <= uVar1) {
      return (long *)0x0;
    }
    uVar4 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
    if ((uVar5 < 3) ||
       (uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
       uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333),
       1 < (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar4 = std::__next_prime(uVar4);
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
    }
    else {
      if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
    }
    if (uVar5 <= uVar1) {
      return (long *)0x0;
    }
  }
  FUN__text__005f01d0(param_1,uVar1);
  return (long *)0x0;
}


