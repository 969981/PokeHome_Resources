/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413980; name: thunk_FUN_.text__00413460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__00413460(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  
  uVar6 = _DAT_008a48c8;
  plVar5 = _DAT_008a4888;
  uVar10 = *param_1;
  lVar9 = *_DAT_008a4888;
  if (*(ulong *)(lVar9 + (uVar10 & 0xfff) * 0x38) == (uVar10 & 0xfffffffffffff000 | 1) &&
      param_2 != 0xffffffffffffffff) {
    puVar8 = (ulong *)0x0;
    lVar7 = lVar9;
    while( true ) {
      puVar12 = (ulong *)(lVar7 + (param_2 & 0xfff) * 0x38);
      puVar1 = puVar12 + 5;
      uVar11 = *puVar1;
      while ((uVar11 != 0xffffffffffffffff && (*puVar12 == (param_2 & 0xfffffffffffff000 | 1)))) {
        if (puVar8 == (ulong *)0x0) {
          puVar8 = (ulong *)FUN__text__00414330(uVar6,0x10,8);
          while (puVar8 == (ulong *)0x0) {
            puVar8 = (ulong *)FUN__text__00414330(uVar6,0x10,8);
            FUN__text__00405bf0();
          }
          *puVar8 = uVar10;
        }
        puVar8[1] = uVar11;
        while (*puVar1 == uVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = (ulong)puVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            piVar2 = (int *)(lVar9 + (uVar10 & 0xfff) * 0x38 + 0x30);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            return;
          }
        }
        ClearExclusiveLocal();
        uVar11 = *puVar1;
      }
      param_2 = puVar12[4];
      if (param_2 == 0xffffffffffffffff) break;
      lVar7 = *plVar5;
    }
    if (puVar8 != (ulong *)0x0) {
      FUN__text__00414580(_DAT_008a48c8,puVar8);
      return;
    }
  }
  return;
}


