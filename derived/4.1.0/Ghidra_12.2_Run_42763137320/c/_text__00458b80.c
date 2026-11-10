/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458b80; name: FUN_.text__00458b80
 */


float FUN__text__00458b80(long *param_1,ulong *param_2)

{
  float *pfVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  float fVar5;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = 1.0;
    do {
      if (*(uint *)(param_1 + 3) != 0) {
        lVar2 = (ulong)*(uint *)(param_1 + 3) * 0xc;
        puVar3 = (uint *)(param_1[2] + 8);
        do {
          if ((*param_2 >> ((ulong)*puVar3 & 0x3f) & 1) != 0) {
            lVar4 = *(long *)(param_1[1] + 0xa8);
            pfVar1 = (float *)(param_1[1] + 200);
            if (lVar4 != 0) {
              pfVar1 = (float *)(lVar4 + 0x10);
            }
            fVar5 = ((float)puVar3[-2] + *pfVar1 * (float)puVar3[-1]) * fVar5;
          }
          lVar2 = lVar2 + -0xc;
          puVar3 = puVar3 + 3;
        } while (lVar2 != 0);
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  return fVar5;
}


