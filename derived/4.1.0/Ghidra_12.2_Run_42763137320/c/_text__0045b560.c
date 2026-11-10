/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045b560; name: FUN_.text__0045b560
 */


ulong * FUN__text__0045b560(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
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
      uVar1 = iVar6 + (uVar8 >> 1);
      uVar11 = *(ulong *)(*param_1 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar11 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar11 < param_2) {
        iVar6 = uVar1 + 1;
      }
      uVar1 = uVar8 - (uVar11 < param_2);
      uVar8 = uVar1 >> 1;
    } while (1 < uVar1);
    *param_3 = 0;
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar1 < uVar8) {
      puVar5 = (ulong *)((long)(ulong)uVar1 << 4);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      puVar4 = (ulong *)(ulong)uVar1;
    }
    else {
      iVar6 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar6 = 1;
      }
      uVar8 = iVar6 + uVar8;
      lVar9 = FUN__text__00400f80(0,(ulong)uVar8 << 4);
      if (lVar9 == 0) {
        return (ulong *)0x0;
      }
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar9)) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
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
            } while (((ulong)uVar1 & 0xfffffffe) != uVar11);
          }
          if ((uVar1 & 1) != 0) {
            puVar10 = (undefined8 *)(lVar9 + uVar11 * 0x10);
            puVar2 = (undefined8 *)(*param_1 + uVar11 * 0x10);
            uVar3 = puVar2[1];
            *puVar10 = *puVar2;
            puVar10[1] = uVar3;
          }
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      if (uVar8 <= uVar1) {
        return (ulong *)0x0;
      }
      puVar5 = (ulong *)(lVar9 + (ulong)*(uint *)(param_1 + 1) * 0x10);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      puVar4 = puVar5;
    }
  }
  else {
    puVar5 = (ulong *)FUN__text__0045b750(param_1,iVar6);
    puVar4 = puVar5;
  }
  if (puVar4 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  *puVar5 = param_2;
  return puVar5;
}


