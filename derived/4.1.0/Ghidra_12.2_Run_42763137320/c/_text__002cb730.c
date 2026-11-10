/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cb730; name: FUN_.text__002cb730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002cb730(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  if (uVar5 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar5 + 0x98) != 0) {
      lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a2708 = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = 0x87ae80;
  param_1[1] = lVar2;
  param_1[9] = 0x87aeb0;
  param_1[10] = 0;
  if (((uVar5 == 0) || (*(long *)(uVar5 + 0x98) == 0)) ||
     (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0)) {
    lVar2 = FUN__text__005f52b0();
    param_1[0x14] = 0;
    param_1[0x11] = lVar2;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    if (uVar5 != 0) goto LAB__text__002cb804;
LAB__text__002cb818:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    param_1[0x14] = 0;
    param_1[0x11] = lVar2;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
LAB__text__002cb804:
    if ((*(long *)(uVar5 + 0x98) == 0) ||
       (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0))
    goto LAB__text__002cb818;
  }
  param_1[0x15] = lVar2;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  plVar6 = param_1 + 0x1a;
  *plVar6 = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1b] = 0;
  if (((uVar5 == 0) || (*(long *)(uVar5 + 0x98) == 0)) ||
     (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0)) {
    lVar2 = FUN__text__005f52b0();
    param_1[0x1f] = 0;
    param_1[0x1c] = lVar2;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    if (uVar5 != 0) goto LAB__text__002cb880;
LAB__text__002cb894:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    param_1[0x1f] = 0;
    param_1[0x1c] = lVar2;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
LAB__text__002cb880:
    if ((*(long *)(uVar5 + 0x98) == 0) ||
       (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0))
    goto LAB__text__002cb894;
  }
  param_1[0x20] = lVar2;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((uVar5 == 0) || (*(long *)(uVar5 + 0x98) == 0)) ||
     (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0)) {
    lVar2 = FUN__text__005f52b0();
    param_1[0x27] = lVar2;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    param_1[0x2a] = 0;
    if (uVar5 != 0) goto LAB__text__002cb8f4;
LAB__text__002cb908:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    param_1[0x27] = lVar2;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    param_1[0x2a] = 0;
LAB__text__002cb8f4:
    if ((*(long *)(uVar5 + 0x98) == 0) ||
       (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0))
    goto LAB__text__002cb908;
  }
  param_1[0x2b] = lVar2;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  if (((uVar5 == 0) || (*(long *)(uVar5 + 0x98) == 0)) ||
     (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0)) {
    lVar2 = FUN__text__005f52b0();
    param_1[0x32] = lVar2;
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x35] = 0;
    if (uVar5 != 0) goto LAB__text__002cb968;
