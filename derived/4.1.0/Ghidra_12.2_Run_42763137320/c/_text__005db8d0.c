/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005db8d0; name: FUN_.text__005db8d0
 */


undefined1  [16] FUN__text__005db8d0(long *param_1,int *param_2,undefined4 *param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined1 auVar13 [16];
  
  iVar1 = *param_2;
  uVar11 = (ulong)iVar1;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar4 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x25 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar12 <= uVar11) {
        uVar2 = 0;
        if (uVar12 != 0) {
          uVar2 = uVar11 / uVar12;
        }
        unaff_x25 = uVar11 - uVar2 * uVar12;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar7, plVar10 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar10[1] == uVar11) {
            if ((int)plVar10[2] == iVar1) goto LAB__text__005db9f0;
          }
          else if ((plVar10[1] & uVar12 - 1) != unaff_x25) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar10[1];
          if (uVar4 == uVar11) {
            if ((int)plVar10[2] == iVar1) goto LAB__text__005db9f0;
          }
          else {
            if (uVar12 <= uVar4) {
              uVar2 = 0;
              if (uVar12 != 0) {
                uVar2 = uVar4 / uVar12;
              }
              uVar4 = uVar4 - uVar2 * uVar12;
            }
            if (uVar4 != unaff_x25) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x40,8);
  if (plVar10 == (long *)0x0) {
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
  *(undefined4 *)(plVar10 + 2) = *param_3;
  plVar10[3] = *param_4;
  lVar8 = param_4[1];
  param_4[1] = 0;
  plVar10[4] = lVar8;
  lVar8 = param_4[2];
  lVar9 = param_4[4];
  plVar10[6] = param_4[3];
  plVar10[7] = lVar9;
  plVar10[5] = lVar8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *plVar10 = 0;
  plVar10[1] = uVar11;
  if ((uVar12 == 0) || (*(float *)(param_1 + 10) * (float)uVar12 < (float)(param_1[9] + 1))) {
    if (uVar12 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar4 = uVar4 | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar4 <= uVar12) {
      uVar4 = uVar12;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar12 = param_1[1];
    if (uVar4 < uVar12 || uVar4 == uVar12) {
      if (uVar4 < uVar12) {
        uVar2 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
        if ((uVar12 < 3) ||
           (uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
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
        if (uVar4 < uVar12) goto LAB__text__005dbb30;
      }
    }
    else {
LAB__text__005dbb30:
      FUN__text__005db620(param_1,uVar4);
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x25 = uVar12 - 1 & uVar11;
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x005dbc48;
    }
    if (uVar11 < uVar12) {
      plVar5 = *(long **)(*param_1 + uVar11 * 8);
      unaff_x25 = uVar11;
      goto joined_r0x005dbc48;
    }
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar4 = uVar11 / uVar12;
    }
    unaff_x25 = uVar11 - uVar4 * uVar12;
    plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar5 == (long *)0x0) goto LAB__text__005dbbfc;
LAB__text__005dbac0:
    *plVar10 = *plVar5;
LAB__text__005dbc80:
    *plVar5 = (long)plVar10;
  }
  else {
    plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x005dbc48:
    if (plVar5 != (long *)0x0) goto LAB__text__005dbac0;
LAB__text__005dbbfc:
    plVar5 = param_1 + 5;
    *plVar10 = *plVar5;
    *plVar5 = (long)plVar10;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar5;
    if (*plVar10 != 0) {
      uVar11 = *(ulong *)(*plVar10 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar11 = uVar11 & uVar12 - 1;
      }
      else if (uVar12 <= uVar11) {
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar11 / uVar12;
        }
        uVar11 = uVar11 - uVar4 * uVar12;
      }
      plVar5 = (long *)(*param_1 + uVar11 * 8);
      goto LAB__text__005dbc80;
    }
  }
  uVar3 = 1;
  param_1[9] = param_1[9] + 1;
LAB__text__005dbc94:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar10;
  return auVar13;
LAB__text__005db9f0:
  uVar3 = 0;
  goto LAB__text__005dbc94;
}


