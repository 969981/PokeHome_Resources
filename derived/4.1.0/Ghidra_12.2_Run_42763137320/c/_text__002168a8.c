/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002168a8; name: FUN_.text__002168a8
 */


undefined2 FUN__text__002168a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN__text__002155e0();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return *(undefined2 *)(*(long *)(param_1 + 0x80) + 10);
}


