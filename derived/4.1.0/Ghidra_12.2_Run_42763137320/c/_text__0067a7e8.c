/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a7e8; name: FUN_.text__0067a7e8
 */


undefined8 FUN__text__0067a7e8(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_40 [4];
  
  uVar3 = FUN__text__006863d4(param_2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  local_40[2] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  if (*param_3 != 0) {
    lVar4 = FUN__text__00680914(param_1);
    if (lVar4 == 0) {
      uVar1 = *param_3;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar2 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x938);
        }
        if (iVar2 < (int)uVar1) {
          FUN__text__00679e88(local_40);
          lVar4 = FUN__text__0067a960(param_1,*param_3,0,local_40,5,0);
          if (lVar4 == 0) {
            return 0xfffffc7b;
          }
          goto LAB__text__0067a8b8;
        }
      }
LAB__text__0067a8ac:
      FUN__text__00679e88(local_40);
      param_3 = local_40;
    }
    else {
      iVar2 = FUN__text__006863d4(lVar4);
      if (iVar2 == 0) goto LAB__text__0067a8ac;
    }
LAB__text__0067a8b8:
    if (*param_3 != 0) {
      iVar2 = FUN__text__00685e54(lVar4,param_2);
      if (iVar2 != 0) {
        FUN__text__0068635c(lVar4);
        uVar3 = FUN__text__006862e0(*(undefined8 *)(param_2 + 0x70),lVar4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      goto LAB__text__0067a8f0;
    }
  }
  lVar4 = param_1 + 0x20;
LAB__text__0067a8f0:
  if ((lVar4 == *(long *)(param_2 + 0x70)) && ((char)param_3[2] == '\0')) {
    FUN__text__00685bd8(param_2,param_3[1]);
    uVar3 = 0;
  }
  else {
    FUN__text__0068635c(param_2);
    *(uint *)(param_2 + 0xd0) = param_3[1];
    if ((char)param_3[2] == '\0') {
      uVar3 = FUN__text__006862e0(lVar4,param_2);
    }
    else {
      uVar3 = FUN__text__0068620c(lVar4,param_2);
    }
  }
  return uVar3;
}


