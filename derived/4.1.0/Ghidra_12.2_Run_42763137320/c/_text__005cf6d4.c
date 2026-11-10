/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf6d4; name: FUN_.text__005cf6d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf6d4(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a5958;
  *param_1 = _DAT_008a5958 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x48;
  FUN__text__006f3190(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  param_1[0x1a] = -1;
  param_1[0x1b] = 0;
  return;
}


