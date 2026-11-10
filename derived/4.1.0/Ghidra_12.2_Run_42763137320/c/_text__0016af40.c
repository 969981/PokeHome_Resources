/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016af40; name: FUN_.text__0016af40
 */


bool FUN__text__0016af40(int param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = param_1 - 1;
  }
  if (uVar1 < 10) {
    return *(char *)(param_2 + (ulong)uVar1 + 1) != '\0';
  }
  return false;
}


