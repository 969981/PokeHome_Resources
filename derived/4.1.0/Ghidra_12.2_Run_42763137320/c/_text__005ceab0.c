/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ceab0; name: FUN_.text__005ceab0
 */


void FUN__text__005ceab0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[1] << 3,8);
    }
    param_1[1] = 0;
    return;
  }
  lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar3 = *param_1;
  *param_1 = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar3,param_1[1] << 3,8);
  }
  uVar4 = param_2 & 3;
  param_1[1] = param_2;
  if (param_2 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar2 = uVar6 * 8;
      uVar6 = uVar6 + 4;
      *(undefined8 *)(*param_1 + lVar2) = 0;
      *(undefined8 *)(*param_1 + lVar2 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar2 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
    } while ((param_2 & 0xfffffffffffffffc) != uVar6);
  }
  if (uVar4 != 0) {
    lVar2 = uVar6 << 3;
    do {
      uVar4 = uVar4 - 1;
      *(undefined8 *)(*param_1 + lVar2) = 0;
      lVar2 = lVar2 + 8;
    } while (uVar4 != 0);
  }
  plVar7 = param_1 + 5;
  plVar5 = (long *)*plVar7;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar6 = plVar5[1];
  uVar4 = param_2 - (param_2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar6 = uVar6 & param_2 - 1;
    *(long **)(*param_1 + uVar6 * 8) = plVar7;
    plVar7 = (long *)*plVar5;
    if (plVar7 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar6) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar6 / param_2;
      }
      uVar6 = uVar6 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar6 * 8) = plVar7;
    plVar7 = (long *)*plVar5;
    if (plVar7 == (long *)0x0) {
      return;
    }
    if (1 < uVar4) {
      do {
        while( true ) {
          uVar4 = plVar7[1];
          if (param_2 <= uVar4) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar4 / param_2;
            }
            uVar4 = uVar4 - uVar1 * param_2;
          }
          if (uVar4 != uVar6) break;
LAB__text__005ced10:
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar4 * 8) != 0) {
          *plVar5 = *plVar7;
          *plVar7 = **(long **)(*param_1 + uVar4 * 8);
          **(undefined8 **)(*param_1 + uVar4 * 8) = plVar7;
          plVar7 = plVar5;
          goto LAB__text__005ced10;
        }
        *(long **)(*param_1 + uVar4 * 8) = plVar5;
        plVar8 = (long *)*plVar7;
        plVar5 = plVar7;
        uVar6 = uVar4;
        plVar7 = plVar8;
        if (plVar8 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar4 = plVar7[1] & param_2 - 1;
    if (uVar4 != uVar6) {
      if (*(long *)(*param_1 + uVar4 * 8) == 0) {
        *(long **)(*param_1 + uVar4 * 8) = plVar5;
        uVar6 = uVar4;
      }
      else {
        *plVar5 = *plVar7;
        *plVar7 = **(long **)(*param_1 + uVar4 * 8);
        **(undefined8 **)(*param_1 + uVar4 * 8) = plVar7;
        plVar7 = plVar5;
      }
    }
    plVar8 = (long *)*plVar7;
    plVar5 = plVar7;
    plVar7 = plVar8;
  } while (plVar8 != (long *)0x0);
  return;
}


