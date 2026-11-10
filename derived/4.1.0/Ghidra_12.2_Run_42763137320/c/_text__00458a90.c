/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458a90; name: FUN_.text__00458a90
 */


float FUN__text__00458a90(long *param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    fVar7 = 1.0;
  }
  else {
    uVar3 = *param_2;
    fVar7 = 1.0;
    do {
      uVar1 = *(uint *)(param_1 + 3);
      if (uVar1 != 0) {
        pfVar5 = (float *)param_1[2];
        uVar6 = (ulong)uVar1 * 0xc - 0xc;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        pfVar4 = pfVar5;
        if ((SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
          if ((uVar3 >> ((ulong)(uint)pfVar5[2] & 0x3f) & 1) != 0) {
            fVar7 = (*pfVar5 + *(float *)(param_1[1] + 200) * pfVar5[1]) * fVar7;
          }
          pfVar4 = pfVar5 + 3;
        }
        if (0xb < uVar6) {
          do {
            if ((uVar3 >> ((ulong)(uint)pfVar4[2] & 0x3f) & 1) != 0) {
              fVar7 = (*pfVar4 + *(float *)(param_1[1] + 200) * pfVar4[1]) * fVar7;
            }
            if ((uVar3 >> ((ulong)(uint)pfVar4[5] & 0x3f) & 1) != 0) {
              fVar7 = (pfVar4[3] + *(float *)(param_1[1] + 200) * pfVar4[4]) * fVar7;
            }
            pfVar4 = pfVar4 + 6;
          } while (pfVar4 != pfVar5 + (ulong)uVar1 * 3);
        }
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  return fVar7;
}


