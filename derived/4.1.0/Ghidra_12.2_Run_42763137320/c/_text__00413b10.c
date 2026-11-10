/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413b10; name: FUN_.text__00413b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00413b10(ulong *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
                        undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = param_5;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = param_2;
  puVar6 = _DAT_008a4890;
  *(undefined1 *)(param_1 + 3) = 0;
  do {
    uVar5 = *puVar6;
    uVar7 = (ulong)((int)uVar5 + 1) & 0xfff;
    while (*puVar6 == uVar5) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar2) {
        *puVar6 = uVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = _DAT_008a4888;
      if (cVar1 == '\0') {
        lVar4 = *_DAT_008a4888;
        puVar6 = (ulong *)(lVar4 + uVar7 * 0x38);
        uVar5 = *puVar6;
        while ((uVar5 & 0xfff) != 0) {
          FUN__text__00405bf0();
          lVar4 = *plVar3;
          puVar6 = (ulong *)(lVar4 + uVar7 * 0x38);
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
        lVar4 = lVar4 + uVar7 * 0x38;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = param_4;
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(undefined4 *)(lVar4 + 0x1c) = param_5;
        *(undefined8 *)(lVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(undefined4 *)(lVar4 + 0x30) = 0x80000000;
        *param_1 = uVar5 + 1 & 0xfffffffffffff000 | uVar7;
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


