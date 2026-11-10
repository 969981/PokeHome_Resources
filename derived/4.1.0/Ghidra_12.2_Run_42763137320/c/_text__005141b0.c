/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005141b0; name: FUN_.text__005141b0
 */


ulong FUN__text__005141b0(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4,
                         int param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  undefined4 *local_68;
  undefined4 *local_58;
  
  if (param_5 < *(int *)(param_3 + 0x204)) {
    iVar1 = FUN__text__005146c0(param_1,param_2,param_3);
    uVar3 = FUN__text__005141b0(param_1,param_2,*(undefined8 *)(param_3 + 0x180 + (long)iVar1 * 8),
                                &local_58,param_5,param_6);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined4 *)(param_3 + (long)iVar1 * 0x18);
      fVar12 = (float)param_2[4];
      fVar10 = (float)param_2[5];
      uVar2 = 0;
      uVar8 = NEON_fminnm(param_2[1],puVar5[1]);
      uVar7 = NEON_fminnm(*param_2,*puVar5);
      fVar11 = (float)param_2[3];
      if ((float)param_2[3] <= (float)puVar5[3]) {
        fVar11 = (float)puVar5[3];
      }
      uVar9 = NEON_fminnm(param_2[2],puVar5[2]);
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      if (fVar10 <= (float)puVar5[5]) {
        fVar10 = (float)puVar5[5];
      }
      if (fVar12 <= (float)puVar5[4]) {
        fVar12 = (float)puVar5[4];
      }
      puVar5[2] = uVar9;
      puVar5[3] = fVar11;
      puVar5[4] = fVar12;
      puVar5[5] = fVar10;
    }
    else {
      puVar5 = *(undefined4 **)(param_3 + 0x180 + (long)iVar1 * 8);
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      fVar10 = (float)puVar5[3];
      fVar11 = (float)puVar5[4];
      fVar12 = (float)puVar5[5];
      if (1 < (int)puVar5[0x80]) {
        lVar4 = (ulong)(uint)puVar5[0x80] - 1;
        pfVar6 = (float *)(puVar5 + 0xb);
        do {
          lVar4 = lVar4 + -1;
          uVar8 = NEON_fminnm(uVar8,pfVar6[-4]);
          uVar7 = NEON_fminnm(uVar7,pfVar6[-5]);
          if (fVar10 <= pfVar6[-2]) {
            fVar10 = pfVar6[-2];
          }
          uVar9 = NEON_fminnm(uVar9,pfVar6[-3]);
          if (fVar11 <= pfVar6[-1]) {
            fVar11 = pfVar6[-1];
          }
          if (fVar12 <= *pfVar6) {
            fVar12 = *pfVar6;
          }
          pfVar6 = pfVar6 + 6;
        } while (lVar4 != 0);
      }
      puVar5 = (undefined4 *)(param_3 + (long)iVar1 * 0x18);
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = fVar10;
      puVar5[4] = fVar11;
      puVar5[5] = fVar12;
      local_68 = local_58;
      local_80 = *local_58;
      uStack_7c = local_58[1];
      local_78 = local_58[2];
      fStack_74 = (float)local_58[3];
      local_70 = (float)local_58[4];
      fStack_6c = (float)local_58[5];
      if (1 < (int)local_58[0x80]) {
        lVar4 = (ulong)(uint)local_58[0x80] - 1;
        pfVar6 = (float *)(local_58 + 0xb);
        do {
          lVar4 = lVar4 + -1;
          uStack_7c = NEON_fminnm(uStack_7c,pfVar6[-4]);
          local_80 = NEON_fminnm(local_80,pfVar6[-5]);
          if (fStack_74 <= pfVar6[-2]) {
            fStack_74 = pfVar6[-2];
          }
          local_78 = NEON_fminnm(local_78,pfVar6[-3]);
          if (local_70 <= pfVar6[-1]) {
            local_70 = pfVar6[-1];
          }
          if (fStack_6c <= *pfVar6) {
            fStack_6c = *pfVar6;
          }
          pfVar6 = pfVar6 + 6;
        } while (lVar4 != 0);
      }
      uVar2 = FUN__text__005143c0(param_1,&local_80,param_3,param_4,param_6);
    }
  }
  else {
    if (*(int *)(param_3 + 0x204) == param_5) {
      uVar3 = FUN__text__005143c0(param_1,param_2,param_3,param_4,param_6);
      return uVar3;
    }
    uVar2 = 0;
  }
  return (ulong)(uVar2 & 1);
}


