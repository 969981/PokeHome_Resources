/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020c9f0; name: FUN_.text__0020c9f0
 */


int FUN__text__0020c9f0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1 << (ulong)(param_1 & 0x1f);
  if (param_1 == 8) {
    iVar2 = 0xfe;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


