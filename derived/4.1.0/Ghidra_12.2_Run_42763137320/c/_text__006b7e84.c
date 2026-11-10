/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7e84; name: FUN_.text__006b7e84
 */


void FUN__text__006b7e84(float param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                        long param_5,long param_6,ulong param_7,uint param_8)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  
  local_58 = 0;
  uVar3 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&local_58);
  param_8 = param_8 & 1;
  if (param_5 == 0) {
LAB__text__006b7efc:
    param_2[9] = 0;
    local_60 = (float)local_58 * param_1;
    param_1 = local_58._4_4_ * param_1;
    local_58 = CONCAT44(param_1,local_60);
  }
  else {
    if ((*(byte *)(param_5 + 4) >> 1 & 1) == 0) {
      if (param_6 == 0) goto LAB__text__006b7efc;
    }
    else if ((param_6 == 0) && ((param_7 & 1) != 0)) goto LAB__text__006b7efc;
    if ((*(byte *)(param_5 + 4) & 2) != 0 && (param_7 & 1) == 0) {
      param_8 = 0;
    }
    uVar3 = FUN__text__006b78dc(uVar3,param_2 + 9,param_3,param_4,&local_58,0xb01,param_8);
    local_60 = (float)local_58 * param_1;
    param_1 = local_58._4_4_ * param_1;
    local_58 = CONCAT44(param_1,local_60);
  }
  if (param_6 == 0) {
    return;
  }
  bVar2 = (*(byte *)(param_6 + 8) & 0x20) != 0;
  if (bVar2 && (param_7 & 1) == 0) {
    param_8 = 0;
  }
  fStack_5c = (float)((uint)*(byte *)(param_6 + 0xc) << 1);
  local_60 = local_60 + fStack_5c;
  fStack_5c = param_1 + fStack_5c;
  uVar3 = FUN__text__006b78dc(uVar3,param_2 + 0xf,param_3,param_4,&local_60,0x201,param_8);
  if (bVar2 && (param_7 & 1) == 0) {
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      param_2[0x10] = 0;
      bVar1 = *(byte *)(param_6 + 8);
    }
    else {
      uVar3 = FUN__text__006b78dc(uVar3,param_2 + 0x10,param_3,param_4,&local_60,0xb01,0);
      bVar1 = *(byte *)(param_6 + 8);
    }
    if ((bVar1 >> 1 & 1) == 0) {
      param_2[0x11] = 0;
      bVar1 = *(byte *)(param_6 + 8);
    }
    else {
      uVar3 = FUN__text__006b78dc(uVar3,param_2 + 0x11,param_3,param_4,&local_60,0xb01,0);
      bVar1 = *(byte *)(param_6 + 8);
    }
    if ((bVar1 >> 2 & 1) == 0) {
      param_2[0x12] = 0;
    }
    else {
      FUN__text__006b78dc(uVar3,param_2 + 0x12,param_3,param_4,&local_60,0xb01,0);
    }
    return;
  }
  return;
}


