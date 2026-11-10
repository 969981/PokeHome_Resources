/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005402a4; name: FUN_.text__005402a4
 */


undefined8 FUN__text__005402a4(double *param_1,long param_2)

{
  long lVar1;
  double dVar2;
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
  float fVar18;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  
  FUN__text__00540418(param_1[5]);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar9 = *(float *)((long)param_1 + 0x1c);
  fVar8 = *(float *)(param_1 + 4);
  fVar11 = fVar9 * fVar7 - fVar8 * fVar6;
  fVar4 = (float)(param_1[1] - *(double *)(param_2 + 0x28));
  fVar10 = *(float *)(param_1 + 3);
  fVar13 = *(float *)(param_2 + 0x10);
  fVar12 = *(float *)(param_2 + 0x14);
  fVar14 = fVar8 * fVar12 - fVar10 * fVar7;
  fVar16 = fVar10 * fVar6 - fVar9 * fVar12;
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x58);
  fVar3 = (float)(*param_1 - *(double *)(param_2 + 0x20));
  fVar5 = (float)(param_1[2] - *(double *)(param_2 + 0x30));
  fVar11 = fVar11 + fVar11;
  fVar14 = fVar14 + fVar14;
  fVar16 = fVar16 + fVar16;
  fVar15 = fVar7 * fVar4 - fVar6 * fVar5;
  fVar17 = fVar12 * fVar5 - fVar7 * fVar3;
  fVar18 = fVar6 * fVar3 - fVar12 * fVar4;
  fVar15 = fVar15 + fVar15;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fStack_30 = ((fVar8 + fVar6 * fVar11 + fVar13 * fVar16) - fVar12 * fVar14) /
              *(float *)(param_2 + 0x40);
  local_3c = ((fVar5 + fVar13 * fVar18 + fVar6 * fVar15) - fVar12 * fVar17) /
             *(float *)(param_2 + 0x40);
  local_44 = ((fVar3 - fVar6 * fVar18) + fVar13 * fVar15 + fVar7 * fVar17) /
             *(float *)(param_2 + 0x38);
  fStack_40 = ((fVar4 + fVar12 * fVar18 + fVar13 * fVar17) - fVar7 * fVar15) /
              *(float *)(param_2 + 0x3c);
  fStack_38 = ((fVar10 + fVar13 * fVar11 + fVar7 * fVar14) - fVar6 * fVar16) /
              *(float *)(param_2 + 0x38);
  local_34 = ((fVar9 - fVar7 * fVar11) + fVar12 * fVar16 + fVar13 * fVar14) /
             *(float *)(param_2 + 0x3c);
  local_2c = 1.0 / fStack_38;
  fStack_28 = 1.0 / local_34;
  local_24 = 1.0 / fStack_30;
  if (lVar1 != 0) {
    FUN__text__005405a0(*(long *)(param_2 + 8) + 0x50,lVar1,&local_44,param_1[5]);
  }
  dVar2 = param_1[5];
  if (*(char *)((long)dVar2 + 0xa0) != '\0') {
    FUN__text__00540910(dVar2);
    *(undefined1 *)((long)dVar2 + 0xa0) = 0;
  }
  return 1;
}


