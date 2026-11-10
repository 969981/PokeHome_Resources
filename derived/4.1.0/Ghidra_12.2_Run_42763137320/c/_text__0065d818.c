/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065d818; name: FUN_.text__0065d818
 */


undefined8 FUN__text__0065d818(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = FUN__text__00678414(1,0x2a0);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN__text__00656da4(lVar1 + 0x28,*param_1);
    *(long *)(lVar3 + 0x1e8) = lVar1;
    if (param_1[0x98] + param_1[0x9c] == 0) {
      FUN__text__00661a14(param_1);
    }
    FUN__text__006619dc(lVar3);
    uVar2 = 0;
  }
  return uVar2;
}


