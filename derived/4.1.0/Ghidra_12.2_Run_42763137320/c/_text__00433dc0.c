/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433dc0; name: FUN_.text__00433dc0
 */


void FUN__text__00433dc0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  FUN__text__00434088();
  if ((int)param_1[1] != 0) {
    plVar5 = *(long **)*param_1;
    if (plVar5 == (long *)0x0) {
      uVar4 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar4) goto LAB__text__00433e9c;
        plVar5 = (long *)((undefined8 *)*param_1)[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (plVar5 == (long *)0x0);
    }
    else {
      uVar4 = 0;
    }
    do {
      plVar2 = (long *)*plVar5;
      uVar6 = uVar4 & 0xffffffff;
      plVar7 = plVar2;
      if (plVar2 == (long *)0x0) {
        uVar1 = *(uint *)(param_1 + 1);
        if (uVar1 <= (int)uVar4 + 1U) {
          uVar1 = (int)uVar4 + 1;
        }
        uVar6 = (ulong)uVar1;
        uVar3 = uVar4 & 0xffffffff;
        do {
          if (uVar1 - 1 == (int)uVar3) {
            plVar7 = (long *)0x0;
            goto LAB__text__00433e20;
          }
          uVar3 = (ulong)((int)uVar3 + 1);
          plVar7 = *(long **)(*param_1 + uVar3 * 8);
        } while (plVar7 == (long *)0x0);
        uVar6 = uVar3;
      }
LAB__text__00433e20:
      *(long **)(*param_1 + (uVar4 & 0xffffffff) * 8) = plVar2;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      FUN__text__00436920(plVar5);
      FUN__text__00400fc0(0x10,plVar5);
      uVar4 = uVar6;
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB__text__00433e9c:
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if ((int)param_1[4] != 0) {
    plVar5 = *(long **)param_1[3];
    if (plVar5 == (long *)0x0) {
      uVar4 = 0;
      do {
        if ((int)param_1[4] - 1 == uVar4) goto LAB__text__00433f7c;
        plVar5 = (long *)((undefined8 *)param_1[3])[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (plVar5 == (long *)0x0);
    }
    else {
      uVar4 = 0;
    }
    do {
      plVar2 = (long *)*plVar5;
      uVar6 = uVar4 & 0xffffffff;
      plVar7 = plVar2;
      if (plVar2 == (long *)0x0) {
        uVar1 = *(uint *)(param_1 + 4);
        if (uVar1 <= (int)uVar4 + 1U) {
          uVar1 = (int)uVar4 + 1;
        }
        uVar6 = (ulong)uVar1;
        uVar3 = uVar4 & 0xffffffff;
        do {
          if (uVar1 - 1 == (int)uVar3) {
            plVar7 = (long *)0x0;
            goto LAB__text__00433f00;
          }
          uVar3 = (ulong)((int)uVar3 + 1);
          plVar7 = *(long **)(param_1[3] + uVar3 * 8);
        } while (plVar7 == (long *)0x0);
        uVar6 = uVar3;
      }
LAB__text__00433f00:
      *(long **)(param_1[3] + (uVar4 & 0xffffffff) * 8) = plVar2;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      FUN__text__00436920(plVar5);
      FUN__text__00400fc0(0x10,plVar5);
      uVar4 = uVar6;
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB__text__00433f7c:
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN__text__00400fc0(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if ((int)param_1[7] != 0) {
    plVar5 = *(long **)param_1[6];
    if (plVar5 == (long *)0x0) {
      uVar4 = 0;
      do {
        if ((int)param_1[7] - 1 == uVar4) goto LAB__text__0043405c;
        plVar5 = (long *)((undefined8 *)param_1[6])[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (plVar5 == (long *)0x0);
    }
    else {
      uVar4 = 0;
    }
    do {
      plVar2 = (long *)*plVar5;
      uVar6 = uVar4 & 0xffffffff;
      plVar7 = plVar2;
      if (plVar2 == (long *)0x0) {
        uVar1 = *(uint *)(param_1 + 7);
        if (uVar1 <= (int)uVar4 + 1U) {
          uVar1 = (int)uVar4 + 1;
        }
        uVar6 = (ulong)uVar1;
        uVar3 = uVar4 & 0xffffffff;
        do {
          if (uVar1 - 1 == (int)uVar3) {
            plVar7 = (long *)0x0;
            goto LAB__text__00433fe0;
          }
          uVar3 = (ulong)((int)uVar3 + 1);
          plVar7 = *(long **)(param_1[6] + uVar3 * 8);
        } while (plVar7 == (long *)0x0);
        uVar6 = uVar3;
      }
LAB__text__00433fe0:
      *(long **)(param_1[6] + (uVar4 & 0xffffffff) * 8) = plVar2;
      *(int *)(param_1 + 8) = (int)param_1[8] + -1;
      FUN__text__00436920(plVar5);
      FUN__text__00400fc0(0x10,plVar5);
      uVar4 = uVar6;
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB__text__0043405c:
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  return;
}


