/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029f4cc; name: FUN_.text__0029f4cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0029f4cc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *extraout_x8;
  ulong uVar8;
  long local_38;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar7 = _DAT_0089f690;
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar7 + 0x10;
  if (uVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(uVar8 + 0x98) != 0) {
      lVar7 = *(long *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar6 = _DAT_008a22a0;
  plVar4 = param_1 + 0xb;
  *param_1 = _DAT_008a22a0 + 0x10;
  param_1[1] = lVar7;
  param_1[9] = lVar6 + 0x48;
  memset(plVar4,0,0x1f0);
  if (*(long *)(uVar8 + 0x98) == 0x10) {
LAB__text__002a0ba4:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar7 = uVar8 + 0x18;
  *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  if (plVar3 != (long *)0x0) {
    plVar3[10] = 0;
    lVar6 = _DAT_008a22a8;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = lVar6 + 0x60;
    *plVar3 = lVar6 + 0x10;
    plVar3[1] = (long)param_2;
    plVar3[2] = (long)plVar3;
    plVar3[3] = 0x58;
    plVar3[4] = 8;
    plVar3[5] = 0;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    (**(code **)(plVar3[9] + 0x10))();
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
    }
    *plVar4 = (long)plVar3;
    if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
    *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x828,8);
    if (plVar4 != (long *)0x0) {
      memset(plVar4 + 5,0,0x800);
      lVar1 = _DAT_008a22b0 + 0x60;
      *plVar4 = _DAT_008a22b0 + 0x10;
      plVar3 = plVar4 + 9;
      *plVar3 = lVar1;
      memset((void *)((long)plVar4 + 0x54),0,2000);
      plVar4[1] = (long)param_2;
      plVar4[2] = (long)plVar4;
      plVar4[3] = 0x828;
      plVar4[4] = 8;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (param_1[0xc] != 0) {
        (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
      }
      param_1[0xc] = (long)plVar4;
      if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
      *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3ed8,8);
      if (plVar4 != (long *)0x0) {
        memset(plVar4 + 5,0,0x3eb0);
        lVar1 = _DAT_008a22b8 + 0x60;
        *plVar4 = _DAT_008a22b8 + 0x10;
        plVar3 = plVar4 + 9;
        *plVar3 = lVar1;
        memset((void *)((long)plVar4 + 0x54),0,16000);
        plVar4[1] = (long)param_2;
        plVar4[2] = (long)plVar4;
        plVar4[3] = 0x3ed8;
        plVar4[4] = 8;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if (param_1[0xd] != 0) {
          (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
        }
        param_1[0xd] = (long)plVar4;
        if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
        *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xff8,8);
        if (plVar4 != (long *)0x0) {
          memset(plVar4 + 5,0,0xfd0);
          lVar1 = _DAT_008a22c0 + 0x60;
          *plVar4 = _DAT_008a22c0 + 0x10;
          plVar3 = plVar4 + 9;
          *plVar3 = lVar1;
          memset((void *)((long)plVar4 + 0x54),0,4000);
          plVar4[1] = (long)param_2;
          plVar4[2] = (long)plVar4;
          plVar4[3] = 0xff8;
          plVar4[4] = 8;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          if (param_1[0xe] != 0) {
            (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
          }
          param_1[0xe] = (long)plVar4;
          if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
          *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
          if (plVar4 != (long *)0x0) {
            plVar4[10] = 0;
            plVar4[0xb] = 0;
            plVar4[0x12] = 0;
            plVar4[6] = 0;
            plVar4[0xc] = 0;
            plVar4[0xd] = 0;
            plVar4[0xe] = 0;
            plVar4[0xf] = 0;
            plVar4[0x10] = 0;
            plVar4[0x11] = 0;
            plVar4[7] = 0;
            plVar4[8] = 0;
            lVar1 = _DAT_008a22c8 + 0x10;
            lVar2 = _DAT_008a22c8 + 0x60;
            *(undefined8 *)((long)plVar4 + 0x54) = 0;
            plVar4[9] = lVar2;
            *(undefined8 *)((long)plVar4 + 0x5c) = 0;
            *(undefined8 *)((long)plVar4 + 100) = 0;
            *(undefined8 *)((long)plVar4 + 0x6c) = 0;
            *(undefined8 *)((long)plVar4 + 0x74) = 0;
            *(undefined8 *)((long)plVar4 + 0x7c) = 0;
            *(undefined8 *)((long)plVar4 + 0x84) = 0;
            *(undefined8 *)((long)plVar4 + 0x8c) = 0;
            plVar4[2] = (long)plVar4;
            plVar4[3] = 0x98;
            *plVar4 = lVar1;
            plVar4[1] = (long)param_2;
            plVar4[4] = 8;
            plVar4[5] = 0;
            *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
            (**(code **)(plVar4[9] + 0x10))();
            if (param_1[0xf] != 0) {
              (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
            }
            param_1[0xf] = (long)plVar4;
            if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
            *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
            *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
            plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
            if (plVar4 != (long *)0x0) {
              plVar4[10] = 0;
              plVar4[9] = lVar6 + 0x60;
              *plVar4 = lVar6 + 0x10;
              plVar4[1] = (long)param_2;
              plVar4[8] = 0;
              plVar4[2] = (long)plVar4;
              plVar4[3] = 0x58;
              plVar4[6] = 0;
              plVar4[7] = 0;
              plVar4[4] = 8;
              plVar4[5] = 0;
              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
              (**(code **)(plVar4[9] + 0x10))();
              if (param_1[0x10] != 0) {
                (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
              }
              param_1[0x10] = (long)plVar4;
              if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
              *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
              plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
              lVar6 = _DAT_008a22d0;
              if (plVar4 != (long *)0x0) {
                plVar4[10] = 0;
                plVar4[6] = 0;
                plVar4[7] = 0;
                plVar4[8] = 0;
                *plVar4 = lVar6 + 0x10;
                plVar4[1] = (long)param_2;
                plVar4[9] = lVar6 + 0x60;
                plVar4[2] = (long)plVar4;
                plVar4[3] = 0x58;
                plVar4[4] = 8;
                plVar4[5] = 0;
                *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                (**(code **)(plVar4[9] + 0x10))();
                if (param_1[0x11] != 0) {
                  (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
                }
                param_1[0x11] = (long)plVar4;
                FUN__text__002a0bb8(&local_38,param_2);
                if (param_1[0x12] != 0) {
                  (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
                }
                param_1[0x12] = local_38;
                if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2f28,8);
                if (plVar4 != (long *)0x0) {
                  *(undefined4 *)(plVar4 + 10) = 0;
                  lVar6 = _DAT_008a22d8;
                  plVar4[5] = 0;
                  plVar4[6] = 0;
                  plVar4[7] = 0;
                  plVar4[8] = 0;
                  *plVar4 = lVar6 + 0x10;
                  plVar3 = plVar4 + 9;
                  *plVar3 = lVar6 + 0x60;
                  memset((void *)((long)plVar4 + 0x54),0,0x2ed4);
                  plVar4[1] = (long)param_2;
                  plVar4[2] = (long)plVar4;
                  plVar4[3] = 0x2f28;
                  plVar4[4] = 8;
                  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                  if (param_1[0x13] != 0) {
                    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
                  }
                  param_1[0x13] = (long)plVar4;
                  if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                  *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
                  lVar6 = _DAT_008a22e0;
                  if (plVar4 != (long *)0x0) {
                    plVar4[10] = 0;
                    plVar4[0xb] = 0;
                    plVar4[7] = 0;
                    plVar4[8] = 0;
                    plVar4[5] = 0;
                    plVar4[6] = 0;
                    plVar4[9] = lVar6 + 0x60;
                    *plVar4 = lVar6 + 0x10;
                    plVar4[1] = (long)param_2;
                    plVar4[2] = (long)plVar4;
                    plVar4[3] = 0x60;
                    plVar4[4] = 8;
                    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                    (**(code **)(plVar4[9] + 0x10))();
                    if (param_1[0x14] != 0) {
                      (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
                    }
                    param_1[0x14] = (long)plVar4;
                    FUN__text__002a0cc8(&local_38,param_2);
                    if (param_1[0x15] != 0) {
                      (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
                    }
                    param_1[0x15] = local_38;
                    FUN__text__002a0dcc(&local_38,param_2);
                    if (param_1[0x16] != 0) {
                      (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
                    }
                    param_1[0x16] = local_38;
                    FUN__text__002a0ed0(&local_38,param_2);
                    if (param_1[0x17] != 0) {
                      (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
                    }
                    param_1[0x17] = local_38;
                    FUN__text__002a0fe0(&local_38,param_2);
                    if (param_1[0x18] != 0) {
                      (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
                    }
                    param_1[0x18] = local_38;
                    FUN__text__002a10e4(&local_38,param_2);
                    if (param_1[0x19] != 0) {
                      (**(code **)(*(long *)(param_1[0x19] + 0x48) + 0x18))();
                    }
                    param_1[0x19] = local_38;
                    if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                    *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                    plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x18868,8);
                    if (plVar4 != (long *)0x0) {
                      *(undefined4 *)(plVar4 + 10) = 0;
                      lVar6 = _DAT_008a22e8;
                      plVar4[5] = 0;
                      plVar4[6] = 0;
                      plVar4[7] = 0;
                      plVar4[8] = 0;
                      *plVar4 = lVar6 + 0x10;
                      plVar3 = plVar4 + 9;
                      *plVar3 = lVar6 + 0x60;
                      memset((void *)((long)plVar4 + 0x54),0,0x18814);
                      plVar4[1] = (long)param_2;
                      plVar4[2] = (long)plVar4;
                      plVar4[3] = 0x18868;
                      plVar4[4] = 8;
                      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                      if (param_1[0x1a] != 0) {
                        (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
                      }
                      param_1[0x1a] = (long)plVar4;
                      FUN__text__002a11e8(&local_38,param_2);
                      if (param_1[0x1b] != 0) {
                        (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
                      }
                      param_1[0x1b] = local_38;
                      FUN__text__002a12ec(&local_38,param_2);
                      if (param_1[0x1c] != 0) {
                        (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
                      }
                      param_1[0x1c] = local_38;
                      FUN__text__002a13f0(&local_38,param_2);
                      if (param_1[0x1d] != 0) {
                        (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
                      }
                      param_1[0x1d] = local_38;
                      FUN__text__002a14f4(&local_38,param_2);
                      if (param_1[0x1e] != 0) {
                        (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
                      }
                      param_1[0x1e] = local_38;
                      if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                      *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                      plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x38748,8);
                      if (plVar4 != (long *)0x0) {
                        *(undefined4 *)(plVar4 + 10) = 0;
                        lVar6 = _DAT_008a22f0;
                        plVar4[5] = 0;
                        plVar4[6] = 0;
                        plVar4[7] = 0;
                        plVar4[8] = 0;
                        *plVar4 = lVar6 + 0x10;
                        plVar3 = plVar4 + 9;
                        *plVar3 = lVar6 + 0x60;
                        memset((void *)((long)plVar4 + 0x54),0,0x386f4);
                        plVar4[1] = (long)param_2;
                        plVar4[2] = (long)plVar4;
                        plVar4[3] = 0x38748;
                        plVar4[4] = 8;
                        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                        if (param_1[0x1f] != 0) {
                          (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
                        }
                        param_1[0x1f] = (long)plVar4;
                        if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                        *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                        plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
                        if (plVar4 != (long *)0x0) {
                          plVar4[0x15] = 0;
                          plVar4[0x16] = 0;
                          plVar4[10] = 0;
                          plVar4[6] = 0;
                          plVar4[0x13] = 0;
                          plVar4[0x14] = 0;
                          plVar4[0x11] = 0;
                          plVar4[0x12] = 0;
                          plVar4[0xf] = 0;
                          plVar4[0x10] = 0;
                          plVar4[0xd] = 0;
                          plVar4[0xe] = 0;
                          plVar4[0xb] = 0;
                          plVar4[0xc] = 0;
                          plVar4[7] = 0;
                          plVar4[8] = 0;
                          plVar3 = plVar4 + 9;
                          *plVar3 = 0;
                          lVar6 = _DAT_008a2298 + 0x10;
                          *plVar3 = _DAT_008a2298 + 0x60;
                          *plVar4 = lVar6;
                          plVar4[1] = (long)param_2;
                          plVar4[2] = (long)plVar4;
                          plVar4[3] = 0xb8;
                          plVar4[4] = 8;
                          plVar4[5] = 0;
                          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                          (**(code **)(*plVar3 + 0x10))();
                          if (param_1[0x20] != 0) {
                            (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
                          }
                          param_1[0x20] = (long)plVar4;
                          if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                          *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                          plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1add8,8);
                          if (plVar4 != (long *)0x0) {
                            memset(plVar4 + 5,0,110000);
                            lVar6 = _DAT_008a22f8 + 0x10;
                            plVar3 = plVar4 + 9;
                            *plVar3 = _DAT_008a22f8 + 0x60;
                            *plVar4 = lVar6;
                            memset((void *)((long)plVar4 + 0x54),0,0x1ad80);
                            plVar4[1] = (long)param_2;
                            plVar4[2] = (long)plVar4;
                            plVar4[3] = 0x1add8;
                            plVar4[4] = 8;
                            *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                            (**(code **)(*plVar3 + 0x10))(plVar3);
                            if (param_1[0x21] != 0) {
                              (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
                            }
                            param_1[0x21] = (long)plVar4;
                            if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                            *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                            *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                            puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
                            if (puVar5 != (undefined8 *)0x0) {
                              puVar5[10] = 0;
                              puVar5[0xb] = 0;
                              puVar5[0xc] = 0;
                              *(undefined8 *)((long)puVar5 + 0x54) = 0;
                              puVar5[7] = 0;
                              puVar5[8] = 0;
                              *(undefined8 *)((long)puVar5 + 0x5c) = 0;
                              puVar5[9] = 0x8795a0;
                              *puVar5 = 0x879550;
                              puVar5[1] = param_2;
                              puVar5[5] = 0;
                              puVar5[6] = 0;
                              puVar5[2] = puVar5;
                              puVar5[3] = 0x68;
                              puVar5[4] = 8;
                              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                              (**(code **)(puVar5[9] + 0x10))();
                              if (param_1[0x22] != 0) {
                                (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
                              }
                              param_1[0x22] = (long)puVar5;
                              if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                              *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                              plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x418,8);
                              if (plVar4 != (long *)0x0) {
                                memset(plVar4 + 5,0,0x3f0);
                                lVar6 = _DAT_008a2308 + 0x60;
                                *plVar4 = _DAT_008a2308 + 0x10;
                                plVar3 = plVar4 + 9;
                                *plVar3 = lVar6;
                                memset((void *)((long)plVar4 + 0x54),0,0x3c0);
                                plVar4[1] = (long)param_2;
                                plVar4[2] = (long)plVar4;
                                plVar4[3] = 0x418;
                                plVar4[4] = 8;
                                *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                                (**(code **)(*plVar3 + 0x10))(plVar3);
                                if (param_1[0x23] != 0) {
                                  (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
                                }
                                param_1[0x23] = (long)plVar4;
                                if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                                *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                                *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                                plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x35c8,8);
                                if (plVar4 != (long *)0x0) {
                                  memset(plVar4 + 5,0,0x35a0);
                                  lVar6 = _DAT_008a2310 + 0x60;
                                  *plVar4 = _DAT_008a2310 + 0x10;
                                  plVar3 = plVar4 + 9;
                                  *plVar3 = lVar6;
                                  memset((void *)((long)plVar4 + 0x54),0,0x3570);
                                  plVar4[1] = (long)param_2;
                                  plVar4[2] = (long)plVar4;
                                  plVar4[3] = 0x35c8;
                                  plVar4[4] = 8;
                                  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                                  (**(code **)(*plVar3 + 0x10))(plVar3);
                                  if (param_1[0x24] != 0) {
                                    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
                                  }
                                  param_1[0x24] = (long)plVar4;
                                  if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                                  *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                                  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                                  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x88,8);
                                  if (plVar4 != (long *)0x0) {
                                    plVar4[10] = 0;
                                    plVar4[0xb] = 0;
                                    plVar4[0xc] = 0;
                                    plVar4[0xd] = 0;
                                    plVar4[0xe] = 0;
                                    plVar4[0xf] = 0;
                                    lVar6 = _DAT_008a2318 + 0x60;
                                    lVar1 = _DAT_008a2318 + 0x10;
                                    plVar4[0x10] = 0;
                                    *(undefined8 *)((long)plVar4 + 0x54) = 0;
                                    *(undefined8 *)((long)plVar4 + 0x5c) = 0;
                                    *(undefined8 *)((long)plVar4 + 100) = 0;
                                    *(undefined8 *)((long)plVar4 + 0x6c) = 0;
                                    *(undefined8 *)((long)plVar4 + 0x74) = 0;
                                    *(undefined8 *)((long)plVar4 + 0x7c) = 0;
                                    plVar4[9] = lVar6;
                                    plVar4[2] = (long)plVar4;
                                    plVar4[3] = 0x88;
                                    plVar4[4] = 8;
                                    plVar4[7] = 0;
                                    plVar4[8] = 0;
                                    plVar4[5] = 0;
                                    plVar4[6] = 0;
                                    *plVar4 = lVar1;
                                    plVar4[1] = (long)param_2;
                                    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                                    (**(code **)(plVar4[9] + 0x10))();
                                    if (param_1[0x25] != 0) {
                                      (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
                                    }
                                    param_1[0x25] = (long)plVar4;
                                    if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                                    *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                                    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                                    plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x150,8)
                                    ;
                                    if (plVar4 != (long *)0x0) {
                                      memset(plVar4 + 5,0,0x128);
                                      *(undefined8 *)((long)plVar4 + 0x5c) = 0;
                                      lVar6 = _DAT_008a2320;
                                      *(undefined8 *)((long)plVar4 + 100) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x6c) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x74) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x7c) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x84) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x8c) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x94) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x9c) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xa4) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xac) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xb4) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xbc) = 0;
                                      plVar4[9] = lVar6 + 0x60;
                                      *(undefined8 *)((long)plVar4 + 0xc4) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xcc) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x54) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x144) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xd4) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xdc) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xe4) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xec) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xf4) = 0;
                                      *(undefined8 *)((long)plVar4 + 0xfc) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x104) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x10c) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x114) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x11c) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x124) = 0;
                                      *(undefined8 *)((long)plVar4 + 300) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x134) = 0;
                                      *(undefined8 *)((long)plVar4 + 0x13c) = 0;
                                      plVar4[2] = (long)plVar4;
                                      plVar4[3] = 0x150;
                                      plVar4[4] = 8;
                                      *plVar4 = lVar6 + 0x10;
                                      plVar4[1] = (long)param_2;
                                      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                                      (**(code **)(plVar4[9] + 0x10))();
                                      if (param_1[0x26] != 0) {
                                        (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
                                      }
                                      param_1[0x26] = (long)plVar4;
                                      if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__002a0ba4;
                                      *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                                      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                                      plVar4 = (long *)(**(code **)(*param_2 + 0x10))
                                                                 (param_2,0x458,8);
                                      if (plVar4 != (long *)0x0) {
                                        plVar4[7] = 0;
                                        lVar6 = _DAT_008a2328;
                                        *(undefined4 *)(plVar4 + 8) = 0;
                                        plVar4[5] = 0;
                                        *(undefined4 *)(plVar4 + 6) = 0;
                                        *(undefined4 *)(plVar4 + 10) = 0;
                                        *plVar4 = lVar6 + 0x10;
                                        plVar3 = plVar4 + 9;
                                        *plVar3 = lVar6 + 0x60;
                                        memset(plVar4 + 0xb,0,0x400);
                                        plVar4[1] = (long)param_2;
                                        plVar4[2] = (long)plVar4;
                                        plVar4[3] = 0x458;
                                        plVar4[4] = 8;
                                        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                                        (**(code **)(*plVar3 + 0x10))(plVar3);
                                        if (param_1[0x27] != 0) {
                                          (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
                                        }
                                        param_1[0x27] = (long)plVar4;
                                        if (*(long *)(uVar8 + 0x98) == 0x10)
                                        goto LAB__text__002a0ba4;
                                        *(long **)(lVar7 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                                        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                                        plVar4 = (long *)(**(code **)(*param_2 + 0x10))
                                                                   (param_2,0x1760,8);
                                        if (plVar4 != (long *)0x0) {
                                          *(undefined4 *)(plVar4 + 10) = 0;
                                          lVar7 = _DAT_008a2330;
                                          plVar4[5] = 0;
                                          plVar4[6] = 0;
                                          plVar4[7] = 0;
                                          plVar4[8] = 0;
                                          *plVar4 = lVar7 + 0x10;
                                          plVar3 = plVar4 + 9;
                                          *plVar3 = lVar7 + 0x60;
                                          memset((void *)((long)plVar4 + 0x54),0,0x170c);
                                          plVar4[1] = (long)param_2;
                                          plVar4[2] = (long)plVar4;
                                          plVar4[3] = 0x1760;
                                          plVar4[4] = 8;
                                          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                                          (**(code **)(*plVar3 + 0x10))(plVar3);
                                          if (param_1[0x28] != 0) {
                                            (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
                                          }
                                          param_1[0x28] = (long)plVar4;
                                          FUN__text__002a15f8(&local_38,param_2);
                                          if (param_1[0x29] != 0) {
                                            (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
                                          }
                                          param_1[0x29] = local_38;
                                          lVar7 = param_1[0xb];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x2a];
                                          param_1[0x2a] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0xc];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x2b];
                                          param_1[0x2b] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0xd];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x2c];
                                          param_1[0x2c] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0xe];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x2d];
                                          param_1[0x2d] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0xf];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x2e];
                                          param_1[0x2e] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x10];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x2f];
                                          param_1[0x2f] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x11];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x30];
                                          param_1[0x30] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x12];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x31];
                                          param_1[0x31] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x13];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x32];
                                          param_1[0x32] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x14];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x33];
                                          param_1[0x33] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x15];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x34];
                                          param_1[0x34] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x16];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x35];
                                          param_1[0x35] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x17];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x36];
                                          param_1[0x36] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x18];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x37];
                                          param_1[0x37] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x19];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x38];
                                          param_1[0x38] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x1a];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x39];
                                          param_1[0x39] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x1b];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x3a];
                                          param_1[0x3a] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x1c];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x3b];
                                          param_1[0x3b] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x1d];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x3c];
                                          param_1[0x3c] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x1e];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x3d];
                                          param_1[0x3d] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x1f];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x3e];
                                          param_1[0x3e] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x20];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x3f];
                                          param_1[0x3f] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x21];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x40];
                                          param_1[0x40] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x22];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x41];
                                          param_1[0x41] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x23];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x42];
                                          param_1[0x42] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x24];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x43];
                                          param_1[0x43] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x25];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x44];
                                          param_1[0x44] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x26];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x45];
                                          param_1[0x45] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x27];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x46];
                                          param_1[0x46] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x28];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x47];
                                          param_1[0x47] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                                          }
                                          lVar7 = param_1[0x29];
                                          if (lVar7 != 0) {
                                            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                                          }
                                          lVar6 = param_1[0x48];
                                          param_1[0x48] = lVar7;
                                          if (lVar6 != 0) {
                                            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  plVar4 = (long *)(**(code **)(*param_2 + 0xb8))(param_2);
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,0x17758,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
    FUN__text__002a2964(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x17758;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar4;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    *extraout_x8 = 0;
    return;
  }
  FUN__text__002a2964(lVar7);
  *(long **)(lVar7 + 8) = plVar4;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x17758;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  *extraout_x8 = lVar7;
  return;
}


