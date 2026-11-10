/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d4d8; name: FUN_.text__0047d4d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047d4d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 8);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x38) != 0)) {
    pfVar4 = *(float **)(lVar5 + 0x20);
    uVar1 = *(undefined8 *)(pfVar4 + 2);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)pfVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(pfVar4 + 4);
    uVar2 = *(undefined8 *)(pfVar4 + 6);
    uVar3 = *(undefined8 *)(pfVar4 + 10);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(pfVar4 + 8);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    fVar6 = pfVar4[4];
    fVar7 = pfVar4[5];
    fVar9 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar10 = pfVar4[2];
    fVar11 = pfVar4[3];
    *(float *)(param_1 + 0x3c) = fVar10 * fVar6 - fVar8 * fVar7;
    *(float *)(param_1 + 0x40) = fVar9 * fVar7 - fVar11 * fVar10;
    *(float *)(param_1 + 0x44) = fVar11 * fVar8 - fVar9 * fVar6;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
    uVar1 = _DAT_008a4480;
    FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_12);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar5 + 0x78);
    FUN__text__0044b8a0(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_11);
  }
  return 1;
}


