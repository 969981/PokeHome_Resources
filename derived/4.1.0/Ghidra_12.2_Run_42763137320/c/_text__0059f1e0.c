/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059f1e0; name: FUN_.text__0059f1e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059f1e0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  
  FUN__text__0059fdc0();
  plVar1 = param_1 + 0x19;
  plVar17 = param_1 + 0x15;
  *plVar17 = 0;
  lVar2 = _DAT_008a5570;
  param_1[0x18] = 0;
  param_1[9] = lVar2 + 0x70;
  *param_1 = lVar2 + 0x10;
  param_1[0x16] = 0;
  param_1[0x17] = -1;
  FUN__text__006f5904();
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN__text__006f5a6c(param_1 + 0x38);
  param_1[0x41] = 0;
  FUN__text__006f5904(param_1 + 0x42);
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  FUN__text__006f5a6c(param_1 + 0x61);
  param_1[0x6a] = 0;
  FUN__text__006f5904(param_1 + 0x6b);
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  FUN__text__006f5a6c(param_1 + 0x8a);
  param_1[0x93] = 0;
  iVar6 = *(int *)((long)param_2 + 0x2c);
  *(int *)(param_1 + 0x94) = iVar6;
  lVar2 = param_2[6];
  *(int *)((long)param_1 + 0x4a4) = (int)lVar2;
  if (*(char *)((long)param_2 + 0x34) != '\0') {
    iVar6 = 6;
    *(undefined4 *)(param_1 + 0x94) = 6;
  }
  uVar10 = (int)lVar2 * iVar6;
  uVar11 = (ulong)uVar10;
  plVar12 = (long *)param_1[1];
  lVar13 = uVar11 * 0x48;
  lVar2 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar13,8);
  uVar15 = tpidr_el0;
  uVar15 = uVar15 & 0xffffffffffffe000;
  if (*(long *)(uVar15 + 0x98) != 0x10) {
    lVar9 = uVar15 + 0x18;
    *(long **)(lVar9 + *(long *)(uVar15 + 0x98) * 8) = plVar12;
    lVar8 = *(long *)(uVar15 + 0x98);
    *(long *)(uVar15 + 0x98) = lVar8 + 1;
    if (uVar10 != 0) {
      lVar8 = lVar2;
      do {
        FUN__text__006f5bcc(lVar8);
        uVar11 = uVar11 - 1;
        lVar8 = lVar8 + 0x48;
      } while (uVar11 != 0);
      lVar8 = *(long *)(uVar15 + 0x98) + -1;
    }
    *(long *)(uVar15 + 0x98) = lVar8;
    lVar8 = param_1[0x34];
    param_1[0x34] = lVar2;
    if (lVar8 != 0) {
      uVar11 = param_1[0x36];
      if (0x47 < uVar11) {
        uVar11 = uVar11 / 0x48;
        lVar2 = lVar8;
        do {
          FUN__text__006f5be4(lVar2);
          uVar11 = uVar11 - 1;
          lVar2 = lVar2 + 0x48;
        } while (uVar11 != 0);
        uVar11 = param_1[0x36];
      }
      (**(code **)(*(long *)param_1[0x35] + 0x18))((long *)param_1[0x35],lVar8,uVar11,param_1[0x37])
      ;
    }
    param_1[0x37] = 8;
    uVar10 = *(int *)((long)param_1 + 0x4a4) * (int)param_1[0x94];
    uVar11 = (ulong)uVar10;
    param_1[0x35] = (long)plVar12;
    param_1[0x36] = lVar13;
    plVar12 = (long *)param_1[1];
    lVar13 = uVar11 * 0x48;
    lVar2 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar13,8);
    if (*(long *)(uVar15 + 0x98) != 0x10) {
      *(long **)(lVar9 + *(long *)(uVar15 + 0x98) * 8) = plVar12;
      lVar8 = *(long *)(uVar15 + 0x98);
      *(long *)(uVar15 + 0x98) = lVar8 + 1;
      if (uVar10 != 0) {
        lVar8 = lVar2;
        do {
          FUN__text__006f5bcc(lVar8);
          uVar11 = uVar11 - 1;
          lVar8 = lVar8 + 0x48;
        } while (uVar11 != 0);
        lVar8 = *(long *)(uVar15 + 0x98) + -1;
      }
      *(long *)(uVar15 + 0x98) = lVar8;
      lVar8 = param_1[0x5d];
      param_1[0x5d] = lVar2;
      if (lVar8 != 0) {
        uVar11 = param_1[0x5f];
        if (0x47 < uVar11) {
          uVar11 = uVar11 / 0x48;
          lVar2 = lVar8;
          do {
            FUN__text__006f5be4(lVar2);
            uVar11 = uVar11 - 1;
            lVar2 = lVar2 + 0x48;
          } while (uVar11 != 0);
          uVar11 = param_1[0x5f];
        }
        (**(code **)(*(long *)param_1[0x5e] + 0x18))
                  ((long *)param_1[0x5e],lVar8,uVar11,param_1[0x60]);
      }
      param_1[0x5e] = (long)plVar12;
      param_1[0x60] = 8;
      plVar12 = (long *)param_1[1];
      param_1[0x5f] = lVar13;
      uVar10 = *(int *)((long)param_1 + 0x4a4) * (int)param_1[0x94];
      uVar11 = (ulong)uVar10;
      lVar13 = uVar11 * 0x48;
      lVar2 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar13,8);
      if (*(long *)(uVar15 + 0x98) != 0x10) {
        *(long **)(lVar9 + *(long *)(uVar15 + 0x98) * 8) = plVar12;
        lVar9 = *(long *)(uVar15 + 0x98);
        *(long *)(uVar15 + 0x98) = lVar9 + 1;
        if (uVar10 != 0) {
          lVar9 = lVar2;
          do {
            FUN__text__006f5bcc(lVar9);
            uVar11 = uVar11 - 1;
            lVar9 = lVar9 + 0x48;
          } while (uVar11 != 0);
          lVar9 = *(long *)(uVar15 + 0x98) + -1;
        }
        *(long *)(uVar15 + 0x98) = lVar9;
        lVar9 = param_1[0x86];
        param_1[0x86] = lVar2;
        if (lVar9 != 0) {
          uVar11 = param_1[0x88];
          if (0x47 < uVar11) {
            uVar11 = uVar11 / 0x48;
            lVar2 = lVar9;
            do {
              FUN__text__006f5be4(lVar2);
              uVar11 = uVar11 - 1;
              lVar2 = lVar2 + 0x48;
            } while (uVar11 != 0);
            uVar11 = param_1[0x88];
          }
          (**(code **)(*(long *)param_1[0x87] + 0x18))
                    ((long *)param_1[0x87],lVar9,uVar11,param_1[0x89]);
        }
        param_1[0x87] = (long)plVar12;
        param_1[0x88] = lVar13;
        param_1[0x89] = 8;
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN__text__006ebe40(&local_a0);
        uVar3 = _DAT_008a0448;
        local_80 = CONCAT44(local_80._4_4_,(int)param_1[0x94]);
        local_98 = CONCAT62(local_98._2_6_,(short)param_2[7]);
        local_a0 = CONCAT26((short)*(undefined4 *)((long)param_1 + 0x4a4),(undefined6)local_a0);
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),0x80);
        local_88._0_4_ = (int)param_2[3];
        uVar15 = FUN__text__006f57e0(_DAT_008a0448,&local_a0);
        local_90 = CONCAT44((int)param_2[1],(int)local_90);
        local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0xc));
        local_98 = CONCAT44((int)param_2[2],(undefined4)local_98);
        uVar11 = FUN__text__006f57e0(uVar3,&local_a0);
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        lVar2 = *param_2;
        if (lVar2 == 0) {
          lVar2 = *(long *)(DAT_008e1c28 + 0x10);
        }
        uVar3 = FUN__text__006f5764(_DAT_008a0448,&local_a0);
        FUN__text__005a5684(&local_c0,lVar2,1,uVar11,uVar3);
        param_1[0x15] = local_c0;
        if (param_1[0x16] != 0) {
          (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
        }
        lVar2 = local_b8;
        local_c0 = 0;
        local_b8 = 0;
        param_1[0x16] = lVar2;
        param_1[0x17] = local_b0;
        param_1[0x18] = local_a8;
        local_b0 = 0xffffffffffffffff;
        local_a8 = 0;
        FUN__text__005b509c(&local_c0);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        }
        plVar12 = param_1 + 0x42;
        uVar4 = FUN__text__005b50f0(plVar17);
        uVar3 = _DAT_008a0448;
        FUN__text__006f5944(plVar12,_DAT_008a0448,&local_a0,uVar4,param_1[0x17],param_1[0x18]);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),(int)local_90);
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        local_88._0_4_ = (int)param_2[3];
        uVar4 = FUN__text__005b50f0(plVar17);
        FUN__text__006f5944(plVar1,uVar3,&local_a0,uVar4,param_1[0x17],param_1[0x18]);
        plVar16 = param_1 + 0x6b;
        local_90 = CONCAT44((int)param_2[4],(int)local_90);
        local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0x24));
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        uVar4 = FUN__text__005b50f0(plVar17);
        FUN__text__006f5944(plVar16,uVar3,&local_a0,uVar4,param_1[0x17],param_1[0x18],in_x6,in_x7,
                            plVar16);
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN__text__006ebe9c(&local_a0);
        uVar3 = _DAT_008a0448;
        uVar10 = *(uint *)((long)param_1 + 0x4a4);
        uVar5 = 6;
        if ((int)param_2[7] < 2) {
          uVar5 = 1;
        }
        local_a0 = CONCAT71(local_a0._1_7_,uVar5);
        plVar17 = plVar16;
        if ((uVar10 != 0) && (uVar7 = *(uint *)(param_1 + 0x94), uVar7 != 0)) {
          uVar14 = 0;
          do {
            if (uVar7 != 0) {
              uVar10 = 0;
              do {
                uVar7 = uVar10 + uVar14 * uVar7;
                local_98 = CONCAT44(1,uVar10);
                local_a0._0_4_ = CONCAT22((short)uVar14,(undefined2)local_a0);
                local_a0 = CONCAT44((int)param_2[2],(undefined4)local_a0);
                local_88 = plVar12;
                FUN__text__006f5be8(param_1[0x5d] + (ulong)uVar7 * 0x48,uVar3,&local_a0);
                local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
                local_88 = plVar1;
                FUN__text__006f5be8(param_1[0x34] + (ulong)uVar7 * 0x48,uVar3,&local_a0);
                local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
                local_88 = plVar16;
                FUN__text__006f5be8(param_1[0x86] + (ulong)uVar7 * 0x48,uVar3,&local_a0);
                uVar7 = *(uint *)(param_1 + 0x94);
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar7);
              uVar10 = *(uint *)((long)param_1 + 0x4a4);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar10);
        }
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN__text__006ebe70(&local_a0);
        uVar11 = (ulong)local_90 >> 0x20;
        local_80 = (ulong)*(uint *)((long)param_2 + 0x2c) << 0x20;
        local_90._0_4_ = (int)param_2[6] << 0x10;
        local_90 = CONCAT44((int)uVar11,(int)local_90);
        if (*(char *)((long)param_2 + 0x34) == '\0') {
          if (*(uint *)(param_1 + 0x94) < 2) {
            if ((int)param_2[7] < 2) {
              uVar5 = 1;
            }
            else {
              uVar5 = 6;
            }
          }
          else if ((int)param_2[7] < 2) {
            uVar5 = 5;
          }
          else {
            uVar5 = 7;
          }
          local_a0 = CONCAT71(local_a0._1_7_,uVar5);
        }
        else {
          local_a0 = CONCAT71(local_a0._1_7_,3);
        }
        local_a0 = CONCAT44((int)param_2[2],(undefined4)local_a0);
        local_70 = plVar12;
        FUN__text__006f5a88(param_1 + 0x61,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x61);
        if (param_1[0x6a] != 0) {
          (**(code **)(*(long *)(param_1[0x6a] + 0x48) + 0x18))();
        }
        param_1[0x6a] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_70 = plVar1;
        FUN__text__006f5a88(param_1 + 0x38,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x38);
        if (param_1[0x41] != 0) {
          (**(code **)(*(long *)(param_1[0x41] + 0x48) + 0x18))();
        }
        param_1[0x41] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_70 = plVar17;
        FUN__text__006f5a88(param_1 + 0x8a,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x8a);
        if (param_1[0x93] != 0) {
          (**(code **)(*(long *)(param_1[0x93] + 0x48) + 0x18))();
        }
        param_1[0x93] = local_c0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


