/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001afe58; name: FUN_.text__001afe58
 */


void FUN__text__001afe58(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  uVar2 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_58,uVar2,0);
  lVar4 = *(long *)(local_58 + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_58 != 0)) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) goto LAB__text__001b035c;
    local_60 = lVar4;
    if (lVar4 != 0) goto LAB__text__001afeec;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) goto LAB__text__001b035c;
LAB__text__001afeec:
    local_60 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  plVar5 = (long *)(param_1 + 0x10);
  local_58 = -0x785149d2741daf75;
  FUN__text__001ac1fc(lVar3,param_1 + 0x70,&local_60,&local_58);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    local_68 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_58 = -0x785149d2741daf75;
    FUN__text__001ac1fc(lVar3,param_1 + 0x80,&local_68,&local_58);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar4 + 0x48);
      local_70 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      local_58 = -0x785148d2741dadc2;
      FUN__text__001ac1fc(lVar3,param_1 + 0xb8,&local_70,&local_58);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        local_70 = lVar4;
        if (lVar4 != 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        local_58 = -0x785148d2741dadc2;
        FUN__text__001ac1fc(lVar3,param_1 + 0xc0,&local_70,&local_58);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        lVar3 = *plVar5;
        if (lVar3 != 0) {
          local_70 = lVar4;
          if (lVar4 != 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
          local_58 = -0x785148d2741dadc2;
          FUN__text__001ac1fc(lVar3,param_1 + 200,&local_70,&local_58);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          lVar3 = *plVar5;
          if (lVar3 != 0) {
            local_70 = lVar4;
            if (lVar4 != 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
            local_58 = -0x785148d2741dadc2;
            FUN__text__001ac1fc(lVar3,param_1 + 0xd0,&local_70,&local_58);
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            lVar3 = *plVar5;
            if (lVar3 != 0) {
              local_70 = lVar4;
              if (lVar4 != 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
              local_58 = -0x785148d2741dadc2;
              FUN__text__001ac1fc(lVar3,param_1 + 0xd8,&local_70,&local_58);
              if (local_70 != 0) {
                (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                local_70 = 0;
              }
              lVar3 = *plVar5;
              if (lVar3 != 0) {
                local_70 = lVar4;
                if (lVar4 != 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
                local_58 = -0x785148d2741dadc2;
                FUN__text__001ac1fc(lVar3,param_1 + 0xe0,&local_70,&local_58);
                if (local_70 != 0) {
                  (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                  local_70 = 0;
                }
                lVar3 = *plVar5;
                if (lVar3 != 0) {
                  local_78 = lVar4;
                  if (lVar4 != 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                  local_58 = -0x785149d2741daf75;
                  FUN__text__001ac1fc(lVar3,param_1 + 0xe8,&local_78,&local_58);
                  if (local_78 != 0) {
                    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                    local_78 = 0;
                  }
                  FUN__text__001b0360(param_1,0,0x13);
                  lVar3 = *(long *)(param_1 + 0x10);
                  if (lVar3 != 0) {
                    local_78 = lVar4;
                    if (lVar4 != 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                    local_58 = -0x785149d2741daf75;
                    FUN__text__001ac1fc(lVar3,param_1 + 0xf0,&local_78,&local_58);
                    if (local_78 != 0) {
                      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                      local_78 = 0;
                    }
                    FUN__text__001b0360(param_1,1,0x13);
                    lVar3 = *(long *)(param_1 + 0x10);
                    if (lVar3 != 0) {
                      local_78 = lVar4;
                      if (lVar4 != 0) {
                        (**(code **)(*plVar1 + 0x10))(plVar1);
                      }
                      local_58 = -0x785149d2741daf75;
                      FUN__text__001ac1fc(lVar3,param_1 + 0xf8,&local_78,&local_58);
                      if (local_78 != 0) {
                        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                        local_78 = 0;
                      }
                      FUN__text__001b0360(param_1,2,0x13);
                      lVar3 = *(long *)(param_1 + 0x10);
                      if (lVar3 != 0) {
                        local_78 = lVar4;
                        if (lVar4 != 0) {
                          (**(code **)(*plVar1 + 0x10))(plVar1);
                        }
                        local_58 = -0x785149d2741daf75;
                        FUN__text__001ac1fc(lVar3,param_1 + 0x100,&local_78,&local_58);
                        if (local_78 != 0) {
                          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                          local_78 = 0;
                        }
                        FUN__text__001b0360(param_1,3,0x13);
                        if (lVar4 != 0) {
                          (**(code **)(*plVar1 + 0x18))(plVar1);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB__text__001b035c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


