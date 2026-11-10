/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dcfb4; name: FUN_.text__006dcfb4
 */


void FUN__text__006dcfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,long param_5,long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar12 = param_8[5];
  uVar11 = param_8[4];
  uVar8 = param_8[1];
  uVar5 = *param_8;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  fVar15 = *(float *)(param_6 + 0x10);
  uVar14 = *(undefined4 *)((long)param_8 + 0x7c);
  uVar13 = *(undefined4 *)(param_8 + 0x10);
  uVar9 = param_8[3];
  uVar6 = param_8[2];
  iVar3 = *(int *)(param_8 + 0xe);
  local_70 = 0;
  uStack_68 = 0;
  uVar10 = param_8[9];
  uVar7 = param_8[8];
  puVar4 = (undefined8 *)FUN__text__006ea4a0(param_3,&local_70,0x60);
  if (puVar4 == (undefined8 *)0x0) {
    FUN__text__006d84a0(0,0x8000);
    iVar3 = *(int *)(param_6 + 8);
  }
  else {
    *(undefined4 *)(puVar4 + 9) = 0;
    *(undefined4 *)((long)puVar4 + 0x4c) = uVar13;
    *(undefined4 *)((long)puVar4 + 0x5c) = 0;
    puVar4[1] = uVar12;
    *puVar4 = uVar11;
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
    *(undefined4 *)(puVar4 + 8) = uVar14;
    *(float *)((long)puVar4 + 0x44) = (float)iVar3 + (float)(iVar3 + -1) * fVar15;
    puVar4[5] = uVar8;
    puVar4[4] = uVar5;
    puVar4[7] = uVar9;
    puVar4[6] = uVar6;
    puVar4[10] = uVar7;
    *(int *)(puVar4 + 0xb) = (int)uVar10;
    iVar3 = *(int *)(param_5 + 0x148);
    if (*(int *)(param_5 + 0x144) != -1) {
      FUN__text__006ee1d4(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
    }
    if (iVar3 != -1) {
      FUN__text__006ee1d4(param_1,iVar3,4,&local_70,0x60);
    }
    FUN__text__006ea5b8(param_3);
    FUN__text__006ec978(param_1,4,*(undefined4 *)(param_8 + 0xf),
                        *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x74));
    iVar3 = *(int *)(param_6 + 8);
  }
  if (iVar3 == 1) {
    uVar12 = param_8[5];
    uVar11 = param_8[4];
    uVar8 = param_8[1];
    uVar5 = *param_8;
    fVar15 = *(float *)(param_6 + 0x10);
    local_70 = 0;
    uStack_68 = 0;
    iVar3 = *(int *)(param_8 + 0xe);
    uVar9 = param_8[3];
    uVar6 = param_8[2];
    uVar1 = *param_7;
    uVar2 = param_7[1];
    uVar14 = *(undefined4 *)((long)param_8 + 0x7c);
    uVar13 = *(undefined4 *)(param_8 + 0x10);
    uVar10 = param_8[9];
    uVar7 = param_8[8];
    puVar4 = (undefined8 *)FUN__text__006ea4a0(param_3,&local_70,0x60);
    if (puVar4 == (undefined8 *)0x0) {
      FUN__text__006d84a0(0,0x8000);
    }
    else {
      *(undefined4 *)((long)puVar4 + 0x4c) = uVar13;
      *(undefined4 *)((long)puVar4 + 0x5c) = 0;
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      puVar4[2] = uVar1;
      puVar4[3] = uVar2;
      *(undefined4 *)(puVar4 + 9) = 0x3f800000;
      puVar4[5] = uVar8;
      puVar4[4] = uVar5;
      puVar4[7] = uVar9;
      puVar4[6] = uVar6;
      *(undefined4 *)(puVar4 + 8) = uVar14;
      *(float *)((long)puVar4 + 0x44) = (float)iVar3 + (float)(iVar3 + -1) * fVar15;
      puVar4[10] = uVar7;
      *(int *)(puVar4 + 0xb) = (int)uVar10;
      iVar3 = *(int *)(param_5 + 0x148);
      if (*(int *)(param_5 + 0x144) != -1) {
        FUN__text__006ee1d4(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
      }
      if (iVar3 != -1) {
        FUN__text__006ee1d4(param_1,iVar3,4,&local_70,0x60);
      }
      FUN__text__006ea5b8(param_3);
      FUN__text__006ec978(param_1,4,*(undefined4 *)(param_8 + 0xf),
                          *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x74));
    }
  }
  return;
}


