/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00491d30; name: FUN_.text__00491d30
 */


ulong * FUN__text__00491d30(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    iVar5 = 0;
    *param_3 = 0;
    lVar8 = *param_1;
  }
  else {
    iVar5 = 0;
    do {
      uVar1 = iVar5 + (uVar7 >> 1);
      uVar9 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar9 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar9 < param_2) {
        iVar5 = uVar1 + 1;
      }
      uVar1 = uVar7 - (uVar9 < param_2);
      uVar7 = uVar1 >> 1;
    } while (1 < uVar1);
    *param_3 = 0;
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar1 < uVar7) {
      *(uint *)(param_1 + 1) = uVar1 + 1;
      return (ulong *)0x0;
    }
    iVar5 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar5 = 1;
    }
    uVar7 = iVar5 + uVar7;
    lVar8 = FUN__text__00400f80(9,(ulong)uVar7 << 4);
    if (lVar8 == 0) {
      return (ulong *)0x0;
    }
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar8)) {
      if (uVar1 != 0) {
        uVar9 = 0;
        if (uVar1 != 1) {
          lVar6 = 0x10;
          puVar10 = (undefined8 *)(lVar8 + 0x10);
          do {
            puVar10[-2] = 0xffffffffffffffff;
            uVar9 = uVar9 + 2;
            uVar11 = *(undefined8 *)(*param_1 + lVar6 + -0x10);
            uVar3 = *(undefined4 *)(*param_1 + lVar6 + -8);
            *puVar10 = 0xffffffffffffffff;
            *(undefined4 *)(puVar10 + -1) = uVar3;
            puVar10[-2] = uVar11;
            puVar2 = (undefined8 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 0x20;
            uVar11 = *puVar2;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar10 = uVar11;
            puVar10 = puVar10 + 4;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar9);
        }
        if ((uVar1 & 1) != 0) {
          puVar10 = (undefined8 *)(lVar8 + uVar9 * 0x10);
          *puVar10 = 0xffffffffffffffff;
          puVar2 = (undefined8 *)(*param_1 + uVar9 * 0x10);
          uVar11 = *puVar2;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar2 + 1);
          *puVar10 = uVar11;
        }
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(9,lVar6);
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar7;
    if (uVar7 <= uVar1) {
      return (ulong *)0x0;
    }
    puVar4 = (ulong *)(lVar8 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    *puVar4 = 0xffffffffffffffff;
  }
  else {
    puVar4 = (ulong *)FUN__text__00491f40(param_1,iVar5);
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  *puVar4 = param_2;
  return puVar4;
}


