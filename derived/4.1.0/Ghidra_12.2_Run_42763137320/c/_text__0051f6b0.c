/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051f6b0; name: FUN_.text__0051f6b0
 */


void FUN__text__0051f6b0(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar4 = (long *)**(undefined8 **)(param_1 + 0x60);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x68) - 1 == uVar5) goto LAB__text__0051f7e0;
        plVar4 = (long *)(*(undefined8 **)(param_1 + 0x60))[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (plVar4 == (long *)0x0);
    }
    else {
      uVar5 = 0;
    }
    do {
      while ((int)plVar4[1] != 0) {
        FUN__text__00521d10(*(undefined8 *)*plVar4,param_1);
      }
      plVar2 = (long *)plVar4[2];
      uVar6 = uVar5 & 0xffffffff;
      plVar7 = plVar2;
      if (plVar2 == (long *)0x0) {
        uVar1 = *(uint *)(param_1 + 0x68);
        if (uVar1 <= (int)uVar5 + 1U) {
          uVar1 = (int)uVar5 + 1;
        }
        uVar6 = (ulong)uVar1;
        uVar3 = uVar5 & 0xffffffff;
        do {
          if (uVar1 - 1 == (int)uVar3) {
            plVar7 = (long *)0x0;
            goto LAB__text__0051f784;
          }
          uVar3 = (ulong)((int)uVar3 + 1);
          plVar7 = *(long **)(*(long *)(param_1 + 0x60) + uVar3 * 8);
        } while (plVar7 == (long *)0x0);
        uVar6 = uVar3;
      }
LAB__text__0051f784:
      *(long **)(*(long *)(param_1 + 0x60) + (uVar5 & 0xffffffff) * 8) = plVar2;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      if (*plVar4 != 0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        FUN__text__00400fc0(9);
        *plVar4 = 0;
        *(undefined4 *)((long)plVar4 + 0xc) = 0;
      }
      FUN__text__00400fc0(10,plVar4);
      plVar4 = plVar7;
      uVar5 = uVar6;
    } while (plVar7 != (long *)0x0);
  }
LAB__text__0051f7e0:
  while (*(int *)(param_1 + 0x98) != 0) {
    FUN__text__00521d10(**(undefined8 **)(param_1 + 0x90),param_1);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}


