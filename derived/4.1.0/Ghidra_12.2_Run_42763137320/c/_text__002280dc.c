/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002280dc; name: FUN_.text__002280dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002280dc(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long local_58 [5];
  undefined1 uStack_11;
  
  if (param_3 == 0) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(local_58,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
    lVar3 = FUN__text__0022a9c8(&uStack_11,uVar2,local_58,local_58 + 4);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (local_58[4] != 0) {
      (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
    }
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
    }
    *param_1 = lVar3;
    return;
  }
  plVar1 = _DAT_0089f5c8;
  if (*(long *)(param_3 + 0x70) != 0) {
    plVar1 = (long *)(*(long *)(param_3 + 0x70) + 0x58);
  }
  lVar3 = *plVar1;
  if (lVar3 < -0x1840b0ea567705e7) {
    if (lVar3 < -0x56d2d2c999525239) {
      if (lVar3 < -0x6914fb5bec6525f7) {
        if (lVar3 == -0x6ca70a7abf4e9d22) {
          FUN__text__0022c030(param_2 + 0x14a);
          FUN__text__0022c190(param_2 + 0x14a,0);
          local_58[0] = -0x4b9eb1124a665474;
          local_58[1] = 0x717c25;
          local_58[2] = 0xb;
          local_58[3] = 0;
          lVar3 = FUN__text__0022ab00(param_2[0xb9],local_58);
          if (local_58[3] != 0) {
            (**(code **)(*(long *)(local_58[3] + 0x48) + 0x18))();
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl();
          }
          FUN__text__0023b5d4(lVar3);
          uVar2 = FUN__text__0012559c(param_2);
          (**(code **)(*param_2 + 0x10))(local_58,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
          lVar3 = FUN__text__0022ad2c(&uStack_11,uVar2,local_58,local_58 + 4);
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (local_58[4] != 0) {
            (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
          }
          if (local_58[0] != 0) {
            (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
          }
          *param_1 = lVar3;
          return;
        }
        if (lVar3 == -0x6be820d466871394) {
          uVar2 = FUN__text__0012559c(param_2);
          (**(code **)(*param_2 + 0x10))(local_58,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
          lVar3 = FUN__text__0022b5a0(&uStack_11,uVar2,local_58,local_58 + 4);
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (local_58[4] != 0) {
            (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
          }
          if (local_58[0] != 0) {
            (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
          }
          *param_1 = lVar3;
          return;
        }
      }
      else {
        if (lVar3 == -0x6914fb5bec6525f7) {
          FUN__text__0022937c(param_1,param_2);
          return;
        }
        if (lVar3 == -0x6108e7711a9fdcad) {
          uVar2 = FUN__text__0012559c(param_2);
          (**(code **)(*param_2 + 0x10))(local_58,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
          lVar3 = FUN__text__0022ae58(&uStack_11,uVar2,local_58,local_58 + 4);
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (local_58[4] != 0) {
            (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
          }
          if (local_58[0] != 0) {
            (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
          }
          *param_1 = lVar3;
          return;
        }
      }
    }
    else if (lVar3 < -0x1c5fafc54292cb97) {
      if (lVar3 == -0x56d2d2c999525239) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022b6cc(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      if (lVar3 == -0x340425dba91b4c1c) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022b924(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
    }
    else {
      if (lVar3 == -0x1c5fafc54292cb97) {
        FUN__text__00228e9c(param_1,param_2);
        return;
      }
      if (lVar3 == -0x1c542745539d0c4c) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022b1f4(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
    }
  }
  else if (lVar3 < 0x35eb5cd93b52bab) {
    if (lVar3 < -0x7b90f46e6f6497c) {
      if (lVar3 == -0x1840b0ea567705e7) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022b46c(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      if (lVar3 == -0x1240e5bd6a62a9c1) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022b46c(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
    }
    else {
      if (lVar3 == -0x7b90f46e6f6497c) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022af8c(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      if (lVar3 == -0x5d40a32ba48548e) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
        lVar3 = FUN__text__0022b320(&uStack_11,uVar2,local_58,local_58 + 4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58[4] != 0) {
          (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
        }
        if (local_58[0] != 0) {
          (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
    }
  }
  else if (lVar3 < 0x31beb8c19d26b4e8) {
    if (lVar3 == 0x35eb5cd93b52bab) {
      FUN__text__00229010(param_1,param_2);
      return;
    }
    if (lVar3 == 0x9a1b9187984abb0) {
      FUN__text__00228d54(param_1,param_2);
      return;
    }
  }
  else {
    if (lVar3 == 0x31beb8c19d26b4e8) {
      FUN__text__002291b0(param_1,param_2);
      return;
    }
    if (lVar3 == 0x54ea0826e5d21f43) {
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(local_58,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 4);
      lVar3 = FUN__text__0022b0b8(&uStack_11,uVar2,local_58,local_58 + 4);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (local_58[4] != 0) {
        (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
      }
      if (local_58[0] != 0) {
        (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
      }
      *param_1 = lVar3;
      return;
    }
    if (lVar3 == 0x6c4589cfb8322e60) {
      if (*(int *)(param_2[0x148] + 4) == 4) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58 + 4,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 3);
        lVar3 = FUN__text__0022b924(&uStack_11,uVar2,local_58 + 4,local_58 + 3);
      }
      else {
        if (*(int *)(param_2[0x148] + 4) != 3) {
          *param_1 = 0;
          return;
        }
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_58 + 4,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(local_58 + 3);
        lVar3 = FUN__text__0022b7f8(&uStack_11,uVar2,local_58 + 4,local_58 + 3);
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (local_58[3] != 0) {
        (**(code **)(*(long *)(local_58[3] + 0x48) + 0x18))();
      }
      if (local_58[4] != 0) {
        (**(code **)(*(long *)(local_58[4] + 0x48) + 0x18))();
      }
      *param_1 = lVar3;
      return;
    }
  }
  puVar4 = (undefined4 *)param_2[0x148];
  *param_1 = 0;
  *puVar4 = 1;
  return;
}


