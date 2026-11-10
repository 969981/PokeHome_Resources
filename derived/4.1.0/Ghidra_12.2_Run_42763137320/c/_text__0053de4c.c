/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053de4c; name: FUN_.text__0053de4c
 */


float FUN__text__0053de4c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = **(long **)(param_1 + 0x10) * 0x5851f42d4c957f2d + 1;
  **(long **)(param_1 + 0x10) = lVar1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8) * 0x5851f42d4c957f2d + 1;
  fVar5 = (float)(uint)((ulong)lVar1 >> 0x21) * *(float *)(param_1 + 8) * 4.656613e-10 + -1.0;
  *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar2;
  fVar4 = *(float *)(param_1 + 0xc) * 4.656613e-10 * (float)(uint)((ulong)lVar2 >> 0x21);
  fVar6 = SQRT(1.0 - fVar5 * fVar5);
  fVar3 = cosf(fVar4);
  fVar4 = sinf(fVar4);
  return (fVar4 * fVar6 * *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x30) * fVar5) +
         *(float *)(param_1 + 0x18) * fVar3 * fVar6;
}


