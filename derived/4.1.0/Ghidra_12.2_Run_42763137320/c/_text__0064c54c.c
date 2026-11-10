/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c54c; name: FUN_.text__0064c54c
 */


undefined8 FUN__text__0064c54c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    return 0;
  }
  uVar1 = nn::nifm::IsNetworkAvailable();
  return uVar1;
}


