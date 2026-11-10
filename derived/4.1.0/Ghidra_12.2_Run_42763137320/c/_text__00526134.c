/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00526134; name: FUN_.text__00526134
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00526134(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_60;
  undefined4 local_58;
  float local_54;
  long local_50;
  undefined4 local_48;
  float local_44;
  
  lVar4 = *(long *)(*(long *)(param_4 + 8) + 0x38);
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_4 + 0x4c)) {
    if (*(float *)(param_1 + 0xac) <= 0.0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
      local_60 = -4;
      if (*(long *)(param_1 + 0x78) != -1) {
        local_60 = *(long *)(param_1 + 0x78);
      }
      local_54 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0xac);
      local_58 = *(undefined4 *)(param_1 + 0x98);
    }
    FUN__text__00448b00(*_DAT_008a45e0,param_2,&local_60,uVar1,1);
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x20);
    FUN__text__00526e0c(param_1,param_2,uVar1);
    lVar4 = *(long *)(*(long *)(lVar4 + 8) + 0x38);
    FUN__text__00527718(*(float *)(lVar4 + 0x90) +
                        *(float *)(lVar4 + 0x98) *
                        (*(float *)(lVar4 + 0x78) - *(float *)(lVar4 + 0x90)),param_1,param_2,
                        param_3,uVar1);
    return;
  }
  lVar2 = *(long *)(lVar4 + 0x68);
  if (lVar2 == *(long *)(param_1 + 0x78)) {
    if (*(float *)(param_1 + 0xac) <= 0.0) {
      uVar1 = 0;
    }
    else {
      local_60 = -4;
      if (lVar2 != -1) {
        local_60 = lVar2;
      }
      uVar1 = 1;
      local_58 = *(undefined4 *)(param_1 + 0x98);
      local_54 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0xac);
    }
    FUN__text__00448b00(*_DAT_008a45e0,param_2,&local_60,uVar1,1);
    if (*(long *)(lVar4 + 0x58) == -1) {
      FUN__text__005269e0();
      return;
    }
  }
  else {
    lVar2 = FUN__text__00524560(param_1,param_4);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = *(long *)(lVar2 + (ulong)(*(int *)(lVar2 + 0x80) - 1) * 8 + 0x40);
    local_58 = *(undefined4 *)(lVar3 + 0x98);
    local_54 = *(float *)(lVar3 + 0x9c);
    local_60 = -4;
    if (*(long *)(lVar3 + 0x78) != -1) {
      local_60 = *(long *)(lVar3 + 0x78);
    }
    if ((*(long *)(lVar4 + 0x58) != -1) && (*(long *)(lVar4 + 0x80) == *(long *)(param_1 + 0x78))) {
      local_54 = (*(float *)(lVar4 + 0x98) + *(float *)(lVar4 + 0x98)) * local_54 - local_54;
    }
    if (*(float *)(param_1 + 0xac) <= 0.0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
      local_50 = -4;
      if (*(long *)(param_1 + 0x78) != -1) {
        local_50 = *(long *)(param_1 + 0x78);
      }
      local_44 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0xac);
      local_48 = *(undefined4 *)(param_1 + 0x98);
    }
    FUN__text__00448b00(*_DAT_008a45e0,param_2,&local_60,uVar1,0);
    if ((*(long *)(lVar4 + 0x58) == -1) || (*(long *)(lVar4 + 0x80) != *(long *)(param_1 + 0x78))) {
      FUN__text__00526840(param_1,param_2,param_3,lVar2,lVar4);
      return;
    }
  }
  FUN__text__00526420(param_1,param_2,param_3,lVar4);
  return;
}


