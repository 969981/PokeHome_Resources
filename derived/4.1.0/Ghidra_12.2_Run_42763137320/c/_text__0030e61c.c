/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030e61c; name: FUN_.text__0030e61c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030e61c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *extraout_x8;
  long lVar6;
  ulong uVar7;
  long local_50;
  long *local_48;
  
  lVar5 = _DAT_008a2ac0;
  param_1[8] = 0;
  lVar6 = _DAT_0089f690 + 0x10;
  *param_1 = lVar5 + 0x10;
  param_1[1] = lVar6;
  uVar7 = tpidr_el0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar6 = _DAT_008a2ac8;
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(uVar7 + 0x98) != 0) {
      lVar5 = *(long *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x10);
    }
  }
  param_1[2] = lVar5;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = lVar6 + 0x10;
  param_1[1] = lVar6 + 0x78;
  param_1[10] = lVar6 + 0xb0;
  local_48 = param_2;
  memset(param_1 + 0xc,0,0x158);
  if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__0030f584:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar6 = uVar7 + 0x18;
  *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = param_2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x120,8);
  lVar5 = _DAT_008a2ad0;
  if (plVar2 != (long *)0x0) {
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    *(undefined4 *)(plVar2 + 10) = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0x23] = 0;
    plVar2[9] = lVar5 + 0x68;
    *plVar2 = lVar5 + 0x10;
    plVar2[1] = (long)param_2;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0xb] = 1;
    plVar2[0xc] = 1;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar2[0x14] = 0;
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 0x120;
    plVar2[4] = 8;
    plVar2[5] = 0;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    (**(code **)(plVar2[9] + 0x10))();
    lVar5 = param_1[0xc];
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    param_1[0xc] = (long)plVar2;
    FUN__text__0030f5a8(&local_50,local_48);
    if (param_1[0xf] != 0) {
      (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    }
    param_1[0xf] = local_50;
    FUN__text__0030f6ac(&local_50,local_48);
    if (param_1[0x13] != 0) {
      (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    }
    param_1[0x13] = local_50;
    FUN__text__0030f7b0(&local_50,local_48);
    if (param_1[0x11] != 0) {
      (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    }
    param_1[0x11] = local_50;
    FUN__text__0030f8b4(&local_50,local_48);
    if (param_1[0x12] != 0) {
      (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    }
    plVar2 = local_48;
    param_1[0x12] = local_50;
    if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
    *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    plVar3 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0xde8,8);
    if (plVar3 != (long *)0x0) {
      memset(plVar3 + 5,0,0xdc0);
      lVar5 = _DAT_008a2ad8 + 0x60;
      *plVar3 = _DAT_008a2ad8 + 0x10;
      plVar3[1] = (long)plVar2;
      plVar3[9] = lVar5;
      plVar3[2] = (long)plVar3;
      plVar3[3] = 0xde8;
      plVar3[4] = 8;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      (**(code **)(plVar3[9] + 0x10))();
      if (param_1[0xd] != 0) {
        (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
      }
      plVar2 = local_48;
      param_1[0xd] = (long)plVar3;
      if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
      *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,600,8);
      param_2 = plVar3;
      if (plVar4 != (long *)0x0) {
        memset(plVar4 + 5,0,0x230);
        lVar5 = _DAT_008a2ae0;
        plVar4[9] = _DAT_008a2ae0 + 0x60;
        *plVar4 = lVar5 + 0x10;
        plVar4[1] = (long)plVar2;
        plVar4[2] = (long)plVar4;
        plVar4[3] = 600;
        plVar4[4] = 8;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        (**(code **)(plVar4[9] + 0x10))();
        if (param_1[0xe] != 0) {
          (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
        }
        plVar2 = local_48;
        param_1[0xe] = (long)plVar4;
        if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
        *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        plVar3 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x188,8);
        param_2 = plVar4;
        if (plVar3 != (long *)0x0) {
          memset(plVar3 + 5,0,0x160);
          lVar1 = _DAT_008a2ae8 + 0x60;
          *plVar3 = _DAT_008a2ae8 + 0x10;
          plVar3[1] = (long)plVar2;
          plVar3[9] = lVar1;
          plVar3[2] = (long)plVar3;
          plVar3[3] = 0x188;
          plVar3[4] = 8;
          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
          (**(code **)(plVar3[9] + 0x10))();
          if (param_1[0x14] != 0) {
            (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
          }
          param_1[0x14] = (long)plVar3;
          FUN__text__0030f9b8(&local_50,local_48);
          if (param_1[0x15] != 0) {
            (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
          }
          param_1[0x15] = local_50;
          FUN__text__0030fabc(&local_50,local_48,&local_48);
          if (param_1[0x16] != 0) {
            (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
          }
          param_1[0x16] = local_50;
          FUN__text__0030fbd8(&local_50,local_48);
          if (param_1[0x17] != 0) {
            (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
          }
          param_1[0x17] = local_50;
          FUN__text__0030fcdc(&local_50,local_48);
          if (param_1[0x19] != 0) {
            (**(code **)(*(long *)(param_1[0x19] + 0x48) + 0x18))();
          }
          param_1[0x19] = local_50;
          FUN__text__0030fde0(&local_50,local_48);
          if (param_1[0x10] != 0) {
            (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
          }
          plVar2 = local_48;
          param_1[0x10] = local_50;
          if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
          *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
          plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0xee8,8);
          param_2 = plVar3;
          if (plVar4 != (long *)0x0) {
            memset(plVar4 + 5,0,0xec0);
            lVar1 = _DAT_008a2af0 + 0x60;
            *plVar4 = _DAT_008a2af0 + 0x10;
            plVar4[1] = (long)plVar2;
            plVar4[9] = lVar1;
            plVar4[2] = (long)plVar4;
            plVar4[3] = 0xee8;
            plVar4[4] = 8;
            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
            (**(code **)(plVar4[9] + 0x10))();
            if (param_1[0x18] != 0) {
              (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
            }
            plVar2 = local_48;
            param_1[0x18] = (long)plVar4;
            if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
            *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
            plVar3 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x148,8);
            param_2 = plVar4;
            if (plVar3 != (long *)0x0) {
              memset(plVar3 + 5,0,0x120);
              lVar1 = _DAT_008a2af8 + 0x60;
              *plVar3 = _DAT_008a2af8 + 0x10;
              plVar3[1] = (long)plVar2;
              plVar3[9] = lVar1;
              plVar3[2] = (long)plVar3;
              plVar3[3] = 0x148;
              plVar3[4] = 8;
              *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
              (**(code **)(plVar3[9] + 0x10))();
              if (param_1[0x1a] != 0) {
                (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
              }
              plVar2 = local_48;
              param_1[0x1a] = (long)plVar3;
              if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
              *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
              *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
              plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x6068,8);
              param_2 = plVar3;
              if (plVar4 != (long *)0x0) {
                memset(plVar4 + 5,0,0x6040);
                lVar1 = _DAT_008a2b00 + 0x60;
                *plVar4 = _DAT_008a2b00 + 0x10;
                plVar4[1] = (long)plVar2;
                plVar4[9] = lVar1;
                plVar4[2] = (long)plVar4;
                plVar4[3] = 0x6068;
                plVar4[4] = 8;
                *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                (**(code **)(plVar4[9] + 0x10))();
                if (param_1[0x1b] != 0) {
                  (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
                }
                plVar2 = local_48;
                param_1[0x1b] = (long)plVar4;
                if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
                *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
                *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                plVar3 = (long *)(**(code **)(*local_48 + 0x10))(local_48,600,8);
                param_2 = plVar4;
                if (plVar3 != (long *)0x0) {
                  memset(plVar3 + 5,0,0x230);
                  plVar3[9] = lVar5 + 0x60;
                  *plVar3 = lVar5 + 0x10;
                  plVar3[1] = (long)plVar2;
                  plVar3[2] = (long)plVar3;
                  plVar3[3] = 600;
                  plVar3[4] = 8;
                  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                  (**(code **)(plVar3[9] + 0x10))();
                  if (param_1[0x1c] != 0) {
                    (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
                  }
                  plVar2 = local_48;
                  param_1[0x1c] = (long)plVar3;
                  if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
                  *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
                  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                  plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0xf0,8);
                  param_2 = plVar3;
                  if (plVar4 != (long *)0x0) {
                    plVar4[0x1c] = 0;
                    plVar4[0x1d] = 0;
                    plVar4[6] = 0;
                    plVar4[0x1a] = 0;
                    plVar4[0x1b] = 0;
                    plVar4[0x18] = 0;
                    plVar4[0x19] = 0;
                    plVar4[0x16] = 0;
                    plVar4[0x17] = 0;
                    plVar4[0x14] = 0;
                    plVar4[0x15] = 0;
                    plVar4[0x12] = 0;
                    plVar4[0x13] = 0;
                    plVar4[0x10] = 0;
                    plVar4[0x11] = 0;
                    plVar4[0xe] = 0;
                    plVar4[0xf] = 0;
                    plVar4[0xc] = 0;
                    plVar4[0xd] = 0;
                    plVar4[10] = 0;
                    plVar4[0xb] = 0;
                    plVar4[7] = 0;
                    plVar4[8] = 0;
                    plVar3 = plVar4 + 9;
                    *plVar3 = 0;
                    lVar5 = _DAT_008a2b08 + 0x10;
                    *plVar3 = _DAT_008a2b08 + 0x60;
                    *plVar4 = lVar5;
                    plVar4[1] = (long)plVar2;
                    plVar4[2] = (long)plVar4;
                    plVar4[3] = 0xf0;
                    plVar4[4] = 8;
                    plVar4[5] = 0;
                    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                    (**(code **)(*plVar3 + 0x10))();
                    if (param_1[0x1d] != 0) {
                      (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
                    }
                    plVar2 = local_48;
                    param_1[0x1d] = (long)plVar4;
                    if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
                    *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
                    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                    plVar3 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0xc0,8);
                    param_2 = plVar4;
                    if (plVar3 != (long *)0x0) {
                      plVar3[0x16] = 0;
                      plVar3[0x17] = 0;
                      plVar3[6] = 0;
                      plVar3[0x14] = 0;
                      plVar3[0x15] = 0;
                      plVar3[0x12] = 0;
                      plVar3[0x13] = 0;
                      plVar3[0x10] = 0;
                      plVar3[0x11] = 0;
                      plVar3[0xe] = 0;
                      plVar3[0xf] = 0;
                      plVar3[0xc] = 0;
                      plVar3[0xd] = 0;
                      plVar3[10] = 0;
                      plVar3[0xb] = 0;
                      plVar3[7] = 0;
                      plVar3[8] = 0;
                      plVar4 = plVar3 + 9;
                      *plVar4 = 0;
                      lVar5 = _DAT_008a2b10 + 0x10;
                      *plVar4 = _DAT_008a2b10 + 0x60;
                      *plVar3 = lVar5;
                      plVar3[1] = (long)plVar2;
                      plVar3[2] = (long)plVar3;
                      plVar3[3] = 0xc0;
                      plVar3[4] = 8;
                      plVar3[5] = 0;
                      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                      (**(code **)(*plVar4 + 0x10))();
                      if (param_1[0x1e] != 0) {
                        (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
                      }
                      plVar2 = local_48;
                      param_1[0x1e] = (long)plVar3;
                      if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
                      *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
                      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                      plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x697d8,8);
                      param_2 = plVar3;
                      if (plVar4 != (long *)0x0) {
                        memset(plVar4 + 5,0,0x697b0);
                        lVar5 = _DAT_008a2b18;
                        plVar4[2] = (long)plVar4;
                        plVar4[3] = 0x697d8;
                        *plVar4 = lVar5 + 0x10;
                        plVar4[1] = (long)plVar2;
                        plVar4[4] = 8;
                        plVar4[9] = lVar5 + 0x60;
                        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                        (**(code **)(plVar4[9] + 0x10))();
                        if (param_1[0x1f] != 0) {
                          (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
                        }
                        plVar2 = local_48;
                        param_1[0x1f] = (long)plVar4;
                        if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
                        *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
                        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                        plVar3 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x108,8);
                        param_2 = plVar4;
                        if (plVar3 != (long *)0x0) {
                          plVar3[0x1f] = 0;
                          plVar3[0x20] = 0;
                          plVar3[10] = 0;
                          plVar3[6] = 0;
                          plVar3[0x1d] = 0;
                          plVar3[0x1e] = 0;
                          plVar3[0x1b] = 0;
                          plVar3[0x1c] = 0;
                          plVar3[0x19] = 0;
                          plVar3[0x1a] = 0;
                          plVar3[0x17] = 0;
                          plVar3[0x18] = 0;
                          plVar3[0x15] = 0;
                          plVar3[0x16] = 0;
                          plVar3[0x13] = 0;
                          plVar3[0x14] = 0;
                          plVar3[0x11] = 0;
                          plVar3[0x12] = 0;
                          plVar3[0xf] = 0;
                          plVar3[0x10] = 0;
                          plVar3[0xd] = 0;
                          plVar3[0xe] = 0;
                          plVar3[0xb] = 0;
                          plVar3[0xc] = 0;
                          plVar3[7] = 0;
                          plVar3[8] = 0;
                          plVar4 = plVar3 + 9;
                          *plVar4 = 0;
                          lVar5 = _DAT_008a2b20 + 0x10;
                          *plVar4 = _DAT_008a2b20 + 0x60;
                          *plVar3 = lVar5;
                          plVar3[1] = (long)plVar2;
                          plVar3[2] = (long)plVar3;
                          plVar3[3] = 0x108;
                          plVar3[4] = 8;
                          plVar3[5] = 0;
                          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                          (**(code **)(*plVar4 + 0x10))();
                          if (param_1[0x20] != 0) {
                            (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
                          }
                          plVar2 = local_48;
                          param_1[0x20] = (long)plVar3;
                          if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__0030f584;
                          *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = local_48;
                          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                          plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x998,8);
                          param_2 = plVar3;
                          if (plVar4 != (long *)0x0) {
                            memset(plVar4 + 5,0,0x970);
                            lVar6 = _DAT_008a2b28 + 0x60;
                            *plVar4 = _DAT_008a2b28 + 0x10;
                            plVar4[1] = (long)plVar2;
                            plVar4[9] = lVar6;
                            plVar4[2] = (long)plVar4;
                            plVar4[3] = 0x998;
                            plVar4[4] = 8;
                            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                            (**(code **)(plVar4[9] + 0x10))();
                            if (param_1[0x21] != 0) {
                              (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
                            }
                            param_1[0x21] = (long)plVar4;
                            lVar6 = param_1[0xd];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x22];
                            param_1[0x22] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0xe];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x23];
                            param_1[0x23] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0xf];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x24];
                            param_1[0x24] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x10];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x25];
                            param_1[0x25] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x11];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x26];
                            param_1[0x26] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x12];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x27];
                            param_1[0x27] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x13];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x28];
                            param_1[0x28] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x14];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x29];
                            param_1[0x29] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x15];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x2a];
                            param_1[0x2a] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x16];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x2b];
                            param_1[0x2b] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x17];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x2c];
                            param_1[0x2c] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x18];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x2d];
                            param_1[0x2d] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x19];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x2e];
                            param_1[0x2e] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x1a];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x2f];
                            param_1[0x2f] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x1b];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x30];
                            param_1[0x30] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x1c];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x31];
                            param_1[0x31] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x1d];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x32];
                            param_1[0x32] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x1e];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x33];
                            param_1[0x33] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x1f];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x34];
                            param_1[0x34] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x20];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x35];
                            param_1[0x35] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            lVar6 = param_1[0x21];
                            if (lVar6 != 0) {
                              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
                            }
                            lVar5 = param_1[0x36];
                            param_1[0x36] = lVar6;
                            if (lVar5 != 0) {
                              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                            }
                            (**(code **)(*param_1 + 0x28))(param_1,local_48);
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
    }
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  plVar2 = (long *)(**(code **)(*param_2 + 0xb8))(param_2);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1c8,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
    FUN__text__0030bf24(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x1c8;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar2;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    *extraout_x8 = 0;
    return;
  }
  FUN__text__0030bf24(lVar6);
  *(long **)(lVar6 + 8) = plVar2;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x1c8;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  *extraout_x8 = lVar6;
  return;
}


