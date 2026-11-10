/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f52bc; name: FUN_.text__004f52bc
 */


ulong FUN__text__004f52bc(long *param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(*param_1 + 8) - (ulong)*(uint *)(param_1[1] + 0x88);
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}


