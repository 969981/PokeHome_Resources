/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ae20; name: FUN_.text__0068ae20
 */


void FUN__text__0068ae20(uint *param_1,undefined8 param_2,long *param_3,uint param_4,uint param_5,
                        uint param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  long local_60;
  long lStack_58;
  
  if (((DAT_00c5f8c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00c5f8c8), iVar4 != 0)) {
    FUN__text__0068b014(&DAT_00c5f8d0);
    __cxa_guard_release(&DAT_00c5f8c8);
  }
  pbVar6 = *(byte **)(param_1 + 0x2c);
  if ((pbVar6 != (byte *)0x0) && (0 < (int)param_1[0x26])) {
    lVar8 = *(long *)(pbVar6 + 0x20);
    plVar1 = (long *)&DAT_00c5f8d0;
    if (param_3 != (long *)0x0) {
      plVar1 = param_3;
    }
    uVar11 = lVar8 + 0x7fU & -lVar8;
    uVar10 = (lVar8 + (uVar11 << ((ulong)*(byte *)((long)param_1 + 0xb9) & 0x3f))) - 1 & -lVar8;
    if ((*pbVar6 & 1) == 0) {
      uVar9 = *(ulong *)(pbVar6 + 0x40);
      *(ulong *)(pbVar6 + 0x40) = uVar9 + uVar10;
    }
    else {
      puVar7 = *(ulong **)(pbVar6 + 0x40);
      do {
        uVar9 = *puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *puVar7 = uVar9 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = (uint)uVar9;
    if (*(long *)(*(long *)(param_1 + 0x2c) + 0x38) != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x2c) + 0x38) + (uVar9 & 0xffffffff);
      if (*(char *)((long)param_1 + 0xb9) != '\0') {
        local_90 = plVar1[5];
        local_98 = plVar1[6];
        local_70 = (undefined4)plVar1[0xb];
        local_60 = plVar1[0xd];
        lStack_58 = plVar1[0xe];
        lStack_78 = plVar1[10];
        local_a8 = plVar1[4];
        lStack_a0 = plVar1[5];
        local_c8 = *plVar1;
        lStack_c0 = plVar1[1];
        local_b8 = plVar1[2];
        lStack_b0 = plVar1[3];
        _local_88 = CONCAT44((int)((ulong)plVar1[8] >> 0x20),(int)plVar1[6]);
        _local_80 = CONCAT71((int7)((ulong)plVar1[9] >> 8),0xff);
        uStack_6c = (undefined4)*(undefined8 *)((long)plVar1 + 0x4c);
        uStack_68 = (undefined4)((ulong)*(undefined8 *)((long)plVar1 + 0x4c) >> 0x20);
        local_64 = *(undefined4 *)((long)plVar1 + 0x54);
        FUN__text__0068b060(param_1,lVar8,param_2,&local_c8);
        lVar8 = *(long *)(*(long *)(param_1 + 0x2c) + 0x38) + uVar11 + *param_1;
      }
      FUN__text__0068b060(param_1,lVar8,param_2,plVar1);
    }
    FUN__text__0068b1e0(param_1,plVar1,param_4 & 1,param_5 & 1,param_6 & 1);
    uVar5 = *(uint *)(plVar1 + 0xe);
    param_1[2] = uVar5;
    if (*plVar1 != 0) {
      uVar5 = uVar5 | 2;
      param_1[2] = uVar5;
    }
    if (plVar1[1] != 0) {
      param_1[2] = uVar5 | 4;
    }
  }
  return;
}


