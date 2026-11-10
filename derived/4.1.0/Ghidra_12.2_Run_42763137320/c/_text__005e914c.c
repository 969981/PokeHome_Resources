/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e914c; name: FUN_.text__005e914c
 */


void FUN__text__005e914c(undefined8 param_1)

{
  if (0x3ff < DAT_00c15348) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65);
  }
  *(undefined8 *)(&DAT_00c13348 + (ulong)DAT_00c15348 * 8) = param_1;
  DAT_00c15348 = DAT_00c15348 + 1;
  return;
}


