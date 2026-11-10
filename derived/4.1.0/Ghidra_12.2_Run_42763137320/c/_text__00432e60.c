/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432e60; name: FUN_.text__00432e60
 */


void FUN__text__00432e60(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  
  if (*(uint *)(param_1 + 1) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    pfVar4 = (float *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0xc);
    do {
      pfVar4[1] = *(float *)(*param_1 + lVar2 + 0x10) - *(float *)(*param_1 + lVar2 + 4);
      *pfVar4 = 1.0 / (((float *)(*param_1 + lVar2))[3] - *(float *)(*param_1 + lVar2));
      uVar1 = *(int *)(*param_1 + lVar2 + 8) - 1;
      if (uVar1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00432f18 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__00432ea4 + (ulong)*(byte *)((ulong)uVar1 + 0x73b164) * 4))
                  (0x3f800000,0xbf000000,0x3f000000);
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0xc;
      pfVar4 = pfVar4 + 2;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  return;
}


