/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432f60; name: FUN_.text__00432f60
 */


long FUN__text__00432f60(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  void *__src;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    uVar3 = 0;
    *param_3 = 0;
    lVar5 = *param_1;
  }
  else {
    uVar3 = 0;
    do {
      uVar9 = uVar3 + (uVar7 >> 1);
      uVar2 = *(uint *)(*(long *)(*param_1 + (long)(int)uVar9 * 8) + 8);
      if (uVar2 == param_2) {
        *param_3 = 1;
        lVar5 = *param_1;
        uVar3 = uVar9;
        goto joined_r0x00433008;
      }
      if (uVar2 < param_2) {
        uVar3 = uVar9 + 1;
      }
      uVar9 = uVar7 - (uVar2 < param_2);
      uVar7 = uVar9 >> 1;
    } while (1 < uVar9);
    *param_3 = 0;
    lVar5 = *param_1;
  }
joined_r0x00433008:
  if (lVar5 != 0) {
    uVar9 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    lVar5 = *param_1;
    if (uVar7 <= uVar9) {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      if (lVar5 == 0) {
        lVar5 = FUN__text__00400f80(0,(ulong)uVar7 << 3);
        if (lVar5 == 0) {
          return 0;
        }
        lVar4 = *param_1;
        if ((lVar4 != 0) && (lVar4 != lVar5)) {
          if (uVar9 != 0) {
            if (uVar9 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              do {
                lVar4 = uVar8 * 8;
                uVar8 = uVar8 + 2;
                *(undefined8 *)(lVar5 + lVar4) = *(undefined8 *)(*param_1 + lVar4);
                ((undefined8 *)(lVar5 + lVar4))[1] = *(undefined8 *)(*param_1 + lVar4 + 8);
              } while (((ulong)uVar9 & 0xfffffffe) != uVar8);
            }
            if ((uVar9 & 1) != 0) {
              *(undefined8 *)(lVar5 + uVar8 * 8) = *(undefined8 *)(*param_1 + uVar8 * 8);
            }
            lVar4 = *param_1;
          }
          FUN__text__00400fc0(0,lVar4);
        }
      }
      else {
        lVar5 = FUN__text__00400fa0(0,lVar5);
        if (lVar5 == 0) {
          return 0;
        }
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar7;
      if (uVar7 <= uVar9) {
        return 0;
      }
      uVar9 = *(uint *)(param_1 + 1);
    }
    if (uVar3 <= uVar9 && uVar9 - uVar3 != 0) {
      __src = (void *)(lVar5 + (ulong)uVar3 * 8);
      memmove((void *)((long)__src + 8),__src,(ulong)((uVar9 - uVar3) * 8));
      uVar9 = *(uint *)(param_1 + 1);
      lVar5 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar9 + 1;
    return lVar5 + (ulong)uVar3 * 8;
  }
  uVar3 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar3;
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 < uVar7) {
    lVar5 = 0;
  }
  else {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    lVar5 = FUN__text__00400f80(0,(ulong)uVar7 << 3);
    if (lVar5 == 0) {
      return 0;
    }
    lVar4 = *param_1;
    if ((lVar4 != 0) && (lVar4 != lVar5)) {
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            lVar4 = uVar6 * 8;
            uVar6 = uVar6 + 2;
            *(undefined8 *)(lVar5 + lVar4) = *(undefined8 *)(*param_1 + lVar4);
            ((undefined8 *)(lVar5 + lVar4))[1] = *(undefined8 *)(*param_1 + lVar4 + 8);
          } while ((uVar8 & 0xfffffffe) != uVar6);
        }
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)(lVar5 + uVar6 * 8) = *(undefined8 *)(*param_1 + uVar6 * 8);
        }
        lVar4 = *param_1;
      }
      FUN__text__00400fc0(0,lVar4);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar7;
    if (uVar7 <= uVar3) {
      return 0;
    }
    uVar8 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar8 + 1;
  return lVar5 + uVar8 * 8;
}


