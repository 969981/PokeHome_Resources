/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065ef98; name: FUN_.text__0065ef98
 */


int FUN__text__0065ef98(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x1e8);
  *(byte *)(lVar1 + 0x1260) = *(byte *)(lVar1 + 0x1260) & 0xfd;
  *(byte *)(lVar1 + 0x1280) = *(byte *)(lVar1 + 0x1280) & 0xfd;
  FUN__text__00664394();
  param_1[0xa0] = *(long *)(lVar1 + 0x6f0);
  param_1[0xa1] = *(long *)(lVar1 + 0x778);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x210) != 0) {
      FUN__text__0065fd64(lVar2 + 0x210);
    }
    FUN__text__00661a60(param_1,param_3 & 1);
    FUN__text__00656d18(lVar2 + 0x28);
    if (param_2 != 0) {
      return param_2;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if ((((*(byte *)((long)param_1 + 0x3fd) >> 5 & 1) == 0) &&
        ((*(byte *)(lVar1 + 0xf44) >> 6 & 1) == 0)) &&
       (*(long *)(lVar1 + 0x110) + *(long *)(lVar1 + 0x100) <= *(long *)(lVar1 + 0x118))) {
      FUN__text__0066713c(lVar1,0x71bc15);
      return 0x34;
    }
  }
  return 0;
}


