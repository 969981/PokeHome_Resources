/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001623fc; name: FUN_.text__001623fc
 */


bool FUN__text__001623fc(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    iVar1 = nn::pl::GetSharedFontLoadState(*(undefined4 *)(param_1 + 0x124));
    return iVar1 == 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x18) + 0x170) != '\0';
}


