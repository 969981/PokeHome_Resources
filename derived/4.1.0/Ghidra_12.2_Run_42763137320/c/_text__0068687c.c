/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068687c; name: FUN_.text__0068687c
 */


int FUN__text__0068687c(long param_1,byte param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (param_3 == 0) {
    iVar3 = -0x1f5;
  }
  else {
    lVar4 = FUN__text__006809d4(param_1 + 0x890,0x98);
    if (lVar4 == 0) {
      iVar3 = -0x385;
    }
    else {
      FUN__text__00683bd8();
      uVar1 = *param_4;
      uVar2 = param_4[1];
      *(undefined1 *)(lVar4 + 0x71) = 0;
      *(byte *)(lVar4 + 0x70) = param_2 & 1;
      *(undefined8 *)(lVar4 + 0x60) = uVar1;
      *(undefined8 *)(lVar4 + 0x68) = uVar2;
      FUN__text__00683f20(lVar4,0,param_3);
      iVar3 = FUN__text__0067ac40(param_1,lVar4);
      if (iVar3 != 0) {
        FUN__text__00683f3c(lVar4);
        FUN__text__006809e4(param_1 + 0x890,lVar4);
      }
    }
  }
  return iVar3;
}


