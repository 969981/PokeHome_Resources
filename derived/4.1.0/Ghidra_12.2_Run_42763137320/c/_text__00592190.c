/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00592190; name: FUN_.text__00592190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00592190(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN__text__004e506c(_DAT_008a4fc0,*(undefined4 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN__text__004dd8a0(param_1);
  return;
}


