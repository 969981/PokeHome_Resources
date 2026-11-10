/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004323e0; name: FUN_.text__004323e0
 */


void FUN__text__004323e0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)*param_1;
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  plVar5 = plVar6;
  if (*(uint *)(param_1 + 1) != 0) {
    plVar4 = plVar6 + uVar3;
    do {
      iVar2 = (int)uVar3;
      lVar7 = *plVar6;
      if (plVar6 < plVar4 + -1) {
        *plVar6 = plVar4[-1];
        iVar2 = *(int *)(param_1 + 1);
      }
      uVar1 = iVar2 - 1;
      *(uint *)(param_1 + 1) = uVar1;
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x18) != 0) {
          FUN__text__00400fc0(0);
        }
        *(long *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined4 *)(lVar7 + 0x28) = 1;
        FUN__text__00400fc0(2,lVar7);
        uVar1 = *(uint *)(param_1 + 1);
      }
      uVar3 = (ulong)uVar1;
      plVar5 = (long *)*param_1;
      plVar4 = plVar5 + uVar3;
    } while (plVar6 != plVar4);
  }
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,plVar5);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


