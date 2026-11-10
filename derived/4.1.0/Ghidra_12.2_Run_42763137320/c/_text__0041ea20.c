/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041ea20; name: FUN_.text__0041ea20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0041ea20(uint param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  
  *_DAT_008a4b68 = param_1;
  *_DAT_008a4b70 = param_2;
  uVar1 = (param_1 << 7) / 48000 + 7 & 0x3fff8;
  sVar2 = 0;
  if (uVar1 != 0) {
    sVar2 = (short)(((param_2 & 0xffff) - 1) / uVar1);
  }
  fVar4 = ((float)(param_2 & 0xffff) * 1000.0) / (float)param_1;
  *_DAT_008a4b78 = (int)fVar4;
  piVar3 = _DAT_008a4b80;
  *_DAT_008a4b88 = uVar1;
  *piVar3 = (int)(fVar4 * 0.25);
  *_DAT_008a4b90 = sVar2 + 1;
  return;
}


