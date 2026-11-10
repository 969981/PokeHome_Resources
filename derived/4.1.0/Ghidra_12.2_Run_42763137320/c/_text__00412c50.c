/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00412c50; name: FUN_.text__00412c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00412c50(long *param_1,ulong *param_2,undefined4 param_3,undefined4 param_4,
                        undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = FUN__text__00414330(&DAT_00ae9fb8,param_3,param_4);
  plVar3 = _DAT_008a4888;
  while (_DAT_008a4888 = plVar3, lVar4 == 0) {
    lVar4 = FUN__text__00414330(&DAT_00ae9fb8,param_3,param_4);
    FUN__text__00405bf0();
    plVar3 = _DAT_008a4888;
  }
  do {
    uVar7 = DAT_00ae9f50;
    uVar8 = (ulong)((int)DAT_00ae9f50 + 1) & 0xfff;
    while (DAT_00ae9f50 == uVar7) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xae9f50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00ae9f50 = uVar8;
      }
      if (cVar1 == '\0') {
        lVar5 = *plVar3;
        puVar6 = (ulong *)(lVar5 + uVar8 * 0x38);
        uVar7 = *puVar6;
        while ((uVar7 & 0xfff) != 0) {
          FUN__text__00405bf0();
          lVar5 = *plVar3;
          puVar6 = (ulong *)(lVar5 + uVar8 * 0x38);
          uVar7 = *puVar6;
        }
        do {
          uVar7 = *puVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar2) {
            *puVar6 = uVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar5 = lVar5 + uVar8 * 0x38;
        *(long *)(lVar5 + 8) = lVar4;
        *(undefined8 *)(lVar5 + 0x10) = param_5;
        *(undefined4 *)(lVar5 + 0x18) = param_6;
        *(undefined4 *)(lVar5 + 0x1c) = param_7;
        *(undefined8 *)(lVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined4 *)(lVar5 + 0x30) = 0x80000000;
        *param_1 = lVar4;
        *param_2 = uVar7 + 1 & 0xfffffffffffff000 | uVar8;
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


