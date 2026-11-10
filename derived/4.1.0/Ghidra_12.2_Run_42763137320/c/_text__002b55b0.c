/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b55b0; name: FUN_.text__002b55b0
 */


undefined1  [16] FUN__text__002b55b0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_28;
  undefined8 local_8;
  
  auVar6 = FUN__text__002a9db0();
  uVar4 = auVar6._8_8_;
  local_8 = auVar6._0_8_;
  uVar3 = auVar6._0_4_;
  if ((uVar3 & 0xff) == 5) {
    uVar3 = uVar3 >> 8 & 0xff;
    if ((uVar3 != 3) && (9 < uVar3 - 8)) goto LAB__text__002b5900;
  }
  else {
    uVar1 = uVar3 - 8 & 0xff;
    if (uVar1 < 10) {
      if (uVar1 < 4) {
        uVar5 = *(undefined8 *)((long)(char)(uVar3 - 8) * 8 + 0x724e10);
        goto LAB__text__002b56ec;
      }
    }
    else {
      if (1 < (uVar3 - 3 & 0xff)) goto LAB__text__002b5900;
      if ((uVar3 & 0xff) == 3) {
        auVar6._8_8_ = 1;
        auVar6._0_8_ = 1;
        return auVar6;
      }
    }
  }
  local_28 = 0xc;
  uVar4 = FUN__text__002b54d0(&local_8,&local_28);
  if ((uVar4 & 1) != 0) {
    uVar5 = 2;
    goto LAB__text__002b56ec;
  }
  local_28 = 0xd;
  uVar4 = FUN__text__002b54d0(&local_8,&local_28);
  if ((uVar4 & 1) != 0) {
    uVar5 = 3;
    goto LAB__text__002b56ec;
  }
  local_28 = 0xe;
  uVar4 = FUN__text__002b54d0(&local_8,&local_28);
  if ((uVar4 & 1) == 0) {
    local_28 = 0xf;
    uVar4 = FUN__text__002b54d0(&local_8,&local_28);
    if ((uVar4 & 1) == 0) {
      local_28 = 0x10;
      uVar4 = FUN__text__002b54d0(&local_8,&local_28);
      if ((uVar4 & 1) != 0) goto LAB__text__002b56c0;
      local_28 = 0x11;
      uVar4 = FUN__text__002b54d0(&local_8,&local_28);
      if ((uVar4 & 1) == 0) {
        local_28 = 4;
        uVar4 = FUN__text__002b54d0(&local_8,&local_28);
        if ((uVar4 & 1) == 0) {
          local_28 = 0x305;
          uVar4 = FUN__text__002b54d0(&local_8,&local_28);
          if ((uVar4 & 1) == 0) {
            local_28 = 0x805;
            uVar4 = FUN__text__002b54d0(&local_8,&local_28);
            if ((uVar4 & 1) == 0) {
              local_28 = 0x905;
              uVar4 = FUN__text__002b54d0(&local_8,&local_28);
              if ((uVar4 & 1) == 0) {
                local_28 = 0xa05;
                uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                if ((uVar4 & 1) == 0) {
                  local_28 = 0xb05;
                  uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                  if ((uVar4 & 1) == 0) {
                    local_28 = 0xc05;
                    uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                    if ((uVar4 & 1) == 0) {
                      local_28 = 0xd05;
                      uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                      if ((uVar4 & 1) == 0) {
                        local_28 = 0xe05;
                        uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                        if ((uVar4 & 1) == 0) {
                          local_28 = 0xf05;
                          uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                          if ((uVar4 & 1) == 0) {
                            local_28 = 0x1005;
                            uVar4 = FUN__text__002b54d0(&local_8,&local_28);
                            if ((uVar4 & 1) == 0) {
                              local_28 = 0x1105;
                              auVar6 = FUN__text__002b54d0(&local_8,&local_28);
                              uVar4 = auVar6._8_8_;
                              if ((auVar6._0_8_ & 1) == 0) {
LAB__text__002b5900:
                                auVar2._8_8_ = 0;
                                auVar2._0_8_ = uVar4;
                                return auVar2 << 0x40;
                              }
                              auVar6 = FUN__text__002b6f6c(param_1);
                            }
                            else {
                              auVar6 = FUN__text__002b6d6c(param_1);
                            }
                          }
                          else {
                            auVar6 = FUN__text__002b6b6c(param_1);
                          }
                        }
                        else {
                          auVar6 = FUN__text__002b696c(param_1);
                        }
                      }
                      else {
                        auVar6 = FUN__text__002b676c(param_1);
                      }
                    }
                    else {
                      auVar6 = FUN__text__002b6570(param_1);
                    }
                  }
                  else {
                    auVar6 = FUN__text__002b6370(param_1);
                  }
                }
                else {
                  auVar6 = FUN__text__002b6170(param_1);
                }
              }
              else {
                auVar6 = FUN__text__002b5f70(param_1);
              }
            }
            else {
              auVar6 = FUN__text__002b5d74(param_1);
            }
          }
          else {
            auVar6 = FUN__text__002b5a7c(param_1);
          }
        }
        else {
          auVar6 = FUN__text__002b5918(param_1);
        }
        return auVar6;
      }
    }
    uVar5 = 9;
  }
  else {
LAB__text__002b56c0:
    uVar5 = 5;
  }
LAB__text__002b56ec:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = 1;
  return auVar7;
}


