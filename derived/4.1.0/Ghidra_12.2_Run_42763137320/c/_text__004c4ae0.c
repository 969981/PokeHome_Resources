/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4ae0; name: FUN_.text__004c4ae0
 */


undefined8 FUN__text__004c4ae0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  
  if (param_2 < 0x1d) {
    puVar11 = (undefined *)0x1d;
  }
  else if (param_2 < 0x35) {
    puVar11 = (undefined *)0x35;
  }
  else if (param_2 < 0x61) {
    puVar11 = (undefined *)0x61;
  }
  else if (param_2 < 0xc1) {
    puVar11 = (undefined *)0xc1;
  }
  else if (param_2 < 0x185) {
    puVar11 = (undefined *)0x185;
  }
  else if (param_2 < 0x301) {
    puVar11 = (undefined *)0x301;
  }
  else if (param_2 < 0x607) {
    puVar11 = (undefined *)0x607;
  }
  else if (param_2 < 0xc07) {
    puVar11 = (undefined *)0xc07;
  }
  else {
    puVar11 = (undefined *)0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        puVar11 = (undefined *)0x3001;
      }
      else {
        puVar11 = (undefined *)0x6011;
        if ((((0x6010 < param_2) && (puVar11 = (undefined *)0xc005, 0xc004 < param_2)) &&
            (puVar11 = (undefined *)0x1800d, 0x1800c < param_2)) &&
           ((puVar11 = (undefined *)0x30005, 0x30004 < param_2 &&
            (puVar11 = (undefined *)0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            puVar11 = (undefined *)0xc0001;
          }
          else {
            puVar11 = &UNK__text__00180005;
            if (((((0x180004 < param_2) && (puVar11 = (undefined *)0x30000b, 0x30000a < param_2)) &&
                 ((puVar11 = (undefined *)0x60000d, 0x60000c < param_2 &&
                  (((puVar11 = (undefined *)0xc00005, 0xc00004 < param_2 &&
                    (puVar11 = (undefined *)0x1800013, 0x1800012 < param_2)) &&
                   (puVar11 = (undefined *)0x3000005, 0x3000004 < param_2)))))) &&
                ((puVar11 = (undefined *)0x6000017, 0x6000016 < param_2 &&
                 (puVar11 = (undefined *)0xc000013, 0xc000012 < param_2)))) &&
               ((puVar11 = (undefined *)0x18000005, 0x18000004 < param_2 &&
                ((puVar11 = (undefined *)0x30000059, 0x30000058 < param_2 &&
                 (puVar11 = (undefined *)0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  lVar9 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = FUN__text__00400f80(0,(long)puVar11 << 3);
  lVar6 = *param_1;
  if (lVar5 == 0) {
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN__text__00400fc0(0);
    }
    *param_1 = lVar9;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar3;
    return 2;
  }
  if ((lVar6 != 0) && (lVar6 != lVar5)) {
    FUN__text__00400fc0(0);
  }
  *param_1 = lVar5;
  uVar10 = (uint)puVar11;
  *(uint *)((long)param_1 + 0xc) = uVar10;
  if (*(uint *)(param_1 + 1) < uVar10) {
    do {
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 < *(uint *)((long)param_1 + 0xc)) {
        *(uint *)(param_1 + 1) = uVar2 + 1;
        if (*param_1 != 0) {
          *(undefined8 *)(*param_1 + (ulong)uVar2 * 8) = 0;
        }
      }
      uVar2 = (int)puVar11 - 1;
      puVar11 = (undefined *)(ulong)uVar2;
    } while (uVar2 != 0);
  }
  if (uVar1 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(lVar9 + uVar7 * 8);
      while (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x78);
        uVar2 = 0;
        uVar8 = (uint)((*(ulong *)(lVar5 + 0x38) ^ *(ulong *)(lVar5 + 8)) >> 4);
        if (uVar10 != 0) {
          uVar2 = uVar8 / uVar10;
        }
        lVar4 = (ulong)(uVar8 - uVar2 * uVar10) * 8;
        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(*param_1 + lVar4);
        *(long *)(*param_1 + lVar4) = lVar5;
        lVar5 = lVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  if (lVar9 == 0) {
    return 1;
  }
  FUN__text__00400fc0(0,lVar9);
  return 1;
}


