/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067b1e8; name: FUN_.text__0067b1e8
 */


uint FUN__text__0067b1e8(long param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
    return 1;
  }
  iVar1 = FUN__text__0067f104();
  if (iVar1 == 0) {
    uVar2 = FUN__text__0067f844(param_1);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


