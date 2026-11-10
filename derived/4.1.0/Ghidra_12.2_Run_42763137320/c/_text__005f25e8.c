/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f25e8; name: FUN_.text__005f25e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f25e8(long *param_1,ushort *param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = 0x8981d8;
  param_1[1] = lVar4;
  param_1[9] = 0x898210;
  param_1[10] = 0x100000000;
  lVar4 = _DAT_0089f708 + 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x12] = (long)param_2;
  param_1[0x16] = lVar4;
  param_1[0x17] = 0;
  uVar2 = DAT_00c153b0;
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = 0x70f683;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar3 = *param_2;
  param_1[0x14] = 0;
  if (uVar3 <= uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar2;
  param_1[0x13] = (ulong)*(uint *)(param_2 + (ulong)uVar2 * 2 + 6) + (long)param_2;
  return;
}


