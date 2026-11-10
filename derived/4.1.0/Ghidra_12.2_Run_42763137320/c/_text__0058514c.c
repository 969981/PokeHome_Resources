/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058514c; name: FUN_.text__0058514c
 */


undefined8 FUN__text__0058514c(long param_1,int *param_2,undefined4 *param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  short *psVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  psVar4 = *(short **)(param_2 + 2);
  uVar9 = 7;
  if ((*psVar4 == -1) && (*param_2 == 0x42)) {
    uVar10 = *(undefined4 *)(psVar4 + 10);
    *(undefined4 *)(param_1 + 0x68) = uVar10;
    uVar1 = psVar4[1];
    *param_3 = *(undefined4 *)(psVar4 + 2);
    param_3[1] = uVar10;
    uVar2 = (*(byte *)((long)param_3 + 10) & 0xf8) << 0x10 | (uVar1 & 0xff) << 8 | 0x50020;
    *(short *)(param_3 + 2) = (short)uVar2;
    *(char *)((long)param_3 + 10) = (char)(uVar2 >> 0x10);
    param_3[4] = *(undefined4 *)(psVar4 + 2);
    uVar10 = *(undefined4 *)(psVar4 + 0xc);
    *(undefined4 *)(param_1 + 0xd4) = uVar10;
    param_3[5] = uVar10;
    uVar9 = *(undefined8 *)(psVar4 + 0x12);
    uVar6 = *(undefined8 *)(psVar4 + 0x1a);
    uVar7 = *(undefined8 *)(psVar4 + 0x1d);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(psVar4 + 0x16);
    uVar8 = *(undefined8 *)(psVar4 + 0xe);
    *(undefined8 *)(param_1 + 0x96) = uVar7;
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + 8;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(psVar4 + 2);
    *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(param_4 + 8);
    if (*(short *)(param_4 + 8) == 1) {
      param_3[8] = *(int *)(param_1 + 0x88) + param_2[5];
      iVar5 = param_2[4] + param_2[5];
    }
    else {
      param_3[8] = param_2[5] + *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x84);
      iVar5 = param_2[5] + *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x84);
    }
    param_3[9] = iVar5;
    uVar9 = 1;
    uVar10 = *(undefined4 *)(psVar4 + 4);
    param_3[6] = 1;
    fVar11 = (float)NEON_ucvtf(uVar10);
    param_3[7] = fVar11 * 0.001;
    if (*(int *)(param_1 + 0x84) != 0) {
      lVar3 = FUN__text__00400f80(5);
      *(long *)(param_1 + 0xa8) = lVar3;
      if (lVar3 == 0) {
        return 0x34;
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return uVar9;
}


