/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00678f88; name: FUN_.text__00678f88
 */


bool FUN__text__00678f88(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetDescription(param_1);
  bVar1 = iVar2 != 0x7b;
  return (((!bVar1 && iVar3 != 0x65) && (bVar1 || 100 < iVar3)) && iVar3 + -0x67 < 0) !=
         (((!bVar1 && iVar3 != 0x65) && (bVar1 || 100 < iVar3)) && SBORROW4(iVar3,0x67));
}


