/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016ae08; name: FUN_.text__0016ae08
 */


undefined4 FUN__text__0016ae08(long param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x50) - 1;
  if (uVar1 < 0xb) {
    return *(undefined4 *)((long)(char)uVar1 * 4 + 0x7253f8);
  }
  return 2;
}


