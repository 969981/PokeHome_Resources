/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b95b8; name: FUN_.text__006b95b8
 */


void FUN__text__006b95b8(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                        undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short *psVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *(long *)(param_5 + 0x30);
  lVar1 = *(long *)(param_5 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
    lVar5 = lVar1;
  }
  psVar3 = (short *)FUN__text__0069d910(lVar5,param_6);
  if (*psVar3 == 2) {
    puVar4 = (undefined8 *)FUN__text__006a0f04(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 2);
    puVar4 = (undefined8 *)FUN__text__006a0f04(0x48);
    if (puVar4 != (undefined8 *)0x0) {
      FUN__text__006eb878(puVar4,5,3,uVar2);
      *puVar4 = 0x89e098;
    }
    *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x18) = puVar4;
    psVar10 = *(short **)(param_1 + 0xf8);
  }
  else {
    if (*psVar3 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    fVar12 = *(float *)(param_4 + 0x4c);
    fVar14 = *(float *)(param_4 + 0x50);
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2));
    if (fVar12 <= fVar14) {
      fVar13 = fVar15 / fVar12;
      fVar15 = fVar13 / (fVar14 / fVar12);
      puVar4 = (undefined8 *)FUN__text__006a0f04(0x20);
    }
    else {
      fVar15 = fVar15 / fVar14;
      fVar13 = fVar15 / (fVar12 / fVar14);
      puVar4 = (undefined8 *)FUN__text__006a0f04(0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 4);
    lVar5 = FUN__text__006a0f04(0x50);
    if (lVar5 != 0) {
      FUN__text__006c1de4(ABS(fVar13),ABS(fVar15),lVar5,5,3,uVar2);
    }
    *(long *)(*(long *)(param_1 + 0xf8) + 0x18) = lVar5;
    psVar10 = *(short **)(param_1 + 0xf8);
  }
  if (psVar10 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar10 = *psVar3;
    uVar6 = FUN__text__006eb7cc(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar7 = FUN__text__006eb7d4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18);
    uVar8 = FUN__text__006a0f04(uVar6);
    uVar9 = FUN__text__006a0f04(uVar7);
    FUN__text__006eb7fc(uVar11,uVar8,uVar6,uVar9,uVar7);
    if (param_2 != (long *)0x0) {
      lVar5 = FUN__text__006c1690(param_3,4,uVar6);
      *param_2 = *param_2 + lVar5;
      lVar5 = FUN__text__006c1690(param_3,8,uVar7);
      *param_2 = *param_2 + lVar5;
      return;
    }
  }
  return;
}


