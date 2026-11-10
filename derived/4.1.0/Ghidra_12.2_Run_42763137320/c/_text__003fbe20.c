/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fbe20; name: FUN_.text__003fbe20
 */


undefined8 FUN__text__003fbe20(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x60);
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = param_3 / uVar3;
    }
    *(uint *)(param_1 + 0x94) = uVar8 * uVar3;
  }
  else {
    uVar3 = param_2[2];
    if (uVar3 == 0) {
      uVar8 = *(uint *)(param_1 + 0xa0);
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = param_3 / uVar8;
      }
      *(uint *)(param_1 + 0x9c) = uVar8;
      uVar3 = uVar3 * uVar8;
      *(uint *)(param_1 + 0x94) = uVar3;
      uVar6 = *param_2;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x60);
      uVar6 = uVar1;
      if (uVar3 <= uVar1) {
        uVar6 = uVar3;
      }
      uVar8 = uVar1;
      if (uVar1 <= uVar3) {
        uVar8 = uVar3;
      }
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar8 / uVar6;
      }
      uVar8 = uVar8 - uVar4 * uVar6;
      if (uVar8 != 0) {
        if (((uVar6 | uVar8) & 1) == 0) {
          uVar4 = 0;
          uVar5 = uVar6;
          uVar7 = uVar8;
          do {
            uVar8 = uVar7 >> 1;
            uVar4 = uVar4 + 1;
            uVar2 = uVar7 | uVar5;
            uVar6 = uVar5 >> 1;
            uVar5 = uVar5 >> 1;
            uVar7 = uVar8;
          } while ((uVar2 >> 1 & 1) == 0);
        }
        else {
          uVar4 = 0;
        }
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 >> 1;
        } while ((uVar5 & 1) == 0);
        do {
          uVar7 = uVar8;
          uVar8 = uVar7 >> 1;
        } while ((uVar7 & 1) == 0);
        if (uVar5 == uVar7) {
          uVar6 = uVar5;
        }
        else {
          do {
            uVar8 = uVar5;
            if (uVar5 <= uVar7) {
              uVar8 = uVar7;
            }
            uVar6 = uVar5;
            if (uVar7 <= uVar5) {
              uVar6 = uVar7;
            }
            uVar8 = uVar8 - uVar6;
            do {
              uVar5 = uVar8 >> 1;
              uVar7 = uVar8 >> 1;
              uVar8 = uVar5;
            } while ((uVar7 & 1) == 0);
            uVar7 = uVar6;
          } while (uVar5 != uVar6);
        }
        uVar6 = uVar6 << (ulong)(uVar4 & 0x1f);
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar3 / uVar6;
      }
      uVar8 = uVar8 * uVar1;
      *(uint *)(param_1 + 0x9c) = uVar8;
      *(uint *)(param_1 + 0xa0) = uVar8;
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = param_3 / uVar8;
      }
      uVar3 = uVar3 * uVar8;
      *(uint *)(param_1 + 0x94) = uVar3;
      uVar6 = *param_2;
    }
    if (uVar6 == 0) {
      if (param_2[1] <= uVar8) {
        return 1;
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = ((param_2[1] + uVar8) - 1) / uVar8;
      }
      *(uint *)(param_1 + 0x9c) = uVar6 * uVar8;
      if (uVar3 < uVar6 * uVar8) {
        return 2;
      }
      return 1;
    }
    if (param_3 < uVar6) {
      return 2;
    }
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = uVar6 / uVar8;
    }
    if (uVar6 != uVar3 * uVar8) {
      return 2;
    }
    *(uint *)(param_1 + 0x94) = uVar6;
    uVar3 = *param_2;
  }
  *(uint *)(param_1 + 0x9c) = uVar3;
  return 1;
}


