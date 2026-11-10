/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042f400; name: FUN_.text__0042f400
 */


undefined8 FUN__text__0042f400(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar8 = *(long **)(param_2 + 0x28);
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar9 = (ulong)uVar2;
  plVar4 = plVar8;
  if (uVar2 == 0) {
LAB__text__0042f450:
    if (plVar4 != plVar8 + uVar9 && plVar4 != (long *)0x0) {
      return 2;
    }
  }
  else {
    lVar7 = uVar9 << 3;
    do {
      if (*plVar4 == param_3) goto LAB__text__0042f450;
      plVar4 = plVar4 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar3 = *(uint *)(param_2 + 0x34);
  if (uVar2 < uVar3) {
    *(uint *)(param_2 + 0x30) = uVar2 + 1;
    if (plVar8 != (long *)0x0) {
LAB__text__0042f56c:
      plVar8[uVar9] = param_3;
      return 1;
    }
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN__text__00400f80(0,(ulong)uVar3 << 3);
      if (plVar8 == (long *)0x0) {
        return 2;
      }
      plVar4 = *(long **)(param_2 + 0x28);
      if ((plVar4 != (long *)0x0) && (plVar4 != plVar8)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar5 = 0;
          }
          else {
            uVar6 = 0;
            do {
              uVar5 = uVar6 + 2;
              plVar8[uVar6] = *(long *)(*(long *)(param_2 + 0x28) + uVar6 * 8);
              (plVar8 + uVar6)[1] = *(long *)(*(long *)(param_2 + 0x28) + uVar6 * 8 + 8);
              uVar6 = uVar5;
            } while ((uVar9 & 0xfffffffe) != uVar5);
          }
          if ((uVar2 & 1) != 0) {
            plVar8[uVar5] = *(long *)(*(long *)(param_2 + 0x28) + uVar5 * 8);
          }
          plVar4 = *(long **)(param_2 + 0x28);
        }
        FUN__text__00400fc0(0,plVar4);
      }
    }
    else {
      plVar8 = (long *)FUN__text__00400fa0(0,plVar8);
      if (plVar8 == (long *)0x0) {
        return 2;
      }
    }
    *(long **)(param_2 + 0x28) = plVar8;
    *(uint *)(param_2 + 0x34) = uVar3;
    if (uVar2 < uVar3) {
      uVar9 = (ulong)*(uint *)(param_2 + 0x30);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) + 1;
      goto LAB__text__0042f56c;
    }
  }
  return 2;
}


