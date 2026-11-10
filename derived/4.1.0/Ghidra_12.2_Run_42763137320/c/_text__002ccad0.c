/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ccad0; name: FUN_.text__002ccad0
 */


undefined1  [16]
FUN__text__002ccad0(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined1 auVar11 [16];
  
  uVar9 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar3 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x25 = uVar10 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar10 <= uVar9) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar9 / uVar10;
        }
        unaff_x25 = uVar9 - uVar1 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar6, plVar8 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar8[1] == uVar9) {
            if (plVar8[2] == uVar9) goto LAB__text__002ccbf0;
          }
          else if ((plVar8[1] & uVar10 - 1) != unaff_x25) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar8[1];
          if (uVar3 == uVar9) {
            if (plVar8[2] == uVar9) goto LAB__text__002ccbf0;
          }
          else {
            if (uVar10 <= uVar3) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar3 / uVar10;
              }
              uVar3 = uVar3 - uVar1 * uVar10;
            }
            if (uVar3 != unaff_x25) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x20,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_1[6];
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar7 = (undefined4 *)*param_5;
  plVar8[2] = *(long *)*param_4;
  *(undefined4 *)(plVar8 + 3) = *puVar7;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  *plVar8 = 0;
  plVar8[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 10) * (float)uVar10 < (float)(param_1[9] + 1))) {
    if (uVar10 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar3 = uVar3 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = std::__next_prime(uVar3);
    }
    uVar10 = param_1[1];
    if (uVar3 < uVar10 || uVar3 == uVar10) {
      if (uVar3 < uVar10) {
        uVar1 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
        if ((uVar10 < 3) ||
           (uVar5 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
           uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
           1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar1 = std::__next_prime(uVar1);
          if (uVar3 <= uVar1) {
            uVar3 = uVar1;
          }
        }
        else {
          if (1 < uVar1) {
            uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
          }
          if (uVar3 <= uVar1) {
            uVar3 = uVar1;
          }
        }
        if (uVar3 < uVar10) goto LAB__text__002ccd1c;
      }
    }
    else {
LAB__text__002ccd1c:
      FUN__text__002ccea0(param_1,uVar3);
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar9;
      plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x002cce34;
    }
    if (uVar9 < uVar10) {
      plVar4 = *(long **)(*param_1 + uVar9 * 8);
      unaff_x25 = uVar9;
      goto joined_r0x002cce34;
    }
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = uVar9 / uVar10;
    }
    unaff_x25 = uVar9 - uVar3 * uVar10;
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 == (long *)0x0) goto LAB__text__002ccde8;
LAB__text__002cccac:
    *plVar8 = *plVar4;
LAB__text__002cce6c:
    *plVar4 = (long)plVar8;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x002cce34:
    if (plVar4 != (long *)0x0) goto LAB__text__002cccac;
LAB__text__002ccde8:
    plVar4 = param_1 + 5;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar4;
    if (*plVar8 != 0) {
      uVar9 = *(ulong *)(*plVar8 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar9 = uVar9 & uVar10 - 1;
      }
      else if (uVar10 <= uVar9) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar9 / uVar10;
        }
        uVar9 = uVar9 - uVar3 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar9 * 8);
      goto LAB__text__002cce6c;
    }
  }
  uVar2 = 1;
  param_1[9] = param_1[9] + 1;
LAB__text__002cce80:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
LAB__text__002ccbf0:
  uVar2 = 0;
  goto LAB__text__002cce80;
}


