/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051f1c0; name: FUN_.text__0051f1c0
 */


void FUN__text__0051f1c0(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar8 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar2;
  plVar5 = plVar8;
  if (uVar2 == 0) {
LAB__text__0051f210:
    if (plVar5 != plVar8 + uVar9) {
      return;
    }
  }
  else {
    lVar7 = uVar9 << 3;
    do {
      if (*plVar5 == param_2) goto LAB__text__0051f210;
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (plVar8 != (long *)0x0) {
      plVar8[uVar9] = param_2;
      return;
    }
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (plVar8 == (long *)0x0) {
      lVar7 = FUN__text__00400f80(10,(ulong)uVar3 << 3);
      if (lVar7 == 0) {
        return;
      }
      lVar4 = *param_1;
      if ((lVar4 != 0) && (lVar4 != lVar7)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar4 = uVar6 * 8;
              uVar6 = uVar6 + 2;
              *(undefined8 *)(lVar7 + lVar4) = *(undefined8 *)(*param_1 + lVar4);
              ((undefined8 *)(lVar7 + lVar4))[1] = *(undefined8 *)(*param_1 + lVar4 + 8);
            } while ((uVar9 & 0xfffffffe) != uVar6);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar7 + uVar6 * 8) = *(undefined8 *)(*param_1 + uVar6 * 8);
          }
          lVar4 = *param_1;
        }
        FUN__text__00400fc0(10,lVar4);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0(10,plVar8);
      if (lVar7 == 0) {
        return;
      }
    }
    *param_1 = lVar7;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (uVar2 < uVar3) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      *(long *)(lVar7 + (ulong)uVar2 * 8) = param_2;
      return;
    }
  }
  return;
}


