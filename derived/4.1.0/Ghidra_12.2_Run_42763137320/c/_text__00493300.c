/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00493300; name: FUN_.text__00493300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00493300(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  byte local_74 [4];
  byte local_68 [4];
  float local_64;
  
  *(undefined4 *)(param_2 + 1) = 0;
  local_64 = 1.0;
  local_68[0] = *_DAT_008a4d48;
  local_74[0] = *_DAT_008a4d50;
  if (param_3 != 0) {
    FUN__text__0048f3ec(param_3,local_68,local_74,&local_64);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar15 = 0x501502f9;
  }
  else {
    uVar15 = 0x501502f9;
    lVar11 = 0;
    uVar12 = 0;
    do {
      bVar7 = *(byte *)(*(long *)(param_1 + 0x30) + uVar12);
      if (((local_68[0] & bVar7) != 0) && ((local_74[0] & bVar7) == 0)) {
        uVar14 = *(uint *)(param_2 + 1);
        uVar3 = *(uint *)((long)param_2 + 0xc);
        lVar13 = *(long *)(param_1 + 0x20);
        if (uVar3 <= uVar14) {
          iVar1 = uVar3 + (uVar3 >> 1);
          if (uVar3 == 0) {
            iVar1 = 1;
          }
          uVar8 = FUN__text__00451a80(param_2,iVar1);
          if (((uVar8 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar14))
          goto LAB__text__004933b0;
          uVar14 = *(uint *)(param_2 + 1);
        }
        *(uint *)(param_2 + 1) = uVar14 + 1;
        if (*param_2 != 0) {
          puVar2 = (undefined8 *)(lVar13 + lVar11);
          puVar9 = (undefined8 *)(*param_2 + (ulong)uVar14 * 0x88);
          puVar9[6] = 0;
          puVar9[7] = 0x3f80000000000000;
          puVar9[8] = 0x3f8000003f800000;
          puVar9[9] = 0;
          puVar9[10] = 0;
          *(undefined4 *)(puVar9 + 0xb) = 0;
          *(undefined8 *)((long)puVar9 + 0x5c) = 0x3f80000042c80000;
          *(undefined8 *)((long)puVar9 + 100) = 0xffffffff;
          *(undefined4 *)(puVar9 + 0x10) = 0;
          puVar9[0xe] = 0;
          puVar9[0xf] = 0x3f800000;
          uVar10 = puVar2[2];
          uVar4 = puVar2[1];
          *puVar9 = *puVar2;
          puVar9[1] = uVar4;
          puVar9[2] = uVar10;
          uVar4 = puVar2[3];
          uVar10 = puVar2[4];
          uVar5 = puVar2[6];
          puVar9[5] = puVar2[5];
          puVar9[6] = uVar5;
          puVar9[3] = uVar4;
          puVar9[4] = uVar10;
          uVar10 = puVar2[10];
          uVar4 = puVar2[7];
          uVar5 = puVar2[8];
          puVar9[9] = puVar2[9];
          puVar9[10] = uVar10;
          puVar9[7] = uVar4;
          puVar9[8] = uVar5;
          uVar4 = puVar2[0xb];
          uVar5 = puVar2[0xc];
          uVar10 = puVar2[0xd];
          uVar6 = puVar2[0xe];
          *(float *)((long)puVar9 + 0x54) = *(float *)((long)puVar9 + 0x54) * local_64;
          puVar9[0xd] = uVar10;
          puVar9[0xe] = uVar6;
          puVar9[0xb] = uVar4;
          puVar9[0xc] = uVar5;
          uVar15 = NEON_fminnm(*(undefined4 *)(puVar2 + 6),uVar15);
        }
      }
LAB__text__004933b0:
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x88;
    } while (uVar12 < *(uint *)(param_1 + 0x28));
  }
  return uVar15;
}


