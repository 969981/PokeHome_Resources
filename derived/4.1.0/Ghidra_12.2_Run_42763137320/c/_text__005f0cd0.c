/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f0cd0; name: FUN_.text__005f0cd0
 */


void FUN__text__005f0cd0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long extraout_x1;
  long extraout_x1_00;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 local_68;
  undefined1 uStack_41;
  
  plVar7 = *(long **)(param_1 + 8);
  plVar1 = plVar7;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3;
  }
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = plVar7;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0x1688,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN__text__005eade0(lVar3,param_2,plVar1);
  *(long **)(lVar3 + 8) = plVar7;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x1688;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0x238) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x238) = lVar3;
  iVar8 = *(int *)(param_2 + 0x48);
  uVar9 = (ulong)iVar8;
  lVar6 = *(long *)(param_1 + 0x648);
  plVar1 = (long *)(param_1 + 0x640);
  lVar3 = lVar6 - *(long *)(param_1 + 0x640) >> 3;
  bVar2 = (ulong)(lVar3 * -0x7d05f417d05f417d) <= uVar9;
  lVar3 = uVar9 + lVar3 * 0x7d05f417d05f417d;
  if (bVar2 && lVar3 != 0) {
    FUN__text__005f0ff0(plVar1);
    lVar3 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x648);
    if (lVar3 == *(long *)(param_1 + 0x648)) {
      return;
    }
  }
  else if (bVar2) {
    lVar3 = *plVar1;
    if (lVar3 == lVar6) {
      return;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x640) + (long)iVar8 * 0x158;
    for (; lVar6 != lVar4; lVar6 = lVar6 + -0x158) {
      if (*(long *)(lVar6 + -0x10) != 0) {
        plVar7 = (long *)(*(long *)(lVar6 + -0x10) + 0x48);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar3);
        *(undefined8 *)(lVar6 + -0x10) = 0;
        lVar3 = extraout_x1;
      }
      if (*(long *)(lVar6 + -0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar6 + -0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar6 + -0x18) = 0;
        lVar3 = extraout_x1_00;
      }
    }
    *(long *)(param_1 + 0x648) = lVar4;
    lVar3 = *plVar1;
    lVar6 = lVar4;
    if (lVar3 == lVar4) {
      return;
    }
  }
  iVar8 = 0;
  do {
    local_68 = 0;
    lVar4 = FUN__text__0015223c(&uStack_41,*(undefined8 *)(param_1 + 8),&local_68);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    pcVar5 = *(code **)(lVar4 + 0x278);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x280) = 0;
      *(undefined8 *)(lVar4 + 0x288) = 0;
      *(undefined8 *)(lVar4 + 0x270) = 0;
      *(undefined8 *)(lVar4 + 0x278) = 0;
      (*pcVar5)(lVar4 + 0x290);
    }
    *(long *)(lVar4 + 0x290) = param_1;
    *(long *)(lVar4 + 0x298) = lVar3;
    *(code **)(lVar4 + 0x270) = FUN__text__005f1330;
    *(undefined **)(lVar4 + 0x278) = &DAT__text__005f1530;
    *(undefined1 **)(lVar4 + 0x280) = &LAB__text__005f1534;
    *(undefined1 **)(lVar4 + 0x288) = &LAB__text__005f1540;
    *(ulong *)(lVar4 + 0x130) = *(ulong *)(lVar4 + 0x130) | 0x20;
    *(ulong *)(lVar4 + 0x138) = *(ulong *)(lVar4 + 0x138) | 1;
    if (*(long *)(lVar3 + 0x148) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x148) + 0x48) + 0x18))();
    }
    *(long *)(lVar3 + 0x148) = lVar4;
    *(int *)(lVar3 + 0x150) = iVar8;
    lVar3 = lVar3 + 0x158;
    iVar8 = iVar8 + 1;
  } while (lVar3 != lVar6);
  return;
}


