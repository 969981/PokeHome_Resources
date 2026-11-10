/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00576c80; name: FUN_.text__00576c80
 */


void FUN__text__00576c80(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x158);
  fVar3 = *(float *)(lVar1 + 8);
  if ((fVar3 != *(float *)(param_1 + 0x168)) ||
     (*(float *)(lVar1 + 0xc) != *(float *)(param_1 + 0x16c))) {
    if (*(int *)(param_1 + 0x128) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        FUN__text__0057d1a8(*(undefined4 *)(*(long *)(param_1 + 0x158) + 8),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xc),
                            *(long *)(param_1 + 0x140) + lVar1,*(undefined4 *)(param_1 + 0x130));
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0xa8;
      } while (uVar2 < *(uint *)(param_1 + 0x128));
      lVar1 = *(long *)(param_1 + 0x158);
      fVar3 = *(float *)(lVar1 + 8);
    }
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    *(int *)(param_1 + 0x120) = (int)((fVar3 + *(float *)(lVar1 + 0x60) * 0.001) * fVar5);
  }
  if (*(float *)(lVar1 + 0x10) != *(float *)(param_1 + 0x170)) {
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212 + -1.85409;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = NEON_fminnm(fVar3,0x3f1e3737);
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212 + -1.23606;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = NEON_fminnm(fVar3,0x3f1e3737);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212 + -0.61803;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = NEON_fminnm(fVar3,0x3f1e3737);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = NEON_fminnm(fVar3,0x3f1e3737);
    *(undefined4 *)(param_1 + 100) = uVar4;
  }
  if (((*(float *)(lVar1 + 0x18) != *(float *)(param_1 + 0x178)) ||
      (*(float *)(lVar1 + 0x1c) != *(float *)(param_1 + 0x17c))) ||
     (*(float *)(lVar1 + 0x20) != *(float *)(param_1 + 0x180))) {
    FUN__text__00575d58(param_1);
    lVar1 = *(long *)(param_1 + 0x158);
  }
  if (((*(float *)(lVar1 + 0x24) != *(float *)(param_1 + 0x184)) ||
      (*(float *)(lVar1 + 0x28) != *(float *)(param_1 + 0x188))) ||
     (*(float *)(lVar1 + 0x2c) != *(float *)(param_1 + 0x18c))) {
    FUN__text__00575e3c(param_1);
    lVar1 = *(long *)(param_1 + 0x158);
  }
  if (((*(float *)(lVar1 + 0x30) != *(float *)(param_1 + 400)) ||
      (*(float *)(lVar1 + 0x34) != *(float *)(param_1 + 0x194))) ||
     (*(float *)(lVar1 + 0x38) != *(float *)(param_1 + 0x198))) {
    FUN__text__00575f20(param_1);
    lVar1 = *(long *)(param_1 + 0x158);
  }
  *(undefined1 *)(lVar1 + 0x58) = 0;
  return;
}


