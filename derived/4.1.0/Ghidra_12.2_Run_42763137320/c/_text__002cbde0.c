/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cbde0; name: FUN_.text__002cbde0
 */


bool FUN__text__002cbde0(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  uVar4 = *(ulong *)(param_1 + 0x80);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar3 = uVar4 - 1 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (uVar4 <= uVar2) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar2 / uVar4;
        }
        uVar3 = uVar2 - uVar3 * uVar4;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x78) + uVar3 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (uVar2 == plVar6[1]) {
            if (plVar6[2] == uVar2) {
LAB__text__002cbfd4:
              return (char)plVar6[3] != '\0';
            }
          }
          else if ((plVar6[1] & uVar4 - 1) != uVar3) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar6[1];
          if (uVar2 == uVar5) {
            if (plVar6[2] == uVar2) goto LAB__text__002cbfd4;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar3) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0xd8);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar3 = uVar4 - 1 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (uVar4 <= uVar2) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar2 / uVar4;
        }
        uVar3 = uVar2 - uVar3 * uVar4;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0xd0) + uVar3 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (uVar2 == plVar6[1]) {
            if (plVar6[2] == uVar2) {
LAB__text__002cbfe4:
              return (char)plVar6[3] != '\0';
            }
          }
          else if ((plVar6[1] & uVar4 - 1) != uVar3) {
            return false;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar6[1];
          if (uVar2 == uVar5) {
            if (plVar6[2] == uVar2) goto LAB__text__002cbfe4;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar3) {
              return false;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return false;
}


