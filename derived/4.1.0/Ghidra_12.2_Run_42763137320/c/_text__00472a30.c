/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472a30; name: FUN_.text__00472a30
 */


long FUN__text__00472a30(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  void *__src;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar2 = 0;
    *param_3 = 0;
    lVar4 = *param_1;
  }
  else {
    uVar2 = 0;
    do {
      uVar8 = uVar2 + (uVar6 >> 1);
      uVar7 = *(ulong *)(*(long *)(*param_1 + (long)(int)uVar8 * 8) + 0x20);
      if (uVar7 == param_2) {
        *param_3 = 1;
        lVar4 = *param_1;
        uVar2 = uVar8;
        goto joined_r0x00472ad8;
      }
      if (param_2 <= uVar7) {
        uVar2 = uVar8 + 1;
      }
      uVar8 = uVar6 - (param_2 <= uVar7);
      uVar6 = uVar8 >> 1;
    } while (1 < uVar8);
    *param_3 = 0;
    lVar4 = *param_1;
  }
joined_r0x00472ad8:
  if (lVar4 != 0) {
    uVar8 = *(uint *)(param_1 + 1);
    uVar6 = *(uint *)((long)param_1 + 0xc);
    lVar4 = *param_1;
    if (uVar6 <= uVar8) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      if (lVar4 == 0) {
        lVar4 = FUN__text__00400f80(0,(ulong)uVar6 << 3);
        if (lVar4 == 0) {
          return 0;
        }
        lVar3 = *param_1;
        if ((lVar3 != 0) && (lVar3 != lVar4)) {
          if (uVar8 != 0) {
            if (uVar8 == 1) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                lVar3 = uVar7 * 8;
                uVar7 = uVar7 + 2;
                *(undefined8 *)(lVar4 + lVar3) = *(undefined8 *)(*param_1 + lVar3);
                ((undefined8 *)(lVar4 + lVar3))[1] = *(undefined8 *)(*param_1 + lVar3 + 8);
              } while (((ulong)uVar8 & 0xfffffffe) != uVar7);
            }
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(lVar4 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
            }
            lVar3 = *param_1;
          }
          FUN__text__00400fc0(0,lVar3);
        }
      }
      else {
        lVar4 = FUN__text__00400fa0(0,lVar4);
        if (lVar4 == 0) {
          return 0;
        }
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar6;
      if (uVar6 <= uVar8) {
        return 0;
      }
      uVar8 = *(uint *)(param_1 + 1);
    }
    if (uVar2 <= uVar8 && uVar8 - uVar2 != 0) {
      __src = (void *)(lVar4 + (ulong)uVar2 * 8);
      memmove((void *)((long)__src + 8),__src,(ulong)((uVar8 - uVar2) * 8));
      uVar8 = *(uint *)(param_1 + 1);
      lVar4 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar8 + 1;
    return lVar4 + (ulong)uVar2 * 8;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar7 = (ulong)uVar2;
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 < uVar6) {
    lVar4 = 0;
  }
  else {
    iVar1 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar1 = 1;
    }
    uVar6 = iVar1 + uVar6;
    lVar4 = FUN__text__00400f80(0,(ulong)uVar6 << 3);
    if (lVar4 == 0) {
      return 0;
    }
    lVar3 = *param_1;
    if ((lVar3 != 0) && (lVar3 != lVar4)) {
      if (uVar2 != 0) {
        if (uVar2 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          do {
            lVar3 = uVar5 * 8;
            uVar5 = uVar5 + 2;
            *(undefined8 *)(lVar4 + lVar3) = *(undefined8 *)(*param_1 + lVar3);
            ((undefined8 *)(lVar4 + lVar3))[1] = *(undefined8 *)(*param_1 + lVar3 + 8);
          } while ((uVar7 & 0xfffffffe) != uVar5);
        }
        if ((uVar2 & 1) != 0) {
          *(undefined8 *)(lVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
        }
        lVar3 = *param_1;
      }
      FUN__text__00400fc0(0,lVar3);
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar6;
    if (uVar6 <= uVar2) {
      return 0;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar7 + 1;
  return lVar4 + uVar7 * 8;
}


