/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d5a8; name: FUN_.text__0047d5a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047d5a8(long param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uStack_11;
  
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar7 = *param_2;
  fVar6 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *(float *)(param_1 + 0x3c) = fVar8 * fVar4 - fVar6 * fVar5;
  *(float *)(param_1 + 0x40) = fVar7 * fVar5 - fVar9 * fVar8;
  *(float *)(param_1 + 0x44) = fVar9 * fVar6 - fVar7 * fVar4;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_11);
  return 1;
}


