/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ef8c0; name: FUN_.text__003ef8c0
 */


void FUN__text__003ef8c0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  plVar8 = param_1 + 1;
  *plVar8 = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xc),true,0);
  uVar9 = (ulong)(1024.0 / *(float *)(param_1 + 0xb));
  if (uVar9 - 1 == 0) {
    uVar9 = 2;
  }
  else if ((uVar9 & uVar9 - 1) != 0) {
    uVar9 = std::__next_prime(uVar9);
  }
  uVar10 = param_1[2];
  if (uVar9 <= uVar10) {
    if (uVar10 <= uVar9) {
      return;
    }
    uVar1 = (ulong)((float)(ulong)param_1[10] / *(float *)(param_1 + 0xb));
    if ((uVar10 < 3) ||
       (uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
       uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
       1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar1 = std::__next_prime(uVar1);
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
    }
    else {
      if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
    }
    if (uVar10 <= uVar9) {
      return;
    }
  }
  if (uVar9 == 0) {
    lVar2 = *plVar8;
    *plVar8 = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar2,param_1[2] << 3,8);
    }
    param_1[2] = 0;
    return;
  }
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar3 = *plVar8;
  *plVar8 = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] << 3,8);
  }
  uVar10 = uVar9 & 3;
  param_1[2] = uVar9;
  if (uVar9 < 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      lVar2 = uVar1 * 8;
      uVar1 = uVar1 + 4;
      *(undefined8 *)(*plVar8 + lVar2) = 0;
      *(undefined8 *)(*plVar8 + lVar2 + 8) = 0;
      *(undefined8 *)(*plVar8 + lVar2 + 0x10) = 0;
      *(undefined8 *)(*plVar8 + lVar2 + 0x18) = 0;
    } while ((uVar9 & 0xfffffffffffffffc) != uVar1);
  }
  if (uVar10 != 0) {
    lVar2 = uVar1 << 3;
    do {
      uVar10 = uVar10 - 1;
      *(undefined8 *)(*plVar8 + lVar2) = 0;
      lVar2 = lVar2 + 8;
    } while (uVar10 != 0);
  }
  plVar6 = param_1 + 6;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar1 = plVar5[1];
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar1 = uVar1 & uVar9 - 1;
    *(long **)(*plVar8 + uVar1 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (uVar9 <= uVar1) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar1 / uVar9;
      }
      uVar1 = uVar1 - uVar4 * uVar9;
    }
    *(long **)(*plVar8 + uVar1 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar10) {
      do {
        while( true ) {
          uVar10 = plVar6[1];
          if (uVar9 <= uVar10) {
            uVar4 = 0;
            if (uVar9 != 0) {
              uVar4 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar4 * uVar9;
          }
          if (uVar10 != uVar1) break;
LAB__text__003efc80:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*plVar8 + uVar10 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*plVar8 + uVar10 * 8);
          **(undefined8 **)(*plVar8 + uVar10 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB__text__003efc80;
        }
        *(long **)(*plVar8 + uVar10 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar1 = uVar10;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar10 = plVar6[1] & uVar9 - 1;
    if (uVar10 != uVar1) {
      if (*(long *)(*plVar8 + uVar10 * 8) == 0) {
        *(long **)(*plVar8 + uVar10 * 8) = plVar5;
        uVar1 = uVar10;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*plVar8 + uVar10 * 8);
        **(undefined8 **)(*plVar8 + uVar10 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


