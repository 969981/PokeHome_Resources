/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00523910; name: FUN_.text__00523910
 */


void FUN__text__00523910(long param_1,long param_2)

{
  long *plVar2;
  long *plVar1;
  
  if ((*(long *)(param_1 + 0xb0) != param_2) &&
     (*(long *)(param_1 + 0xb0) = param_2, *(int *)(param_1 + 0x60) != 0)) {
    plVar1 = *(long **)(param_1 + 0x58);
    do {
      plVar2 = plVar1 + 1;
      *(undefined1 *)(*plVar1 + 0x68) = 1;
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
  }
  return;
}


