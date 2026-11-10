/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004919e0; name: FUN_.text__004919e0
 */


uint * FUN__text__004919e0(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
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
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 4);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)iVar1 * 4);
      }
      if (uVar2 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar2 = uVar7 - (uVar2 < param_2);
      uVar7 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar2 < uVar7) {
      puVar4 = (uint *)((long)(ulong)uVar2 << 2);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar3 = (uint *)(ulong)uVar2;
    }
    else {
      iVar5 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar5 = 1;
      }
      uVar7 = iVar5 + uVar7;
      lVar8 = FUN__text__00400f80(0,(ulong)uVar7 << 2);
      if (lVar8 == 0) {
        return (uint *)0x0;
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
              lVar6 = uVar9 * 4;
              uVar9 = uVar9 + 2;
              *(undefined4 *)(lVar8 + lVar6) = *(undefined4 *)(*param_1 + lVar6);
              ((undefined4 *)(lVar8 + lVar6))[1] = *(undefined4 *)(*param_1 + lVar6 + 4);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar9);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar8 + uVar9 * 4) = *(undefined4 *)(*param_1 + uVar9 * 4);
          }
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(0,lVar6);
      }
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar7;
      if (uVar7 <= uVar2) {
        return (uint *)0x0;
      }
      puVar4 = (uint *)(lVar8 + (ulong)*(uint *)(param_1 + 1) * 4);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      puVar3 = puVar4;
    }
  }
  else {
    puVar4 = (uint *)FUN__text__00491bc0(param_1,iVar5);
    puVar3 = puVar4;
  }
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *puVar4 = param_2;
  return puVar4;
}


