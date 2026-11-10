/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005db4c0; name: FUN_.text__005db4c0
 */


void FUN__text__005db4c0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 5) {
    uVar8 = plVar7[1];
    if (uVar5 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB__text__005db5ac;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB__text__005db5ac;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB__text__005db5ac:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if (uVar5 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[9] = param_2[9] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 6;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


