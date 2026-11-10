/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004be9c0; name: FUN_.text__004be9c0
 */


void FUN__text__004be9c0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  
  FUN__text__0047390c();
  *param_1 = 0x88be40;
  param_1[2] = 0x88bf30;
  param_1[3] = 0x88bf48;
  param_1[0x10] = 0x88c018;
  lVar9 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  param_1[0x71] = lVar9;
  if (lVar9 != 0) {
    FUN__text__0049dbd4();
  }
  bVar6 = *(byte *)(param_1 + 0x7c);
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(byte *)(param_1 + 0x7c) = bVar6 & 0xf0;
  *(byte *)(param_1 + 0x7c) = bVar6 & 0x80 | (*(byte *)(param_2 + 0x310) >> 1 & 1) << 4;
  piVar1 = (int *)(param_1[0x53] + 0x14);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined4 *)((long)param_1 + 0x32c) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 0x20);
  if (param_1[0x51] == 0) {
    param_1[0x51] = **(undefined8 **)(param_2 + 0x88);
    **(undefined8 **)(param_2 + 0x88) = 0;
    lVar9 = param_1[0x52];
  }
  else {
    lVar9 = param_1[0x52];
  }
  if (lVar9 == 0) {
    param_1[0x52] = *(undefined8 *)(*(long *)(param_2 + 0x88) + 8);
    *(undefined8 *)(*(long *)(param_2 + 0x88) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x72] = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  param_1[0x75] = *(undefined8 *)(param_2 + 0x50);
  param_1[0x76] = uVar12;
  param_1[0x73] = uVar2;
  param_1[0x74] = uVar3;
  uVar12 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x78] = uVar3;
  param_1[0x79] = uVar12;
  param_1[0x77] = uVar2;
  uVar4 = *(uint *)(param_2 + 0x7c);
  uVar5 = *(uint *)(param_1 + 0x72);
  uVar10 = (ulong)uVar5;
  *(uint *)((long)param_1 + 0x3d4) = uVar4;
  if (uVar5 != 0) {
    iVar11 = uVar5 - 1;
    do {
      if ((uVar10 < 0x21) && ((1L << ((ulong)((int)uVar10 - 1) & 0x3f) & (ulong)uVar4) != 0)) {
        return;
      }
      *(int *)(param_1 + 0x72) = iVar11;
      iVar11 = iVar11 + -1;
      uVar10 = uVar10 - 1;
    } while (iVar11 != -1);
  }
  return;
}


