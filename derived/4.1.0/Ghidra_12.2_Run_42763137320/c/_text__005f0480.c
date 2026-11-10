/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f0480; name: FUN_.text__005f0480
 */


undefined1  [16] FUN__text__005f0480(long *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar10._0_8_ = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x38,8);
  if (auVar10._0_8_ == (long *)0x0) {
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
  lVar7 = param_2[2];
  lVar1 = *param_2;
  lVar2 = param_2[1];
  auVar10._0_8_[5] = 0;
  auVar10._0_8_[2] = lVar1;
  auVar10._0_8_[3] = lVar2;
  auVar10._0_8_[4] = lVar7;
  *(undefined4 *)(auVar10._0_8_ + 6) = *param_3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *auVar10._0_8_ = 0;
  auVar10._0_8_[1] = auVar10._0_8_[2];
  auVar9._0_8_ = FUN__text__005f0680(param_1);
  if (auVar9._0_8_ != 0) {
    if (auVar10._0_8_[5] != 0) {
      (**(code **)(*(long *)(auVar10._0_8_[5] + 0x48) + 0x18))();
      auVar10._0_8_[5] = 0;
    }
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],auVar10._0_8_,0x38,8);
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = param_1[1];
  uVar6 = auVar10._0_8_[1];
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar6 = uVar5 - 1 & uVar6;
  }
  else if (uVar5 <= uVar6) {
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar6 / uVar5;
    }
    uVar6 = uVar6 - uVar3 * uVar5;
  }
  plVar8 = *(long **)(*param_1 + uVar6 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 5;
    *auVar10._0_8_ = *plVar8;
    *plVar8 = (long)auVar10._0_8_;
    *(long **)(*param_1 + uVar6 * 8) = plVar8;
    if (*auVar10._0_8_ == 0) goto LAB__text__005f0654;
    uVar6 = *(ulong *)(*auVar10._0_8_ + 8);
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar4 * uVar5;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *auVar10._0_8_ = *plVar8;
  }
  *plVar8 = (long)auVar10._0_8_;
LAB__text__005f0654:
  param_1[9] = param_1[9] + 1;
  auVar10._8_8_ = 1;
  return auVar10;
}


