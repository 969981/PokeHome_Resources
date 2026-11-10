/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9a18; name: FUN_.text__004e9a18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004e9a18(float param_1,long param_2,int param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    param_4[8] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78);
    iVar2 = FUN__text__004f47e8(uVar4);
    puVar1 = _DAT_008a4b68;
    dVar6 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68);
    dVar6 = ((double)iVar2 * 1000.0) / dVar6;
    dVar7 = 0.5;
    if (dVar6 <= 0.0) {
      dVar7 = -0.5;
    }
    param_4[1] = (int)(dVar7 + dVar6);
    iVar2 = FUN__text__004f4810(uVar4);
    dVar6 = (double)NEON_ucvtf((ulong)*puVar1);
    dVar6 = ((double)iVar2 * 1000.0) / dVar6;
    dVar7 = 0.5;
    if (dVar6 <= 0.0) {
      dVar7 = -0.5;
    }
    param_4[2] = (int)(dVar7 + dVar6);
    iVar2 = FUN__text__004f47f4(uVar4);
    dVar7 = (double)NEON_ucvtf((ulong)*puVar1);
    dVar6 = ((double)iVar2 * 1000.0) / dVar7;
    dVar9 = 0.5;
    if (dVar6 <= 0.0) {
      dVar9 = -0.5;
    }
    param_4[3] = (int)(dVar9 + dVar6);
    dVar7 = ((double)param_3 * 1000.0) / dVar7;
    dVar6 = 0.5;
    if (dVar7 <= 0.0) {
      dVar6 = -0.5;
    }
    *param_4 = (int)(dVar6 + dVar7);
    param_3 = *(int *)(*(long *)(param_2 + 0x18) + 0x90) - param_3;
    if (param_3 < 1) {
      iVar2 = 0;
    }
    else {
      dVar6 = (double)NEON_ucvtf((ulong)*puVar1);
      dVar6 = ((double)param_3 * 1000.0) / dVar6;
      dVar7 = 0.5;
      if (dVar6 <= 0.0) {
        dVar7 = -0.5;
      }
      iVar2 = (int)(dVar7 + dVar6);
    }
    param_4[4] = iVar2;
    lVar3 = FUN__text__004f2a20(uVar4);
    fVar5 = (float)NEON_ucvtf(*puVar1);
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 8));
    fVar5 = 1.0 / (fVar5 * param_1);
    param_4[6] = (int)(fVar5 * fVar8);
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 4));
    param_4[5] = (int)(fVar5 * fVar8);
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0xc));
    param_4[7] = (int)(fVar5 * fVar8);
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x10));
    param_4[8] = (int)(fVar5 * fVar8);
  }
  return 1;
}


