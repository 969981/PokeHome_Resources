/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051be50; name: FUN_.text__0051be50
 */


long FUN__text__0051be50(long *param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  void *__src;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar6 = *param_1;
  if (uVar3 <= uVar7) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (lVar6 == 0) {
      lVar6 = FUN__text__00400f80(9,uVar3);
      if (lVar6 == 0) {
        return 0;
      }
      lVar4 = *param_1;
      if ((lVar4 != 0) && (lVar4 != lVar6)) {
        if (uVar7 != 0) {
          if (uVar7 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              puVar2 = (undefined1 *)(lVar6 + uVar5);
              *puVar2 = *(undefined1 *)(*param_1 + uVar5);
              lVar4 = *param_1 + uVar5;
              uVar5 = uVar5 + 2;
              puVar2[1] = *(undefined1 *)(lVar4 + 1);
            } while (((ulong)uVar7 & 0xfffffffe) != uVar5);
          }
          if ((uVar7 & 1) != 0) {
            *(undefined1 *)(lVar6 + uVar5) = *(undefined1 *)(*param_1 + uVar5);
          }
          lVar4 = *param_1;
        }
        FUN__text__00400fc0(9,lVar4);
      }
    }
    else {
      lVar6 = FUN__text__00400fa0(9,lVar6,uVar3);
      if (lVar6 == 0) {
        return 0;
      }
    }
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (uVar3 <= uVar7) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 1);
  }
  if (param_2 <= uVar7 && uVar7 - param_2 != 0) {
    __src = (void *)(lVar6 + (ulong)param_2);
    memmove((void *)((long)__src + 1),__src,(ulong)(uVar7 - param_2));
    uVar7 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  return lVar6 + (ulong)param_2;
}


