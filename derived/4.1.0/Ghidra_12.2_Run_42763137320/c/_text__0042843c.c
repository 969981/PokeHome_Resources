/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042843c; name: FUN_.text__0042843c
 */


long FUN__text__0042843c(int param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 2) {
    lVar1 = FUN__text__00400f80(5,0x100);
    if (lVar1 != 0) {
      FUN__text__0042892c(lVar1,param_3);
    }
  }
  else {
    if ((param_2 & 0xffff0000) == 0) {
      return 0;
    }
    if (((uint)(param_2 >> 0x10) & 0xffff) != 2) {
      lVar1 = FUN__text__00425d40(param_3,param_1);
      return lVar1;
    }
    lVar2 = FUN__text__00400f80(5,0xa0);
    lVar1 = 0;
    if (lVar2 != 0) {
      FUN__text__004dbdec(lVar2,param_3);
      return lVar2;
    }
  }
  return lVar1;
}


