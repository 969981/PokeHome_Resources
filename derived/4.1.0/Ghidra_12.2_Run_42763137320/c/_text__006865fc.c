/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006865fc; name: FUN_.text__006865fc
 */


int FUN__text__006865fc(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_50;
  int local_48;
  
  iVar1 = -0x1f5;
  if (((param_3 != 0) && (param_4 != (int *)0x0)) && (*param_4 != param_3)) {
    local_50 = *(undefined8 *)param_4;
    local_48 = param_4[2];
    FUN__text__00679ec4(&local_50);
    lVar2 = FUN__text__006809d4(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN__text__00683bd8();
      FUN__text__00683dcc(lVar2,param_3,&local_50);
      iVar1 = FUN__text__0067ac40(param_1,lVar2);
      if (iVar1 != 0) {
        FUN__text__00683df8(lVar2);
        FUN__text__006809e4(param_1 + 0x890,lVar2);
      }
    }
  }
  return iVar1;
}


