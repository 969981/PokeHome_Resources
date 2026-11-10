/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fb5e0; name: FUN_.text__005fb5e0
 */


undefined1  [16]
FUN__text__005fb5e0(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined1 auVar10 [16];
  
  uVar8 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x25 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar9 <= uVar8) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = uVar8 / uVar9;
        }
        unaff_x25 = uVar8 - uVar1 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar6, plVar7 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar7[1] == uVar8) {
            if (plVar7[2] == uVar8) goto LAB__text__005fb700;
          }
          else if ((plVar7[1] & uVar9 - 1) != unaff_x25) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar7[1];
          if (uVar3 == uVar8) {
            if (plVar7[2] == uVar8) goto LAB__text__005fb700;
          }
          else {
            if (uVar9 <= uVar3) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar3 / uVar9;
              }
              uVar3 = uVar3 - uVar1 * uVar9;
            }
            if (uVar3 != unaff_x25) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x178,8);
  if (plVar7 == (long *)0x0) {
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
  FUN__text__005fb9a8(plVar7 + 2,param_3,param_4);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  *plVar7 = 0;
  plVar7[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 10) * (float)uVar9 < (float)(param_1[9] + 1))) {
    if (uVar9 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = std::__next_prime(uVar3);
    }
    uVar9 = param_1[1];
    if (uVar3 < uVar9 || uVar3 == uVar9) {
      if (uVar3 < uVar9) {
        uVar1 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
        if ((uVar9 < 3) ||
           (uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
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
        if (uVar3 < uVar9) goto LAB__text__005fb824;
      }
    }
    else {
LAB__text__005fb824:
      FUN__text__005fb330(param_1,uVar3);
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar8;
      plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x005fb93c;
    }
    if (uVar8 < uVar9) {
      plVar4 = *(long **)(*param_1 + uVar8 * 8);
      unaff_x25 = uVar8;
      goto joined_r0x005fb93c;
    }
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar8 / uVar9;
    }
    unaff_x25 = uVar8 - uVar3 * uVar9;
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar4 == (long *)0x0) goto LAB__text__005fb8f0;
LAB__text__005fb7b4:
    *plVar7 = *plVar4;
LAB__text__005fb974:
    *plVar4 = (long)plVar7;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x005fb93c:
    if (plVar4 != (long *)0x0) goto LAB__text__005fb7b4;
LAB__text__005fb8f0:
    plVar4 = param_1 + 5;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar4;
    if (*plVar7 != 0) {
      uVar8 = *(ulong *)(*plVar7 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar3 * uVar9;
      }
      plVar4 = (long *)(*param_1 + uVar8 * 8);
      goto LAB__text__005fb974;
    }
  }
  uVar2 = 1;
  param_1[9] = param_1[9] + 1;
LAB__text__005fb988:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar7;
  return auVar10;
LAB__text__005fb700:
  uVar2 = 0;
  goto LAB__text__005fb988;
}


