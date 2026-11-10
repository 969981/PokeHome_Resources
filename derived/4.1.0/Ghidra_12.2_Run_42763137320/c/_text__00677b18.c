/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677b18; name: FUN_.text__00677b18
 */


undefined8 FUN__text__00677b18(long param_1)

{
  undefined8 uVar1;
  
  if (*(ulong *)(param_1 + 0xa48) < 8) {
    if (((*(ulong *)(param_1 + 0xa50) | 0x10000) == 0x10000) ||
       ((long)*(ulong *)(param_1 + 0xa48) <= (long)*(ulong *)(param_1 + 0xa50) >> 0x10)) {
      return 1;
    }
    uVar1 = 0x71a648;
  }
  else {
    uVar1 = 0x71fad6;
  }
  FUN__text__0066713c(param_1,uVar1);
  return 0;
}


