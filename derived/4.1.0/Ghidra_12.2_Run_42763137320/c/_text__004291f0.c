/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004291f0; name: FUN_.text__004291f0
 */


undefined8 FUN__text__004291f0(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + -0x10) + 0x2a8) + 0x30);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(lVar3 + 0x194);
      lVar3 = *(long *)(lVar3 + 0x20);
      if (*piVar1 == 0) {
        iVar4 = iVar4 + 1;
      }
    } while (lVar3 != 0);
    if (iVar4 != 0) {
      FUN__text__004591d0();
      uVar2 = FUN__text__0045c1e4();
      return uVar2;
    }
  }
  return 0;
}


