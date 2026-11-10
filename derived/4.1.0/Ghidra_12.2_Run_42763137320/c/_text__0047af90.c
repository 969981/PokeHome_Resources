/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047af90; name: FUN_.text__0047af90
 */


void FUN__text__0047af90(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x150) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    FUN__text__0047c3b4(DAT_00ae9a68);
    return;
  }
  FUN__text__0047c370();
  return;
}


