/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c7a0; name: FUN_.text__0051c7a0
 */


undefined8 * FUN__text__0051c7a0(long *param_1,uint *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    iVar6 = 0;
    *param_3 = 0;
    lVar9 = *param_1;
  }
  else {
    iVar6 = 0;
    uVar2 = *param_2;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      uVar3 = **(uint **)(*param_1 + (long)iVar1 * 8);
      if (uVar3 == uVar2) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 8);
      }
      if (uVar3 < uVar2) {
        iVar6 = iVar1 + 1;
      }
      uVar3 = uVar8 - (uVar3 < uVar2);
      uVar8 = uVar3 >> 1;
    } while (1 < uVar3);
    *param_3 = 0;
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar2 < uVar8) {
      puVar5 = (undefined8 *)((long)(ulong)uVar2 << 3);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)(ulong)uVar2;
    }
    else {
      iVar6 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar6 = 1;
      }
      uVar8 = iVar6 + uVar8;
      lVar9 = FUN__text__00400f80(0xb,(ulong)uVar8 << 3);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar9)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              lVar7 = uVar10 * 8;
              uVar10 = uVar10 + 2;
              *(undefined8 *)(lVar9 + lVar7) = *(undefined8 *)(*param_1 + lVar7);
              ((undefined8 *)(lVar9 + lVar7))[1] = *(undefined8 *)(*param_1 + lVar7 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar10);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar9 + uVar10 * 8) = *(undefined8 *)(*param_1 + uVar10 * 8);
          }
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0xb,lVar7);
      }
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      if (uVar8 <= uVar2) {
        return (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(lVar9 + (ulong)*(uint *)(param_1 + 1) * 8);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      puVar4 = puVar5;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN__text__0051df50(param_1,iVar6);
    puVar4 = puVar5;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar5 = param_2;
  return puVar5;
}


