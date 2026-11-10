/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047da60; name: FUN_.text__0047da60
 */


float FUN__text__0047da60(long param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    return 0.0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x98) + 8);
  pdVar1 = (double *)(param_1 + 0x78);
  pdVar2 = (double *)(param_1 + 0x80);
  pdVar3 = (double *)(param_1 + 0x88);
  if (*(short *)(lVar4 + 0x38) != 0) {
    lVar4 = *(long *)(lVar4 + 0x20);
    pdVar1 = (double *)(lVar4 + 0x18);
    pdVar2 = (double *)(lVar4 + 0x20);
    pdVar3 = (double *)(lVar4 + 0x28);
  }
  dVar7 = *pdVar1 - *(double *)(param_1 + 0x78);
  dVar6 = *pdVar2 - *(double *)(param_1 + 0x80);
  dVar5 = *pdVar3 - *(double *)(param_1 + 0x88);
  return (float)SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5);
}


