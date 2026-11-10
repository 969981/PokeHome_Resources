/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477550; name: FUN_.text__00477550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00477550(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  local_60 = param_2;
  FUN__text__0046bd38(param_1,&local_60);
  lVar5 = _DAT_008a46e8 + 0xe0;
  *param_1 = _DAT_008a46e8 + 0x10;
  param_1[0xd] = lVar5;
  FUN__text__00458c68(param_1 + 0xf);
  param_1[0x11] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = -0xffffffff9ffffe8;
  param_1[0x26] = 0x3f;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(ushort *)((long)param_1 + 0x14a) = *(ushort *)((long)param_1 + 0x14a) & 0xf800;
  param_1[0x30] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN__text__0047b374(param_1 + 0x31);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = param_3;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  piVar1 = _DAT_008a4910;
  iVar2 = *_DAT_008a4910;
  *(int *)((long)param_1 + 500) = iVar2;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0x3f7fc105;
  uVar6 = 0x50;
  if ((param_4 & 1) == 0) {
    uVar6 = 0x10;
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  uVar6 = uVar6 | *(ushort *)(param_1 + 0x41) & 0xfc00;
  *piVar1 = iVar2 + 1;
  *(ushort *)(param_1 + 0x41) = uVar6;
  if ((*(byte *)(param_3 + 0x9a) & 0xe) == 0) {
    lVar5 = param_3;
    do {
      lVar8 = *(long *)(lVar5 + 0x80);
      if ((lVar8 == 0) && (lVar8 = *(long *)(lVar5 + 0x78), lVar8 == 0)) {
        uVar7 = 0;
        goto LAB__text__004776ac;
      }
      lVar5 = lVar8;
    } while ((*(byte *)(lVar8 + 0x9a) & 0xe) == 0);
  }
  uVar7 = 0x80;
LAB__text__004776ac:
  lVar5 = param_1[1];
  *(ushort *)(param_1 + 0x41) = uVar7 | uVar6;
  iVar2 = *(int *)(lVar5 + 0x60);
  *(int *)(lVar5 + 0x60) = iVar2 + 1;
  if ((iVar2 == 1) && (*(char *)(lVar5 + 100) != '\0')) {
    FUN__text__004473d0();
  }
  piVar1 = (int *)(param_3 + 0x24);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(undefined4 *)((long)param_1 + 0x174) = 0x42ca0000;
  return;
}


