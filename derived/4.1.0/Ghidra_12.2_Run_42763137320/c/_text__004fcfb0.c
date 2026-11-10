/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fcfb0; name: FUN_.text__004fcfb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fcfb0(long *param_1,int param_2,undefined8 *param_3,uint *param_4,int *param_5,
                        long param_6,int param_7,long param_8,byte param_9,undefined8 param_10)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  int local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  lVar7 = FUN__text__004f6178(param_6,0);
  lVar10 = param_1[0x12];
  if ((*(byte *)(lVar10 + 0x48) & 6) == 4) {
    uVar5 = (int)param_8 - param_2;
    local_64 = 0;
    uVar6 = param_2 - *(int *)(lVar10 + 0x38);
    uStack_68 = *(undefined4 *)(lVar10 + 0x44);
    if (uVar5 <= uVar6) {
      uVar6 = uVar5;
    }
    dVar11 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68);
    dVar11 = ((double)(int)uVar6 * 1000.0) / dVar11;
    dVar12 = 0.5;
    if (dVar11 <= 0.0) {
      dVar12 = -0.5;
    }
    local_6c = (int)(dVar12 + dVar11);
    FUN__text__004ebee4(*(undefined8 *)(lVar10 + 8),&local_6c);
    *(undefined1 *)(lVar10 + 0x18) = 0;
    *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) & 0xfb;
    uVar6 = *param_4;
  }
  else {
    *(undefined1 *)(lVar10 + 0x18) = 0;
    *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) & 0xf9;
    uVar6 = *param_4;
  }
  if ((lVar7 == 0) || ((int)uVar6 < 1)) {
    lVar9 = param_8;
    if (((byte)param_4[4] >> 5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      uVar8 = FUN__text__004f6530(param_6,param_8);
      bVar1 = true;
      if ((lVar7 != 0) && ((uVar8 & 1) != 0)) {
        uVar8 = FUN__text__004f47f4(lVar7);
        lVar9 = param_8 + (uVar8 & 0xffffffff);
        bVar1 = true;
      }
    }
  }
  else {
    lVar9 = param_8 - (int)((int)(((ulong)*_DAT_008a4b68 * (ulong)uVar6) / 1000) - param_4[2]);
    bVar1 = (int)param_4[2] < 1;
  }
  uVar5 = param_4[1];
  *(long *)(lVar10 + 0x38) = lVar9;
  *(uint *)(lVar10 + 0x40) = uVar6;
  *(uint *)(lVar10 + 0x44) = uVar5;
  *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) | 6;
  if (((param_9 & 1) == 0) && (bVar1)) {
    if (*(char *)(lVar10 + 0x18) == '\0') {
      *(long *)(lVar10 + 0x10) = param_8;
      *(undefined1 *)(lVar10 + 0x18) = 1;
    }
    else if (param_8 < *(long *)(lVar10 + 0x10)) {
      *(long *)(lVar10 + 0x10) = param_8;
    }
  }
  FUN__text__004e9e48(*(undefined8 *)(param_6 + 0x108),(byte)param_4[4] >> 5 & 1);
  *(long *)(param_3[1] + 0x68) = param_8;
  param_3[4] = param_8 - param_7;
  iVar3 = param_5[2];
  param_3[5] = *(undefined8 *)param_5;
  *(int *)(param_3 + 6) = iVar3;
  lVar7 = (**(code **)(*(long *)param_3[1] + 0xd0))();
  if (lVar7 == 0) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  if (0 < *param_5) {
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  }
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) | 1;
  FUN__text__004f6600(param_6,param_10,param_8);
  cVar4 = *(char *)(param_6 + 0x128);
  while (cVar4 == '\0') {
    (**(code **)(*param_1 + 0xb8))(param_1,param_6,1);
    FUN__text__004f6600(param_6,param_10,param_8);
    cVar4 = *(char *)(param_6 + 0x128);
  }
  *param_3 = 0;
  plVar2 = param_1 + 0x13;
  if (param_1[0x13] != 0) {
    plVar2 = (long *)param_1[0x12];
  }
  *plVar2 = (long)param_3;
  param_1[0x12] = (long)param_3;
  return;
}


