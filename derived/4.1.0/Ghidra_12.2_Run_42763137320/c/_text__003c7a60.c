/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7a60; name: FUN_.text__003c7a60
 */


float FUN__text__003c7a60(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  plVar1 = *(long **)(param_1 + 0x220);
  lVar2 = *(long *)(param_1 + 0x228);
  plVar3 = plVar1;
  if (lVar2 != 0) {
    lVar4 = lVar2 << 4;
    while (*plVar3 != *param_2) {
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
      if (lVar4 == 0) {
        return 0.0;
      }
    }
  }
  if (plVar3 == plVar1 + lVar2 * 2) {
    return 0.0;
  }
  fVar5 = 0.0;
  for (lVar2 = plVar3[1]; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
    fVar5 = fVar5 + *(float *)(lVar2 + 0x30);
  }
  return fVar5;
}


