/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458870; name: FUN_.text__00458870
 */


void FUN__text__00458870(long *param_1,ulong *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  
  *param_4 = 0;
  *param_3 = 0;
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    if ((param_1[1] != 0) && (*(int *)(param_1 + 3) != 0)) {
      lVar1 = param_1[2];
      do {
        if ((*param_2 >> ((ulong)*(uint *)(lVar1 + 8) & 0x3f) & 1) != 0) {
          plVar3 = *(long **)(param_1[1] + 0xa8);
          if ((plVar3 == (long *)0x0 || *(int *)(param_1[1] + 0xd4) == 0) ||
             (piVar2 = param_3, *plVar3 == 0)) {
            piVar2 = param_4;
          }
          *piVar2 = *piVar2 + 1;
        }
        lVar1 = lVar1 + 0xc;
      } while (lVar1 != param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc);
    }
  }
  return;
}


