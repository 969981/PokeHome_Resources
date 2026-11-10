/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c8f0; name: FUN_.text__0047c8f0
 */


void FUN__text__0047c8f0(long param_1)

{
  long *plVar2;
  long *plVar1;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *(long *)(*plVar1 + 0x1c8);
      fVar4 = *(float *)(param_1 + 0x5c);
      fVar5 = *(float *)(param_1 + 0x60);
      *(float *)(lVar3 + 4) = *(float *)(param_1 + 0x58) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = fVar4 + *(float *)(lVar3 + 8);
      *(float *)(lVar3 + 0xc) = fVar5 + *(float *)(lVar3 + 0xc);
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x60);
  return;
}


