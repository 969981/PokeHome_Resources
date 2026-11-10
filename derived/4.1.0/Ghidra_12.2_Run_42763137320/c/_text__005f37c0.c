/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f37c0; name: FUN_.text__005f37c0
 */


uint FUN__text__005f37c0(short *param_1)

{
  uint uVar1;
  
  if ((*param_1 != 0x10) || (uVar1 = (ushort)param_1[1] - 1, 0xe < uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}


