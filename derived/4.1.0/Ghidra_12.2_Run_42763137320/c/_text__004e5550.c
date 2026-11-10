/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5550; name: FUN_.text__004e5550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e5550(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                        undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                        undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  FUN__text__00446d98(param_1,param_6,param_7,param_8,0);
  FUN__text__004ec468(param_1 + 0xb,param_2);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  FUN__text__0046bd38(param_1 + 0xe,&local_80);
  lVar4 = _DAT_008a4438;
  param_1[0x1b] = param_3;
  param_1[0x1c] = param_4;
  param_1[0x1f] = 0;
  param_1[0x1d] = param_5;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_1 = lVar4 + 0x10;
  param_1[0xb] = lVar4 + 0xd0;
  param_1[0xe] = lVar4 + 0x140;
  FUN__text__004e6710(param_1 + 0x21);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31) = param_10;
  *(undefined4 *)((long)param_1 + 0x18c) = param_11;
  *(byte *)((long)param_1 + 0x194) = *(byte *)((long)param_1 + 0x194) & 0xf0 | 4;
  piVar1 = (int *)(param_1[0x1c] + 0x24);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)param_1[0x16] == 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    *(undefined1 *)(param_1 + 0x13) = 0xff;
    param_1[0x14] = 0;
    param_1[0xf] = param_1[2];
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((long)param_1 + 0x2c);
  }
  return;
}


