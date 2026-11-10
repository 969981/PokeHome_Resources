/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00528760; name: FUN_.text__00528760
 */


long FUN__text__00528760(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *__src;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar8 = *param_1;
  if (uVar3 <= uVar9) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (lVar8 == 0) {
      lVar8 = FUN__text__00400f80(9,(ulong)uVar3 << 4);
      if (lVar8 == 0) {
        return 0;
      }
      lVar5 = *param_1;
      if ((lVar5 != 0) && (lVar5 != lVar8)) {
        if (uVar9 != 0) {
          if (uVar9 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            lVar5 = 0x10;
            puVar7 = (undefined8 *)(lVar8 + 0x10);
            do {
              uVar6 = uVar6 + 2;
              uVar4 = *(undefined8 *)(*param_1 + lVar5 + -8);
              puVar7[-2] = *(undefined8 *)(*param_1 + lVar5 + -0x10);
              puVar7[-1] = uVar4;
              puVar2 = (undefined8 *)(*param_1 + lVar5);
              lVar5 = lVar5 + 0x20;
              uVar4 = puVar2[1];
              *puVar7 = *puVar2;
              puVar7[1] = uVar4;
              puVar7 = puVar7 + 4;
            } while (((ulong)uVar9 & 0xfffffffe) != uVar6);
          }
          if ((uVar9 & 1) != 0) {
            puVar7 = (undefined8 *)(lVar8 + uVar6 * 0x10);
            puVar2 = (undefined8 *)(*param_1 + uVar6 * 0x10);
            uVar4 = puVar2[1];
            *puVar7 = *puVar2;
            puVar7[1] = uVar4;
          }
          lVar5 = *param_1;
        }
        FUN__text__00400fc0(9,lVar5);
      }
    }
    else {
      lVar8 = FUN__text__00400fa0(9,lVar8);
      if (lVar8 == 0) {
        return 0;
      }
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (uVar3 <= uVar9) {
      return 0;
    }
    uVar9 = *(uint *)(param_1 + 1);
  }
  if (param_2 <= uVar9 && uVar9 - param_2 != 0) {
    __src = (void *)(lVar8 + (ulong)param_2 * 0x10);
    memmove((void *)((long)__src + 0x10),__src,(ulong)((uVar9 - param_2) * 0x10));
    uVar9 = *(uint *)(param_1 + 1);
    lVar8 = *param_1;
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  return lVar8 + (ulong)param_2 * 0x10;
}


