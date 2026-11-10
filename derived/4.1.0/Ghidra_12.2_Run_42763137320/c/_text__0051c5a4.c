/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c5a4; name: FUN_.text__0051c5a4
 */


void FUN__text__0051c5a4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  param_1[2] = (long)param_2;
  plVar1 = (long *)*param_2;
  *param_1 = (long)plVar1;
  if ((plVar1 == (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x20)) ||
     (lVar2 = *plVar1, param_1[1] = lVar2, lVar2 != *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 8)) {
    return;
  }
  *param_1 = (long)(plVar1 + 4);
  return;
}


