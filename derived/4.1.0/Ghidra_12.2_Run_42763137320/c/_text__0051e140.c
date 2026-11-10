/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051e140; name: FUN_.text__0051e140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0051e140(long param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar4 = 0.0;
  fVar9 = param_2[2];
  fVar6 = 0.0;
  fVar5 = 0.0;
  fVar10 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar2 = 0.0;
  if (fVar10 != 0.0) {
    fVar10 = 1.0 / fVar10;
    fVar6 = fVar7 * fVar10;
    fVar5 = fVar8 * fVar10;
    fVar2 = fVar9 * fVar10;
  }
  fVar9 = param_2[3];
  fVar11 = param_2[4];
  fVar8 = 0.0;
  fVar15 = param_2[5];
  fVar10 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar15 * fVar15);
  fVar7 = 0.0;
  if (fVar10 != 0.0) {
    fVar10 = 1.0 / fVar10;
    fVar4 = fVar9 * fVar10;
    fVar8 = fVar11 * fVar10;
    fVar7 = fVar15 * fVar10;
  }
  uVar12 = *(undefined8 *)(param_2 + 6);
  uVar13 = *(undefined8 *)(param_2 + 8);
  uVar14 = *(undefined8 *)(param_2 + 10);
  local_5c = fVar8 * fVar2 - fVar7 * fVar5;
  fVar10 = param_2[0xc];
  fVar9 = param_2[0xd];
  fStack_58 = fVar7 * fVar6 - fVar4 * fVar2;
  local_54 = fVar4 * fVar5 - fVar8 * fVar6;
  fVar11 = param_2[0xe];
  iVar1 = *(int *)(_DAT_008a45b0 + 0x80);
  if (iVar1 == 2) {
    local_74 = fVar4;
    fStack_70 = fVar8;
    local_6c = fVar7;
    fStack_68 = fVar6;
    local_64 = fVar5;
    fStack_60 = fVar2;
  }
  else if (iVar1 == 1) {
    local_74 = fVar6;
    fStack_70 = fVar5;
    local_6c = fVar2;
    fStack_68 = local_5c;
    local_64 = fStack_58;
    fStack_60 = local_54;
    local_5c = fVar4;
    fStack_58 = fVar8;
    local_54 = fVar7;
  }
  else {
    if (iVar1 != 0) {
      uVar3 = 0x3f800000;
      fVar6 = 0.0;
      fVar5 = 0.0;
      fVar4 = 0.0;
      goto LAB__text__0051e28c;
    }
    local_74 = local_5c;
    fStack_70 = fStack_58;
    local_6c = local_54;
    fStack_68 = fVar4;
    local_64 = fVar8;
    fStack_60 = fVar7;
    local_5c = fVar6;
    fStack_58 = fVar5;
    local_54 = fVar2;
  }
  uVar3 = FUN__text__0051f870(&local_74);
LAB__text__0051e28c:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(float *)(param_1 + 0x14) = fVar4;
  *(float *)(param_1 + 0x18) = fVar5;
  *(float *)(param_1 + 0x1c) = fVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar14;
  *(float *)(param_1 + 0x38) = fVar10;
  *(float *)(param_1 + 0x3c) = fVar9;
  *(float *)(param_1 + 0x40) = fVar11;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x12);
  return 1;
}


