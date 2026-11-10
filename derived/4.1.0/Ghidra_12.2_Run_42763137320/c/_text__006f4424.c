/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f4424; name: FUN_.text__006f4424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f4424(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  (*(code *)*_DAT_008a7828)();
  uVar6 = FUN__text__006f23b4(param_3[2]);
  (*(code *)*_DAT_008a7830)(param_1,uVar6);
  uVar6 = FUN__text__006f2330(param_3[1]);
  (*(code *)*_DAT_008a7838)(param_1,uVar6);
  uVar6 = FUN__text__006f2340(*param_3);
  (*(code *)*_DAT_008a7840)(param_1,uVar6);
  iVar2 = *(int *)(param_3 + 0xc);
  lVar1 = param_1 + 4;
  *(float *)(param_1 + 0x20) = (float)iVar2;
  fVar7 = *(float *)(param_3 + 0x10);
  *(float *)(param_1 + 0x24) = fVar7;
  fVar8 = *(float *)(param_3 + 8);
  *(float *)(param_1 + 0x28) = fVar8;
  bVar5 = false;
  if ((fVar8 == 0.0) && (bVar5 = false, !NAN(fVar7))) {
    bVar5 = fVar7 == 0.0;
  }
  uVar6 = 7;
  if (bVar5 && iVar2 == 0) {
    uVar6 = 0;
  }
  (*DAT_00c608e0)(param_1,uVar6);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  (*DAT_00c60808)(lVar1);
  (*DAT_00c60810)(lVar1,(byte)param_3[4] >> 1 & 1);
  bVar3 = param_3[0x18];
  if (bVar3 < 2) {
    bVar3 = 0;
  }
  (*DAT_00c60818)(lVar1,bVar3);
  (*DAT_00c60820)(lVar1,param_3[0x1a] & 1);
  bVar4 = *(byte *)(param_1 + 0x2d);
  bVar3 = (byte)param_3[4] >> 1 & 1;
  *(byte *)(param_1 + 0x2d) = bVar4 & 0xfe | bVar3;
  bVar3 = (bVar4 & 0xfc | bVar3 | ((byte)param_3[4] >> 2 & 1) << 1) ^ 2;
  *(byte *)(param_1 + 0x2d) = bVar3;
  bVar3 = (bVar3 & 0xf8 | bVar3 & 3 | (param_3[4] & 1) << 2) ^ 4;
  *(byte *)(param_1 + 0x2d) = bVar3;
  *(byte *)(param_1 + 0x2d) = bVar3 & 0xf7 | (param_3[6] == '\x01') << 3;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}


