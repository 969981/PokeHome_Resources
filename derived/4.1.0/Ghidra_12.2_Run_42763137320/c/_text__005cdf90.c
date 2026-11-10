/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cdf90; name: FUN_.text__005cdf90
 */


void FUN__text__005cdf90(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar3 = *(ulong *)(param_2 + 0x128);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & param_3;
    }
    else {
      uVar5 = param_3;
      if (uVar3 <= param_3) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_3 / uVar3;
        }
        uVar5 = param_3 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(param_2 + 0x120) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == param_3) {
            if (plVar6[2] == param_3) {
LAB__text__005ce084:
              lVar2 = plVar6[3];
              *param_1 = lVar2;
              if (lVar2 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x005ce098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
              return;
            }
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == param_3) {
            if (plVar6[2] == param_3) goto LAB__text__005ce084;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


