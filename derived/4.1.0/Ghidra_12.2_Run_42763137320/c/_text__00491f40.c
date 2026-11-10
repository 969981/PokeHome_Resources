/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00491f40; name: FUN_.text__00491f40
 */


long FUN__text__00491f40(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
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
      lVar9 = FUN__text__00400f80(9,(ulong)uVar3 << 4);
      if (lVar9 == 0) {
        return 0;
      }
      lVar5 = *param_1;
      if ((lVar5 != 0) && (lVar5 != lVar9)) {
        if (uVar10 != 0) {
          uVar6 = 0;
          if (uVar10 != 1) {
            lVar5 = 0x10;
            puVar7 = (undefined8 *)(lVar9 + 0x10);
            do {
              puVar7[-2] = 0xffffffffffffffff;
              uVar6 = uVar6 + 2;
              uVar8 = *(undefined8 *)(*param_1 + lVar5 + -0x10);
              uVar4 = *(undefined4 *)(*param_1 + lVar5 + -8);
              *puVar7 = 0xffffffffffffffff;
              *(undefined4 *)(puVar7 + -1) = uVar4;
              puVar7[-2] = uVar8;
              puVar2 = (undefined8 *)(*param_1 + lVar5);
              lVar5 = lVar5 + 0x20;
              uVar8 = *puVar2;
              *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar2 + 1);
              *puVar7 = uVar8;
              puVar7 = puVar7 + 4;
            } while (((ulong)uVar10 & 0xfffffffe) != uVar6);
          }
          if ((uVar10 & 1) != 0) {
            puVar7 = (undefined8 *)(lVar9 + uVar6 * 0x10);
            *puVar7 = 0xffffffffffffffff;
            puVar2 = (undefined8 *)(*param_1 + uVar6 * 0x10);
            uVar8 = *puVar2;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar7 = uVar8;
          }
          lVar5 = *param_1;
        }
        FUN__text__00400fc0(9,lVar5);
      }
    }
    else {
      lVar9 = FUN__text__00400fa0(9,lVar9);
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
  puVar7 = (undefined8 *)(lVar9 + (ulong)param_2 * 0x10);
  if (param_2 <= uVar10 && uVar10 - param_2 != 0) {
    memmove(puVar7 + 2,puVar7,(ulong)((uVar10 - param_2) * 0x10));
  }
  if (lVar9 != 0) {
    *puVar7 = 0xffffffffffffffff;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return *param_1 + (ulong)param_2 * 0x10;
}


