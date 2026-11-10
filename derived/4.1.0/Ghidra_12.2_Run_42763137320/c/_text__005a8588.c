/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8588; name: FUN_.text__005a8588
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8588(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = _DAT_0089f690;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = lVar2 + 0x10;
  uVar1 = tpidr_el0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a5670 = 1;
  *param_1 = 0x895888;
  param_1[1] = lVar2;
  param_1[9] = 0x8958b8;
  FUN__text__005a84f4(param_1 + 10);
  lVar2 = param_1[1];
  FUN__text__005aa950(param_1 + 0x1e);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1e] = 0x895908;
  param_1[0x1f] = lVar2;
  param_1[0x30] = 0;
  DAT_008e1c28 = param_1 + 0x1e;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) goto LAB__text__005a8694;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__005a8694:
  param_1[0x31] = lVar2;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x34,0,1);
  *(undefined1 *)((long)param_1 + 0x1a2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x1a3) = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN__text__006f2bc4(param_1 + 0x43c);
  FUN__text__006f55f8(param_1 + 0x841);
  FUN__text__006f55f8(param_1 + 0x84c);
  param_1[0x857] = 0xfff00000000;
  param_1[0x858] = 0;
  memset(param_1 + 0x1059,0,0x208);
  nn::os::InitializeLightEvent(param_1 + 0x109a,0,1);
  *(undefined1 *)((long)param_1 + 0x84d2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x84d3) = 0;
  param_1[0x109e] = 0;
  param_1[0x109f] = 0;
  param_1[0x10a0] = 0;
  param_1[0x10a1] = 0;
  param_1[0x10ae] = 0;
  param_1[0x10b0] = 0;
  *(undefined4 *)(param_1 + 0x10b1) = 0;
  *(undefined2 *)(param_1 + 0x10b5) = 0;
  param_1[0x109c] = 0x868bb8;
  param_1[0x10b2] = 0;
  param_1[0x10b3] = 0;
  param_1[0x10b4] = 0x3f8000003f800000;
  return;
}


