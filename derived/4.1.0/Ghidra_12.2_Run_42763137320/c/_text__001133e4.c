/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001133e4; name: FUN_.text__001133e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001133e4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  lVar2 = _DAT_0089fcd8;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x200000001;
  *_DAT_0089fce0 = 1;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x40;
  *(undefined4 *)((long)param_1 + 0x5c) = 4;
  FUN__text__005e927c(param_1 + 0xc,_DAT_0089fc98);
  FUN__text__005e927c(param_1 + 0x10,_DAT_0089fca0);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x43] = 0x70f683;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x18] = -0x340d631b7bddd9bb;
  param_1[0x19] = 0x70f683;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x40] = 0;
  param_1[0x42] = -0x340d631b7bddd9bb;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x1e] = -0x340d631b7bddd9bb;
  param_1[0x1f] = 0x70f683;
  param_1[0x24] = -0x340d631b7bddd9bb;
  param_1[0x25] = 0x70f683;
  param_1[0x2a] = -0x340d631b7bddd9bb;
  param_1[0x2b] = 0x70f683;
  param_1[0x30] = -0x340d631b7bddd9bb;
  param_1[0x31] = 0x70f683;
  param_1[0x36] = -0x340d631b7bddd9bb;
  param_1[0x37] = 0x70f683;
  param_1[0x3c] = -0x340d631b7bddd9bb;
  param_1[0x3d] = 0x70f683;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x1fe000000000;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) {
      param_1[0xcb] = lVar2;
      param_1[0xcc] = 0;
      *(undefined4 *)(param_1 + 0xcd) = 0;
      return;
    }
  }
  lVar2 = FUN__text__005f52b0();
  param_1[0xcb] = lVar2;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  return;
}