LAB__text__002cb97c:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    param_1[0x32] = lVar2;
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x35] = 0;
LAB__text__002cb968:
    if ((*(long *)(uVar5 + 0x98) == 0) ||
       (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0))
    goto LAB__text__002cb97c;
  }
  param_1[0x36] = lVar2;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if (((uVar5 == 0) || (*(long *)(uVar5 + 0x98) == 0)) ||
     (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 == 0)) {
    lVar2 = FUN__text__005f52b0();
    param_1[0x3d] = lVar2;
    param_1[0x3e] = 0;
    *(undefined4 *)(param_1 + 0x3f) = 0;
    param_1[0x40] = 0;
    if (uVar5 != 0) goto LAB__text__002cb9dc;
  }
  else {
    param_1[0x3d] = lVar2;
    param_1[0x3e] = 0;
    *(undefined4 *)(param_1 + 0x3f) = 0;
    param_1[0x40] = 0;
LAB__text__002cb9dc:
    if ((*(long *)(uVar5 + 0x98) != 0) &&
       (lVar2 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10), lVar2 != 0))
    goto LAB__text__002cb9f4;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__002cb9f4:
  param_1[0x41] = lVar2;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  if (param_1[0x18] != 0) {
    plVar1 = (long *)param_1[0x14];
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      (**(code **)(*(long *)param_1[0x15] + 0x18))((long *)param_1[0x15],plVar1,0x20,8);
      plVar1 = (long *)lVar2;
    }
    uVar5 = param_1[0x10];
    param_1[0x14] = 0;
    if (uVar5 != 0) {
      uVar3 = uVar5 & 3;
      if (uVar5 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar2 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(param_1[0xf] + lVar2) = 0;
          *(undefined8 *)(param_1[0xf] + lVar2 + 8) = 0;
          *(undefined8 *)(param_1[0xf] + lVar2 + 0x10) = 0;
          *(undefined8 *)(param_1[0xf] + lVar2 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar2 = uVar4 << 3;
        do {
          uVar3 = uVar3 - 1;
          *(undefined8 *)(param_1[0xf] + lVar2) = 0;
          lVar2 = lVar2 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0x18] = 0;
  }
  if (param_1[0x23] != 0) {
    plVar1 = (long *)param_1[0x1f];
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      (**(code **)(*(long *)param_1[0x20] + 0x18))((long *)param_1[0x20],plVar1,0x20,8);
      plVar1 = (long *)lVar2;
    }
    uVar5 = param_1[0x1b];
    param_1[0x1f] = 0;
    if (uVar5 != 0) {
      uVar3 = uVar5 & 3;
      if (uVar5 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar2 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 8) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x10) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar2 = uVar4 << 3;
        do {
          uVar3 = uVar3 - 1;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          lVar2 = lVar2 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0x23] = 0;
  }
  if (param_1[0x2e] != 0) {
    plVar6 = (long *)param_1[0x2a];
    while (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      (**(code **)(*(long *)param_1[0x2b] + 0x18))((long *)param_1[0x2b],plVar6,0x20,8);
      plVar6 = (long *)lVar2;
    }
    uVar5 = param_1[0x26];
    param_1[0x2a] = 0;
    if (uVar5 != 0) {
      plVar6 = param_1 + 0x25;
      uVar3 = uVar5 & 3;
      if (uVar5 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar2 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 8) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x10) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar2 = uVar4 << 3;
        do {
          uVar3 = uVar3 - 1;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          lVar2 = lVar2 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0x2e] = 0;
  }
  if (param_1[0x39] != 0) {
    plVar6 = (long *)param_1[0x35];
    while (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      (**(code **)(*(long *)param_1[0x36] + 0x18))((long *)param_1[0x36],plVar6,0x20,8);
      plVar6 = (long *)lVar2;
    }
    uVar5 = param_1[0x31];
    param_1[0x35] = 0;
    if (uVar5 != 0) {
      plVar6 = param_1 + 0x30;
      uVar3 = uVar5 & 3;
      if (uVar5 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar2 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 8) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x10) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar2 = uVar4 << 3;
        do {
          uVar3 = uVar3 - 1;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          lVar2 = lVar2 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0x39] = 0;
  }
  if (param_1[0x44] != 0) {
    plVar6 = (long *)param_1[0x40];
    while (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      (**(code **)(*(long *)param_1[0x41] + 0x18))((long *)param_1[0x41],plVar6,0x20,8);
      plVar6 = (long *)lVar2;
    }
    uVar5 = param_1[0x3c];
    param_1[0x40] = 0;
    if (uVar5 != 0) {
      plVar6 = param_1 + 0x3b;
      uVar3 = uVar5 & 3;
      if (uVar5 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar2 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 8) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x10) = 0;
          *(undefined8 *)(*plVar6 + lVar2 + 0x18) = 0;
        } while ((uVar5 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar2 = uVar4 << 3;
        do {
          uVar3 = uVar3 - 1;
          *(undefined8 *)(*plVar6 + lVar2) = 0;
          lVar2 = lVar2 + 8;
        } while (uVar3 != 0);
      }
    }
    param_1[0x44] = 0;
  }
  return;
}


