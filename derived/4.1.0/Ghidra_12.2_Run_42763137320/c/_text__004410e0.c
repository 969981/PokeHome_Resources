/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004410e0; name: FUN_.text__004410e0
 */


void FUN__text__004410e0(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x20);
    do {
      lVar5 = *(long *)(param_1 + 0x18);
      uVar6 = uVar4 - 1 & 0xffffffff;
      lVar8 = lVar5 + uVar6 * 0x28;
      puVar9 = (uint *)(lVar8 + 0x20);
      uVar2 = *puVar9;
      plVar7 = (long *)(lVar8 + 0x18);
      if (0 < (int)uVar2) {
        uVar10 = (ulong)uVar2 + 1;
        do {
          lVar8 = *plVar7;
          uVar3 = (ulong)((int)uVar10 - 2);
          lVar11 = lVar8 + uVar3 * 0x28;
          plVar12 = (long *)(lVar11 + 0x18);
          *(undefined1 *)(lVar11 + 0x10) = 0;
          if (*plVar12 != 0) {
            lVar8 = lVar8 + uVar3 * 0x28;
            *(undefined4 *)(lVar8 + 0x20) = 0;
            FUN__text__00400fc0(0);
            *plVar12 = 0;
            *(undefined4 *)(lVar8 + 0x24) = 0;
          }
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
      if (*plVar7 != 0) {
        *puVar9 = 0;
        FUN__text__00400fc0(0);
        *plVar7 = 0;
        *(undefined4 *)(lVar5 + uVar6 * 0x28 + 0x24) = 0;
      }
      *(undefined1 *)(lVar5 + uVar6 * 0x28 + 0x10) = 0;
      bVar1 = 1 < (long)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


