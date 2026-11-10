/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fc740; name: FUN_.text__002fc740
 */


undefined1  [16] FUN__text__002fc740(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined1 auVar12 [16];
  
  uVar10 = *param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar4 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x25 = uVar11 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar11 <= uVar10) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar10 / uVar11;
        }
        unaff_x25 = uVar10 - uVar2 * uVar11;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar7, plVar9 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar9[1] == uVar10) {
            if (plVar9[2] == uVar10) goto LAB__text__002fc860;
          }
          else if ((plVar9[1] & uVar11 - 1) != unaff_x25) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar9[1];
          if (uVar4 == uVar10) {
            if (plVar9[2] == uVar10) goto LAB__text__002fc860;
          }
          else {
            if (uVar11 <= uVar4) {
              uVar2 = 0;
              if (uVar11 != 0) {
                uVar2 = uVar4 / uVar11;
              }
              uVar4 = uVar4 - uVar2 * uVar11;
            }
            if (uVar4 != unaff_x25) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x50,8);
  if (plVar9 == (long *)0x0) {
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
  plVar9[2] = *param_3;
  plVar9[3] = param_3[1];
  plVar9[4] = param_3[2];
  lVar1 = param_3[3];
  plVar9[5] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar1 = *param_4;
  *param_4 = 0;
  plVar9[6] = lVar1;
  lVar1 = param_4[1];
  lVar8 = param_4[3];
  plVar9[8] = param_4[2];
  plVar9[9] = lVar8;
  plVar9[7] = lVar1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *plVar9 = 0;
  plVar9[1] = uVar10;
  if ((uVar11 == 0) || (*(float *)(param_1 + 10) * (float)uVar11 < (float)(param_1[9] + 1))) {
    if (uVar11 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar4 = uVar4 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar4 <= uVar11) {
      uVar4 = uVar11;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar11 = param_1[1];
    if (uVar4 < uVar11 || uVar4 == uVar11) {
      if (uVar4 < uVar11) {
        uVar2 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
        if ((uVar11 < 3) ||
           (uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
           uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
           1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar2 = std::__next_prime(uVar2);
          if (uVar4 <= uVar2) {
            uVar4 = uVar2;
          }
        }
        else {
          if (1 < uVar2) {
            uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
          }
          if (uVar4 <= uVar2) {
            uVar4 = uVar2;
          }
        }
        if (uVar4 < uVar11) goto LAB__text__002fc9c0;
      }
    }
    else {
LAB__text__002fc9c0:
      FUN__text__002fcb50(param_1,uVar4);
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar10;
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x002fcad8;
    }
    if (uVar10 < uVar11) {
      plVar5 = *(long **)(*param_1 + uVar10 * 8);
      unaff_x25 = uVar10;
      goto joined_r0x002fcad8;
    }
    uVar4 = 0;
    if (uVar11 != 0) {
      uVar4 = uVar10 / uVar11;
    }
    unaff_x25 = uVar10 - uVar4 * uVar11;
    plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar5 == (long *)0x0) goto LAB__text__002fca8c;
LAB__text__002fc950:
    *plVar9 = *plVar5;
LAB__text__002fcb10:
    *plVar5 = (long)plVar9;
  }
  else {
    plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x002fcad8:
    if (plVar5 != (long *)0x0) goto LAB__text__002fc950;
LAB__text__002fca8c:
    plVar5 = param_1 + 5;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar5;
    if (*plVar9 != 0) {
      uVar10 = *(ulong *)(*plVar9 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar4 * uVar11;
      }
      plVar5 = (long *)(*param_1 + uVar10 * 8);
      goto LAB__text__002fcb10;
    }
  }
  uVar3 = 1;
  param_1[9] = param_1[9] + 1;
LAB__text__002fcb24:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
LAB__text__002fc860:
  uVar3 = 0;
  goto LAB__text__002fcb24;
}


