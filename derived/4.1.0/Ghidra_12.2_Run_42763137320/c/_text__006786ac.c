/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006786ac; name: FUN_.text__006786ac
 */


bool FUN__text__006786ac(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetModule(param_2);
  if (iVar2 == iVar3) {
    iVar2 = nnResultGetDescription(param_1);
    iVar3 = nnResultGetDescription(param_2);
    bVar1 = iVar2 == iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


