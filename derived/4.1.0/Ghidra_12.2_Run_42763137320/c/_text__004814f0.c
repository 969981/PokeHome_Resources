/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004814f0; name: FUN_.text__004814f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004814f0(undefined4 param_1,ulong param_2,float *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 auStack_440 [128];
  
  plVar2 = _DAT_008a47e8;
  uVar3 = (uint)param_2;
  uVar1 = uVar3 & 0xff;
  lVar5 = -((ulong)(uVar1 * 0xc + 0xf) & 0x1ff0);
  puVar10 = (undefined4 *)((long)auStack_440 + lVar5 + 0x400);
  fVar12 = *param_3;
  *(undefined8 *)((long)auStack_440 + lVar5 + 0x408) = 0x3f80000000000000;
  *(undefined4 *)((long)auStack_440 + lVar5 + 0x414) = 0;
  *puVar10 = 0x3f800000;
  *(float *)((long)auStack_440 + lVar5 + 0x404) = fVar12;
  *(float *)((long)auStack_440 + lVar5 + 0x410) = -fVar12;
  if ((uVar3 >> 0xe & 1) == 0) {
    uVar7 = 2;
  }
  else {
    *(undefined4 *)((long)auStack_440 + lVar5 + 0x420) = 0;
    *(undefined8 *)((long)auStack_440 + lVar5 + 0x418) = 0x3f800000;
    uVar7 = 3;
  }
  if ((param_2 >> 0xc & 0x210) != 0) {
    uVar6 = (uint)uVar7;
    if (((uint)(param_2 >> 0xc) & 0x210) == 0x210) {
      fVar13 = param_3[1];
      fVar14 = param_3[2];
      puVar9 = puVar10 + uVar7 * 3;
      puVar8 = puVar10 + (ulong)(uVar6 + 1) * 3;
      uVar6 = uVar6 + 2;
      puVar9[1] = fVar14;
      puVar9[2] = 0;
      *puVar9 = 0x3f800000;
      puVar8[2] = 0;
      *puVar8 = 0x3f800000;
      puVar8[1] = -fVar14;
    }
    else {
      fVar13 = param_3[1] + (param_3[2] - param_3[1]) * 0.5;
    }
    puVar9 = puVar10 + (ulong)uVar6 * 3;
    puVar8 = puVar10 + (ulong)(uVar6 + 1) * 3;
    uVar7 = (ulong)(uVar6 + 2);
    puVar9[1] = fVar13;
    puVar9[2] = 0;
    *puVar9 = 0x3f800000;
    puVar8[2] = 0;
    *puVar8 = 0x3f800000;
    puVar8[1] = -fVar13;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    lVar5 = uVar7 * 3;
    uVar7 = (ulong)((int)uVar7 + 1);
    *(undefined4 *)((long)(puVar10 + lVar5) + 8) = 0x3fc90fdb;
    *(undefined8 *)(puVar10 + lVar5) = 0x3f800000;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    puVar8 = puVar10 + uVar7 * 3;
    uVar7 = (ulong)((int)uVar7 + 1);
    puVar8[1] = fVar12;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
  }
  if ((uVar3 >> 0x19 & 1) != 0) {
    lVar5 = uVar7 * 3;
    uVar7 = (ulong)((int)uVar7 + 1);
    *(undefined4 *)((long)(puVar10 + lVar5) + 8) = param_1;
    *(undefined8 *)(puVar10 + lVar5) = 0x3f800000;
  }
  if ((uVar3 >> 0x1a & 1) == 0) {
    fVar12 = param_3[2];
  }
  else {
    puVar8 = puVar10 + uVar7 * 3;
    uVar7 = (ulong)((int)uVar7 + 1);
    puVar8[1] = -fVar12;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
    fVar12 = param_3[2];
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    puVar8 = puVar10 + uVar7 * 3;
    uVar7 = (ulong)((int)uVar7 + 1);
    puVar8[1] = fVar12;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    *(undefined4 *)((long)(puVar10 + uVar7 * 3) + 8) = param_1;
    *(undefined8 *)(puVar10 + uVar7 * 3) = 0x3f800000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    puVar8 = puVar10 + uVar7 * 3;
    puVar8[1] = -fVar12;
    puVar8[2] = param_1;
    *puVar8 = 0x3f800000;
  }
  lVar11 = *param_4;
  *param_4 = 0;
  lVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,0x30,0x712ae8,199);
  if (lVar5 != 0) {
    FUN__text__0048b74c();
    plVar2 = _DAT_008a47e8;
    iVar4 = FUN__text__0048bec0(lVar5,_DAT_008a47e8,uVar1);
    if (iVar4 == 1) {
      FUN__text__0048c190(lVar5,puVar10,uVar1);
      *param_4 = lVar5;
      if (lVar11 != 0) {
        FUN__text__0048c118(lVar11,plVar2);
        FUN__text__0048b760(lVar11);
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar11);
      }
      return;
    }
    FUN__text__0048b760(lVar5);
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  *param_4 = 0;
  return;
}


