/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d28c; name: FUN_.text__0067d28c
 */


int FUN__text__0067d28c(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if (((param_2 & 1) == 0) || (*(ulong *)(param_1 + 0x920) >> 4 < 0x271)) {
    lVar2 = FUN__text__006809d4(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN__text__00683bd8();
      FUN__text__00683e68(lVar2,param_2,param_3);
      iVar1 = FUN__text__0067ac40(param_1,lVar2);
      if (iVar1 == 0) {
        iVar1 = 0;
        if ((param_2 & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
        }
      }
      else {
        FUN__text__00683e9c(lVar2);
        FUN__text__006809e4(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = -0x388;
  }
  return iVar1;
}


