/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b40d0; name: FUN_.text__003b40d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b40d0(undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  fVar12 = (float)param_2;
  puVar9 = &local_60;
  iVar2 = *(int *)(param_3 + 0xbc);
  iVar3 = *(int *)(param_3 + 0xc0);
  param_4 = iVar2 + param_4;
  iVar1 = iVar3;
  if (param_4 <= iVar3) {
    iVar1 = param_4;
  }
  *(int *)(param_3 + 0xbc) = iVar1;
  puVar8 = _DAT_008a04a8;
  if (*(int *)(param_3 + 0xb8) == 1) {
    if (param_4 < iVar3) goto LAB__text__003b427c;
    puVar7 = (ulong *)FUN__text__003b8e30(*(long *)(param_3 + 0xb0) + 0x788,
                                          *(undefined4 *)(param_3 + 0x80));
    if (puVar7 != (ulong *)0x0) {
      uStack_48 = *puVar7;
      local_60 = 0;
      local_50 = &local_60;
      FUN__text__003aa1c0(*(undefined8 *)(param_3 + 0xb0),&local_50,0);
      FUN__text__003a14e8(local_60,1);
    }
    puVar8 = (undefined8 *)(param_3 + 0xa0);
    puVar9 = (undefined8 *)(param_3 + 0x90);
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0xb0) + 0x768);
  }
  else {
    if (*(int *)(param_3 + 0xb8) != 0) goto LAB__text__003b427c;
    fVar13 = (float)iVar2 / (float)iVar3;
    fVar15 = *(float *)(param_3 + 0x90);
    fVar17 = *(float *)(param_3 + 0xa0);
    fVar14 = (float)iVar1 / (float)iVar3;
    fVar12 = (float)(*(code *)*_DAT_008a04a8)(fVar14);
    fVar18 = *(float *)(param_3 + 0xa4);
    fVar16 = *(float *)(param_3 + 0x94);
    local_50 = (undefined8 *)CONCAT44(local_50._4_4_,fVar15 + fVar12 * (fVar17 - fVar15));
    fVar12 = (float)(*(code *)*puVar8)(fVar14);
    fVar17 = *(float *)(param_3 + 0xa8);
    fVar15 = *(float *)(param_3 + 0x98);
    local_50 = (undefined8 *)CONCAT44(fVar16 + fVar12 * (fVar18 - fVar16),(undefined4)local_50);
    fVar12 = (float)(*(code *)*puVar8)(fVar14);
    fVar14 = *(float *)(param_3 + 0x90);
    fVar16 = *(float *)(param_3 + 0xa0);
    uStack_48 = (ulong)(uint)(fVar15 + fVar12 * (fVar17 - fVar15));
    fVar12 = (float)(*(code *)*puVar8)(fVar13);
    fVar17 = *(float *)(param_3 + 0xa4);
    fVar15 = *(float *)(param_3 + 0x94);
    local_60 = CONCAT44(local_60._4_4_,fVar14 + fVar12 * (fVar16 - fVar14));
    fVar12 = (float)(*(code *)*puVar8)(fVar13);
    fVar16 = *(float *)(param_3 + 0xa8);
    fVar14 = *(float *)(param_3 + 0x98);
    local_60 = CONCAT44(fVar15 + fVar12 * (fVar17 - fVar15),(undefined4)local_60);
    fVar12 = (float)(*(code *)*puVar8)(fVar13);
    puVar8 = &local_50;
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0xb0) + 0x768);
    uStack_58 = (ulong)(uint)(fVar14 + fVar12 * (fVar16 - fVar14));
    param_2 = local_60;
  }
  fVar12 = (float)param_2;
  FUN__text__003b7c4c(uVar6,uVar5,puVar8,puVar9);
LAB__text__003b427c:
  if (*(int *)(param_3 + 0xc0) <= *(int *)(param_3 + 0xbc)) {
    if (*(int *)(param_3 + 0x88) != *(int *)(param_3 + 0x84)) {
      *(undefined4 *)(param_3 + 0xbc) = 0;
      *(undefined4 *)(param_3 + 0x88) = *(undefined4 *)(param_3 + 0x8c);
      uVar5 = FUN__text__003b3f6c(param_3);
      plVar10 = *(long **)(param_3 + 0xb0);
      *(undefined4 *)(param_3 + 0x8c) = uVar5;
      fVar14 = (float)(**(code **)(*plVar10 + 0xe0))(plVar10,*(undefined4 *)(param_3 + 0x88));
      bVar4 = (int)plVar10[0xd8] != 0;
      plVar11 = *(long **)(param_3 + 0xb0);
      fVar13 = 0.0;
      if (bVar4) {
        fVar13 = *(float *)((long)plVar10 + 0x6fc) * (float)*(int *)(plVar10[0x100] + 0x10);
      }
      fVar15 = -((float)*(int *)(plVar10[0x100] + 0x10) * *(float *)(plVar10 + 0xe0));
      if (bVar4) {
        fVar15 = 0.0;
      }
      *(undefined8 *)(param_3 + 0x98) = 0;
      *(ulong *)(param_3 + 0x90) = CONCAT44(fVar12 - fVar15,fVar14 - fVar13);
      fVar14 = (float)(**(code **)(*plVar11 + 0xe0))(plVar11,*(undefined4 *)(param_3 + 0x8c));
      bVar4 = (int)plVar11[0xd8] != 0;
      fVar13 = 0.0;
      if (bVar4) {
        fVar13 = *(float *)((long)plVar11 + 0x6fc) * (float)*(int *)(plVar11[0x100] + 0x10);
      }
      fVar15 = -((float)*(int *)(plVar11[0x100] + 0x10) * *(float *)(plVar11 + 0xe0));
      if (bVar4) {
        fVar15 = 0.0;
      }
      *(undefined8 *)(param_3 + 0xa8) = 0;
      *(ulong *)(param_3 + 0xa0) = CONCAT44(fVar12 - fVar15,fVar14 - fVar13);
      return;
    }
    FUN__text__003c3008(param_3);
  }
  return;
}


