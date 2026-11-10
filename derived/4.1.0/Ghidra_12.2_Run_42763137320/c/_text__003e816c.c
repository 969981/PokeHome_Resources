/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e816c; name: FUN_.text__003e816c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e816c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
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
  lVar2 = _DAT_008a5258;
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar4 = _DAT_008a5250;
  uVar3 = _DAT_008a5248;
  DAT_00ae87c0 = param_1;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar5;
  param_1[9] = lVar2 + 0x48;
  FUN__text__0069e9e0(uVar3,uVar4,0);
  return;
}


