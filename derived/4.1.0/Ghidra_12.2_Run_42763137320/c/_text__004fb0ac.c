/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fb0ac; name: FUN_.text__004fb0ac
 */


long FUN__text__004fb0ac(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && (lVar2 = FUN__text__004fccb0(param_1), lVar2 != 0)) {
    return lVar2;
  }
  lVar2 = FUN__text__00400f80(0,0x90);
  if (lVar2 == 0) {
    return 0;
  }
  FUN__text__004fa324(lVar2,param_1);
  *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
  lVar3 = *(long *)(param_1 + 0x60);
  iVar1 = FUN__text__004f5e5c(lVar2,*(undefined8 *)(lVar3 + 0x30),lVar3 + 0x18,
                              *(undefined1 *)(lVar3 + 0x38));
  if ((iVar1 == 1) && (lVar3 = FUN__text__004f55c8(lVar2,0,0), lVar3 != 0)) {
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    *(undefined1 *)(lVar2 + 0x8c) = 1;
    lVar3 = lVar2;
  }
  else {
    FUN__text__004ec13c(lVar2);
    lVar3 = 0;
  }
  FUN__text__004eb980(lVar2);
  return lVar3;
}


