/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f95a0; name: FUN_.text__002f95a0
 */


long FUN__text__002f95a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x118);
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar3 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar3 <= uVar2) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        uVar7 = uVar2 - uVar7 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x110) + uVar7 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      uVar6 = uVar3 - 1;
      if (uVar4 < 2) {
        do {
          if (uVar2 == plVar5[1]) {
            if (plVar5[2] == uVar2) goto LAB__text__002f965c;
          }
          else if ((plVar5[1] & uVar6) != uVar7) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar5[1];
          if (uVar2 == uVar8) {
            if (plVar5[2] == uVar2) goto LAB__text__002f965c;
          }
          else {
            if (uVar3 <= uVar8) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar8 / uVar3;
              }
              uVar8 = uVar8 - uVar1 * uVar3;
            }
            if (uVar8 != uVar7) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
LAB__text__002f965c:
  if (uVar4 < 2) {
    uVar7 = uVar6 & uVar2;
  }
  else {
    uVar7 = uVar2;
    if (uVar3 <= uVar2) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar2 / uVar3;
      }
      uVar7 = uVar2 - uVar7 * uVar3;
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x110) + uVar7 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (uVar2 == plVar5[1]) {
          if (plVar5[2] == uVar2) {
LAB__text__002f9710:
            return plVar5[6];
          }
        }
        else if ((plVar5[1] & uVar6) != uVar7) break;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar5[1];
        if (uVar2 == uVar4) {
          if (plVar5[2] == uVar2) goto LAB__text__002f9710;
        }
        else {
          if (uVar3 <= uVar4) {
            uVar6 = 0;
            if (uVar3 != 0) {
              uVar6 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar6 * uVar3;
          }
          if (uVar4 != uVar7) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__0011a180(0x711beb);
}


