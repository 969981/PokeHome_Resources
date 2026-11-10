/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d1470; name: FUN_.text__004d1470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d1470(long param_1,uint param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar11 = 0xff;
  if ((0 < (int)param_2) && (*(short *)(param_1 + 0x1a8) == 0)) {
    uVar4 = 0;
    uVar12 = 0xff;
    do {
      uVar11 = uVar12;
      if ((*(char *)(param_1 + (ulong)(uVar4 & 0xff) * 0x30 + 199) == '\0') &&
         (uVar11 = uVar4, *(short *)(param_1 + (ulong)(uVar4 & 0xff) * 0x30 + 0xcc) != 0)) {
        uVar11 = uVar12;
      }
      uVar4 = uVar4 + 1;
      uVar12 = uVar11;
    } while (param_2 != uVar4);
  }
  if ((char)param_2 < '\x04') {
    uVar13 = (ulong)(char)param_2;
    do {
      if ((*(char *)(param_1 + (uVar13 & 0xff) * 0x30 + 199) == '\0') &&
         (*(short *)(param_1 + (uVar13 & 0xff) * 0x30 + 0xcc) == 0)) {
        bVar2 = *(short *)(param_1 + 0x1a8) == 0;
      }
      else {
        bVar2 = false;
      }
      *(char *)(param_1 + (char)uVar11 + 0x179) = (char)uVar11;
      lVar5 = param_1 + uVar13 * 0x30;
      plVar1 = (long *)(lVar5 + 0xa0);
      uVar4 = *(uint *)(lVar5 + 0xa8);
      if (uVar4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          lVar6 = *plVar1;
          plVar8 = *(long **)(lVar6 + (ulong)uVar4 * 8);
          if (plVar8 != (long *)0x0) {
            plVar3 = (long *)plVar8[0x12];
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x10))(plVar3,_DAT_008a47f0);
              plVar8[0x12] = 0;
            }
            puVar9 = (undefined8 *)plVar8[0x13];
            if (puVar9 != (undefined8 *)0x0) {
              (**(code **)*puVar9)(puVar9);
              FUN__text__00400fc0(5,puVar9);
              plVar8[0x13] = 0;
            }
            (**(code **)(*plVar8 + 0x28))(plVar8);
            lVar6 = *plVar1;
            puVar9 = *(undefined8 **)(lVar6 + (ulong)uVar4 * 8);
            if (puVar9 != (undefined8 *)0x0) {
              (**(code **)*puVar9)(puVar9);
              FUN__text__00400fc0(5,puVar9);
              lVar6 = *plVar1;
            }
          }
          uVar12 = *(uint *)(lVar5 + 0xa8);
          puVar9 = (undefined8 *)(lVar6 + (ulong)uVar4 * 8);
          puVar7 = (undefined8 *)((lVar6 + (ulong)uVar12 * 8) - 8);
          if (puVar9 < puVar7) {
            *puVar9 = *puVar7;
            uVar12 = *(uint *)(lVar5 + 0xa8);
          }
          *(undefined1 *)(param_1 + uVar13 * 0x30 + 0xc4) = 0;
          *(uint *)(lVar5 + 0xa8) = uVar12 - 1;
        } while (uVar4 != 0);
      }
      lVar6 = param_1 + uVar13 * 0x30;
      puVar10 = (uint *)(lVar6 + 0xb8);
      uVar4 = *puVar10;
      plVar8 = (long *)(lVar6 + 0xb0);
      lVar6 = *plVar8;
      if (uVar4 != 0) {
        lVar14 = (ulong)uVar4 * 0x30;
        do {
          FUN__text__004d3ca8(lVar6);
          lVar6 = lVar6 + 0x30;
          lVar14 = lVar14 + -0x30;
        } while (lVar14 != 0);
        lVar6 = *plVar8;
      }
      *puVar10 = 0;
      *(undefined8 *)(param_1 + uVar13 * 0x30 + 0xc0) = 0x1000000ffffffff;
      if (lVar6 != 0) {
        FUN__text__00400fc0(0,lVar6);
        *plVar8 = 0;
        *(undefined4 *)(param_1 + uVar13 * 0x30 + 0xbc) = 0;
      }
      if (*plVar1 != 0) {
        *(undefined4 *)(lVar5 + 0xa8) = 0;
        FUN__text__00400fc0(0);
        *plVar1 = 0;
        *(undefined4 *)(lVar5 + 0xac) = 0;
      }
      uVar4 = (uint)uVar13;
      if (!bVar2) {
        uVar4 = uVar11;
      }
      uVar13 = uVar13 + 1;
      uVar11 = uVar4;
    } while (uVar13 != 4);
  }
  return;
}


