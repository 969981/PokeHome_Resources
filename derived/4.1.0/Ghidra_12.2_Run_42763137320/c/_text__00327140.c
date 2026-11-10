/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00327140; name: FUN_.text__00327140
 */


void FUN__text__00327140(uint param_1,void *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((long)param_2 + 0x2c);
  if (iVar2 - 0xbU < 2) {
    iVar4 = 0;
    if (iVar2 != 0xb) {
      iVar4 = 6;
    }
    uVar3 = *(byte *)((long)param_2 + 0x49) - 1;
    if (6 < uVar3) {
      return;
    }
    if ((0x5fU >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    uVar3 = param_1 * 0x16 + iVar4 + *(int *)((long)(char)uVar3 * 4 + 0x734c40) + 10;
  }
  else {
    uVar3 = (param_1 * 0x16 + iVar2) - 1;
  }
  if (uVar3 < 0xb0) {
    memcpy((void *)((ulong)uVar3 * 0xa0 + 0x8e8130),param_2,0x9c);
    uVar1 = param_3[1];
    (&DAT_008eefd0)[(ulong)param_1 * 2] = *param_3;
    (&DAT_008eefd8)[(ulong)param_1 * 2] = uVar1;
  }
  return;
}


