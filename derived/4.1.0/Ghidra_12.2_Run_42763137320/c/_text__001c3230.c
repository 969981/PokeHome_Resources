/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c3230; name: FUN_.text__001c3230
 */


void FUN__text__001c3230(undefined8 param_1,long param_2,uint param_3)

{
  if (((param_3 & 1) == 0) || (**(char **)(param_2 + 0xc0) == '\0')) {
    FUN__text__00128ca0(param_1,param_3 & 1,1);
    return;
  }
  return;
}


