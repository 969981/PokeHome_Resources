/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413990; name: FUN_.text__00413990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00413990(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,
                        undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_68;
  ulong local_48;
  
  puVar6 = _DAT_008a4890;
  local_48 = 0xffffffffffffffff;
  uVar8 = (ulong)param_3;
  do {
    uVar5 = *puVar6;
    uVar9 = (ulong)((int)uVar5 + 1) & 0xfff;
    while (*puVar6 == uVar5) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar2) {
        *puVar6 = uVar9;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = _DAT_008a4888;
      if (cVar1 == '\0') {
        lVar4 = *_DAT_008a4888;
        puVar6 = (ulong *)(lVar4 + uVar9 * 0x38);
        uVar5 = *puVar6;
        while ((uVar5 & 0xfff) != 0) {
          FUN__text__00405bf0();
          lVar4 = *plVar3;
          puVar6 = (ulong *)(lVar4 + uVar9 * 0x38);
          uVar5 = *puVar6;
        }
        do {
          uVar5 = *puVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar2) {
            *puVar6 = uVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar4 = lVar4 + uVar9 * 0x38;
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(undefined4 *)(lVar4 + 0x1c) = param_5;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = param_4;
        *(undefined8 *)(lVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(undefined4 *)(lVar4 + 0x30) = 0x80000000;
        uVar9 = uVar5 + 1 & 0xfffffffffffff000 | uVar9;
        local_48 = uVar9;
        if (0 < (int)param_3) {
          puVar7 = (undefined8 *)(param_2 + 8);
          do {
            FUN__text__00413460(&local_48,*puVar7);
            uVar8 = uVar8 - 1;
            puVar7 = puVar7 + 2;
          } while (uVar8 != 0);
        }
        local_68 = uVar9;
        FUN__text__00413d24(param_1,&local_68,param_5);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


