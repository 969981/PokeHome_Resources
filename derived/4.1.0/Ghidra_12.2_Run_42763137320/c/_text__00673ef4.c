/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00673ef4; name: FUN_.text__00673ef4
 */


undefined8 FUN__text__00673ef4(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
     (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) {
    iVar1 = FUN__text__0066c2bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


