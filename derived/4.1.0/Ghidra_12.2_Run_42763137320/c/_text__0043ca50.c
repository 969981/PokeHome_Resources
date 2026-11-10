/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ca50; name: FUN_.text__0043ca50
 */


ulong * FUN__text__0043ca50(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  
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
      uVar11 = *(ulong *)(*param_1 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar11 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar11 < param_2) {
        iVar5 = uVar1 + 1;
      }
      uVar1 = uVar7 - (uVar11 < param_2);
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
    lVar8 = FUN__text__00400f80(0,(ulong)uVar7 << 4);
    if (lVar8 == 0) {
      return (ulong *)0x0;
    }
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar8)) {
      if (uVar1 != 0) {
        if (uVar1 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          lVar6 = 0x10;
          puVar9 = (undefined8 *)(lVar8 + 0x10);
          do {
            puVar9[-2] = 0;
            uVar11 = uVar11 + 2;
            uVar10 = *(undefined8 *)(*param_1 + lVar6 + -0x10);
            uVar3 = *(undefined2 *)(*param_1 + lVar6 + -8);
            *puVar9 = 0;
            *(undefined2 *)(puVar9 + -1) = uVar3;
            puVar9[-2] = uVar10;
            puVar2 = (undefined8 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 0x20;
            uVar10 = *puVar2;
            *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar2 + 1);
            *puVar9 = uVar10;
            puVar9 = puVar9 + 4;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar11);
        }
        if ((uVar1 & 1) != 0) {
          puVar9 = (undefined8 *)(lVar8 + uVar11 * 0x10);
          *puVar9 = 0;
          puVar2 = (undefined8 *)(*param_1 + uVar11 * 0x10);
          uVar10 = *puVar2;
          *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar2 + 1);
          *puVar9 = uVar10;
        }
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(0,lVar6);
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar7;
    if (uVar7 <= uVar1) {
      return (ulong *)0x0;
    }
    puVar4 = (ulong *)(lVar8 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    *puVar4 = 0;
  }
  else {
    puVar4 = (ulong *)FUN__text__0043cc60(param_1,iVar5);
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  *puVar4 = param_2;
  return puVar4;
}


