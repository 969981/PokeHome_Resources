/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e736c; name: FUN_.text__001e736c
 */


bool FUN__text__001e736c(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(char *)(param_1 + 0xa0) != '\0';
  bVar2 = *(int *)(param_1 + 0xa4) != param_2;
  if (!bVar1 || !bVar2) {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return bVar1 && bVar2;
}


