/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb8ec; name: FUN_.text__004eb8ec
 */


void FUN__text__004eb8ec(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
  *(long *)(param_2 + 8) = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}


