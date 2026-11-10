/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067ad9c; name: FUN_.text__0067ad9c
 */


int FUN__text__0067ad9c(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN__text__00680914();
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar2 + 0xdc) != 3))
  {
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x9aa) == '\0')) &&
       ((lVar2 = *(long *)(param_1 + 0x138), lVar2 != 0 &&
        ((*(int *)(lVar2 + 8) <= (int)param_2 && (param_2 < *(uint *)(param_1 + 0x930))))))) {
      do {
        if ((int)param_2 <= *(int *)(lVar2 + 8)) {
          if ((*(int *)(lVar2 + 8) <= (int)param_2) && (*(char *)(lVar2 + 0x7c) == '\0')) {
            *(undefined4 *)(lVar2 + 0x78) = param_3;
            *(undefined1 *)(lVar2 + 0x7c) = 1;
            return 0;
          }
          break;
        }
        lVar2 = *(long *)(lVar2 + 0x88);
      } while (lVar2 != 0);
    }
    lVar2 = FUN__text__006809d4(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN__text__00683bd8();
      FUN__text__00683dfc(lVar2,param_2,param_3);
      iVar1 = FUN__text__0067ac40(param_1,lVar2);
      if (iVar1 != 0) {
        FUN__text__00683e1c(lVar2);
        FUN__text__006809e4(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


