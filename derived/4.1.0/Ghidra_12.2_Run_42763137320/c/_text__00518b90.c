/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00518b90; name: FUN_.text__00518b90
 */


void FUN__text__00518b90(undefined4 param_1,undefined8 param_2,undefined8 *param_3,
                        undefined8 param_4,double *param_5,double *param_6,undefined8 param_7,
                        undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
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
  undefined1 auVar19 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  
  lVar1 = FUN__text__0051c6cc(param_4);
  fVar4 = (float)(param_5[1] - *(double *)(lVar1 + 0x28));
  fVar6 = (float)(param_6[1] - *(double *)(lVar1 + 0x28));
  fVar9 = *(float *)(lVar1 + 0x18);
  fVar10 = *(float *)(lVar1 + 0x1c);
  fVar12 = *(float *)(lVar1 + 0x10);
  fVar11 = *(float *)(lVar1 + 0x14);
  fVar3 = (float)(*param_5 - *(double *)(lVar1 + 0x20));
  fVar7 = (float)(param_5[2] - *(double *)(lVar1 + 0x30));
  fVar5 = (float)(*param_6 - *(double *)(lVar1 + 0x20));
  fVar8 = (float)(param_6[2] - *(double *)(lVar1 + 0x30));
  fVar13 = fVar9 * fVar3 - fVar11 * fVar4;
  fVar15 = fVar10 * fVar4 - fVar9 * fVar7;
  fVar16 = fVar11 * fVar7 - fVar10 * fVar3;
  fVar14 = fVar9 * fVar5 - fVar11 * fVar6;
  fVar17 = fVar10 * fVar6 - fVar9 * fVar8;
  fVar18 = fVar11 * fVar8 - fVar10 * fVar5;
  fVar13 = fVar13 + fVar13;
  fVar15 = fVar15 + fVar15;
  fVar16 = fVar16 + fVar16;
  fVar14 = fVar14 + fVar14;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  local_5c = (fVar5 - fVar9 * fVar14) + fVar12 * fVar17 + fVar10 * fVar18;
  local_4c = ((fVar3 - fVar9 * fVar13) + fVar12 * fVar15 + fVar10 * fVar16) /
             *(float *)(lVar1 + 0x38);
  fStack_48 = ((fVar4 + fVar11 * fVar13 + fVar12 * fVar16) - fVar10 * fVar15) /
              *(float *)(lVar1 + 0x3c);
  local_44 = ((fVar7 + fVar12 * fVar13 + fVar9 * fVar15) - fVar11 * fVar16) /
             *(float *)(lVar1 + 0x40);
  local_58 = local_5c / *(float *)(lVar1 + 0x38);
  fStack_54 = ((fVar6 + fVar11 * fVar14 + fVar12 * fVar18) - fVar10 * fVar17) /
              *(float *)(lVar1 + 0x3c);
  local_50 = ((fVar8 + fVar12 * fVar14 + fVar9 * fVar17) - fVar11 * fVar18) /
             *(float *)(lVar1 + 0x40);
  fStack_60 = fStack_54;
  local_64 = FUN__text__00519ae8(param_3,lVar1,*(char *)((long)param_3 + 0x6c) == '\0');
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uVar2 = FUN__text__0051c61c(param_4);
  if ((uVar2 & 1) == 0) {
    do {
      auVar19 = FUN__text__0051c6e4(param_4);
      FUN__text__00517c30(param_1,param_2,auVar19._0_8_,auVar19._8_8_,param_3,&local_64,&local_80,
                          &local_4c,param_9,&local_58,param_6,*(undefined1 *)((long)param_3 + 0x6d))
      ;
      FUN__text__0051c68c(param_4);
      uVar2 = FUN__text__0051c61c(param_4);
    } while ((uVar2 & 1) == 0);
  }
  return;
}


