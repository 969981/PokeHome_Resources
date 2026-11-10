/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010995c; name: FUN_.text__0010995c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010995c(long *param_1)

{
  ulong uVar1;
  long lVar2;
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
  *_DAT_0089f730 = 1;
  lVar2 = _DAT_0089f738;
  *param_1 = _DAT_0089f738 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x40;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  *(undefined1 *)((long)param_1 + 0x52) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    lVar3 = FUN__text__005f52b0();
    param_1[0x10] = 0;
    param_1[0xd] = lVar3;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (uVar1 != 0) goto LAB__text__00109a44;
  }
  else {
    param_1[0x10] = 0;
    param_1[0xd] = lVar3;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
LAB__text__00109a44:
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 != 0))
    goto LAB__text__00109a5c;
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__00109a5c:
  param_1[0x11] = lVar3;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  return;
}


