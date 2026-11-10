/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f3f10; name: FUN_.text__004f3f10
 */


long FUN__text__004f3f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        uint param_5)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x130) != 0) {
    lVar2 = FUN__text__00400f80(0,0xa0);
    if (lVar2 == 0) {
      return 0;
    }
    FUN__text__004ec4a0(lVar2,param_1,param_2);
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    iVar1 = FUN__text__004ec620(lVar2,param_3,param_4,param_5 & 1);
    if (iVar1 == 1) {
      return lVar2;
    }
    FUN__text__004ec13c(lVar2);
    FUN__text__004eb980(lVar2);
  }
  return 0;
}


