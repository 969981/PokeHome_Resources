/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d86a0; name: FUN_.text__002d86a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d86a0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
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
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
  }
  *_DAT_008a27b0 = 1;
  *param_1 = 0x87b810;
  param_1[1] = lVar2;
  plVar3 = param_1 + 10;
  *plVar3 = 0x87b890;
  param_1[9] = 0x87b870;
  FUN__text__002dbe60(plVar3);
  *param_1 = 0x87b810;
  param_1[9] = 0x87b870;
  *plVar3 = 0x87b890;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  return;
}


