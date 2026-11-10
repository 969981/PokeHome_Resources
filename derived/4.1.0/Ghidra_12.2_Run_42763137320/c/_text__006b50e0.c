/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b50e0; name: FUN_.text__006b50e0
 */


void FUN__text__006b50e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar2 = *(long **)(param_1 + 0x138);
  while (plVar2 != (long *)(param_1 + 0x130)) {
    plVar1 = (long *)plVar2[1];
    lVar5 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    iVar3 = (int)plVar2[2];
    if (0 < iVar3) {
      lVar5 = 0;
      lVar7 = 8;
      do {
        if (*(long *)(plVar2[3] + lVar7) != 0) {
          FUN__text__006a0f24();
          iVar3 = (int)plVar2[2];
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar5 < iVar3);
    }
    if (plVar2[3] != 0) {
      FUN__text__006a0f24();
    }
    FUN__text__006a0f24(plVar2);
    plVar2 = plVar1;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  while (plVar2 != (long *)(param_1 + 0x38)) {
    plVar1 = (long *)plVar2[1];
    FUN__text__006a0f24(plVar2[2]);
    plVar2[2] = 0;
    if (0 < (int)plVar2[4]) {
      lVar5 = 0;
      lVar7 = 8;
      do {
        lVar4 = plVar2[5];
        if (*(long *)(lVar4 + lVar7) != 0) {
          FUN__text__006a0f24();
          lVar4 = plVar2[5];
        }
        *(undefined8 *)(lVar4 + lVar7) = 0;
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar5 < (int)plVar2[4]);
    }
    if (plVar2[5] != 0) {
      FUN__text__006a0f24();
    }
    plVar2[5] = 0;
    if (plVar2 != (long *)(param_1 + 0x38)) {
      plVar6 = (long *)plVar2[1];
      lVar5 = *plVar6;
      *(long **)(*plVar2 + 8) = plVar6;
      *plVar6 = *plVar2;
      *(long **)(lVar5 + 8) = plVar2;
      *plVar2 = lVar5;
    }
    FUN__text__006a0f24(plVar2);
    plVar2 = plVar1;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  while (plVar2 != (long *)(param_1 + 0x70)) {
    plVar6 = (long *)plVar2[1];
    FUN__text__006b5340(plVar2);
    plVar1 = (long *)plVar2[1];
    lVar5 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    FUN__text__006a0f24(plVar2);
    plVar2 = plVar6;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  while (plVar2 != (long *)(param_1 + 0x28)) {
    plVar6 = (long *)plVar2[1];
    FUN__text__006b5430(plVar2);
    plVar1 = (long *)plVar2[1];
    lVar5 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    FUN__text__006a0f24(plVar2);
    plVar2 = plVar6;
  }
  lVar5 = FUN__text__006c9ec4(param_1 + 0x48);
  if ((lVar5 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    FUN__text__006a0f24();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN__text__006c9e68(param_1 + 0x48);
  return;
}


