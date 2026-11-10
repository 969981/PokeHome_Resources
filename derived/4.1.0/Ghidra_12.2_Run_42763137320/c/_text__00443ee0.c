/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00443ee0; name: FUN_.text__00443ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00443ee0(long *param_1,long param_2,undefined4 param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar5 = _DAT_008a4988 + 0x10;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = lVar5;
  param_1[0x12] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = param_3;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xd6) = 0;
  *(undefined1 *)((long)param_1 + 0xde) = 1;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x7fffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  piVar1 = (int *)(param_2 + 0x14);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_50 = param_4[2];
  lStack_48 = param_4[3];
  local_40 = param_4[4];
  lStack_38 = param_4[5];
  local_60 = *param_4;
  lStack_58 = param_4[1];
  FUN__text__0043ea10((undefined4 *)((long)param_1 + 0xc4),&local_60);
  if ((int)param_1[8] == 0) {
    param_1[3] = local_50;
    param_1[4] = lStack_48;
    param_1[5] = local_40;
    param_1[6] = lStack_38;
    param_1[1] = local_60;
    param_1[2] = lStack_58;
    lVar5 = param_1[0xd];
    iVar4 = *(int *)(lVar5 + 0x50);
  }
  else {
    lVar5 = param_1[0xd];
    iVar4 = *(int *)(lVar5 + 0x50);
  }
  if (iVar4 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x48);
    do {
      iVar4 = FUN__text__00432b54(param_1 + 0x12,*puVar6);
      if (iVar4 == 1) {
        FUN__text__00433670(param_1,(ulong)CONCAT14(*(undefined1 *)((long)*puVar6 + 0xd),
                                                    *(undefined4 *)*puVar6));
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined8 *)(*(long *)(lVar5 + 0x48) + (ulong)*(uint *)(lVar5 + 0x50) * 8))
    ;
  }
  return;
}


