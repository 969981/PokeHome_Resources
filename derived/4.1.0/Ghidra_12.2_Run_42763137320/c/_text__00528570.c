/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00528570; name: FUN_.text__00528570
 */


ulong FUN__text__00528570(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    iVar6 = 0;
    *param_3 = 0;
    lVar9 = *param_1;
  }
  else {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      uVar11 = *(ulong *)(*param_1 + (long)iVar1 * 0x10 + 8);
      if (uVar11 == param_2) {
        *param_3 = 1;
        return *param_1 + (long)iVar1 * 0x10;
      }
      if (uVar11 < param_2) {
        iVar6 = iVar1 + 1;
      }
      uVar4 = uVar8 - (uVar11 < param_2);
      uVar8 = uVar4 >> 1;
    } while (1 < uVar4);
    *param_3 = 0;
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar4 < uVar8) {
      uVar11 = (ulong)uVar4 << 4;
      *(uint *)(param_1 + 1) = uVar4 + 1;
      uVar5 = (ulong)uVar4;
    }
    else {
      iVar6 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar6 = 1;
      }
      uVar8 = iVar6 + uVar8;
      lVar9 = FUN__text__00400f80(9,(ulong)uVar8 << 4);
      if (lVar9 == 0) {
        return 0;
      }
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar9)) {
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            lVar7 = 0x10;
            puVar10 = (undefined8 *)(lVar9 + 0x10);
            do {
              uVar11 = uVar11 + 2;
              uVar3 = *(undefined8 *)(*param_1 + lVar7 + -8);
              puVar10[-2] = *(undefined8 *)(*param_1 + lVar7 + -0x10);
              puVar10[-1] = uVar3;
              puVar2 = (undefined8 *)(*param_1 + lVar7);
              lVar7 = lVar7 + 0x20;
              uVar3 = puVar2[1];
              *puVar10 = *puVar2;
              puVar10[1] = uVar3;
              puVar10 = puVar10 + 4;
            } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
          }
          if ((uVar4 & 1) != 0) {
            puVar10 = (undefined8 *)(lVar9 + uVar11 * 0x10);
            puVar2 = (undefined8 *)(*param_1 + uVar11 * 0x10);
            uVar3 = puVar2[1];
            *puVar10 = *puVar2;
            puVar10[1] = uVar3;
          }
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(9,lVar7);
      }
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      if (uVar8 <= uVar4) {
        return 0;
      }
      uVar11 = lVar9 + (ulong)*(uint *)(param_1 + 1) * 0x10;
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      uVar5 = uVar11;
    }
  }
  else {
    uVar11 = FUN__text__00528760(param_1,iVar6);
    uVar5 = uVar11;
  }
  if (uVar5 == 0) {
    return 0;
  }
  *(ulong *)(uVar11 + 8) = param_2;
  return uVar11;
}


