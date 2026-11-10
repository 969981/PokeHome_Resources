/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051f360; name: FUN_.text__0051f360
 */


void FUN__text__0051f360(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  uVar5 = *(uint *)(param_1 + 0x80);
  if (uVar5 != 0) {
    uVar1 = **(uint **)(param_3 + 0x168);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar1 / uVar5;
    }
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x78) + (ulong)(uVar1 - uVar2 * uVar5) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
      if (*(uint *)(plVar9 + 3) == uVar1) {
        plVar6 = (long *)*plVar9;
        uVar5 = *(uint *)(plVar9 + 1);
        uVar4 = (ulong)uVar5;
        plVar3 = plVar6;
        if (uVar5 == 0) goto LAB__text__0051f3f4;
        lVar7 = 0;
        goto LAB__text__0051f3d4;
      }
    }
  }
LAB__text__0051f580:
  plVar9 = *(long **)(param_1 + 0x90);
  uVar5 = *(uint *)(param_1 + 0x98);
joined_r0x0051f65c:
  plVar3 = plVar9;
  if (uVar5 == 0) {
LAB__text__0051f664:
    if (plVar3 != plVar9 + uVar5) {
      uVar5 = uVar5 - 1;
      if (plVar3 < plVar9 + uVar5) {
        memmove(plVar3,plVar3 + 1,(ulong)(uint)((int)(plVar9 + uVar5) - (int)plVar3) & 0xfffffff8);
        uVar5 = *(int *)(param_1 + 0x98) - 1;
      }
      *(uint *)(param_1 + 0x98) = uVar5;
      return;
    }
  }
  else {
    lVar7 = (ulong)uVar5 << 3;
    do {
      if (*plVar3 == param_2) goto LAB__text__0051f664;
      plVar3 = plVar3 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return;
LAB__text__0051f3d4:
  if (*(long *)((long)plVar6 + lVar7) != param_3) goto code_r0x0051f3e0;
  plVar3 = (long *)((long)plVar6 + lVar7);
LAB__text__0051f3f4:
  if (plVar3 != plVar6 + uVar5) {
    uVar4 = (ulong)(uVar5 - 1);
    if (plVar3 < plVar6 + uVar4) {
      memmove(plVar3,plVar3 + 1,(ulong)(uint)((int)(plVar6 + uVar4) - (int)plVar3) & 0xfffffff8);
      uVar4 = (ulong)((int)plVar9[1] - 1);
      plVar6 = (long *)*plVar9;
    }
    *(int *)(plVar9 + 1) = (int)uVar4;
  }
LAB__text__0051f430:
  plVar3 = plVar6;
  if ((int)uVar4 == 0) {
LAB__text__0051f464:
    if (plVar3 != plVar6 + uVar4) {
      uVar4 = (ulong)((int)uVar4 - 1);
      if (plVar3 < plVar6 + uVar4) {
        memmove(plVar3,plVar3 + 1,(ulong)(uint)((int)(plVar6 + uVar4) - (int)plVar3) & 0xfffffff8);
        uVar4 = (ulong)((int)plVar9[1] - 1);
        plVar6 = (long *)*plVar9;
      }
      *(int *)(plVar9 + 1) = (int)uVar4;
    }
  }
  else {
    lVar7 = 0;
    do {
      if (*(long *)((long)plVar6 + lVar7) == param_3 + 0x58) {
        plVar3 = (long *)((long)plVar6 + lVar7);
        goto LAB__text__0051f464;
      }
      lVar7 = lVar7 + 8;
    } while (uVar4 * 8 != lVar7);
  }
  plVar3 = plVar6;
  if ((int)uVar4 == 0) {
LAB__text__0051f4d4:
    if (plVar3 != plVar6 + uVar4) {
      uVar4 = (ulong)((int)uVar4 - 1);
      if (plVar3 < plVar6 + uVar4) {
        memmove(plVar3,plVar3 + 1,(ulong)(uint)((int)(plVar6 + uVar4) - (int)plVar3) & 0xfffffff8);
        uVar4 = (ulong)((int)plVar9[1] - 1);
        plVar6 = (long *)*plVar9;
      }
      *(int *)(plVar9 + 1) = (int)uVar4;
    }
  }
  else {
    lVar7 = 0;
    do {
      if (*(long *)((long)plVar6 + lVar7) == param_3 + 0xb0) {
        plVar3 = (long *)((long)plVar6 + lVar7);
        goto LAB__text__0051f4d4;
      }
      lVar7 = lVar7 + 8;
    } while (uVar4 * 8 != lVar7);
  }
  plVar3 = plVar6;
  if ((int)uVar4 == 0) {
LAB__text__0051f544:
    if (plVar3 != plVar6 + uVar4) {
      uVar4 = (ulong)((int)uVar4 - 1);
      if (plVar3 < plVar6 + uVar4) {
        memmove(plVar3,plVar3 + 1,(ulong)(uint)((int)(plVar6 + uVar4) - (int)plVar3) & 0xfffffff8);
        uVar4 = (ulong)((int)plVar9[1] - 1);
      }
      *(int *)(plVar9 + 1) = (int)uVar4;
    }
  }
  else {
    lVar7 = uVar4 << 3;
    do {
      if (*plVar3 == param_3 + 0x108) goto LAB__text__0051f544;
      plVar3 = plVar3 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    uVar4 = 1;
  }
  if ((int)uVar4 != 0) goto LAB__text__0051f580;
  uVar5 = *(uint *)(param_1 + 0x80);
  if (uVar5 != 0) {
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar1 / uVar5;
    }
    plVar3 = (long *)(*(long *)(param_1 + 0x78) + (ulong)(uVar1 - uVar2 * uVar5) * 8);
    lVar7 = *plVar3;
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) == uVar1) {
        lVar8 = 0;
      }
      else {
        do {
          lVar8 = lVar7;
          lVar7 = *(long *)(lVar8 + 0x10);
          if (lVar7 == 0) goto LAB__text__0051f62c;
        } while (*(uint *)(lVar7 + 0x18) != uVar1);
      }
      if (lVar8 != 0) {
        plVar3 = (long *)(lVar8 + 0x10);
      }
      *plVar3 = *(long *)(lVar7 + 0x10);
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
    }
  }
LAB__text__0051f62c:
  if (*plVar9 != 0) {
    *(undefined4 *)(plVar9 + 1) = 0;
    FUN__text__00400fc0(10);
    *plVar9 = 0;
    *(undefined4 *)((long)plVar9 + 0xc) = 0;
  }
  FUN__text__00400fc0(10,plVar9);
  plVar9 = *(long **)(param_1 + 0x90);
  uVar5 = *(uint *)(param_1 + 0x98);
  goto joined_r0x0051f65c;
code_r0x0051f3e0:
  lVar7 = lVar7 + 8;
  if (uVar4 * 8 == lVar7) goto LAB__text__0051f430;
  goto LAB__text__0051f3d4;
}


