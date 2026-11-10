/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053db20; name: FUN_.text__0053db20
 */


undefined8 FUN__text__0053db20(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  
  if (param_2 < 0x1d) {
    puVar10 = (undefined *)0x1d;
  }
  else if (param_2 < 0x35) {
    puVar10 = (undefined *)0x35;
  }
  else if (param_2 < 0x61) {
    puVar10 = (undefined *)0x61;
  }
  else if (param_2 < 0xc1) {
    puVar10 = (undefined *)0xc1;
  }
  else if (param_2 < 0x185) {
    puVar10 = (undefined *)0x185;
  }
  else if (param_2 < 0x301) {
    puVar10 = (undefined *)0x301;
  }
  else if (param_2 < 0x607) {
    puVar10 = (undefined *)0x607;
  }
  else if (param_2 < 0xc07) {
    puVar10 = (undefined *)0xc07;
  }
  else {
    puVar10 = (undefined *)0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        puVar10 = (undefined *)0x3001;
      }
      else {
        puVar10 = (undefined *)0x6011;
        if ((((0x6010 < param_2) && (puVar10 = (undefined *)0xc005, 0xc004 < param_2)) &&
            (puVar10 = (undefined *)0x1800d, 0x1800c < param_2)) &&
           ((puVar10 = (undefined *)0x30005, 0x30004 < param_2 &&
            (puVar10 = (undefined *)0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            puVar10 = (undefined *)0xc0001;
          }
          else {
            puVar10 = &UNK__text__00180005;
            if (((((0x180004 < param_2) && (puVar10 = (undefined *)0x30000b, 0x30000a < param_2)) &&
                 ((puVar10 = (undefined *)0x60000d, 0x60000c < param_2 &&
                  (((puVar10 = (undefined *)0xc00005, 0xc00004 < param_2 &&
                    (puVar10 = (undefined *)0x1800013, 0x1800012 < param_2)) &&
                   (puVar10 = (undefined *)0x3000005, 0x3000004 < param_2)))))) &&
                ((puVar10 = (undefined *)0x6000017, 0x6000016 < param_2 &&
                 (puVar10 = (undefined *)0xc000013, 0xc000012 < param_2)))) &&
               ((puVar10 = (undefined *)0x18000005, 0x18000004 < param_2 &&
                ((puVar10 = (undefined *)0x30000059, 0x30000058 < param_2 &&
                 (puVar10 = (undefined *)0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar6 = FUN__text__00400f80(0xb,(long)puVar10 << 3);
  lVar7 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    if (lVar7 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN__text__00400fc0(0xb);
    }
    *(long *)(param_1 + 8) = lVar9;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    return 2;
  }
  if ((lVar7 != 0) && (lVar7 != lVar6)) {
    FUN__text__00400fc0(0xb);
  }
  *(long *)(param_1 + 8) = lVar6;
  *(uint *)(param_1 + 0x14) = (uint)puVar10;
  if (*(uint *)(param_1 + 0x10) < (uint)puVar10) {
    do {
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 < *(uint *)(param_1 + 0x14)) {
        *(uint *)(param_1 + 0x10) = uVar3 + 1;
        if (*(long *)(param_1 + 8) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8) = 0;
        }
      }
      uVar3 = (int)puVar10 - 1;
      puVar10 = (undefined *)(ulong)uVar3;
    } while (uVar3 != 0);
  }
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      plVar5 = (long *)*(long *)(lVar9 + uVar8 * 8);
      while (plVar5 != (long *)0x0) {
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = *(uint *)(plVar5 + 1) / uVar3;
        }
        lVar7 = *plVar5;
        lVar6 = (ulong)(*(uint *)(plVar5 + 1) - uVar4 * uVar3) * 8;
        *plVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar6);
        *(long **)(*(long *)(param_1 + 8) + lVar6) = plVar5;
        plVar5 = (long *)lVar7;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  if (lVar9 == 0) {
    return 1;
  }
  FUN__text__00400fc0(0xb,lVar9);
  return 1;
}


