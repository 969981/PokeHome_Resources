/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685d3c; name: FUN_.text__00685d3c
 */


undefined8 FUN__text__00685d3c(long param_1,byte param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) | param_2;
  iVar1 = FUN__text__00685a20(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN__text__00686194(param_1);
  }
  return 0;
}


