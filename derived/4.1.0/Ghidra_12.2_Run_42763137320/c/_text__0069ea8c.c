/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069ea8c; name: FUN_.text__0069ea8c
 */


long * FUN__text__0069ea8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)0x0;
  if (param_4 < 0x316e6170) {
    if (param_4 < 0x31646e77) {
      if (param_4 == 0x31636970) {
        plVar1 = (long *)FUN__text__006a0ee8(0x100,0x10);
        if (plVar1 != (long *)0x0) {
          FUN__text__006b9400(plVar1,param_2,param_3,param_5,param_6,param_7);
        }
      }
      else if ((param_4 == 0x31646e62) &&
              (plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10), plVar1 != (long *)0x0)) {
        FUN__text__0069fc94(plVar1,param_5,param_6,param_7);
      }
    }
    else if (param_4 == 0x31646e77) {
      plVar1 = (long *)FUN__text__006a0ee8(0x130,0x10);
      if (plVar1 != (long *)0x0) {
        FUN__text__006c2fc0(plVar1,param_2,param_3,param_5,param_6,param_7);
      }
    }
    else if ((param_4 == 0x31696c61) &&
            (plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10), plVar1 != (long *)0x0)) {
      FUN__text__006c6dec(plVar1,param_5,param_7);
    }
  }
  else if (param_4 < 0x31747063) {
    if (param_4 == 0x316e6170) {
      plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10);
      if (plVar1 != (long *)0x0) {
        FUN__text__006b2060(plVar1,param_2,param_3,param_5,param_7);
      }
    }
    else if ((param_4 == 0x31726373) &&
            (plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10), plVar1 != (long *)0x0)) {
      FUN__text__006c9a38(plVar1,param_5,param_7);
    }
  }
  else if (param_4 == 0x31747063) {
    plVar1 = (long *)FUN__text__006a0ee8(0xe0,0x10);
    if (plVar1 != (long *)0x0) {
      FUN__text__0069fe38(plVar1,param_5,param_6,param_7);
    }
  }
  else if (param_4 == 0x31747270) {
    plVar1 = (long *)FUN__text__006a0ee8(0xf0,0x10);
    if (plVar1 != (long *)0x0) {
      FUN__text__006b9184(plVar1,param_5,param_6,param_7);
    }
  }
  else if (param_4 == 0x31747874) {
    local_68 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    plVar1 = (long *)FUN__text__006a0ee8(0x160,0x10);
    if (plVar1 != (long *)0x0) {
      FUN__text__006bc1d0(plVar1,param_2,param_3,&local_68,param_5,param_6,param_7);
    }
    (**(code **)(*plVar1 + 0x128))(plVar1,param_2,param_3,param_7,&local_68);
  }
  return plVar1;
}


