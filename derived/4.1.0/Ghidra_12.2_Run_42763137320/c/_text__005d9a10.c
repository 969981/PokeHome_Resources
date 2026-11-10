/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9a10; name: FUN_.text__005d9a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d9a10(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[7] = 0;
  lVar3 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a5a20 = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = 0x8971b8;
  param_1[1] = lVar3;
  param_1[9] = 0x8971e8;
  param_1[10] = 0;
  FUN__text__005d9b84(param_1 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    lVar3 = FUN__text__005f52b0();
    param_1[0x1e] = 0;
    param_1[0x1b] = lVar3;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (uVar1 != 0) goto LAB__text__005d9aec;
  }
  else {
    param_1[0x1e] = 0;
    param_1[0x1b] = lVar3;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
LAB__text__005d9aec:
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 != 0))
    goto LAB__text__005d9b04;
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__005d9b04:
  param_1[0x1f] = lVar3;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  nn::os::InitializeLightEvent(param_1 + 0x24,0,1);
  *(undefined1 *)((long)param_1 + 0x122) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x123) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2d] = 0x900000000;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x36,0,1);
  *(undefined1 *)((long)param_1 + 0x1b2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x1b3) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar2 = (undefined8 *)FUN__text__005ea1e0();
  FUN__text__005dd284(*(undefined1 *)*puVar2);
  return;
}


