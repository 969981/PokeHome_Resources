/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042f18c; name: FUN_.text__0042f18c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0042f18c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x10;
  if (param_3 != 1) {
    lVar1 = param_1;
  }
  lVar6 = FUN__text__00400f80(0,0x50);
  if (lVar6 == 0) {
    return 0;
  }
  FUN__text__0042fb24(lVar6);
  iVar5 = FUN__text__0042ffe0(lVar6,param_2,*(undefined4 *)(*_DAT_008a45c0 + 0x88));
  if (iVar5 != 2) {
    lVar4 = (ulong)(param_3 == 1) * 0x10;
    uVar2 = *(uint *)(lVar1 + 8);
    uVar3 = *(uint *)(lVar1 + 0xc);
    lVar9 = *(long *)(param_1 + lVar4);
    if (uVar2 < uVar3) {
      *(uint *)(lVar1 + 8) = uVar2 + 1;
      if (lVar9 != 0) {
        *(long *)(lVar9 + (ulong)uVar2 * 8) = lVar6;
        return lVar6;
      }
    }
    else {
      iVar5 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar5 = 1;
      }
      uVar3 = iVar5 + uVar3;
      if (lVar9 == 0) {
        lVar9 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
        if (lVar9 == 0) goto LAB__text__0042f1fc;
        lVar7 = *(long *)(param_1 + lVar4);
        if ((lVar7 != 0) && (lVar7 != lVar9)) {
          if (uVar2 != 0) {
            if (uVar2 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              do {
                lVar7 = uVar8 * 8;
                uVar8 = uVar8 + 2;
                *(undefined8 *)(lVar9 + lVar7) = *(undefined8 *)(*(long *)(param_1 + lVar4) + lVar7)
                ;
                ((undefined8 *)(lVar9 + lVar7))[1] =
                     *(undefined8 *)(*(long *)(param_1 + lVar4) + lVar7 + 8);
              } while (((ulong)uVar2 & 0xfffffffe) != uVar8);
            }
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(lVar9 + uVar8 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + lVar4) + uVar8 * 8);
            }
            lVar7 = *(long *)(param_1 + lVar4);
          }
          FUN__text__00400fc0(0,lVar7);
        }
      }
      else {
        lVar9 = FUN__text__00400fa0(0,lVar9);
        if (lVar9 == 0) goto LAB__text__0042f1fc;
      }
      *(long *)(param_1 + lVar4) = lVar9;
      *(uint *)(lVar1 + 0xc) = uVar3;
      if (uVar2 < uVar3) {
        uVar3 = *(uint *)(lVar1 + 8);
        *(uint *)(lVar1 + 8) = uVar3 + 1;
        *(long *)(lVar9 + (ulong)uVar3 * 8) = lVar6;
        return lVar6;
      }
    }
  }
LAB__text__0042f1fc:
  FUN__text__0042fb4c(lVar6);
  FUN__text__00400fc0(0,lVar6);
  return 0;
}


