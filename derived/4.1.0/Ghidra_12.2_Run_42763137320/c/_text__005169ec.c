/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005169ec; name: FUN_.text__005169ec
 */


void FUN__text__005169ec(long param_1,undefined8 *param_2,float *param_3,float *param_4,
                        undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = uVar1;
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  fVar3 = fVar3 - *(float *)(param_1 + 8);
  fVar2 = fVar2 - *(float *)(param_1 + 4);
  fVar4 = fVar4 - *(float *)(param_1 + 0xc);
  fVar7 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  *(float *)(param_1 + 0x50) = fVar7;
  fVar7 = 1.0 / fVar7;
  fVar2 = fVar7 * fVar2;
  fVar3 = fVar7 * fVar3;
  fVar7 = fVar7 * fVar4;
  *(float *)(param_1 + 0x10) = fVar2;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = fVar7;
  fVar5 = param_4[1] - *(float *)(param_1 + 8);
  fVar4 = *param_4 - *(float *)(param_1 + 4);
  fVar6 = param_4[2] - *(float *)(param_1 + 0xc);
  fVar8 = fVar4 * fVar2 + fVar3 * fVar5 + fVar7 * fVar6;
  fVar4 = fVar4 - fVar2 * fVar8;
  fVar5 = fVar5 - fVar3 * fVar8;
  fVar6 = fVar6 - fVar7 * fVar8;
  fVar8 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar8 == 0.0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar8;
    fVar4 = fVar4 * fVar8;
    fVar5 = fVar5 * fVar8;
    fVar6 = fVar6 * fVar8;
  }
  *(float *)(param_1 + 0x1c) = fVar3 * fVar6 - fVar7 * fVar5;
  *(float *)(param_1 + 0x20) = fVar7 * fVar4 - fVar6 * fVar2;
  *(float *)(param_1 + 0x24) = fVar5 * fVar2 - fVar3 * fVar4;
  *(float *)(param_1 + 0x28) = fVar7 * fVar5 - fVar3 * fVar6;
  *(float *)(param_1 + 0x2c) = fVar6 * fVar2 - fVar7 * fVar4;
  *(float *)(param_1 + 0x30) = fVar3 * fVar4 - fVar5 * fVar2;
  FUN__text__00516af0();
  return;
}


