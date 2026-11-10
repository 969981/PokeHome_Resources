/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd454; name: FUN_.text__005cd454
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cd454(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar4 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar4 + 0x10;
  lVar4 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = 0x8968f8;
  *param_1 = 0x8968b0;
  param_1[1] = lVar4;
  lVar4 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[3];
  param_1[0xd] = param_2[2];
  param_1[0xe] = lVar3;
  param_1[0xb] = lVar4;
  param_1[0xc] = lVar2;
  lVar4 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[7];
  param_1[0x11] = param_2[6];
  param_1[0x12] = lVar3;
  param_1[0xf] = lVar4;
  param_1[0x10] = lVar2;
  return;
}


