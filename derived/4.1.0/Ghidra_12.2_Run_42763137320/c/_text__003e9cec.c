/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9cec; name: FUN_.text__003e9cec
 */


void FUN__text__003e9cec(float param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  if (param_3 < *(uint *)(param_2 + 0x2b8)) {
    uVar4 = (ulong)param_3;
    uVar2 = FUN__text__003eb460(*(long *)(param_2 + 0x298) + uVar4 * 0x40);
    if ((uVar2 & 1) != 0) {
      fVar5 = 0.0;
      if (0.0 <= param_1) {
        FUN__text__003eb744(*(long *)(param_2 + 0x298) + uVar4 * 0x40);
        uVar1 = FUN__text__00697398();
        fVar5 = param_1;
        if ((float)uVar1 < param_1) {
          FUN__text__003eb744(*(long *)(param_2 + 0x298) + uVar4 * 0x40);
          uVar1 = FUN__text__00697398();
          fVar5 = (float)uVar1;
        }
      }
      lVar3 = FUN__text__003eb744(*(long *)(param_2 + 0x298) + uVar4 * 0x40);
      *(float *)(lVar3 + 0x20) = fVar5;
    }
  }
  return;
}


