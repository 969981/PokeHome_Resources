/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004582c0; name: FUN_.text__004582c0
 */


void FUN__text__004582c0(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar7 = (ulong)uVar2;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar6 = *param_1;
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (lVar6 == 0) {
      lVar6 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
      if (lVar6 == 0) {
        return;
      }
      lVar4 = *param_1;
      if ((lVar4 != 0) && (lVar4 != lVar6)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              lVar4 = uVar5 * 8;
              uVar5 = uVar5 + 2;
              *(undefined8 *)(lVar6 + lVar4) = *(undefined8 *)(*param_1 + lVar4);
              ((undefined8 *)(lVar6 + lVar4))[1] = *(undefined8 *)(*param_1 + lVar4 + 8);
            } while ((uVar7 & 0xfffffffe) != uVar5);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar6 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
          }
          lVar4 = *param_1;
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
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (uVar3 <= uVar2) {
      return;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  *(long *)(lVar6 + uVar7 * 8) = param_2;
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  lVar6 = *(long *)(lVar6 + uVar7 * 8);
  *(int *)(lVar6 + 0xd0) = *(int *)(lVar6 + 0xd0) + 1;
  return;
}


