/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d570; name: FUN_.text__0046d570
 */


void FUN__text__0046d570(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar10 = (ulong)uVar3;
  uVar4 = *(uint *)(param_1 + 0x24);
  lVar9 = *(long *)(param_1 + 0x18);
  if (uVar3 < uVar4) {
    *(uint *)(param_1 + 0x20) = uVar3 + 1;
    if (lVar9 == 0) {
      return;
    }
  }
  else {
    iVar2 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    uVar4 = iVar2 + uVar4;
    if (lVar9 == 0) {
      lVar9 = FUN__text__00400f80(0,(ulong)uVar4 << 3);
      if (lVar9 == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if ((lVar7 != 0) && (lVar7 != lVar9)) {
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              lVar7 = uVar8 * 8;
              uVar8 = uVar8 + 2;
              *(undefined8 *)(lVar9 + lVar7) = *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7);
              ((undefined8 *)(lVar9 + lVar7))[1] =
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7 + 8);
            } while ((uVar10 & 0xfffffffe) != uVar8);
          }
          if ((uVar3 & 1) != 0) {
            *(undefined8 *)(lVar9 + uVar8 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar8 * 8);
          }
          lVar7 = *(long *)(param_1 + 0x18);
        }
        FUN__text__00400fc0(0,lVar7);
      }
    }
    else {
      lVar9 = FUN__text__00400fa0(0,lVar9);
      if (lVar9 == 0) {
        return;
      }
    }
    *(long *)(param_1 + 0x18) = lVar9;
    *(uint *)(param_1 + 0x24) = uVar4;
    if (uVar4 <= uVar3) {
      return;
    }
    uVar10 = (ulong)*(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
  }
  piVar1 = (int *)(param_2 + 0x14);
  *(long *)(lVar9 + uVar10 * 8) = param_2;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}


