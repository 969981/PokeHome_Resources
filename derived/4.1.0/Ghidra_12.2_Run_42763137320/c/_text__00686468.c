/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686468; name: FUN_.text__00686468
 */


int FUN__text__00686468(long param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 param_5
                       ,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  lVar1 = param_1 + 0x890;
  if (param_4 == (undefined8 *)0x0) {
    FUN__text__00679e88(&local_78);
  }
  else {
    local_78 = *param_4;
    local_70 = *(undefined4 *)(param_4 + 1);
    FUN__text__00679ec4(&local_78);
  }
  iVar3 = FUN__text__006849d8(&local_68,param_5,param_6,lVar1);
  uVar2 = local_68;
  if (iVar3 < 0) {
    return iVar3;
  }
  lVar4 = FUN__text__006809d4(lVar1,0x98);
  if (lVar4 == 0) {
    iVar3 = -0x385;
LAB__text__006865b8:
    FUN__text__00683dbc(uVar2,lVar1);
  }
  else {
    FUN__text__00683bd8(lVar4);
    if ((param_7 != (undefined8 *)0x0) && (param_7[1] != 0)) {
      uVar5 = param_7[1];
      *(undefined8 *)(lVar4 + 0x60) = *param_7;
      *(undefined8 *)(lVar4 + 0x68) = uVar5;
    }
    *(undefined8 *)(lVar4 + 0x70) = param_8;
    if (param_3 == -1) {
      param_3 = *(int *)(param_1 + 0x930);
      if (param_3 < 0) {
        iVar3 = -0x1fd;
        goto LAB__text__006865b8;
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x930) = param_3 + 2;
      iVar6 = param_3;
    }
    else {
      uVar5 = 3;
      iVar6 = 0;
    }
    FUN__text__00683d64(lVar4,param_2 & 0x21 | 4,param_3,uVar5,&local_78,uVar2,param_6);
    iVar3 = FUN__text__0067ac40(param_1,lVar4);
    if (iVar3 == 0) {
      return iVar6;
    }
    FUN__text__00683dac(lVar4,lVar1);
  }
  FUN__text__006809e4(lVar1,lVar4);
  return iVar3;
}


