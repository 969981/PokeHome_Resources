/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd974; name: FUN_.text__005cd974
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cd974(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
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
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a5948 = 1;
  *param_1 = 0x896978;
  param_1[1] = lVar2;
  param_1[9] = 0x8969a8;
  FUN__text__006ee41c(param_1 + 10);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = -1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) goto LAB__text__005cda2c;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__005cda2c:
  param_1[0x19] = lVar2;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1c,0,1);
  *(undefined1 *)((long)param_1 + 0xe2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) {
      param_1[0x20] = lVar2;
      param_1[0x21] = 0;
      *(undefined4 *)(param_1 + 0x22) = 0;
      *(undefined4 *)(param_1 + 0x23) = 0;
      return;
    }
  }
  lVar2 = FUN__text__005f52b0();
  param_1[0x20] = lVar2;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return;
}


