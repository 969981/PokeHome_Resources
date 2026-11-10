/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd0c4; name: FUN_.text__001bd0c4
 */


void FUN__text__001bd0c4(long param_1,ulong param_2)

{
  FUN__text__001ca96c(param_1,0);
  FUN__text__001ca5b8(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN__text__001ca748(param_1,*(undefined4 *)(param_1 + 0x4cc),1);
    return;
  }
  if (*(char *)(param_1 + 0x4ca) == '\0') {
    return;
  }
  FUN__text__001ca748(param_1,*(undefined4 *)(param_1 + 0x4cc),3);
  return;
}


