/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f59a0; name: FUN_.text__003f59a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003f59a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  plVar6 = _DAT_008a43f0;
  uVar3 = *(uint *)(_DAT_008a43f0 + 1);
  uVar11 = (ulong)uVar3;
  uVar4 = *(uint *)((long)_DAT_008a43f0 + 0xc);
  lVar10 = *_DAT_008a43f0;
  if (uVar3 < uVar4) {
    *(uint *)(_DAT_008a43f0 + 1) = uVar3 + 1;
    if (lVar10 == 0) {
      return 2;
    }
  }
  else {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar4 = iVar1 + uVar4;
    if (lVar10 == 0) {
      lVar10 = FUN__text__00400f80(7,(ulong)uVar4 << 4);
      if (lVar10 == 0) {
        return 2;
      }
      lVar7 = *plVar6;
      if ((lVar7 != 0) && (lVar7 != lVar10)) {
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            lVar7 = 0x10;
            puVar9 = (undefined8 *)(lVar10 + 0x10);
            do {
              uVar8 = uVar8 + 2;
              uVar5 = *(undefined8 *)(*plVar6 + lVar7 + -8);
              puVar9[-2] = *(undefined8 *)(*plVar6 + lVar7 + -0x10);
              puVar9[-1] = uVar5;
              puVar2 = (undefined8 *)(*plVar6 + lVar7);
              lVar7 = lVar7 + 0x20;
              uVar5 = puVar2[1];
              *puVar9 = *puVar2;
              puVar9[1] = uVar5;
              puVar9 = puVar9 + 4;
            } while ((uVar11 & 0xfffffffe) != uVar8);
          }
          if ((uVar3 & 1) != 0) {
            puVar9 = (undefined8 *)(lVar10 + uVar8 * 0x10);
            puVar2 = (undefined8 *)(*plVar6 + uVar8 * 0x10);
            uVar5 = puVar2[1];
            *puVar9 = *puVar2;
            puVar9[1] = uVar5;
          }
          lVar7 = *plVar6;
        }
        FUN__text__00400fc0(7,lVar7);
      }
    }
    else {
      lVar10 = FUN__text__00400fa0(7,lVar10);
      if (lVar10 == 0) {
        return 2;
      }
    }
    *plVar6 = lVar10;
    *(uint *)((long)plVar6 + 0xc) = uVar4;
    if (uVar4 <= uVar3) {
      return 2;
    }
    uVar11 = (ulong)*(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) + 1;
  }
  puVar9 = (undefined8 *)(lVar10 + uVar11 * 0x10);
  *puVar9 = param_1;
  puVar9[1] = param_2;
  return 1;
}


