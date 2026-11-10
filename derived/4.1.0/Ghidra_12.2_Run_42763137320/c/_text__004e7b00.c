/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e7b00; name: FUN_.text__004e7b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e7b00(void)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_54 [36];
  
  puVar6 = _DAT_008a5078;
  pcVar5 = _DAT_008a5068;
  plVar9 = *(long **)(_DAT_008a5070 + 8);
  puVar2 = _DAT_008a4b70;
  uVar3 = _DAT_008a5080;
  if (*_DAT_008a5068 != '\0') {
    if (plVar9 != (long *)0x0) {
      uVar1 = *_DAT_008a5078;
      plVar10 = plVar9;
      do {
        lVar11 = plVar10[0xc];
        *(undefined1 *)(lVar11 + 0x50) = 0;
        *(undefined1 *)(lVar11 + 0x51) = uVar1;
        plVar10 = (long *)plVar10[0xe];
      } while (plVar10 != (long *)0x0);
    }
    *pcVar5 = '\0';
    *puVar6 = 0;
    puVar2 = _DAT_008a4b70;
    uVar3 = _DAT_008a5080;
  }
  while (uVar7 = _DAT_008a5080, puVar4 = _DAT_008a4b70, _DAT_008a4b70 = puVar2,
        _DAT_008a5080 = uVar3, plVar9 != (long *)0x0) {
    plVar10 = (long *)plVar9[0xe];
    lVar11 = plVar9[0xc];
    if (((*(byte *)((long)plVar9 + 0x22) >> 5 & 1) != 0) &&
       (iVar8 = (**(code **)(*plVar9 + 0x100))(plVar9,auStack_54), iVar8 == 1)) {
      FUN__text__004f6b60(uVar7,*(undefined4 *)(lVar11 + 0x2c),auStack_54);
    }
    FUN__text__004ea4c8(lVar11,*puVar4);
    plVar9 = plVar10;
    puVar2 = _DAT_008a4b70;
    uVar3 = _DAT_008a5080;
    _DAT_008a5080 = uVar7;
    _DAT_008a4b70 = puVar4;
  }
  FUN__text__004b4910(*_DAT_008a45c0);
  return;
}


