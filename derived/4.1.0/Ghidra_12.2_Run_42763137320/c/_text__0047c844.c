/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c844; name: FUN_.text__0047c844
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047c844(long param_1,float *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  plVar1 = _DAT_008a45e8;
  lVar2 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
  *_DAT_008a45e8 = lVar2;
  fVar4 = *(float *)(*(long *)(param_1 + 0x18) + 0xc);
  *param_2 = ((float)(uint)((ulong)lVar2 >> 0x21) * 9.313226e-10 * fVar4 - fVar4) + *param_2;
  lVar3 = *plVar1 * 0x5851f42d4c957f2d + 1;
  lVar2 = lVar3 * 0x5851f42d4c957f2d + 1;
  fVar4 = *(float *)(*(long *)(param_1 + 0x18) + 0x10);
  *plVar1 = lVar2;
  param_2[2] = ((float)(uint)((ulong)lVar3 >> 0x21) * 9.313226e-10 * fVar4 - fVar4) + param_2[2];
  fVar4 = *(float *)(*(long *)(param_1 + 0x18) + 0x14);
  param_2[1] = ((float)(uint)((ulong)lVar2 >> 0x21) * 9.313226e-10 * fVar4 - fVar4) + param_2[1];
  return;
}


