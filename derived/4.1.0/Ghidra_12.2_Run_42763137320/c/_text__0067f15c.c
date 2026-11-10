/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f15c; name: FUN_.text__0067f15c
 */


undefined4 FUN__text__0067f15c(long param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined4 uVar3;
  undefined1 auStack_110 [128];
  
  if ((*(long *)(param_1 + 0x880) == 0) && (*(long *)(param_1 + 0x888) == 0)) {
LAB__text__0067f280:
    uVar3 = 0;
  }
  else {
    iVar2 = vsnprintf((char *)0x0,0,param_3,auStack_110 + 0x80);
    if (-1 < iVar2) {
      lVar1 = param_1 + 0x890;
      __s = (char *)FUN__text__006809d4(lVar1,(ulong)(iVar2 + 1));
      if (__s != (char *)0x0) {
        iVar2 = vsnprintf(__s,(ulong)(iVar2 + 1),param_3,auStack_110 + 0x80);
        if (-1 < iVar2) {
          if (*(code **)(param_1 + 0x888) == (code *)0x0) {
            iVar2 = (**(code **)(param_1 + 0x880))
                              (param_1,__s,iVar2,*(undefined8 *)(param_1 + 0x8b8));
          }
          else {
            iVar2 = (**(code **)(param_1 + 0x888))
                              (param_1,param_2,__s,iVar2,*(undefined8 *)(param_1 + 0x8b8));
          }
          FUN__text__006809e4(lVar1,__s);
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = 0xfffffc7a;
          }
          return uVar3;
        }
        FUN__text__006809e4(lVar1,__s);
        goto LAB__text__0067f280;
      }
    }
    uVar3 = 0xfffffc7b;
  }
  return uVar3;
}


