/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7340; name: FUN_.text__003b7340
 */


undefined4 FUN__text__003b7340(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2 + 1;
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar1 = param_2;
  }
  return *puVar1;
}


