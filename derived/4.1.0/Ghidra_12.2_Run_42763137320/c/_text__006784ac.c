/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006784ac; name: FUN_.text__006784ac
 */


undefined8 FUN__text__006784ac(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = nnsslInitialize();
  uVar2 = nnResultIsFailure(uVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN__text__006786ac(uVar1,0x1927b), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


