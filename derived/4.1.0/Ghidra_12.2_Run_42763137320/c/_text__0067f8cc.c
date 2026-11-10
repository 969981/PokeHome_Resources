/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f8cc; name: FUN_.text__0067f8cc
 */


int FUN__text__0067f8cc(long param_1,uint param_2,undefined4 param_3,void *param_4,size_t param_5,
                       undefined1 param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  
  if ((param_2 == 0) || ((param_2 & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
    lVar1 = param_1 + 0x890;
    if (param_5 == 0) {
      __dest = (void *)0x0;
LAB__text__0067f964:
      lVar4 = FUN__text__006809d4(lVar1,0x98);
      if (lVar4 != 0) {
        FUN__text__00683bd8();
        uVar2 = *(uint *)(param_1 + 0x944);
        if ((int)param_2 <= (int)*(uint *)(param_1 + 0x944)) {
          uVar2 = param_2;
        }
        FUN__text__00683ea0(lVar4,uVar2,param_3,__dest,param_5);
        *(undefined1 *)(lVar4 + 0x60) = param_6;
        iVar3 = FUN__text__0067ac40(param_1,lVar4);
        if (iVar3 == 0) {
          return 0;
        }
        FUN__text__00683ec8(lVar4,lVar1);
        FUN__text__006809e4(lVar1,lVar4);
        return iVar3;
      }
      FUN__text__006809e4(lVar1,__dest);
    }
    else {
      if (param_5 - 0x3ff9 < 0xffffffffffffbfff) goto LAB__text__0067f934;
      __dest = (void *)FUN__text__006809d4(lVar1,param_5);
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_4,param_5);
        goto LAB__text__0067f964;
      }
    }
    iVar3 = -0x385;
  }
  else {
LAB__text__0067f934:
    iVar3 = -0x1f5;
  }
  return iVar3;
}


