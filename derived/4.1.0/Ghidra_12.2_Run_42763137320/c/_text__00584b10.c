/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00584b10; name: FUN_.text__00584b10
 */


void FUN__text__00584b10(long param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = exp2f(*(float *)(*(long *)(param_1 + 0x150) + 8) * 0.1660964);
  fVar10 = *(float *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(float *)(param_1 + 0x168) = fVar9;
  fVar11 = *(float *)(param_1 + 0x160);
  uVar2 = (uint)(ABS(fVar9 - fVar10) / fVar11);
  if (fVar9 - fVar10 <= 0.0) {
    fVar11 = -fVar11;
  }
  *(float *)(param_1 + 0x164) = fVar11;
  *(uint *)(param_1 + 0x174) = uVar2;
  if (param_3 != 0) {
    fVar12 = *(float *)(param_1 + 0x7c);
    uVar7 = 0;
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar4 = *(uint *)(param_1 + 0x78);
    iVar3 = *(int *)(param_1 + 0x80);
    uVar6 = *(ushort *)(param_1 + 100);
    uVar5 = *(uint *)(param_1 + 0x14);
    if (*(short *)(param_1 + 0xc) == 1 || *(int *)(param_1 + 0xc4) == 1) {
      iVar8 = param_3;
      do {
        iVar3 = iVar3 * 0xbb38435 + 0x3619636b;
        *(int *)(param_1 + 0x80) = iVar3;
        if (*(uint *)(param_1 + (ulong)uVar6 * 4 + 0x68) <= uVar4) {
          uVar6 = uVar6 + 1;
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(ushort *)(param_1 + 100) = uVar6;
        }
        uVar4 = uVar4 + 1;
        fVar13 = *(float *)(param_1 + (ulong)uVar6 * 4 + 0x54);
        *(uint *)(param_1 + 0x78) = uVar4;
        fVar12 = fVar12 + fVar13;
        *(float *)(param_1 + 0x7c) = fVar12;
        if (uVar7 < uVar2) {
          uVar7 = uVar7 + 1;
          *(uint *)(param_1 + 0x170) = uVar7;
          fVar10 = fVar10 + fVar11;
        }
        else {
          fVar10 = fVar9;
        }
        uVar5 = uVar5 + 1;
        *(float *)(param_1 + 0x16c) = fVar10;
        *param_2 = (float)iVar3 * 4.656613e-10 * fVar12 * fVar10;
        if (uVar1 <= uVar5) {
          fVar12 = 0.0;
          uVar5 = 0;
          uVar6 = 0;
          uVar4 = 0;
          *(undefined2 *)(param_1 + 100) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
        }
        iVar8 = iVar8 + -1;
        param_2 = param_2 + 1;
      } while (iVar8 != 0);
    }
    else {
      iVar8 = param_3;
      do {
        iVar3 = iVar3 * 0xbb38435 + 0x3619636b;
        *(int *)(param_1 + 0x80) = iVar3;
        if (*(uint *)(param_1 + (ulong)uVar6 * 4 + 0x68) <= uVar4) {
          uVar6 = uVar6 + 1;
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(ushort *)(param_1 + 100) = uVar6;
        }
        uVar4 = uVar4 + 1;
        fVar13 = *(float *)(param_1 + (ulong)uVar6 * 4 + 0x54);
        *(uint *)(param_1 + 0x78) = uVar4;
        fVar12 = fVar12 + fVar13;
        *(float *)(param_1 + 0x7c) = fVar12;
        if (uVar7 < uVar2) {
          uVar7 = uVar7 + 1;
          *(uint *)(param_1 + 0x170) = uVar7;
          fVar10 = fVar10 + fVar11;
        }
        else {
          fVar10 = fVar9;
        }
        uVar5 = uVar5 + 1;
        *(float *)(param_1 + 0x16c) = fVar10;
        *param_2 = (float)iVar3 * 4.656613e-10 * fVar12 * fVar10;
        if (uVar1 <= uVar5) {
          fVar12 = 1.0;
          uVar5 = 0;
          uVar6 = 0;
          uVar4 = 0;
          *(undefined2 *)(param_1 + 100) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
        }
        iVar8 = iVar8 + -1;
        param_2 = param_2 + 1;
      } while (iVar8 != 0);
    }
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}


