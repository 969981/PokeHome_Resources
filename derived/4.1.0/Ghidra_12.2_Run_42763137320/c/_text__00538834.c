/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00538834; name: FUN_.text__00538834
 */


uint FUN__text__00538834(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                        undefined8 param_8,long param_9,long param_10,long param_11,long param_12,
                        long param_13,long param_14)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  
  local_78 = param_9;
  uStack_70 = param_8;
  uStack_60 = param_8;
  if ((param_9 == 0) || (param_12 != 0)) {
    local_68 = param_11;
    if ((param_9 == 0) && (param_12 != 0)) {
      if (param_11 == 0) {
        local_68 = param_12;
        local_78 = param_10;
        uStack_70 = param_7;
        local_90 = FUN__text__00538170(param_10,param_7,param_5,param_6);
        uStack_88 = param_2;
        goto LAB__text__0053897c;
      }
      local_78 = param_12;
      param_9 = param_11;
      uStack_60 = param_7;
    }
    else {
      if ((param_9 == 0) || (param_12 == 0)) {
        if ((param_11 != 0) && (param_14 != 0)) {
          local_78 = param_11;
          goto LAB__text__0053887c;
        }
        if (param_11 != 0) goto LAB__text__00538918;
        if (param_14 == 0) {
          local_68 = param_13;
          local_78 = param_10;
          uStack_70 = param_7;
          local_90 = FUN__text__00538170(param_10,param_7,param_5,param_6);
          uStack_88 = param_2;
          local_80 = param_3;
          local_a8 = FUN__text__00538170(param_13,param_8,param_6,param_5);
          uStack_a0 = param_2;
          local_98 = param_3;
          uVar1 = FUN__text__0053c920(param_4,&local_90,&local_a8,&local_78);
          goto LAB__text__005389a8;
        }
        local_68 = param_14;
        local_78 = param_10;
        uStack_70 = param_7;
        local_90 = FUN__text__00538170(param_10,param_7,param_5,param_6);
        param_12 = param_14;
        uStack_88 = param_2;
LAB__text__0053897c:
        param_2 = uStack_88;
        local_80 = param_3;
        local_a8 = FUN__text__0053c6a0(param_12,param_8,param_6);
        goto LAB__text__0053898c;
      }
      local_68 = param_12;
      uStack_70 = param_7;
    }
    local_90 = FUN__text__0053c6a0(param_9,param_7,param_5);
    param_14 = param_12;
    uStack_88 = param_2;
  }
  else {
    if (param_14 == 0) {
      local_68 = param_9;
LAB__text__00538918:
      local_78 = param_13;
      uStack_60 = param_7;
      local_90 = FUN__text__0053c6a0(local_68,param_7,param_5);
      uStack_88 = param_2;
      local_80 = param_3;
      local_a8 = FUN__text__00538170(param_13,param_8,param_6,param_5);
LAB__text__0053898c:
      uStack_a0 = param_2;
      local_98 = param_3;
      uVar1 = FUN__text__0053c7f8(param_4,&local_90,&local_a8,&local_78);
      goto LAB__text__005389a8;
    }
LAB__text__0053887c:
    local_68 = param_14;
    uStack_70 = param_7;
    local_90 = FUN__text__0053c6a0(local_78,param_7,param_5);
    uStack_88 = param_2;
  }
  uVar2 = uStack_88;
  local_80 = param_3;
  local_a8 = FUN__text__0053c6a0(param_14,param_8,param_6);
  uStack_a0 = uVar2;
  local_98 = param_3;
  uVar1 = FUN__text__0053c578(param_4,&local_90,&local_a8,&local_78);
LAB__text__005389a8:
  return uVar1 & 1;
}


