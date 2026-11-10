/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047390c; name: FUN_.text__0047390c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047390c(long *param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                        int param_6)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = _DAT_008a4a50;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = lVar9 + 0x10;
  param_1[2] = 0x889a00;
  FUN__text__00477550(param_1 + 3,*(undefined8 *)(param_2 + 0x10),param_3,
                      *(byte *)(param_2 + 0x310) >> 2 & 1);
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  lVar3 = _DAT_008a4a60;
  lVar9 = _DAT_008a4a60 + 0x10;
  lVar13 = _DAT_008a4a60 + 0x110;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *param_1 = lVar9;
  param_1[0x10] = lVar3 + 0x1e0;
  param_1[2] = lVar3 + 0xf8;
  param_1[3] = lVar13;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x274) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x30);
  piVar8 = *(int **)(param_2 + 0x20);
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  *(int **)((long)param_1 + 0x26c) = piVar8;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  lVar9 = *(long *)(param_2 + 8);
  *(undefined8 *)((long)param_1 + 700) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0x3f800000;
  uVar11 = 0x220000;
  if (param_6 != 0) {
    uVar11 = 0x620000;
  }
  *(undefined2 *)(param_1 + 0x62) = 1;
  param_1[0x53] = lVar9;
  param_1[0x54] = param_4;
  param_1[0x55] = 0;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0;
  *(int *)((long)param_1 + 0x30c) = param_6;
  *(byte *)((long)param_1 + 0x312) = *(byte *)((long)param_1 + 0x312) & 0x80;
  uVar4 = *(uint *)((long)param_1 + 0x313);
  *(uint *)((long)param_1 + 0x313) = uVar11 | uVar4 & 0xf8000000;
  uVar1 = (*(byte *)(param_2 + 0x310) >> 3 & 1) << 0x1b;
  *(uint *)((long)param_1 + 0x313) = uVar11 | uVar4 & 0x80000000 | uVar1;
  uVar11 = uVar11 | uVar1 | (uint)(*(byte *)(param_2 + 0x310) >> 1) << 0x1f;
  *(uint *)((long)param_1 + 0x313) = uVar11;
  lVar13 = *param_5;
  lVar3 = param_5[1];
  lVar14 = param_5[2];
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  *(int *)(param_1 + 0x65) = (int)lVar14;
  param_1[100] = lVar3;
  param_1[99] = lVar13;
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x66) = uVar5;
  lVar13 = *(long *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6a] = lVar13;
  *(undefined4 *)(param_1 + 0x6b) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  iVar12 = *(int *)(param_2 + 0x90);
  if (iVar12 == 0) {
    iVar12 = _DAT_008ab090;
    _DAT_008ab090 = _DAT_008ab090 + 1;
  }
  else {
    *(uint *)((long)param_1 + 0x313) = uVar11 | 0x2000000;
  }
  *(int *)(param_1 + 100) = iVar12;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0x4101;
  *(undefined4 *)((long)param_1 + 0x31c) = *(undefined4 *)((long)param_1 + 0x20c);
  lVar13 = *(long *)(param_2 + 0x60);
  lVar3 = *(long *)(param_2 + 0x68);
  lVar14 = *(long *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x5f] = lVar3;
  param_1[0x60] = lVar14;
  param_1[0x5e] = lVar13;
  lVar13 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar14 = *(long *)(param_2 + 0x58);
  uVar11 = (uint)*(byte *)(param_1 + 0x6a);
  param_1[0x5c] = *(long *)(param_2 + 0x50);
  param_1[0x5d] = lVar14;
  param_1[0x5a] = lVar13;
  param_1[0x5b] = lVar3;
  plVar2 = param_1 + 6;
  if (lVar9 != 0 && uVar11 != 0) {
    plVar2 = (long *)(lVar9 + 0x10);
  }
  uVar7 = 0xff;
  param_1[0x59] = *(long *)(param_2 + 0x38);
  if ((uVar11 - 0x80 < 0x21) && ((1L << ((ulong)(uVar11 - 0x80) & 0x3f) & 0x100010001U) != 0)) {
    uVar7 = *(undefined1 *)((long)param_1 + 0x354);
  }
  if ((int)param_1[0xb] == 0) {
    lVar9 = *plVar2;
    *(undefined1 *)(param_1 + 8) = uVar7;
    param_1[9] = (long)param_1;
    *(int *)(param_1 + 5) = (int)param_1[0x50];
    *(int *)(param_1 + 6) = (int)lVar9;
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)((long)param_1 + 0x351);
  }
  if (((uVar11 != 0) && (uVar11 == 0x90)) && (*(byte *)((long)param_1 + 0x355) != 0)) {
    FUN__text__00434a40((float)*(byte *)((long)param_1 + 0x355),DAT_00ae9a70,0x100000081,param_1 + 4
                        ,0,1,0);
  }
  lVar9 = *(long *)(param_2 + 0xa8);
  param_1[0x6c] = lVar9;
  if (lVar9 == 0) {
    return;
  }
  FUN__text__00445c40();
  uVar5 = FUN__text__00494bb0(param_1[0x3d]);
  lVar9 = param_1[0x6c];
  puVar6 = *(undefined8 **)(lVar9 + 0x58);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN__text__00400f80(0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    *puVar6 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 **)(lVar9 + 0x58) = puVar6;
    puVar10 = *(undefined8 **)(lVar9 + 0x50);
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x50);
  }
  if (puVar10 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar9 + 0x48) = puVar6;
  }
  else {
    *puVar10 = puVar6;
    puVar6 = *(undefined8 **)(lVar9 + 0x58);
  }
  *(undefined8 **)(lVar9 + 0x50) = puVar6;
  *(undefined8 *)(lVar9 + 0x58) = *puVar6;
  *puVar6 = 0;
  *(int *)(lVar9 + 0x6c) = *(int *)(lVar9 + 0x6c) + 1;
  lVar9 = *(long *)(lVar9 + 0x50);
  *(undefined4 *)(lVar9 + 8) = uVar5;
  *(long **)(lVar9 + 0x10) = param_1;
  return;
}


