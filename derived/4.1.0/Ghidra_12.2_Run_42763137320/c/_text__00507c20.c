/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00507c20; name: FUN_.text__00507c20
 */


ulong * FUN__text__00507c20(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    iVar5 = 0;
    *param_3 = 0;
    lVar8 = *param_1;
  }
  else {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + (uVar7 >> 1);
      uVar9 = *(ulong *)(*param_1 + (long)iVar1 * 8);
      if (uVar9 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)iVar1 * 8);
      }
      if (uVar9 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar2 = uVar7 - (uVar9 < param_2);
      uVar7 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar2 < uVar7) {
      puVar4 = (ulong *)((long)(ulong)uVar2 << 3);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar3 = (ulong *)(ulong)uVar2;
    }
    else {
      iVar5 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar5 = 1;
      }
      uVar7 = iVar5 + uVar7;
      lVar8 = FUN__text__00400f80(9,(ulong)uVar7 << 3);
      if (lVar8 == 0) {
        return (ulong *)0x0;
      }
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar8)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            do {
              lVar6 = uVar9 * 8;
              uVar9 = uVar9 + 2;
              *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)(*param_1 + lVar6);
              ((undefined8 *)(lVar8 + lVar6))[1] = *(undefined8 *)(*param_1 + lVar6 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar9);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar8 + uVar9 * 8) = *(undefined8 *)(*param_1 + uVar9 * 8);
          }
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(9,lVar6);
      }
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar7;
      if (uVar7 <= uVar2) {
        return (ulong *)0x0;
      }
      puVar4 = (ulong *)(lVar8 + (ulong)*(uint *)(param_1 + 1) * 8);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      puVar3 = puVar4;
    }
  }
  else {
    puVar4 = (ulong *)FUN__text__00507e00(param_1,iVar5);
    puVar3 = puVar4;
  }
  if (puVar3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  *puVar4 = param_2;
  return puVar4;
}


