/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d33e4; name: FUN_.text__003d33e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d33e4(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar2 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  lVar2 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[9] = 0x884810;
  *param_1 = 0x8847d8;
  param_1[1] = lVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar2 = _DAT_0089f590 + 0x10;
  param_1[0x2e] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = lVar2;
  return;
}


