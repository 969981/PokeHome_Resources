/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052c760; name: FUN_.text__0052c760
 */


long FUN__text__0052c760(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  uVar7 = (ulong)uVar2 * 0x118 - 0x118;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7;
  if ((SUB164(auVar3 * ZEXT816(0xea0ea0ea0ea0ea0f),8) >> 8 & 1) == 0) {
    lVar6 = lVar5 + 0x118;
    fVar8 = (float)NEON_fminnm(*(float *)(lVar5 + 0x100),0x7f7fffff);
    lVar4 = lVar5;
    if (3.4028235e+38 <= *(float *)(lVar5 + 0x100)) {
      lVar4 = 0;
    }
  }
  else {
    fVar8 = 3.4028235e+38;
    lVar6 = lVar5;
    lVar4 = 0;
  }
  if (0x117 < uVar7) {
    lVar6 = lVar6 + 0x118;
    do {
      fVar9 = (float)NEON_fminnm(*(float *)(lVar6 + -0x18),fVar8);
      lVar1 = lVar6 + -0x118;
      if (fVar8 <= *(float *)(lVar6 + -0x18)) {
        lVar1 = lVar4;
      }
      fVar8 = (float)NEON_fminnm(*(float *)(lVar6 + 0x100),fVar9);
      lVar4 = lVar6;
      if (fVar9 <= *(float *)(lVar6 + 0x100)) {
        lVar4 = lVar1;
      }
      lVar1 = lVar6 + 0x118;
      lVar6 = lVar6 + 0x230;
    } while (lVar1 != lVar5 + (ulong)uVar2 * 0x118);
  }
  return lVar4;
}


