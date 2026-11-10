/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066f9fc; name: FUN_.text__0066f9fc
 */


bool FUN__text__0066f9fc(undefined1 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN__text__00656914(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN__text__0065680c(param_1), iVar2 == 0)) {
    iVar2 = FUN__text__0065689c(param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


