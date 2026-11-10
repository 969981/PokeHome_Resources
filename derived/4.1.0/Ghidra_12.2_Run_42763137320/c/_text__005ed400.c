/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ed400; name: FUN_.text__005ed400
 */


undefined8 FUN__text__005ed400(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long local_38;
  undefined8 *local_30;
  char local_28;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  uVar3 = *param_2;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar6 = uVar4 - 1 & uVar3;
  }
  else {
    uVar6 = uVar3;
    if (uVar4 <= uVar3) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
  }
  plVar7 = *(long **)(*param_1 + uVar6 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    if (uVar5 < 2) {
      do {
        if (plVar7[1] == uVar3) {
          if (plVar7[2] == uVar3) {
LAB__text__005ed520:
            FUN__text__005ed590(&local_38);
            lVar2 = local_38;
            local_38 = 0;
            if (lVar2 != 0) {
              if ((local_28 != '\0') && (*(long *)(lVar2 + 0x18) != 0)) {
                (**(code **)(*(long *)(*(long *)(lVar2 + 0x18) + 0x48) + 0x18))();
                *(undefined8 *)(lVar2 + 0x18) = 0;
              }
              (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,lVar2,0x20,8);
            }
            return 1;
          }
        }
        else if ((plVar7[1] & uVar4 - 1) != uVar6) {
          return 0;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar3) {
          if (plVar7[2] == uVar3) goto LAB__text__005ed520;
        }
        else {
          if (uVar4 <= uVar5) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar5 / uVar4;
            }
            uVar5 = uVar5 - uVar1 * uVar4;
          }
          if (uVar5 != uVar6) {
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


