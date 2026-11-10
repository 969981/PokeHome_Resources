/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438520; name: FUN_.text__00438520
 */


void FUN__text__00438520(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
    do {
      lVar10 = *(long *)(param_1 + 0x10);
      uVar4 = uVar3 - 1 & 0xffffffff;
      lVar5 = lVar10 + uVar4 * 0x18;
      puVar6 = (uint *)(lVar5 + 0x10);
      uVar2 = *puVar6;
      plVar15 = (long *)(lVar5 + 8);
      uVar11 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        do {
          lVar12 = *plVar15;
          uVar7 = uVar11 - 1 & 0xffffffff;
          lVar5 = lVar12 + uVar7 * 0x18;
          puVar8 = (uint *)(lVar5 + 0x10);
          uVar2 = *puVar8;
          plVar16 = (long *)(lVar5 + 8);
          uVar14 = (ulong)uVar2;
          if (0 < (int)uVar2) {
            do {
              lVar20 = *plVar16;
              uVar22 = uVar14 - 1 & 0xffffffff;
              lVar5 = lVar20 + uVar22 * 0x18;
              puVar17 = (uint *)(lVar5 + 0x10);
              uVar2 = *puVar17;
              plVar13 = (long *)(lVar5 + 8);
              if (0 < (int)uVar2) {
                uVar21 = (ulong)uVar2 + 1;
                do {
                  lVar5 = *plVar13;
                  uVar9 = (ulong)((int)uVar21 - 2);
                  lVar18 = lVar5 + uVar9 * 0x18;
                  plVar19 = (long *)(lVar18 + 8);
                  *(undefined1 *)(lVar18 + 4) = 0;
                  if (*plVar19 != 0) {
                    lVar5 = lVar5 + uVar9 * 0x18;
                    *(undefined4 *)(lVar5 + 0x10) = 0;
                    FUN__text__00400fc0(0);
                    *plVar19 = 0;
                    *(undefined4 *)(lVar5 + 0x14) = 0;
                  }
                  uVar21 = uVar21 - 1;
                } while (1 < uVar21);
              }
              if (*plVar13 != 0) {
                *puVar17 = 0;
                FUN__text__00400fc0(0);
                *plVar13 = 0;
                *(undefined4 *)(lVar20 + uVar22 * 0x18 + 0x14) = 0;
              }
              *(undefined1 *)(lVar20 + uVar22 * 0x18 + 4) = 0;
              bVar1 = 1 < (long)uVar14;
              uVar14 = uVar14 - 1;
            } while (bVar1);
          }
          if (*plVar16 != 0) {
            *puVar8 = 0;
            FUN__text__00400fc0(0);
            *plVar16 = 0;
            *(undefined4 *)(lVar12 + uVar7 * 0x18 + 0x14) = 0;
          }
          *(undefined1 *)(lVar12 + uVar7 * 0x18 + 6) = 0;
          bVar1 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar1);
      }
      if (*plVar15 != 0) {
        *puVar6 = 0;
        FUN__text__00400fc0(0);
        *plVar15 = 0;
        *(undefined4 *)(lVar10 + uVar4 * 0x18 + 0x14) = 0;
      }
      *(undefined1 *)(lVar10 + uVar4 * 0x18 + 6) = 0;
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


