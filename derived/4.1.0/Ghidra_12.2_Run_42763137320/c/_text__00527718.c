/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527718; name: FUN_.text__00527718
 */


void FUN__text__00527718(float param_1,double *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  
  puVar1 = (undefined4 *)FUN__text__00492bb0(param_4,2,1);
  if (puVar1 != (undefined4 *)0x0) {
    local_68 = 0;
    local_60 = 0.0;
    local_58 = 0;
    lVar2 = *(long *)(*(long *)(param_5 + 8) + 0x38);
    fVar4 = *(float *)(lVar2 + 0x90) +
            *(float *)(lVar2 + 0x98) * (*(float *)(lVar2 + 0x78) - *(float *)(lVar2 + 0x90));
    fVar5 = *(float *)((long)param_2 + 0xa4);
    if (*(float *)((long)param_2 + 0xa4) <= fVar4) {
      fVar5 = fVar4;
    }
    fVar4 = (float)FUN__text__00527960(*(undefined4 *)(param_2 + 3),
                                       *(undefined4 *)((long)param_2 + 0x1c),
                                       *(undefined4 *)(param_2 + 4),
                                       *(undefined4 *)((long)param_2 + 0x24),
                                       *(undefined4 *)(param_2 + 5),
                                       *(undefined4 *)((long)param_2 + 0x2c),&local_68);
    uVar12 = *(undefined4 *)((long)param_2 + 0x34);
    uVar13 = *(undefined4 *)(param_2 + 7);
    uVar16 = *(undefined4 *)((long)param_2 + 0x2c);
    uVar14 = *(undefined4 *)((long)param_2 + 0x24);
    uVar15 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x58);
    *puVar1 = *(undefined4 *)(param_2 + 6);
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    *(undefined8 *)(puVar1 + 6) = local_68;
    *(double *)(puVar1 + 8) = local_60;
    puVar1[4] = uVar15;
    puVar1[5] = uVar16;
    *(undefined8 *)(puVar1 + 10) = local_58;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    puVar1[0x17] = 0x42c80000;
    *(undefined8 *)(puVar1 + 0x1c) = uVar3;
    puVar1[0x19] = 0xffffffff;
    puVar1[0x1a] = 0;
    puVar1[0x14] = 0;
    dVar8 = (double)(ulong)(uint)(fVar5 * 100.0);
    puVar1[0x15] = fVar5 * 100.0;
    puVar1[0x16] = fVar4 * 15.915494;
    dVar11 = local_60;
    FUN__text__00480e64(param_5,*(undefined8 *)(param_3 + 8),puVar1);
    if (*(long *)(param_5 + 0x98) != 0) {
      dVar6 = (double)FUN__text__0047da2c(param_5);
      fVar4 = (float)(dVar8 - param_2[1]);
      fVar5 = (float)(dVar6 - *param_2);
      fVar9 = (float)(dVar11 - param_2[2]);
      fVar7 = ABS(*(float *)(param_2 + 3) * fVar5 + fVar4 * *(float *)((long)param_2 + 0x1c) +
                  fVar9 * *(float *)(param_2 + 4));
      fVar10 = ABS(*(float *)((long)param_2 + 0x24) * fVar5 + fVar4 * *(float *)(param_2 + 5) +
                   fVar9 * *(float *)((long)param_2 + 0x2c));
      fVar5 = ABS(*(float *)(param_2 + 6) * fVar5 + fVar4 * *(float *)((long)param_2 + 0x34) +
                  fVar9 * *(float *)(param_2 + 7));
      fVar4 = fVar7 - *(float *)((long)param_2 + 0x3c);
      fVar4 = fVar4 * fVar4;
      if (fVar7 <= *(float *)((long)param_2 + 0x3c)) {
        fVar4 = 0.0;
      }
      fVar7 = fVar10 - *(float *)(param_2 + 8);
      fVar7 = fVar7 * fVar7;
      if (fVar10 <= *(float *)(param_2 + 8)) {
        fVar7 = -0.0;
      }
      fVar9 = fVar5 - *(float *)((long)param_2 + 0x44);
      fVar9 = fVar9 * fVar9;
      if (fVar5 <= *(float *)((long)param_2 + 0x44)) {
        fVar9 = -0.0;
      }
      FUN__text__00480e30(SQRT(fVar7 + fVar4 + fVar9),param_5,*(undefined8 *)(param_3 + 8),puVar1);
    }
    fVar5 = *(float *)((long)param_2 + 0xa4);
    if (*(float *)((long)param_2 + 0xa4) <= param_1) {
      fVar5 = param_1;
    }
    FUN__text__00527200(fVar5,param_2,param_3,10,param_4);
  }
  return;
}


