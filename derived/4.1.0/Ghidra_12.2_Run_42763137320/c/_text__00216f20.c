/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00216f20; name: FUN_.text__00216f20
 */


byte FUN__text__00216f20(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN__text__002155e0();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x88) + 0xfe5) >> 1 & 1;
}


