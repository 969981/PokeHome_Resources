/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd50c; name: FUN_.text__005fd50c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fd50c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0x8677a8;
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a5d68 = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xf] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = 0x898820;
  param_1[1] = uVar2;
  param_1[0x2c] = 0;
  param_1[9] = 0x898850;
  param_1[10] = 0x867938;
  return;
}


