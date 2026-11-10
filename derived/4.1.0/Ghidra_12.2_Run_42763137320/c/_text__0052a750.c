/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052a750; name: FUN_.text__0052a750
 */


uint * FUN__text__0052a750(long *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar10 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar10;
  uVar4 = *(uint *)((long)param_1 + 0xc);
  lVar9 = *param_1;
  if (uVar10 < uVar4) {
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (lVar9 == 0) {
      return (uint *)0x0;
    }
    if (uVar10 == 0) {
      uVar10 = 0;
      goto LAB__text__0052a8dc;
    }
  }
  else {
    iVar2 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    uVar4 = iVar2 + uVar4;
    if (lVar9 == 0) {
      lVar9 = FUN__text__00400f80(9,(ulong)uVar4 << 4);
      if (lVar9 == 0) {
        return (uint *)0x0;
      }
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar9)) {
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            lVar6 = 0x10;
            puVar8 = (undefined8 *)(lVar9 + 0x10);
            do {
              uVar7 = uVar7 + 2;
              uVar5 = *(undefined8 *)(*param_1 + lVar6 + -8);
              puVar8[-2] = *(undefined8 *)(*param_1 + lVar6 + -0x10);
              puVar8[-1] = uVar5;
              puVar3 = (undefined8 *)(*param_1 + lVar6);
              lVar6 = lVar6 + 0x20;
              uVar5 = puVar3[1];
              *puVar8 = *puVar3;
              puVar8[1] = uVar5;
              puVar8 = puVar8 + 4;
            } while ((uVar11 & 0xfffffffe) != uVar7);
          }
          if ((uVar10 & 1) != 0) {
            puVar8 = (undefined8 *)(lVar9 + uVar7 * 0x10);
            puVar3 = (undefined8 *)(*param_1 + uVar7 * 0x10);
            uVar5 = puVar3[1];
            *puVar8 = *puVar3;
            puVar8[1] = uVar5;
          }
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(9,lVar6);
      }
    }
    else {
      lVar9 = FUN__text__00400fa0(9,lVar9);
      if (lVar9 == 0) {
        return (uint *)0x0;
      }
    }
    *param_1 = lVar9;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (uVar4 <= uVar10) {
      return (uint *)0x0;
    }
    uVar4 = *(uint *)(param_1 + 1);
    uVar11 = (ulong)uVar4;
    *(uint *)(param_1 + 1) = uVar4 + 1;
    uVar10 = 0;
    if (uVar4 == 0) goto LAB__text__0052a8dc;
  }
  do {
    lVar9 = *param_1;
    uVar10 = (uint)uVar11;
    uVar4 = uVar10 - 1 >> 1;
    puVar1 = (uint *)(lVar9 + (ulong)uVar4 * 0x10);
    if (*puVar1 <= param_2) goto LAB__text__0052a8dc;
    uVar5 = *(undefined8 *)(puVar1 + 2);
    puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar10 * 0x10);
    uVar11 = (ulong)uVar4;
    *puVar8 = *(undefined8 *)puVar1;
    puVar8[1] = uVar5;
  } while (1 < uVar10 - 1);
  lVar9 = *param_1;
  uVar10 = uVar4;
LAB__text__0052a8dc:
  puVar1 = (uint *)(lVar9 + (long)(int)uVar10 * 0x10);
  *puVar1 = param_2;
  return puVar1;
}


