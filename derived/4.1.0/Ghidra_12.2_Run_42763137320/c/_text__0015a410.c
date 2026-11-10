/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015a410; name: FUN_.text__0015a410
 */


bool FUN__text__0015a410(short *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0x10) {
    uVar1 = FUN__text__005f37a0();
    return (uVar1 >> 8 & 0xff) == 0x11;
  }
  return false;
}


