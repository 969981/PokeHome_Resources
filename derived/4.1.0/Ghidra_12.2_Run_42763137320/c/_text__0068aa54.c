/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068aa54; name: FUN_.text__0068aa54
 */


void FUN__text__0068aa54(float param_1,float *param_2,long param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = *(ushort *)(param_3 + 0x18);
  if (*(char *)(*(long *)(param_2 + 10) + 9) == '\0') {
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14));
    fVar11 = (float)uVar2 / fVar10;
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16));
    fVar10 = (float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar2) / fVar10;
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10));
    fVar3 = (float)*(ushort *)(param_3 + 0x1a) / fVar13;
    fVar4 = param_2[3] * fVar4;
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    fVar5 = param_2[4] * fVar5;
    fVar12 = param_2[6];
    fVar13 = (float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) / fVar13
    ;
    lVar8 = *(long *)(param_2 + 0xc);
    iVar6 = *(int *)(lVar8 + 0x9c);
    if (*(int *)(lVar8 + 0x98) <= iVar6) {
      return;
    }
  }
  else {
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14));
    fVar11 = ((float)uVar2 + -0.5) / fVar10;
    fVar10 = ((float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar2) + 0.5) / fVar10;
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16));
    param_1 = param_1 + param_2[3] * -0.5;
    fVar12 = param_2[6] + param_2[4] * -0.5;
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10));
    fVar4 = param_2[3] * (fVar4 + 1.0);
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    fVar5 = param_2[4] * (fVar5 + 1.0);
    fVar3 = ((float)*(ushort *)(param_3 + 0x1a) + -0.5) / fVar13;
    fVar13 = ((float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) + 0.5)
             / fVar13;
    lVar8 = *(long *)(param_2 + 0xc);
    iVar6 = *(int *)(lVar8 + 0x9c);
    if (*(int *)(lVar8 + 0x98) <= iVar6) {
      return;
    }
  }
  *(int *)(lVar8 + 0x9c) = iVar6 + 1;
  pfVar9 = (float *)(*(long *)(*(long *)(param_2 + 0xc) + 0xa0) + (long)iVar6 * 0x38);
  *pfVar9 = fVar4;
  pfVar9[1] = fVar5;
  pfVar9[2] = param_1;
  pfVar9[3] = fVar12;
  pfVar9[4] = *param_2;
  pfVar9[5] = param_2[1];
  uVar1 = *(undefined1 *)((long)param_2 + 0x39);
  pfVar9[6] = fVar11;
  pfVar9[7] = 1.0 - fVar3;
  pfVar9[8] = fVar10;
  pfVar9[9] = 1.0 - fVar13;
  *(undefined1 *)((long)pfVar9 + 0x33) = uVar1;
  fVar10 = param_2[9];
  fVar12 = param_2[3];
  iVar6 = (**(code **)(**(long **)(param_2 + 10) + 0x20))();
  *(short *)(pfVar9 + 0xc) = (short)(int)(fVar10 * fVar12 * (float)iVar6);
  iVar6 = (**(code **)(**(long **)(param_2 + 10) + 0x28))();
  fVar10 = -0.0;
  if (*(char *)(*(long *)(param_2 + 10) + 9) != '\0') {
    fVar10 = param_2[4];
  }
  FUN__text__0068bb30(param_2[4] * (float)iVar6 + fVar10,*(undefined8 *)(param_2 + 0xc));
  *(undefined1 *)((long)pfVar9 + 0x32) = *(undefined1 *)(param_3 + 0x2a);
  uVar7 = (**(code **)(**(long **)(param_2 + 10) + 0x118))();
  *(ulong *)(pfVar9 + 10) = *(ulong *)(param_3 + 0x20) | uVar7 & 1;
  return;
}


