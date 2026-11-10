/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aad70; name: FUN_.text__005aad70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005aad70(long *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = _DAT_0089f690;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = _DAT_008a56e0;
  uVar1 = tpidr_el0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar4 + 0x10;
  lVar4 = _DAT_008a56e8;
  *(undefined4 *)(param_1 + 6) = 0;
  if (uVar1 == 0) {
    *puVar2 = 1;
    *param_1 = lVar4 + 0x10;
    param_1[1] = 0;
    param_1[9] = lVar4 + 0x40;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0xd] = lVar4;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x12] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x13] = lVar4;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x18] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
LAB__text__005aaeb0:
    lVar4 = FUN__text__005f52b0();
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
    *param_1 = lVar4 + 0x10;
    param_1[1] = lVar3;
    param_1[9] = lVar4 + 0x40;
    param_1[10] = 0;
    *puVar2 = 1;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    plVar5 = (long *)(uVar1 + 0x98);
    lVar4 = uVar1 + 0x18;
    if ((*plVar5 == 0) || (lVar3 = *(long *)(lVar4 + *plVar5 * 8 + -8), lVar3 == 0)) {
      lVar3 = FUN__text__005f52b0();
    }
    param_1[0xd] = lVar3;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x12] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((*plVar5 == 0) || (lVar3 = *(long *)(lVar4 + *plVar5 * 8 + -8), lVar3 == 0)) {
      lVar3 = FUN__text__005f52b0();
    }
    param_1[0x13] = lVar3;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x18] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar4 + *plVar5 * 8 + -8), lVar4 == 0))
    goto LAB__text__005aaeb0;
  }
  lVar3 = uVar1 + 0x18;
  plVar5 = (long *)(uVar1 + 0x98);
  param_1[0x19] = lVar4;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xe4,0,1);
  *(undefined1 *)((long)param_1 + 0xe6) = 0x4f;
  *(undefined1 *)((long)param_1 + 0xe7) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (uVar1 == 0) {
    lVar4 = FUN__text__005f52b0();
    param_1[0x21] = lVar4;
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x26] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x27] = lVar4;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    param_1[0x2c] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x2d] = lVar4;
    param_1[0x2e] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x33] = lVar4;
    param_1[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
    param_1[0x38] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x39] = lVar4;
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
    param_1[0x3e] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x3f] = lVar4;
    param_1[0x40] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x46] = 0;
    param_1[0x45] = lVar4;
    *(undefined4 *)(param_1 + 0x47) = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x4c] = 0;
    param_1[0x4b] = lVar4;
    *(undefined4 *)(param_1 + 0x4d) = 0;
    param_1[0x50] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x52] = 0;
    param_1[0x51] = lVar4;
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x58] = 0;
    param_1[0x57] = lVar4;
    *(undefined4 *)(param_1 + 0x59) = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x5e] = 0;
    param_1[0x5d] = lVar4;
    *(undefined4 *)(param_1 + 0x5f) = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[100] = 0;
    param_1[99] = lVar4;
    *(undefined4 *)(param_1 + 0x65) = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x6a] = 0;
    param_1[0x69] = lVar4;
    *(undefined4 *)(param_1 + 0x6b) = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x70] = 0;
    param_1[0x6f] = lVar4;
    *(undefined4 *)(param_1 + 0x71) = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    lVar4 = FUN__text__005f52b0();
    param_1[0x76] = 0;
    param_1[0x75] = lVar4;
    *(undefined4 *)(param_1 + 0x77) = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
  }
  else {
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x21] = lVar4;
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x26] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x27] = lVar4;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    param_1[0x2c] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x2d] = lVar4;
    param_1[0x2e] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x33] = lVar4;
    param_1[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
    param_1[0x38] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x39] = lVar4;
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
    param_1[0x3e] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x3f] = lVar4;
    param_1[0x40] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x45] = lVar4;
    param_1[0x46] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x4b] = lVar4;
    param_1[0x4c] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
    param_1[0x50] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x51] = lVar4;
    param_1[0x52] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x57] = lVar4;
    param_1[0x58] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x5d] = lVar4;
    param_1[0x5e] = 0;
    *(undefined4 *)(param_1 + 0x5f) = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[99] = lVar4;
    param_1[100] = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x69] = lVar4;
    param_1[0x6a] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x6f] = lVar4;
    param_1[0x70] = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    if ((*plVar5 == 0) || (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 == 0)) {
      lVar4 = FUN__text__005f52b0();
    }
    param_1[0x75] = lVar4;
    param_1[0x76] = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    if ((*plVar5 != 0) && (lVar4 = *(long *)(lVar3 + *plVar5 * 8 + -8), lVar4 != 0))
    goto LAB__text__005ab31c;
  }
  lVar4 = FUN__text__005f52b0();
LAB__text__005ab31c:
  param_1[0x7b] = lVar4;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x3f4,0,1);
  *(undefined1 *)((long)param_1 + 0x3f6) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x3f7) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x3fc,0,1);
  *(undefined1 *)((long)param_1 + 0x3fe) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x3ff) = 0;
  return;
}


