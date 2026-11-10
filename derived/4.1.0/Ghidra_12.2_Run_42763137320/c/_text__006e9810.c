/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e9810; name: FUN_.text__006e9810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006e9810(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,
                        undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar14 = *(undefined8 **)(param_3 + 0x418);
  if (*(int *)((long)puVar14 + 0x24) != 0) {
    if (param_4 == 3) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
    }
    lVar15 = *(long *)(*(long *)(param_3 + 0x238) + 0x338);
    uVar12 = *(undefined8 *)(param_6 + 0x30);
    uVar7 = FUN__text__006dd36c(param_2,param_3,param_4,lVar13);
    if ((uVar7 & 1) != 0) {
      uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3d0);
      uVar8 = FUN__text__006eb02c(param_3 + 0x7a8,*(undefined4 *)(puVar14 + 5));
      FUN__text__006ed12c(param_2,uVar16,uVar8,0x50,*(undefined8 *)(param_3 + 0x818));
      plVar6 = _DAT_008a6bd0;
      uVar8 = *puVar14;
      uVar2 = puVar14[1];
      uVar11 = puVar14[3];
      uVar16 = *(undefined4 *)(param_3 + 0x44);
      uVar10 = puVar14[2];
      uVar1 = *(undefined8 *)(*_DAT_008a6bd0 + 8);
      uVar3 = *(undefined8 *)(*_DAT_008a6bd0 + 0x10);
      iVar4 = *(int *)((long)puVar14 + 0x24);
      local_80 = 0;
      uStack_78 = 0;
      iVar5 = *(int *)(*(long *)(param_3 + 0xa0) + 0x8b8);
      puVar9 = (undefined8 *)FUN__text__006ea4a0(uVar12,&local_80,0x60);
      if (puVar9 == (undefined8 *)0x0) {
        FUN__text__006d84a0(0,0x8000);
        iVar4 = *(int *)(lVar15 + 8);
      }
      else {
        *(undefined4 *)(puVar9 + 9) = 0;
        puVar9[4] = uVar1;
        puVar9[5] = uVar3;
        *(float *)((long)puVar9 + 0x4c) = (float)iVar5;
        puVar9[6] = uVar1;
        puVar9[7] = uVar3;
        *(undefined4 *)(puVar9 + 8) = uVar16;
        *(float *)((long)puVar9 + 0x44) = (float)iVar4 * 0.5;
        *puVar9 = uVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar8;
        puVar9[3] = uVar2;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        iVar4 = *(int *)(lVar13 + 0x148);
        if (*(int *)(lVar13 + 0x144) != -1) {
          FUN__text__006ee1d4(param_2,*(int *)(lVar13 + 0x144),0,&local_80,0x60);
        }
        if (iVar4 != -1) {
          FUN__text__006ee1d4(param_2,iVar4,4,&local_80,0x60);
        }
        FUN__text__006ea5b8(uVar12);
        FUN__text__006ec978(param_2,4,*(undefined4 *)((long)puVar14 + 0x24),0);
        iVar4 = *(int *)(lVar15 + 8);
      }
      if (iVar4 == 1) {
        uVar8 = puVar14[2];
        uVar3 = puVar14[3];
        uVar16 = *(undefined4 *)(param_3 + 0x44);
        iVar4 = *(int *)((long)puVar14 + 0x24);
        uVar1 = *puVar14;
        uVar10 = puVar14[1];
        uVar2 = *(undefined8 *)(*plVar6 + 8);
        uVar11 = *(undefined8 *)(*plVar6 + 0x10);
        local_80 = 0;
        uStack_78 = 0;
        iVar5 = *(int *)(*(long *)(param_3 + 0xa0) + 0x8b8);
        puVar9 = (undefined8 *)FUN__text__006ea4a0(uVar12,&local_80,0x60);
        if (puVar9 == (undefined8 *)0x0) {
          FUN__text__006d84a0(0,0x8000);
        }
        else {
          puVar9[4] = uVar2;
          puVar9[5] = uVar11;
          *(undefined4 *)(puVar9 + 8) = uVar16;
          *(float *)((long)puVar9 + 0x44) = (float)iVar4 * 0.5;
          *(float *)((long)puVar9 + 0x4c) = (float)iVar5;
          puVar9[6] = uVar2;
          puVar9[7] = uVar11;
          *puVar9 = uVar8;
          puVar9[1] = uVar3;
          puVar9[2] = uVar1;
          puVar9[3] = uVar10;
          *(undefined4 *)(puVar9 + 9) = 0x3f800000;
          puVar9[10] = 0;
          puVar9[0xb] = 0;
          iVar4 = *(int *)(lVar13 + 0x148);
          if (*(int *)(lVar13 + 0x144) != -1) {
            FUN__text__006ee1d4(param_2,*(int *)(lVar13 + 0x144),0,&local_80,0x60);
          }
          if (iVar4 != -1) {
            FUN__text__006ee1d4(param_2,iVar4,4,&local_80,0x60);
          }
          FUN__text__006ea5b8(uVar12);
          FUN__text__006ec978(param_2,4,*(undefined4 *)((long)puVar14 + 0x24),0);
        }
      }
    }
  }
  return;
}


