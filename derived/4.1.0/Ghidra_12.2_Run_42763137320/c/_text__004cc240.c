/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc240; name: FUN_.text__004cc240
 */


void FUN__text__004cc240(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar4 = *(uint *)((long)param_3 + 0xc);
  lVar6 = *param_3;
  if (uVar2 < uVar4) {
    *(uint *)(param_3 + 1) = uVar2 + 1;
    if (lVar6 == 0) {
      return;
    }
    *(long *)(lVar6 + (ulong)uVar2 * 8) = param_2;
    uVar4 = (uint)*(ushort *)(param_2 + 8);
    if (*(ushort *)(param_2 + 8) == 0) {
LAB__text__004cc398:
      *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + 1;
      goto LAB__text__004cc3a4;
    }
  }
  else {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar4 = iVar1 + uVar4;
    if (lVar6 == 0) {
      lVar6 = FUN__text__00400f80(0,(ulong)uVar4 << 3);
      if (lVar6 == 0) {
        return;
      }
      lVar3 = *param_3;
      if ((lVar3 != 0) && (lVar3 != lVar6)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              lVar3 = uVar5 * 8;
              uVar5 = uVar5 + 2;
              *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(*param_3 + lVar3);
              ((undefined8 *)(lVar6 + lVar3))[1] = *(undefined8 *)(*param_3 + lVar3 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar6 + uVar5 * 8) = *(undefined8 *)(*param_3 + uVar5 * 8);
          }
          lVar3 = *param_3;
        }
        FUN__text__00400fc0(0,lVar3);
      }
    }
    else {
      lVar6 = FUN__text__00400fa0(0,lVar6);
      if (lVar6 == 0) {
        return;
      }
    }
    *param_3 = lVar6;
    *(uint *)((long)param_3 + 0xc) = uVar4;
    if (uVar4 <= uVar2) {
      return;
    }
    uVar4 = *(uint *)(param_3 + 1);
    *(uint *)(param_3 + 1) = uVar4 + 1;
    *(long *)(lVar6 + (ulong)uVar4 * 8) = param_2;
    uVar4 = (uint)*(ushort *)(param_2 + 8);
    if (uVar4 == 0) goto LAB__text__004cc398;
  }
  if (uVar4 == 100) {
    *(int *)(param_3 + 2) = (int)param_3[2] + 1;
  }
LAB__text__004cc3a4:
  *(uint *)(param_3 + 3) = (int)param_3[3] + uVar4;
  return;
}


