/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005297f0; name: FUN_.text__005297f0
 */


long FUN__text__005297f0(long *param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  int iVar1;
  void *__src;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    uVar4 = 0;
    *param_4 = 0;
    lVar6 = *param_1;
  }
  else {
    uVar4 = 0;
    do {
      uVar11 = uVar4 + (uVar8 >> 1);
      puVar9 = *(ulong **)(*param_1 + (long)(int)uVar11 * 8);
      uVar10 = *puVar9;
      uVar7 = puVar9[1];
      if (uVar10 == param_2 && uVar7 == param_3) {
        *param_4 = 1;
        lVar6 = *param_1;
        uVar4 = uVar11;
        goto joined_r0x005298b0;
      }
      bVar3 = uVar7 < param_3;
      if (uVar10 != param_2) {
        bVar3 = uVar10 < param_2;
      }
      uVar2 = uVar8 - bVar3;
      if (bVar3 != 0) {
        uVar4 = uVar11 + 1;
      }
      uVar8 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_4 = 0;
    lVar6 = *param_1;
  }
joined_r0x005298b0:
  if (lVar6 != 0) {
    uVar11 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    lVar6 = *param_1;
    if (uVar8 <= uVar11) {
      iVar1 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar1 = 1;
      }
      uVar8 = iVar1 + uVar8;
      if (lVar6 == 0) {
        lVar6 = FUN__text__00400f80(9,(ulong)uVar8 << 3);
        if (lVar6 == 0) {
          return 0;
        }
        lVar5 = *param_1;
        if ((lVar5 != 0) && (lVar5 != lVar6)) {
          if (uVar11 != 0) {
            if (uVar11 == 1) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              do {
                lVar5 = uVar10 * 8;
                uVar10 = uVar10 + 2;
                *(undefined8 *)(lVar6 + lVar5) = *(undefined8 *)(*param_1 + lVar5);
                ((undefined8 *)(lVar6 + lVar5))[1] = *(undefined8 *)(*param_1 + lVar5 + 8);
              } while (((ulong)uVar11 & 0xfffffffe) != uVar10);
            }
            if ((uVar11 & 1) != 0) {
              *(undefined8 *)(lVar6 + uVar10 * 8) = *(undefined8 *)(*param_1 + uVar10 * 8);
            }
            lVar5 = *param_1;
          }
          FUN__text__00400fc0(9,lVar5);
        }
      }
      else {
        lVar6 = FUN__text__00400fa0(9,lVar6);
        if (lVar6 == 0) {
          return 0;
        }
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      if (uVar8 <= uVar11) {
        return 0;
      }
      uVar11 = *(uint *)(param_1 + 1);
    }
    if (uVar4 <= uVar11 && uVar11 - uVar4 != 0) {
      __src = (void *)(lVar6 + (ulong)uVar4 * 8);
      memmove((void *)((long)__src + 8),__src,(ulong)((uVar11 - uVar4) * 8));
      uVar11 = *(uint *)(param_1 + 1);
      lVar6 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar11 + 1;
    return lVar6 + (ulong)uVar4 * 8;
  }
  uVar4 = *(uint *)(param_1 + 1);
  uVar10 = (ulong)uVar4;
  uVar8 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 < uVar8) {
    lVar6 = 0;
  }
  else {
    iVar1 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar1 = 1;
    }
    uVar8 = iVar1 + uVar8;
    lVar6 = FUN__text__00400f80(9,(ulong)uVar8 << 3);
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *param_1;
    if ((lVar5 != 0) && (lVar5 != lVar6)) {
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            lVar5 = uVar7 * 8;
            uVar7 = uVar7 + 2;
            *(undefined8 *)(lVar6 + lVar5) = *(undefined8 *)(*param_1 + lVar5);
            ((undefined8 *)(lVar6 + lVar5))[1] = *(undefined8 *)(*param_1 + lVar5 + 8);
          } while ((uVar10 & 0xfffffffe) != uVar7);
        }
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)(lVar6 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
        }
        lVar5 = *param_1;
      }
      FUN__text__00400fc0(9,lVar5);
    }
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar8;
    if (uVar8 <= uVar4) {
      return 0;
    }
    uVar10 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar10 + 1;
  return lVar6 + uVar10 * 8;
}


