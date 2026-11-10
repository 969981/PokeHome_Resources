/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046a490; name: FUN_.text__0046a490
 */


uint FUN__text__0046a490(long param_1)

{
  uint *puVar1;
  
  do {
    puVar1 = (uint *)(param_1 + 0xd2);
    param_1 = *(long *)(param_1 + 0x78);
  } while (param_1 != 0 && (*puVar1 & 0x800000) == 0);
  return *puVar1 >> 0x1a & 1;
}


