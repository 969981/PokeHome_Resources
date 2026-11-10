/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f844; name: FUN_.text__0067f844
 */


bool FUN__text__0067f844(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) != 0) {
    return false;
  }
  if ((((*(long *)(param_1 + 0x150) == 0) && (*(long *)(param_1 + 0x108) == 0)) &&
      (*(long *)(param_1 + 0x120) == 0)) &&
     ((iVar2 = FUN__text__00685a20(param_1 + 0x38), iVar2 != 0 || (*(int *)(param_1 + 0x94c) < 1))))
  {
    if (*(long *)(param_1 + 0x138) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(ulong *)(param_1 + 0x8e8) < (ulong)*(uint *)(param_1 + 0x96c);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


