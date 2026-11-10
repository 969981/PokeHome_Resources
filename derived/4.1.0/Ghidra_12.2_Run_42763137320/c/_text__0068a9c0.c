/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068a9c0; name: FUN_.text__0068a9c0
 */


float FUN__text__0068a9c0(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar2 = *(float *)(param_1 + 0xc) * fVar2;
    fVar1 = *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x20);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar1 = (fVar2 - *(float *)(param_1 + 0xc) * fVar1) * 0.5 +
            *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  FUN__text__0068aa54(SUB42(fVar1 + *(float *)(param_1 + 0x14),0),param_1);
  *(float *)(param_1 + 0x14) = fVar2 + *(float *)(param_1 + 0x14);
  return fVar2;
}


