/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00478e78; name: FUN_.text__00478e78
 */


byte FUN__text__00478e78(long param_1)

{
  ulong uVar1;
  
  if ((*(long **)(param_1 + 0x1d8) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x1d8) + 0x38))(), (uVar1 & 1) == 0)) {
    return *(byte *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x3a) & 7;
  }
  return 2;
}


