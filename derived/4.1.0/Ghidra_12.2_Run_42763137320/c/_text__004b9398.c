/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b9398; name: FUN_.text__004b9398
 */


void FUN__text__004b9398(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar1 = FUN__text__0042fbf4(), (uVar1 & 1) != 0)) {
    if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
      FUN__text__0042f5a0(DAT_00ae9a60);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


