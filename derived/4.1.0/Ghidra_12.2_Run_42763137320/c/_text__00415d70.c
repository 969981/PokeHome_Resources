/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415d70; name: FUN_.text__00415d70
 */


long FUN__text__00415d70(long *param_1,uint param_2)

{
  int iVar1;
  void *__src;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  lVar5 = *param_1;
  if (uVar2 <= uVar6) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar2 = iVar1 + uVar2;
    if (lVar5 == 0) {
      lVar5 = FUN__text__00400f80(5,(ulong)uVar2 << 3);
      if (lVar5 == 0) {
        return 0;
      }
      lVar3 = *param_1;
      if ((lVar3 != 0) && (lVar3 != lVar5)) {
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              lVar3 = uVar4 * 8;
              uVar4 = uVar4 + 2;
              *(undefined8 *)(lVar5 + lVar3) = *(undefined8 *)(*param_1 + lVar3);
              ((undefined8 *)(lVar5 + lVar3))[1] = *(undefined8 *)(*param_1 + lVar3 + 8);
            } while (((ulong)uVar6 & 0xfffffffe) != uVar4);
          }
          if ((uVar6 & 1) != 0) {
            *(undefined8 *)(lVar5 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          }
          lVar3 = *param_1;
        }
        FUN__text__00400fc0(5,lVar3);
      }
    }
    else {
      lVar5 = FUN__text__00400fa0(5,lVar5);
      if (lVar5 == 0) {
        return 0;
      }
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    if (uVar2 <= uVar6) {
      return 0;
    }
    uVar6 = *(uint *)(param_1 + 1);
  }
  if (param_2 <= uVar6 && uVar6 - param_2 != 0) {
    __src = (void *)(lVar5 + (ulong)param_2 * 8);
    memmove((void *)((long)__src + 8),__src,(ulong)((uVar6 - param_2) * 8));
    uVar6 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
  }
  *(uint *)(param_1 + 1) = uVar6 + 1;
  return lVar5 + (ulong)param_2 * 8;
}


