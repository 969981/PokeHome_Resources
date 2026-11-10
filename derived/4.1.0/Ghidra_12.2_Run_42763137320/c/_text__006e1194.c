/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e1194; name: FUN_.text__006e1194
 */


void FUN__text__006e1194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,long param_5,long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = param_8[5];
  uVar12 = param_8[4];
  uVar9 = param_8[1];
  uVar6 = *param_8;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar15 = *(undefined4 *)(param_8 + 0x10);
  uVar14 = *(undefined4 *)((long)param_8 + 0x84);
  iVar3 = *(int *)(param_8 + 0xe);
  uVar10 = param_8[3];
  uVar7 = param_8[2];
  iVar4 = *(int *)(param_6 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  uVar11 = param_8[9];
  uVar8 = param_8[8];
  puVar5 = (undefined8 *)FUN__text__006ea4a0(param_3,&local_70,0x60);
  if (puVar5 == (undefined8 *)0x0) {
    FUN__text__006d84a0(0,0x8000);
    iVar3 = *(int *)(param_6 + 8);
  }
  else {
    *(undefined4 *)(puVar5 + 9) = 0;
    *(undefined4 *)((long)puVar5 + 0x4c) = uVar14;
    *(undefined4 *)((long)puVar5 + 0x5c) = 0;
    puVar5[1] = uVar13;
    *puVar5 = uVar12;
    *(undefined4 *)(puVar5 + 8) = uVar15;
    *(float *)((long)puVar5 + 0x44) = (float)(iVar3 + iVar4 * (iVar3 + -1));
    puVar5[2] = uVar1;
    puVar5[3] = uVar2;
    puVar5[5] = uVar9;
    puVar5[4] = uVar6;
    puVar5[7] = uVar10;
    puVar5[6] = uVar7;
    puVar5[10] = uVar8;
    *(int *)(puVar5 + 0xb) = (int)uVar11;
    iVar3 = *(int *)(param_5 + 0x148);
    if (*(int *)(param_5 + 0x144) != -1) {
      FUN__text__006ee1d4(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
    }
    if (iVar3 != -1) {
      FUN__text__006ee1d4(param_1,iVar3,4,&local_70,0x60);
    }
    FUN__text__006ea5b8(param_3);
    FUN__text__006ec978(param_1,4,*(undefined4 *)(param_8 + 0xf),
                        *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x7c));
    iVar3 = *(int *)(param_6 + 8);
  }
  if (iVar3 == 1) {
    uVar13 = param_8[5];
    uVar12 = param_8[4];
    uVar9 = param_8[1];
    uVar6 = *param_8;
    iVar3 = *(int *)(param_8 + 0xe);
    local_70 = 0;
    uStack_68 = 0;
    iVar4 = *(int *)(param_6 + 0x28);
    uVar10 = param_8[3];
    uVar7 = param_8[2];
    uVar1 = *param_7;
    uVar2 = param_7[1];
    uVar15 = *(undefined4 *)(param_8 + 0x10);
    uVar14 = *(undefined4 *)((long)param_8 + 0x84);
    uVar11 = param_8[9];
    uVar8 = param_8[8];
    puVar5 = (undefined8 *)FUN__text__006ea4a0(param_3,&local_70,0x60);
    if (puVar5 == (undefined8 *)0x0) {
      FUN__text__006d84a0(0,0x8000);
    }
    else {
      *(undefined4 *)((long)puVar5 + 0x4c) = uVar14;
      *(undefined4 *)((long)puVar5 + 0x5c) = 0;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      *(undefined4 *)(puVar5 + 8) = uVar15;
      *(float *)((long)puVar5 + 0x44) = (float)(iVar3 + iVar4 * (iVar3 + -1));
      puVar5[2] = uVar1;
      puVar5[3] = uVar2;
      *(undefined4 *)(puVar5 + 9) = 0x3f800000;
      puVar5[10] = uVar8;
      puVar5[5] = uVar9;
      puVar5[4] = uVar6;
      puVar5[7] = uVar10;
      puVar5[6] = uVar7;
      *(int *)(puVar5 + 0xb) = (int)uVar11;
      iVar3 = *(int *)(param_5 + 0x148);
      if (*(int *)(param_5 + 0x144) != -1) {
        FUN__text__006ee1d4(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
      }
      if (iVar3 != -1) {
        FUN__text__006ee1d4(param_1,iVar3,4,&local_70,0x60);
      }
      FUN__text__006ea5b8(param_3);
      FUN__text__006ec978(param_1,4,*(undefined4 *)(param_8 + 0xf),
                          *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x7c));
    }
  }
  return;
}


