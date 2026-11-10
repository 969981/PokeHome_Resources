/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046b2d0; name: FUN_.text__0046b2d0
 */


long FUN__text__0046b2d0(long *param_1,undefined8 param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    iVar4 = 0;
    *param_4 = 0;
    lVar10 = *param_1;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar8 >> 1);
      lVar10 = *(long *)(*param_1 + (long)iVar1 * 8);
      if (*(float *)(lVar10 + 0x318) == (float)param_2) {
        uVar9 = *(uint *)(lVar10 + 0x31c);
        uVar6 = (uint)((ulong)param_2 >> 0x20);
        uVar2 = *(uint *)(lVar10 + 800);
        if (uVar9 == uVar6 && uVar2 == param_3) {
          *param_4 = 1;
          lVar10 = *param_1;
          iVar4 = iVar1;
          goto joined_r0x0046b3d4;
        }
        if (*(char *)((long)param_1 + 0x12) == '\0') {
          bVar3 = uVar6 < uVar9;
          if (uVar2 != param_3) {
            bVar3 = param_3 < uVar2;
          }
          uVar9 = (uint)bVar3;
        }
        else {
          bVar3 = uVar9 < uVar6;
          if (uVar2 != param_3) {
            bVar3 = uVar2 < param_3;
          }
          uVar9 = (uint)bVar3;
        }
      }
      else {
        uVar9 = (uint)((float)param_2 < *(float *)(lVar10 + 0x318));
      }
      uVar2 = uVar8 - uVar9;
      if (uVar9 != 0) {
        iVar4 = iVar1 + 1;
      }
      uVar8 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_4 = 0;
    lVar10 = *param_1;
  }
joined_r0x0046b3d4:
  if (lVar10 != 0) {
    lVar10 = FUN__text__0046b4e0(param_1,iVar4);
    return lVar10;
  }
  uVar9 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar9;
  uVar8 = *(uint *)((long)param_1 + 0xc);
  if (uVar9 < uVar8) {
    lVar10 = 0;
  }
  else {
    iVar4 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar4 = 1;
    }
    uVar8 = iVar4 + uVar8;
    lVar10 = FUN__text__00400f80(0,(ulong)uVar8 << 3);
    if (lVar10 == 0) {
      return 0;
    }
    lVar5 = *param_1;
    if ((lVar5 != 0) && (lVar5 != lVar10)) {
      if (uVar9 != 0) {
        if (uVar9 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            lVar5 = uVar7 * 8;
            uVar7 = uVar7 + 2;
            *(undefined8 *)(lVar10 + lVar5) = *(undefined8 *)(*param_1 + lVar5);
            ((undefined8 *)(lVar10 + lVar5))[1] = *(undefined8 *)(*param_1 + lVar5 + 8);
          } while ((uVar11 & 0xfffffffe) != uVar7);
        }
        if ((uVar9 & 1) != 0) {
          *(undefined8 *)(lVar10 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
        }
        lVar5 = *param_1;
      }
      FUN__text__00400fc0(0,lVar5);
    }
    *param_1 = lVar10;
    *(uint *)((long)param_1 + 0xc) = uVar8;
    if (uVar8 <= uVar9) {
      return 0;
    }
    uVar11 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar11 + 1;
  return lVar10 + uVar11 * 8;
}


