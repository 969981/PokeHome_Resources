/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444304; name: FUN_.text__00444304
 */


void FUN__text__00444304(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = *(int *)(param_1 + 0xc4);
  if (iVar3 == 0) {
    FUN__text__00444550(param_1,param_3);
    return;
  }
  if (iVar3 == 1) {
    FUN__text__00444550(param_1,param_3);
    if ((*(long *)(param_1 + 0xa0) == 0) && (*(long *)(param_2 + 0x18) != 0)) {
      *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0x18);
      FUN__text__00445c40();
      return;
    }
  }
  else if (iVar3 == 2) {
    lVar7 = *(long *)(param_2 + 0x30);
    if (lVar7 != 0) {
      uVar1 = *(uint *)(param_1 + 0x78);
      uVar2 = *(uint *)(param_1 + 0x7c);
      lVar6 = *(long *)(param_1 + 0x70);
      if (uVar1 < uVar2) {
        *(uint *)(param_1 + 0x78) = uVar1 + 1;
        if (lVar6 != 0) {
          *(long *)(lVar6 + (ulong)uVar1 * 8) = lVar7;
        }
      }
      else {
        iVar3 = uVar2 + (uVar2 >> 1);
        if (uVar2 == 0) {
          iVar3 = 1;
        }
        uVar2 = iVar3 + uVar2;
        if (lVar6 == 0) {
          lVar6 = FUN__text__00400f80(0,(ulong)uVar2 << 3);
          if (lVar6 == 0) {
            return;
          }
          lVar4 = *(long *)(param_1 + 0x70);
          if ((lVar4 != 0) && (lVar4 != lVar6)) {
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                uVar5 = 0;
              }
              else {
                uVar5 = 0;
                do {
                  lVar4 = uVar5 * 8;
                  uVar5 = uVar5 + 2;
                  *(undefined8 *)(lVar6 + lVar4) =
                       *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4);
                  ((undefined8 *)(lVar6 + lVar4))[1] =
                       *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4 + 8);
                } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
              }
              if ((uVar1 & 1) != 0) {
                *(undefined8 *)(lVar6 + uVar5 * 8) =
                     *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar5 * 8);
              }
              lVar4 = *(long *)(param_1 + 0x70);
            }
            FUN__text__00400fc0(0,lVar4);
          }
        }
        else {
          lVar6 = FUN__text__00400fa0(0,lVar6);
          if (lVar6 == 0) {
            return;
          }
        }
        *(long *)(param_1 + 0x70) = lVar6;
        *(uint *)(param_1 + 0x7c) = uVar2;
        if (uVar1 < uVar2) {
          uVar2 = *(uint *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = uVar2 + 1;
          *(long *)(lVar6 + (ulong)uVar2 * 8) = lVar7;
          return;
        }
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  return;
}


