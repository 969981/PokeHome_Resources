/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047cd50; name: FUN_.text__0047cd50
 */


void FUN__text__0047cd50(long param_1,uint param_2)

{
  long *plVar2;
  long *plVar1;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = (float)NEON_fminnm(*(float *)(param_1 + 0x50) *
                             (float)(param_2 - *(int *)(param_1 + 0x44)),0x3f800000);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 100) * fVar4;
  fVar6 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x68) * fVar4;
  fVar4 = *(float *)(param_1 + 0x60) + fVar4 * *(float *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x38) != 0) {
    fVar7 = *(float *)(param_1 + 0x70);
    fVar8 = *(float *)(param_1 + 0x74);
    fVar9 = *(float *)(param_1 + 0x78);
    plVar1 = *(long **)(param_1 + 0x30);
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *(long *)(*plVar1 + 0x1c8);
      *(float *)(lVar3 + 4) = (fVar5 - fVar7) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = (fVar6 - fVar8) + *(float *)(lVar3 + 8);
      *(float *)(lVar3 + 0xc) = (fVar4 - fVar9) + *(float *)(lVar3 + 0xc);
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(float *)(param_1 + 0x70) = fVar5;
  *(float *)(param_1 + 0x74) = fVar6;
  *(float *)(param_1 + 0x78) = fVar4;
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    return;
  }
  FUN__text__0047c988();
  return;
}


