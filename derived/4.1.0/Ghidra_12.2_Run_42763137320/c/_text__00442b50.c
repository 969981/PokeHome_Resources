/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00442b50; name: FUN_.text__00442b50
 */


long FUN__text__00442b50(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar9 = *param_1;
  if (uVar3 <= uVar10) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (lVar9 == 0) {
      lVar9 = FUN__text__00400f80(0,(ulong)uVar3 << 4);
      if (lVar9 == 0) {
        return 0;
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
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              uVar7 = uVar7 + 2;
              uVar5 = *(undefined8 *)(*param_1 + lVar6 + -0x10);
              uVar4 = *(undefined8 *)(*param_1 + lVar6 + -8);
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[-2] = uVar5;
              puVar8[-1] = uVar4;
              puVar2 = (undefined8 *)(*param_1 + lVar6);
              lVar6 = lVar6 + 0x20;
              uVar5 = puVar2[1];
              *puVar8 = *puVar2;
              puVar8[1] = uVar5;
              puVar8 = puVar8 + 4;
            } while (((ulong)uVar10 & 0xfffffffe) != uVar7);
          }
          if ((uVar10 & 1) != 0) {
            puVar8 = (undefined8 *)(lVar9 + uVar7 * 0x10);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar2 = (undefined8 *)(*param_1 + uVar7 * 0x10);
            uVar5 = puVar2[1];
            *puVar8 = *puVar2;
            puVar8[1] = uVar5;
          }
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(0,lVar6);
      }
    }
    else {
      lVar9 = FUN__text__00400fa0(0,lVar9);
      if (lVar9 == 0) {
        return 0;
      }
    }
    *param_1 = lVar9;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (uVar3 <= uVar10) {
      return 0;
    }
    uVar10 = *(uint *)(param_1 + 1);
  }
  puVar8 = (undefined8 *)(lVar9 + (ulong)param_2 * 0x10);
  if (param_2 <= uVar10 && uVar10 - param_2 != 0) {
    memmove(puVar8 + 2,puVar8,(ulong)((uVar10 - param_2) * 0x10));
  }
  if (lVar9 != 0) {
    *puVar8 = 0;
    puVar8[1] = 0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return *param_1 + (ulong)param_2 * 0x10;
}


