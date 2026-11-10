/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005209ec; name: FUN_.text__005209ec
 */


void FUN__text__005209ec(double *param_1)

{
  long *plVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  
  param_1[0xb3] = 0.0;
  *(undefined4 *)(param_1 + 0xb2) = 0x3f000000;
  param_1[0xb4] = 0.0;
  param_1[0xb5] = 0.0;
  param_1[0xb6] = 0.0;
  param_1[0xb7] = 0.0;
  param_1[0xb8] = 0.0;
  param_1[0xb9] = 0.0;
  param_1[0xba] = 0.0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  if (((long *)param_1[0x51] == (long *)0x0) || (*(long *)param_1[0x51] == -1)) {
    uVar2 = 0;
    plVar1 = (long *)param_1[0x7f];
  }
  else {
    FUN__text__00520734(param_1 + 0x25,param_1 + 0xb2);
    uVar2 = 1;
    plVar1 = (long *)param_1[0x7f];
  }
  if ((plVar1 != (long *)0x0) && (*plVar1 != -1)) {
    FUN__text__00520734(param_1 + 0x53,param_1 + 0xb2);
    uVar2 = uVar2 + 1;
  }
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0xbb) = *(undefined4 *)(param_1 + 8);
    param_1[0xb3] = *param_1;
    param_1[0xb4] = param_1[1];
    *(undefined4 *)((long)param_1 + 0x5d4) = *(undefined4 *)((long)param_1 + 0x3c);
    param_1[0xb5] = param_1[2];
    param_1[0xb6] = param_1[3];
    *(undefined4 *)(param_1 + 0xb7) = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)((long)param_1 + 0x5bc) = *(undefined8 *)((long)param_1 + 0x24);
    *(undefined4 *)((long)param_1 + 0x5c4) = *(undefined4 *)((long)param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xba) = *(undefined4 *)(param_1 + 7);
    param_1[0xb9] = param_1[6];
    return;
  }
  if (uVar2 == 1) {
    dVar3 = param_1[0xb3];
    dVar4 = param_1[0xb4];
    dVar5 = param_1[0xb5];
  }
  else {
    dVar5 = 1.0 / (double)uVar2;
    dVar3 = param_1[0xb3] * dVar5;
    dVar4 = param_1[0xb4] * dVar5;
    dVar5 = param_1[0xb5] * dVar5;
    fVar8 = 1.0 / (float)uVar2;
    param_1[0xb3] = dVar3;
    param_1[0xb4] = dVar4;
    param_1[0xb5] = dVar5;
    *(float *)(param_1 + 0xb6) = *(float *)(param_1 + 0xb6) * fVar8;
    *(float *)((long)param_1 + 0x5b4) = *(float *)((long)param_1 + 0x5b4) * fVar8;
    *(float *)(param_1 + 0xb7) = *(float *)(param_1 + 0xb7) * fVar8;
    *(float *)((long)param_1 + 0x5bc) = *(float *)((long)param_1 + 0x5bc) * fVar8;
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) * fVar8;
    *(float *)((long)param_1 + 0x5c4) = *(float *)((long)param_1 + 0x5c4) * fVar8;
    fVar7 = *(float *)((long)param_1 + 0x5cc) * fVar8;
    fVar6 = *(float *)(param_1 + 0xb9) * fVar8;
    fVar8 = *(float *)(param_1 + 0xba) * fVar8;
    fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
    if (fVar10 == 0.0) {
      fVar6 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar10 = 1.0 / fVar10;
      fVar6 = fVar6 * fVar10;
      fVar7 = fVar7 * fVar10;
      fVar8 = fVar8 * fVar10;
    }
    *(float *)(param_1 + 0xb9) = fVar6;
    *(float *)((long)param_1 + 0x5cc) = fVar7;
    *(float *)(param_1 + 0xba) = fVar8;
    *(float *)((long)param_1 + 0x5d4) = *(float *)((long)param_1 + 0x5d4) * 0.5;
    *(float *)(param_1 + 0xbb) = *(float *)(param_1 + 0xbb) * 0.5;
  }
  dVar9 = (double)*(float *)((long)param_1 + 0x44);
  dVar3 = dVar3 + (dVar9 * (double)*(float *)(param_1 + 6) - *param_1);
  dVar4 = dVar4 + (dVar9 * (double)*(float *)((long)param_1 + 0x34) - param_1[1]);
  dVar5 = dVar5 + (dVar9 * (double)*(float *)(param_1 + 7) - param_1[2]);
  *(float *)(param_1 + 0xb2) =
       (float)(SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5) / (dVar9 + dVar9));
  return;
}


