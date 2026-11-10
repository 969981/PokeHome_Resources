/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00213f40; name: FUN_.text__00213f40
 */


bool FUN__text__00213f40(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_2;
  bVar1 = *(long *)(param_1 + 0x90) != lVar3;
  bVar2 = *(long *)(param_1 + 0x98) != param_3;
  if (bVar1 || bVar2) {
    *(long *)(param_1 + 0x90) = lVar3;
    *(long *)(param_1 + 0x98) = param_3;
  }
  return bVar1 || bVar2;
}


