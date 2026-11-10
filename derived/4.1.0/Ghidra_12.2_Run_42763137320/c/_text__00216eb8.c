/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00216eb8; name: FUN_.text__00216eb8
 */


undefined2 FUN__text__00216eb8(long param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN__text__002155d8();
  uVar1 = 0;
  if (lVar3 != 0) {
    if (param_2 == 0xc9) {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x1c);
    }
    else {
      uVar4 = 0;
    }
    FUN__text__002155d8(param_1);
    uVar2 = FUN__text__00215fb0();
    uVar1 = FUN__text__00602a78(param_2,uVar4,uVar2);
  }
  return uVar1;
}


