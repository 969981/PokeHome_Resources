/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f41b8; name: FUN_.text__004f41b8
 */


undefined8 FUN__text__004f41b8(long param_1,uint param_2)

{
  if ((param_2 & 0xffff) < *(uint *)(param_1 + 0x100)) {
    return *(undefined8 *)(*(long *)(param_1 + 0xf8) + ((ulong)param_2 & 0xffff) * 8);
  }
  return 0;
}


