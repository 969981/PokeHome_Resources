/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00232238; name: FUN_.text__00232238
 */


void FUN__text__00232238(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (param_3 < -0x39cb8d7e830c2415) {
    if (param_3 < -0x3ebb40cebb3ab4cc) {
      if (param_3 == -0x5caff62206653ff0) {
        *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = 2;
        return;
      }
      if (param_3 == -0x513dfec1fddfee20) {
        *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14) = 1;
        uVar2 = FUN__text__0022cce4(*(undefined8 *)(param_1 + 0x650),
                                    *(int *)(*(long *)(param_1 + 0x640) + 0xc) * 10,0xfffffff6);
        uVar3 = 8;
      }
      else {
        if (param_3 != -0x511be2c1fdc2d826) {
          return;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14) = 2;
        uVar2 = FUN__text__0022cce4(*(undefined8 *)(param_1 + 0x650),
                                    *(int *)(*(long *)(param_1 + 0x640) + 0xc) * 10,10);
        uVar3 = 7;
      }
      uVar1 = 4;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar3;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = uVar1;
      return;
    }
    if (param_3 < -0x39cb917e830c2ae1) {
      if (param_3 == -0x3ebb40cebb3ab4cc) {
                    /* WARNING: Could not recover jumptable at 0x002324d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x770))(param_1 + 0x790);
        return;
      }
      if (param_3 != -0x39cb927e830c2c94) {
        return;
      }
      uVar3 = 8;
    }
    else if (param_3 == -0x39cb917e830c2ae1) {
      uVar3 = 9;
    }
    else {
      if (param_3 != -0x39cb8e7e830c25c8) {
        return;
      }
      uVar3 = 4;
    }
  }
  else if (param_3 < -0x39cb897e830c1d49) {
    if (param_3 < -0x39cb8b7e830c20af) {
      if (param_3 == -0x39cb8d7e830c2415) {
        uVar3 = 5;
      }
      else {
        if (param_3 != -0x39cb8c7e830c2262) {
          return;
        }
        uVar3 = 6;
      }
    }
    else if (param_3 == -0x39cb8b7e830c20af) {
      uVar3 = 7;
    }
    else {
      if (param_3 != -0x39cb8a7e830c1efc) {
        return;
      }
      uVar3 = 0;
    }
  }
  else if (param_3 < -0x39cb877e830c19e3) {
    if (param_3 == -0x39cb897e830c1d49) {
      uVar3 = 1;
    }
    else {
      if (param_3 != -0x39cb887e830c1b96) {
        return;
      }
      uVar3 = 2;
    }
  }
  else {
    if (param_3 != -0x39cb877e830c19e3) {
      if (param_3 == 0x19b71749a0768426) {
        *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = 3;
        return;
      }
      return;
    }
    uVar3 = 3;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x10) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = 5;
  return;
}


