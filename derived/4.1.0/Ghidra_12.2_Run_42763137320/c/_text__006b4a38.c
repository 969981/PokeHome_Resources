/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4a38; name: FUN_.text__006b4a38
 */


void FUN__text__006b4a38(long *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_18;
  
  FUN__text__006c1910(param_2,param_3);
  if ((*(byte *)(param_3 + 0x194) >> 3 & 1) != 0) {
    local_18 = 0;
    (**(code **)(*param_1 + 0x60))(param_1,&local_18);
    bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
    if (bVar1 == 0) {
      local_18._4_4_ = 0.0;
    }
    else if (bVar1 != 2) {
      local_18._4_4_ = -local_18._4_4_;
    }
    fVar2 = (float)*param_2;
    fVar10 = fVar2 * 0.0;
    fVar3 = (float)((ulong)*param_2 >> 0x20);
    fVar11 = fVar3 * 0.0;
    fVar4 = (float)param_2[1];
    fVar12 = fVar4 * 0.0;
    fVar5 = (float)((ulong)param_2[1] >> 0x20);
    fVar13 = fVar5 * 0.0;
    fVar6 = (float)param_2[2];
    fVar7 = (float)((ulong)param_2[2] >> 0x20);
    fVar8 = (float)param_2[3];
    fVar9 = (float)((ulong)param_2[3] >> 0x20);
    fVar14 = (float)param_2[4];
    fVar15 = (float)((ulong)param_2[4] >> 0x20);
    fVar16 = (float)param_2[5];
    fVar17 = (float)((ulong)param_2[5] >> 0x20);
    param_2[5] = CONCAT44(fVar17 + fVar13 + fVar9 * 0.0 + 0.0,fVar16 + fVar12 + fVar8 * 0.0 + 0.0);
    param_2[4] = CONCAT44(fVar15 + fVar11 + fVar7 * 0.0 + 0.0,fVar14 + fVar10 + fVar6 * 0.0 + 0.0);
    param_2[1] = CONCAT44(fVar5 + fVar9 * 0.0 + fVar17 * 0.0 + 0.0,
                          fVar4 + fVar8 * 0.0 + fVar16 * 0.0 + 0.0);
    *param_2 = CONCAT44(fVar3 + fVar7 * 0.0 + fVar15 * 0.0 + 0.0,
                        fVar2 + fVar6 * 0.0 + fVar14 * 0.0 + 0.0);
    param_2[3] = CONCAT44(local_18._4_4_ + fVar9 + fVar13 + fVar17 * 0.0,
                          fVar8 + fVar12 + fVar16 * 0.0 + 0.0);
    param_2[2] = CONCAT44(fVar7 + fVar11 + fVar15 * 0.0 + 0.0,fVar6 + fVar10 + fVar14 * 0.0 + 0.0);
  }
  return;
}


