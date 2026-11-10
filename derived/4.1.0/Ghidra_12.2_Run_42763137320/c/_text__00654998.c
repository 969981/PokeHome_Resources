/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654998; name: FUN_.text__00654998
 */


ulong FUN__text__00654998(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int local_5c;
  long local_58;
  
  lVar6 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar6 + 0xe8) != 0) {
    FUN__text__00667a44(lVar6,3,2);
  }
  lVar2 = FUN__text__00654628(param_1,param_2,param_3);
  local_58 = lVar2;
  if (lVar2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    FUN__text__00666f74(lVar6,0x70bc4d,param_2);
    uVar5 = 0;
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  if (*(long *)(lVar6 + 0xe8) != 0) {
    FUN__text__00667a8c(lVar6,3);
  }
  if (lVar2 == 0) {
    local_5c = 0;
    uVar3 = FUN__text__00654390(param_1);
    if ((uVar3 & 1) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(lVar6 + 0xf00) != 0) {
      FUN__text__0065cab0(lVar6,1);
      iVar1 = (**(code **)(lVar6 + 0xf00))
                        (*(undefined8 *)(lVar6 + 0x1288),0,*(undefined8 *)(lVar6 + 0xf08));
      FUN__text__0065cab0(lVar6,0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if ((*(byte *)(lVar6 + 0xf47) & 1) == 0) {
      lVar4 = thunk_FUN__text__0064f6d4(param_1,param_2,param_3,&local_5c);
    }
    else {
      lVar4 = FUN__text__0065516c(param_1,param_2,param_3,&local_5c);
    }
    if (lVar4 == 0) {
      if (local_5c == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = FUN__text__00654b84(param_1,&local_58);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar5 = (ulong)(local_58 == 0);
        lVar2 = local_58;
      }
    }
    else {
      if (*(long *)(lVar6 + 0xe8) != 0) {
        FUN__text__00667a44(lVar6,3,2);
      }
      lVar2 = FUN__text__00654728(lVar6,lVar4,param_2,param_3);
      if (*(long *)(lVar6 + 0xe8) != 0) {
        FUN__text__00667a8c(lVar6,3);
      }
      if (lVar2 == 0) {
        FUN__text__00651770(lVar4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_4 = lVar2;
  return uVar5;
}


