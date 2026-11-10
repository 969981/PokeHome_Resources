/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520320; name: FUN_.text__00520320
 */


undefined1  [16] FUN__text__00520320(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = *(float *)(param_1 + 0x50) * 0.5;
  fVar9 = *(float *)(param_1 + 0xa8) * 0.5;
  fVar10 = *(float *)(param_1 + 0x100) * 0.5;
  fVar4 = *(float *)(param_1 + 0x158) * 0.5;
  lVar1 = *(long *)(param_1 + 0x160);
  fVar5 = (*(float *)(param_1 + 8) + fVar2 * *(float *)(param_1 + 0x14) +
           fVar9 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x60) +
           fVar10 * *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xb8) +
           fVar4 * *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x110)) *
          *(float *)(lVar1 + 0x3c) * 0.25;
  fVar6 = (*(float *)(param_1 + 4) + fVar2 * *(float *)(param_1 + 0x10) +
           fVar9 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x5c) +
           fVar10 * *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xb4) +
           fVar4 * *(float *)(param_1 + 0x118) + *(float *)(param_1 + 0x10c)) *
          *(float *)(lVar1 + 0x38) * 0.25;
  fVar8 = *(float *)(lVar1 + 0x10);
  fVar7 = *(float *)(lVar1 + 0x14);
  fVar2 = (*(float *)(param_1 + 0xc) + fVar2 * *(float *)(param_1 + 0x18) +
           fVar9 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 100) +
           fVar10 * *(float *)(param_1 + 200) + *(float *)(param_1 + 0xbc) +
           fVar4 * *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x114)) *
          *(float *)(lVar1 + 0x40) * 0.25;
  fVar4 = *(float *)(lVar1 + 0x18);
  fVar9 = *(float *)(lVar1 + 0x1c);
  fVar2 = (fVar4 * fVar2 - fVar9 * fVar5) * fVar8 +
          fVar7 * (fVar7 * fVar6 + fVar5 * fVar4 + fVar2 * fVar9);
  auVar3._0_8_ = *(double *)(lVar1 + 0x20) +
                 (double)(fVar2 + fVar2 +
                         fVar6 * (fVar8 * fVar8 - (fVar7 * fVar7 + fVar4 * fVar4 + fVar9 * fVar9)));
  auVar3._8_8_ = 0;
  return auVar3;
}


