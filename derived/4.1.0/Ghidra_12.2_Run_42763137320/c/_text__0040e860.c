/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040e860; name: FUN_.text__0040e860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040e860(byte *param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = 0x811c9dc5;
  if (param_1 == (byte *)0x0) {
    uVar12 = 0;
  }
  else {
    bVar9 = *param_1;
    uVar12 = uVar11;
    if (bVar9 != 0) {
      do {
        param_1 = param_1 + 1;
        bVar2 = bVar9 + 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar2 = bVar9;
        }
        uVar12 = uVar12 * 0x1000193 ^ (uint)bVar2;
        bVar9 = *param_1;
      } while (bVar9 != 0);
    }
  }
  if (param_2 == (byte *)0x0) {
    return 0xe;
  }
  bVar9 = *param_2;
  if (bVar9 != 0) {
    do {
      param_2 = param_2 + 1;
      bVar2 = bVar9 + 0x20;
      if (0x19 < (byte)(bVar9 + 0xbf)) {
        bVar2 = bVar9;
      }
      uVar11 = uVar11 * 0x1000193 ^ (uint)bVar2;
      bVar9 = *param_2;
    } while (bVar9 != 0);
  }
  uVar7 = 0xe;
  if ((uVar12 != 0) && (uVar11 != 0)) {
    if (DAT_00ae9ab0 == '\0') {
      return 0x66;
    }
    uVar6 = FUN__text__004af6c0(0xe);
    plVar5 = _DAT_008a45c0;
    lVar8 = FUN__text__004b0170(*_DAT_008a45c0,7,uVar6);
    *(uint *)(lVar8 + 4) = uVar12;
    *(uint *)(lVar8 + 8) = uVar11;
    lVar10 = *plVar5;
    *(undefined4 *)(lVar8 + 0xc) = 0;
    piVar1 = (int *)(lVar10 + 0xd4);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = 1;
  }
  return uVar7;
}


