/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042fb84; name: FUN_.text__0042fb84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042fb84(long param_1,int param_2)

{
  float fVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0)) {
    fVar1 = (float)NEON_ucvtf(_DAT_008ab030);
    fVar1 = expf((float)(int)-(uint)*_DAT_008a4b70 / ((float)param_2 * 0.00020000001 * fVar1));
    *(float *)(param_1 + 0x44) = fVar1;
  }
  return;
}


