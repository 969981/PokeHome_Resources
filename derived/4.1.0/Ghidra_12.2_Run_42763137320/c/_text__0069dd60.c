/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069dd60; name: FUN_.text__0069dd60
 */


void FUN__text__0069dd60(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    FUN__text__0068bd94(*(long *)(param_1 + 200),param_2);
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  FUN__text__0068bd94(*(long *)(param_1 + 0xd0),param_2);
  return;
}


