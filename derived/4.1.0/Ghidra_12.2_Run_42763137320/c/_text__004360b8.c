/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004360b8; name: FUN_.text__004360b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004360b8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN__text__0042f5a0(*_DAT_008a4648,*(long *)(param_1 + 0x10),param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


