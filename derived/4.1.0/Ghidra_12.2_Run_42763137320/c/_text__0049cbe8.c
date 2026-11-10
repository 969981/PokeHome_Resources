/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049cbe8; name: FUN_.text__0049cbe8
 */


void FUN__text__0049cbe8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN__text__0047c0c0(DAT_00ae9a68);
  }
  FUN__text__00458000(param_1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN__text__0049dbf0();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


