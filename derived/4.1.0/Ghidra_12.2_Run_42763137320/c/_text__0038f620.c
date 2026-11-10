/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038f620; name: FUN_.text__0038f620
 */


undefined8 FUN__text__0038f620(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if (0x401 < (param_3 & 0xffff)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = FUN__text__005fdad0(param_3 & 0xffff);
    uVar1 = FUN__text__00600400(uVar2,param_4 & 0xff);
  }
  else if (param_2 == 2) {
    local_50 = 0xd829ae6584284137;
    uStack_48 = 0x716b91;
    local_40 = 0x15;
    local_38 = 0;
    uVar1 = thunk_FUN__text__0038ad24(&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN__text__005fdad0(param_3 & 0xffff);
    uVar1 = FUN__text__006005c0(uVar2,param_4 & 0xff);
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    local_50 = 0x20591e9a4877db86;
    uStack_48 = 0x70ef55;
    local_40 = 0x15;
    local_38 = 0;
    uVar1 = thunk_FUN__text__0038ad24(&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN__text__005fdad0(param_3 & 0xffff);
    uVar1 = FUN__text__006004e0(uVar2,param_4 & 0xff);
  }
  if ((uVar1 & 0xffff) != 0) {
    if (param_2 == 2) {
      uVar1 = FUN__text__0038f110(uVar1,param_3,param_4);
    }
    else {
      if (param_2 != 1) {
        if (param_2 != 0) {
          return 0;
        }
        lVar3 = 0;
        while ((*(uint *)(lVar3 + 0x7379d4) != (param_3 & 0xffff) ||
               (*(uint *)(lVar3 + 0x7379d8) != (param_4 & 0xff)))) {
          lVar3 = lVar3 + 8;
          if (lVar3 == 0x4a0) {
            return 1;
          }
        }
        return 0;
      }
      uVar1 = FUN__text__0038effc(uVar1,param_3,param_4);
    }
    if ((uVar1 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}


