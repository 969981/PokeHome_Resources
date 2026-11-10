/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022cc88; name: FUN_.text__0022cc88
 */


int FUN__text__0022cc88(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74) / 10;
  if (*(int *)(param_1 + 0x74) % 10 != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


