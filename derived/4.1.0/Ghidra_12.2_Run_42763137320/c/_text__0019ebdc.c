/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019ebdc; name: FUN_.text__0019ebdc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019ebdc(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [12];
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN__text__001ad3c4(*(undefined8 *)(param_1 + 0x48));
  thunk_FUN__text__001c8b60(*(undefined8 *)(param_1 + 0x188));
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x88) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))();
  (**(code **)(**(long **)(param_1 + 200) + 0x18))();
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (*(int *)(param_1 + 0x1f0) == 2) {
    local_54 = *(uint *)(param_1 + 0x200);
    local_48 = 0;
    local_50 = 0;
    uStack_4c = 0;
    if (*(int *)(param_1 + 0x208) != 2) {
      if (*(int *)(param_1 + 0x208) == 4) {
        FUN__text__00191278(*(undefined4 *)(param_1 + 0x21c));
        local_50 = 0;
        uStack_4c = extraout_var;
        local_48 = extraout_w1;
      }
      else {
        bVar2 = *(int *)(param_1 + 0x204) != 4;
        if (*(char *)(param_1 + 0x220) == '\0') {
          if (bVar2) {
            uStack_4c = (undefined4)*(undefined8 *)(param_1 + 0x214);
            local_48 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x214) >> 0x20);
          }
        }
        else if (bVar2) {
          local_50 = 2;
        }
        else {
          local_50 = 1;
        }
      }
    }
    FUN__text__0019e97c(param_1,&local_54,1,1);
    uVar4 = FUN__text__001ca820(*(undefined8 *)(param_1 + 0x1f8));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN__text__001ca8bc(*(undefined8 *)(param_1 + 0x1f8)), (uVar4 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x1f0) == 1) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    lVar7 = (long)*(int *)(param_1 + 0x200);
    uVar4 = FUN__text__001ca820(*(undefined8 *)(param_1 + 0x1f8));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN__text__001ca8bc(*(undefined8 *)(param_1 + 0x1f8)), (uVar4 & 1) != 0)) {
      FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x1f8),0);
      if (*(int *)(param_1 + 0x208) == 4) {
        uVar3 = FUN__text__00191278(*(undefined4 *)(param_1 + 0x21c));
        lVar1 = param_1 + lVar7 * 0x20;
        uVar6 = *(undefined8 *)(lVar1 + 0xa8);
        lVar8 = FUN__text__001930e0(*(undefined8 *)(lVar8 + 0x40),
                                    *(undefined4 *)(param_1 + lVar7 * 4 + 0x1b0));
        FUN__text__001cf6b0(uVar6,*(undefined8 *)(lVar8 + 0x30),uVar3);
        uVar6 = *(undefined8 *)(lVar1 + 0xa8);
      }
      else {
        local_50 = 0;
        uStack_4c = 0;
        local_48 = 0;
        local_44 = 0;
        if (*(int *)(param_1 + 0x208) == 2) {
          uVar6 = 1;
          local_54 = CONCAT31(local_54._1_3_,1);
          local_50 = *(undefined4 *)(param_1 + lVar7 * 4 + 0x1b0);
          uStack_4c = (undefined4)_DAT_0072593c;
          local_48 = (undefined4)((ulong)_DAT_0072593c >> 0x20);
          local_44 = _DAT_00725944;
        }
        else {
          lVar8 = param_1 + lVar7 * 4;
          if (*(char *)(param_1 + 0x220) == '\0') {
            if (*(int *)(param_1 + 0x204) == 4) {
              puVar5 = (undefined4 *)(param_1 + 0x21c);
            }
            else {
              puVar5 = (undefined4 *)(param_1 + 0x210);
            }
          }
          else {
            puVar5 = (undefined4 *)(lVar8 + 0x228);
          }
          auVar9 = FUN__text__00191278(*puVar5);
          local_44 = auVar9._8_4_;
          local_50 = *(undefined4 *)(lVar8 + 0x1b0);
          uVar6 = 2;
          local_54 = local_54 & 0xffffff00;
          uStack_4c = auVar9._0_4_;
          local_48 = auVar9._4_4_;
        }
        lVar8 = param_1 + lVar7 * 0x20;
        FUN__text__001b9b20(*(undefined8 *)(lVar8 + 0x68),uVar6);
        FUN__text__001ba7d0(*(undefined8 *)(lVar8 + 0x68),&local_54);
        uVar6 = *(undefined8 *)(lVar8 + 0x68);
      }
      *(undefined8 *)(param_1 + 0x1f8) = uVar6;
      *(undefined4 *)(param_1 + lVar7 * 4 + 0x1bc) = *(undefined4 *)(param_1 + 0x208);
      FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x1f8),1);
      FUN__text__001ca880(*(undefined8 *)(param_1 + 0x1f8));
      local_54 = *(uint *)(param_1 + 0x200);
      local_48 = 0;
      local_50 = 0;
      uStack_4c = 0;
      if (*(int *)(param_1 + 0x208) != 2) {
        if (*(int *)(param_1 + 0x208) == 4) {
          FUN__text__00191278(*(undefined4 *)(param_1 + 0x21c));
          local_50 = 0;
          uStack_4c = extraout_var_00;
          local_48 = extraout_w1_00;
        }
        else {
          bVar2 = *(int *)(param_1 + 0x204) != 4;
          if (*(char *)(param_1 + 0x220) == '\0') {
            if (bVar2) {
              uStack_4c = (undefined4)*(undefined8 *)(param_1 + 0x214);
              local_48 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x214) >> 0x20);
            }
          }
          else if (bVar2) {
            local_50 = 2;
          }
          else {
            local_50 = 1;
          }
        }
      }
      FUN__text__0019e97c(param_1,&local_54,1,1);
      FUN__text__001ca894(*(undefined8 *)(param_1 + 0x1f8));
      *(undefined4 *)(param_1 + 0x1f0) = 2;
      return;
    }
  }
  return;
}


