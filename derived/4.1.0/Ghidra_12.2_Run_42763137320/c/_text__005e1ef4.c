/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e1ef4; name: FUN_.text__005e1ef4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e1ef4(long *param_1,undefined4 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = _DAT_0089f690;
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
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a5ac0;
  *(undefined4 *)(param_1 + 0x11) = param_2;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x60;
  param_1[0xb] = lVar2 + 0x90;
  nn::os::InitializeEvent(param_1 + 0xc,param_3 & 1,param_2);
  return;
}


