/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00545340; name: FUN_.text__00545340
 */


ulong FUN__text__00545340(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                         int param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 *local_68;
  undefined8 *local_58;
  
  if (param_5 < *(int *)(param_3 + 900)) {
    iVar1 = FUN__text__00545900(param_1,param_2,param_3);
    uVar3 = FUN__text__00545340(param_1,param_2,*(undefined8 *)(param_3 + 0x300 + (long)iVar1 * 8),
                                &local_58,param_5,param_6);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)(param_3 + (long)iVar1 * 0x30);
      dVar10 = (double)param_2[5];
      uVar2 = 0;
      uVar8 = NEON_fminnm(param_2[1],puVar5[1]);
      uVar7 = NEON_fminnm(*param_2,*puVar5);
      dVar11 = (double)param_2[3];
      if ((double)param_2[3] <= (double)puVar5[3]) {
        dVar11 = (double)puVar5[3];
      }
      uVar9 = NEON_fminnm(param_2[2],puVar5[2]);
      dVar12 = (double)param_2[4];
      if ((double)param_2[4] <= (double)puVar5[4]) {
        dVar12 = (double)puVar5[4];
      }
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      if (dVar10 <= (double)puVar5[5]) {
        dVar10 = (double)puVar5[5];
      }
      puVar5[2] = uVar9;
      puVar5[3] = dVar11;
      puVar5[4] = dVar12;
      puVar5[5] = dVar10;
    }
    else {
      puVar5 = *(undefined8 **)(param_3 + 0x300 + (long)iVar1 * 8);
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      dVar10 = (double)puVar5[3];
      dVar11 = (double)puVar5[4];
      dVar12 = (double)puVar5[5];
      if (1 < (int)*(uint *)(puVar5 + 0x70)) {
        lVar4 = (ulong)*(uint *)(puVar5 + 0x70) - 1;
        pdVar6 = (double *)(puVar5 + 0xb);
        do {
          lVar4 = lVar4 + -1;
          uVar8 = NEON_fminnm(uVar8,pdVar6[-4]);
          uVar7 = NEON_fminnm(uVar7,pdVar6[-5]);
          if (dVar10 <= pdVar6[-2]) {
            dVar10 = pdVar6[-2];
          }
          uVar9 = NEON_fminnm(uVar9,pdVar6[-3]);
          if (dVar11 <= pdVar6[-1]) {
            dVar11 = pdVar6[-1];
          }
          if (dVar12 <= *pdVar6) {
            dVar12 = *pdVar6;
          }
          pdVar6 = pdVar6 + 6;
        } while (lVar4 != 0);
      }
      puVar5 = (undefined8 *)(param_3 + (long)iVar1 * 0x30);
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      local_68 = local_58;
      puVar5[2] = uVar9;
      puVar5[3] = dVar10;
      puVar5[4] = dVar11;
      puVar5[5] = dVar12;
      local_98 = *local_58;
      uStack_90 = local_58[1];
      local_88 = local_58[2];
      dStack_80 = (double)local_58[3];
      local_78 = (double)local_58[4];
      dStack_70 = (double)local_58[5];
      if (1 < (int)*(uint *)(local_58 + 0x70)) {
        lVar4 = (ulong)*(uint *)(local_58 + 0x70) - 1;
        pdVar6 = (double *)(local_58 + 0xb);
        do {
          lVar4 = lVar4 + -1;
          uStack_90 = NEON_fminnm(uStack_90,pdVar6[-4]);
          local_98 = NEON_fminnm(local_98,pdVar6[-5]);
          if (dStack_80 <= pdVar6[-2]) {
            dStack_80 = pdVar6[-2];
          }
          local_88 = NEON_fminnm(local_88,pdVar6[-3]);
          if (local_78 <= pdVar6[-1]) {
            local_78 = pdVar6[-1];
          }
          if (dStack_70 <= *pdVar6) {
            dStack_70 = *pdVar6;
          }
          pdVar6 = pdVar6 + 6;
        } while (lVar4 != 0);
      }
      uVar2 = FUN__text__00545550(param_1,&local_98,param_3,param_4,param_6);
    }
  }
  else {
    if (*(int *)(param_3 + 900) == param_5) {
      uVar3 = FUN__text__00545550(param_1,param_2,param_3,param_4,param_6);
      return uVar3;
    }
    uVar2 = 0;
  }
  return (ulong)(uVar2 & 1);
}


