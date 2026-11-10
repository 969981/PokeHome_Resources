/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00529f08; name: FUN_.text__00529f08
 */


void FUN__text__00529f08(long *param_1,long param_2)

{
  if (*param_1 == 0) {
    *param_1 = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    return;
  }
  *(long *)(param_2 + 8) = *param_1;
  *param_1 = param_2;
  return;
}


