/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e6a0; name: FUN_.text__0069e6a0
 */


void FUN__text__0069e6a0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  *plVar1 = *param_1;
  *(long **)(lVar2 + 8) = param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = lVar2;
  return;
}


