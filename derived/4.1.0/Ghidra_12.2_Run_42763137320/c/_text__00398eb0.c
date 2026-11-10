/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00398eb0; name: FUN_.text__00398eb0
 */


undefined1  [16] FUN__text__00398eb0(undefined8 param_1)

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
  
  auVar6 = FUN__text__003813bc();
  uVar4 = auVar6._8_8_;
  local_8 = auVar6._0_8_;
  uVar3 = auVar6._0_4_;
  if ((uVar3 & 0xff) == 5) {
    uVar3 = uVar3 >> 8 & 0xff;
    if ((uVar3 != 3) && (9 < uVar3 - 8)) goto LAB__text__00399200;
  }
  else {
    uVar1 = uVar3 - 8 & 0xff;
    if (uVar1 < 10) {
      if (uVar1 < 4) {
        uVar5 = *(undefined8 *)((long)(char)(uVar3 - 8) * 8 + 0x724e10);
        goto LAB__text__00398fec;
      }
    }
    else {
      if (1 < (uVar3 - 3 & 0xff)) goto LAB__text__00399200;
      if ((uVar3 & 0xff) == 3) {
        auVar6._8_8_ = 1;
        auVar6._0_8_ = 1;
        return auVar6;
      }
    }
  }
  local_28 = 0xc;
  uVar4 = FUN__text__00398dd0(&local_8,&local_28);
  if ((uVar4 & 1) != 0) {
    uVar5 = 2;
    goto LAB__text__00398fec;
  }
  local_28 = 0xd;
  uVar4 = FUN__text__00398dd0(&local_8,&local_28);
  if ((uVar4 & 1) != 0) {
    uVar5 = 3;
    goto LAB__text__00398fec;
  }
  local_28 = 0xe;
  uVar4 = FUN__text__00398dd0(&local_8,&local_28);
  if ((uVar4 & 1) == 0) {
    local_28 = 0xf;
    uVar4 = FUN__text__00398dd0(&local_8,&local_28);
    if ((uVar4 & 1) == 0) {
      local_28 = 0x10;
      uVar4 = FUN__text__00398dd0(&local_8,&local_28);
      if ((uVar4 & 1) != 0) goto LAB__text__00398fc0;
      local_28 = 0x11;
      uVar4 = FUN__text__00398dd0(&local_8,&local_28);
      if ((uVar4 & 1) == 0) {
        local_28 = 4;
        uVar4 = FUN__text__00398dd0(&local_8,&local_28);
        if ((uVar4 & 1) == 0) {
          local_28 = 0x305;
          uVar4 = FUN__text__00398dd0(&local_8,&local_28);
          if ((uVar4 & 1) == 0) {
            local_28 = 0x805;
            uVar4 = FUN__text__00398dd0(&local_8,&local_28);
            if ((uVar4 & 1) == 0) {
              local_28 = 0x905;
              uVar4 = FUN__text__00398dd0(&local_8,&local_28);
              if ((uVar4 & 1) == 0) {
                local_28 = 0xa05;
                uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                if ((uVar4 & 1) == 0) {
                  local_28 = 0xb05;
                  uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                  if ((uVar4 & 1) == 0) {
                    local_28 = 0xc05;
                    uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                    if ((uVar4 & 1) == 0) {
                      local_28 = 0xd05;
                      uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                      if ((uVar4 & 1) == 0) {
                        local_28 = 0xe05;
                        uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                        if ((uVar4 & 1) == 0) {
                          local_28 = 0xf05;
                          uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                          if ((uVar4 & 1) == 0) {
                            local_28 = 0x1005;
                            uVar4 = FUN__text__00398dd0(&local_8,&local_28);
                            if ((uVar4 & 1) == 0) {
                              local_28 = 0x1105;
                              auVar6 = FUN__text__00398dd0(&local_8,&local_28);
                              uVar4 = auVar6._8_8_;
                              if ((auVar6._0_8_ & 1) == 0) {
LAB__text__00399200:
                                auVar2._8_8_ = 0;
                                auVar2._0_8_ = uVar4;
                                return auVar2 << 0x40;
                              }
                              auVar6 = FUN__text__0039a86c(param_1);
                            }
                            else {
                              auVar6 = FUN__text__0039a66c(param_1);
                            }
                          }
                          else {
                            auVar6 = FUN__text__0039a46c(param_1);
                          }
                        }
                        else {
                          auVar6 = FUN__text__0039a26c(param_1);
                        }
                      }
                      else {
                        auVar6 = FUN__text__0039a06c(param_1);
                      }
                    }
                    else {
                      auVar6 = FUN__text__00399e70(param_1);
                    }
                  }
                  else {
                    auVar6 = FUN__text__00399c70(param_1);
                  }
                }
                else {
                  auVar6 = FUN__text__00399a70(param_1);
                }
              }
              else {
                auVar6 = FUN__text__00399870(param_1);
              }
            }
            else {
              auVar6 = FUN__text__00399674(param_1);
            }
          }
          else {
            auVar6 = FUN__text__0039937c(param_1);
          }
        }
        else {
          auVar6 = FUN__text__00399218(param_1);
        }
        return auVar6;
      }
    }
    uVar5 = 9;
  }
  else {
LAB__text__00398fc0:
    uVar5 = 5;
  }
LAB__text__00398fec:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = 1;
  return auVar7;
}


