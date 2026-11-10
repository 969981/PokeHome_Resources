/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023d8c0; name: FUN_.text__0023d8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0023d8c0(long param_1)

{
  Uid *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  Uid aUStack_e0 [16];
  long local_d0;
  long lStack_c8;
  long local_c0 [16];
  int local_3c;
  long local_38;
  
  FUN__text__00125548(param_1,param_1 + 0x5d0,0x5c00000);
  local_c0[0] = CONCAT44(local_c0[0]._4_4_,1);
  FUN__text__0023dc98(param_1 + 0x5d0,0x720176,local_c0,0x100000);
  FUN__text__0012559c(param_1);
  FUN__text__001820d0(local_c0);
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
  }
  lVar9 = local_c0[0];
  *(long *)(param_1 + 0x5c8) = local_c0[0];
  lVar6 = *(long *)(param_1 + 0x338);
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  lVar4 = *(long *)(lVar9 + 0x58);
  *(long *)(lVar9 + 0x58) = lVar6;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (*(long *)(param_1 + 0x5c8) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x5c8) + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN__text__0023def0(param_1);
  FUN__text__00181a9c(param_1);
  FUN__text__00181cd0(param_1);
  local_c0[0] = 0x4f3735aa16806011;
  local_c0[1] = 0x70dafe;
  local_c0[2] = 0x1a;
  local_c0[3] = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN__text__00115454(*(long *)(param_1 + 0xb8),local_c0,0xb), local_c0[3] != 0)) {
    (**(code **)(*(long *)(local_c0[3] + 0x48) + 0x18))();
  }
  if (*(int *)(*(long *)(param_1 + 0xa60) + 4) == 2) {
    local_c0[0] = -0x4be9e1ebda374b97;
    local_c0[1] = 0x717c76;
    local_c0[2] = 0x1e;
    local_c0[3] = 0;
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (FUN__text__00115454(*(long *)(param_1 + 0xb8),local_c0,0xb), local_c0[3] != 0)) {
      (**(code **)(*(long *)(local_c0[3] + 0x48) + 0x18))();
    }
  }
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(local_c0);
  lVar9 = local_c0[0];
  if (local_c0[0] != 0) {
    puVar7 = *(undefined8 **)(local_c0[0] + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar8 = (long *)(**(code **)*puVar7)(puVar7);
      plVar5 = (long *)FUN__text__0023e748();
      if (plVar5 != plVar8) {
        do {
          plVar8 = (long *)*plVar8;
        } while (plVar8 != plVar5 && plVar8 != (long *)0x0);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          goto LAB__text__0023dc94;
        }
      }
      puVar7 = puVar7 + -10;
    }
    plVar8 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[0xc] = *(undefined8 *)(param_1 + 0xa60);
      lVar9 = *(long *)(param_1 + 0x5c8);
      local_c0[0] = *(long *)(lVar9 + 0x58);
      if (local_c0[0] != 0) {
        (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x10))();
      }
      FUN__text__0023e870(&local_38,lVar9,local_c0,0,0x7167d4);
      if (local_c0[0] != 0) {
        (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
      }
      FUN__text__00246074(local_38,puVar7);
      iVar3 = *(int *)(*(long *)(param_1 + 0xa60) + 4);
      if (iVar3 - 1U < 2) {
        *(int *)(local_38 + 0x6e8) = iVar3;
      }
      local_3c = 0;
      local_c0[0xe] = 0;
      local_c0[0xf] = 0;
      local_c0[0xc] = 0;
      local_c0[0xd] = 0;
      local_c0[10] = 0;
      local_c0[0xb] = 0;
      local_c0[8] = 0;
      local_c0[9] = 0;
      local_c0[6] = 0;
      local_c0[7] = 0;
      local_c0[4] = 0;
      local_c0[5] = 0;
      local_c0[2] = 0;
      local_c0[3] = 0;
      local_c0[0] = 0;
      local_c0[1] = 0;
      nn::account::ListAllUsers(&local_3c,(Uid *)local_c0,8);
      local_d0 = *(long *)(*(long *)(param_1 + 0xa60) + 8);
      lStack_c8 = *(long *)(*(long *)(param_1 + 0xa60) + 0x10);
      nn::account::GetLastOpenedUser(aUStack_e0);
      pUVar1 = aUStack_e0;
      if (local_d0 != 0 || lStack_c8 != 0) {
        pUVar1 = (Uid *)&local_d0;
      }
      lVar9 = *(long *)((long)pUVar1 + 8);
      *(long *)(local_38 + 0x6d8) = *(long *)pUVar1;
      *(long *)(local_38 + 0x6e0) = lVar9;
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0xa60) + 0x20);
      *(undefined4 *)(local_38 + 0x6fc) = *(undefined4 *)(*(long *)(param_1 + 0xa60) + 0x1c);
      *(undefined4 *)(local_38 + 0x700) = uVar2;
      FUN__text__00130104(0x71e39f,0x710dca,*(undefined8 *)(param_1 + 0x5c8));
      FUN__text__00137978(0x715d3e,*(undefined8 *)(param_1 + 0x5c8),
                          *(undefined8 *)(*_DAT_008a16d0 + 0x28),0);
      FUN__text__00136338(0x713ada,*(undefined8 *)(param_1 + 0x5c8),0x71e4fd);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      FUN__text__0010e28c(*_DAT_0089f5a0,4,0);
      return;
    }
  }
LAB__text__0023dc94:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


