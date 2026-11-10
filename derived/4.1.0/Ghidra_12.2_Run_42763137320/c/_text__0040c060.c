/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040c060; name: FUN_.text__0040c060
 */


void FUN__text__0040c060(int *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  uVar2 = (ulong)(uint)param_1[1];
  if (param_1[1] != 0) {
    uVar3 = 0;
    plVar4 = (long *)(param_1 + 4);
    do {
      if (*plVar4 != 0) {
        FUN__text__00400fc0(0);
        uVar2 = (ulong)(uint)param_1[1];
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar3 < uVar2);
  }
  FUN__text__00400fc0(0,param_1);
  return;
}


