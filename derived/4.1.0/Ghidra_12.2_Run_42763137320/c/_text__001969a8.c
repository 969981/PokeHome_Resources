/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001969a8; name: FUN_.text__001969a8
 */


uint FUN__text__001969a8(ulong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)((long)(int)param_1 + 0x7259d0);
  return (uint)(0x17fcL >> (param_1 & 0x3f)) & 1;
}


