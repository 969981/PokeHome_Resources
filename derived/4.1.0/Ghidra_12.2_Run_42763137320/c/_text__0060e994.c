/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e994; name: FUN_.text__0060e994
 */


bool FUN__text__0060e994(long param_1,long param_2)

{
  return (param_2 - *(long *)(param_1 + 8)) - 0x10U <
         (ulong)*(ushort *)(*(long *)(param_1 + 8) + 0xd6) + 200;
}


