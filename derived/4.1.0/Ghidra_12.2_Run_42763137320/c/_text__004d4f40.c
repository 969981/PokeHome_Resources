/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d4f40; name: FUN_.text__004d4f40
 */


void FUN__text__004d4f40(undefined8 param_1,long param_2,ulong param_3,uint param_4,long param_5)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float afStack_50 [4];
  
  FUN__text__00413d04(param_1);
  if ((*(long *)(param_2 + 400) != 0) && (*(long *)(*(long *)(param_2 + 400) + 0x88) != 0)) {
    FUN__text__004d5aa0(param_2,param_4,param_5);
    return;
  }
  uVar6 = (param_3 & 0xffffffff) * 8 + 0xf & 0xffffffff0;
  lVar3 = -0x50 - uVar6;
  lVar4 = lVar3 - uVar6;
  if (param_4 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    do {
      lVar9 = *(long *)(param_5 + uVar6 * 8);
      if (*(uint *)(lVar9 + 0x148) != 0) {
        lVar8 = (ulong)*(uint *)(lVar9 + 0x148) * 0x118;
        fVar11 = *(float *)(lVar9 + 0x14) * *(float *)(lVar9 + 0xc);
        fVar10 = *(float *)(lVar9 + 0x10) * *(float *)(lVar9 + 8);
        lVar7 = *(long *)(lVar9 + 0x140);
        fVar13 = (float)NEON_fminnm(*(undefined4 *)(lVar9 + 0x17c),0x42c80000);
        fVar12 = (float)NEON_fminnm(*(float *)(lVar9 + 0x178),0x42c80000);
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (0.0 < *(float *)(lVar9 + 0x178)) {
          do {
            lVar9 = *(long *)(lVar7 + 0x18);
            if ((lVar9 != 0) && (*(long *)(lVar7 + 0xe8) != 0)) {
              if (fVar12 != *(float *)(lVar7 + 200)) {
                *(float *)(lVar7 + 200) = fVar12;
                *(byte *)(lVar7 + 0xcd) = *(byte *)(lVar7 + 0xcd) | 1;
              }
              if (fVar13 != *(float *)(lVar7 + 0xd4)) {
                *(float *)(lVar7 + 0xd4) = fVar13;
                *(byte *)(lVar7 + 0xd9) = *(byte *)(lVar7 + 0xd9) | 1;
              }
              if ((*(short *)(lVar9 + 0x12) != 0) &&
                 ((iVar2 = *(int *)(lVar9 + 0xc), iVar2 == 0x2d || (iVar2 == 0x11)))) {
                pfVar1 = (float *)((long)afStack_50 + uVar5 * 8 + lVar4 + 0x50);
                *(long *)((long)afStack_50 + uVar5 * 8 + lVar3 + 0x50) = lVar7;
                *pfVar1 = fVar10;
                pfVar1[1] = fVar11;
                if (iVar2 == 0x11) {
                  *(undefined4 *)((long)afStack_50 + uVar5 * 8 + lVar4 + 0x54) = 0;
                }
                uVar5 = (ulong)((int)uVar5 + 1);
              }
            }
            lVar7 = lVar7 + 0x118;
            lVar8 = lVar8 + -0x118;
          } while (lVar8 != 0);
        }
        else {
          do {
            lVar9 = *(long *)(lVar7 + 0x18);
            if ((lVar9 != 0) && (*(long *)(lVar7 + 0xe8) != 0)) {
              if (fVar12 != *(float *)(lVar7 + 200)) {
                *(float *)(lVar7 + 200) = fVar12;
                *(byte *)(lVar7 + 0xcd) = *(byte *)(lVar7 + 0xcd) | 1;
              }
              if (fVar13 != *(float *)(lVar7 + 0xd4)) {
                *(float *)(lVar7 + 0xd4) = fVar13;
                *(byte *)(lVar7 + 0xd9) = *(byte *)(lVar7 + 0xd9) | 1;
              }
              if ((*(short *)(lVar9 + 0x12) != 0) &&
                 ((*(int *)(lVar9 + 0xc) == 0x2d || (*(int *)(lVar9 + 0xc) == 0x11)))) {
                pfVar1 = (float *)((long)afStack_50 + uVar5 * 8 + lVar4 + 0x50);
                *(long *)((long)afStack_50 + uVar5 * 8 + lVar3 + 0x50) = lVar7;
                *pfVar1 = fVar10;
                pfVar1[1] = fVar11;
                uVar5 = (ulong)((int)uVar5 + 1);
              }
            }
            lVar7 = lVar7 + 0x118;
            lVar8 = lVar8 + -0x118;
          } while (lVar8 != 0);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
    if ((int)uVar5 != 0) {
      if (*(int *)(param_2 + 0x1b0) == 4) {
        *(undefined4 *)(param_2 + 0x1b0) = 1;
      }
      if ((*(uint *)(param_2 + 0x160) & 0xf00) != 0x300) {
        FUN__text__004d52a0(afStack_50,param_2);
        FUN__text__00413dec(param_1,afStack_50);
        return;
      }
      FUN__text__004d5570(param_2);
    }
  }
  return;
}


