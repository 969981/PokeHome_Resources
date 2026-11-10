/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a39b0; name: FUN_.text__006a39b0
 */


void FUN__text__006a39b0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xc0))(plVar3,param_2);
  }
  piVar4 = *(int **)(param_1 + 0x58);
  if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar2 = piVar4[1], 0 < iVar2 + iVar1)) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + uVar5 * 8);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      uVar5 = uVar5 + 1;
    } while ((uint)(iVar2 + iVar1) != uVar5);
  }
  return;
}


