/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a6bf0; name: FUN_.text__005a6bf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a6bf0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  FUN__text__005cd454();
  puVar1 = param_1 + 0x17;
  puVar8 = param_1 + 0x13;
  *puVar8 = 0;
  param_1[0x16] = 0;
  param_1[9] = 0x8956a8;
  *param_1 = 0x895660;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  FUN__text__006f5904(puVar1);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN__text__006f5a6c(param_1 + 0x36);
  FUN__text__006f5a6c(param_1 + 0x3f);
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  FUN__text__006f5904(param_1 + 0x4a);
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  FUN__text__006f5a6c(param_1 + 0x69);
  FUN__text__006f5a6c(param_1 + 0x72);
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  FUN__text__006f5904(param_1 + 0x7d);
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  FUN__text__006f5a6c(param_1 + 0x9c);
  FUN__text__006f5a6c(param_1 + 0xa5);
  param_1[0xaf] = 0;
  plVar15 = (long *)param_1[1];
  param_1[0xae] = 0;
  param_1[0xb0] = 0x3f800000;
  lVar2 = param_2[6];
  *(int *)(param_1 + 0xb1) = (int)lVar2;
  uVar11 = (int)lVar2 * *(int *)((long)param_2 + 0x2c);
  uVar16 = (ulong)uVar11;
  *(int *)((long)param_1 + 0x58c) = *(int *)((long)param_2 + 0x2c);
  lVar13 = uVar16 * 0x48;
  lVar2 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar13,8);
  uVar14 = tpidr_el0;
  uVar14 = uVar14 & 0xffffffffffffe000;
  if (*(long *)(uVar14 + 0x98) != 0x10) {
    lVar10 = uVar14 + 0x18;
    *(long **)(lVar10 + *(long *)(uVar14 + 0x98) * 8) = plVar15;
    lVar9 = *(long *)(uVar14 + 0x98);
    *(long *)(uVar14 + 0x98) = lVar9 + 1;
    if (uVar11 != 0) {
      lVar9 = lVar2;
      do {
        FUN__text__006f5ccc(lVar9);
        uVar16 = uVar16 - 1;
        lVar9 = lVar9 + 0x48;
      } while (uVar16 != 0);
      lVar9 = *(long *)(uVar14 + 0x98) + -1;
    }
    *(long *)(uVar14 + 0x98) = lVar9;
    lVar9 = param_1[0x32];
    param_1[0x32] = lVar2;
    if (lVar9 != 0) {
      uVar16 = param_1[0x34];
      if (0x47 < uVar16) {
        uVar16 = uVar16 / 0x48;
        lVar2 = lVar9;
        do {
          FUN__text__006f5ce4(lVar2);
          uVar16 = uVar16 - 1;
          lVar2 = lVar2 + 0x48;
        } while (uVar16 != 0);
        uVar16 = param_1[0x34];
      }
      (**(code **)(*(long *)param_1[0x33] + 0x18))((long *)param_1[0x33],lVar9,uVar16,param_1[0x35])
      ;
    }
    param_1[0x33] = plVar15;
    param_1[0x34] = lVar13;
    plVar15 = (long *)param_1[1];
    param_1[0x35] = 8;
    uVar11 = *(int *)(param_1 + 0xb1) * *(int *)((long)param_1 + 0x58c);
    uVar16 = (ulong)uVar11;
    lVar13 = uVar16 * 0x48;
    lVar2 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar13,8);
    if (*(long *)(uVar14 + 0x98) != 0x10) {
      *(long **)(lVar10 + *(long *)(uVar14 + 0x98) * 8) = plVar15;
      lVar9 = *(long *)(uVar14 + 0x98);
      *(long *)(uVar14 + 0x98) = lVar9 + 1;
      if (uVar11 != 0) {
        lVar9 = lVar2;
        do {
          FUN__text__006f5ccc(lVar9);
          uVar16 = uVar16 - 1;
          lVar9 = lVar9 + 0x48;
        } while (uVar16 != 0);
        lVar9 = *(long *)(uVar14 + 0x98) + -1;
      }
      *(long *)(uVar14 + 0x98) = lVar9;
      lVar9 = param_1[0x65];
      param_1[0x65] = lVar2;
      if (lVar9 != 0) {
        uVar16 = param_1[0x67];
        if (0x47 < uVar16) {
          uVar16 = uVar16 / 0x48;
          lVar2 = lVar9;
          do {
            FUN__text__006f5ce4(lVar2);
            uVar16 = uVar16 - 1;
            lVar2 = lVar2 + 0x48;
          } while (uVar16 != 0);
          uVar16 = param_1[0x67];
        }
        (**(code **)(*(long *)param_1[0x66] + 0x18))
                  ((long *)param_1[0x66],lVar9,uVar16,param_1[0x68]);
      }
      param_1[0x66] = plVar15;
      param_1[0x68] = 8;
      plVar15 = (long *)param_1[1];
      param_1[0x67] = lVar13;
      uVar11 = *(int *)(param_1 + 0xb1) * *(int *)((long)param_1 + 0x58c);
      uVar16 = (ulong)uVar11;
      lVar13 = uVar16 * 0x48;
      lVar2 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar13,8);
      if (*(long *)(uVar14 + 0x98) != 0x10) {
        *(long **)(lVar10 + *(long *)(uVar14 + 0x98) * 8) = plVar15;
        lVar10 = *(long *)(uVar14 + 0x98);
        *(long *)(uVar14 + 0x98) = lVar10 + 1;
        if (uVar11 != 0) {
          lVar10 = lVar2;
          do {
            FUN__text__006f5ccc(lVar10);
            uVar16 = uVar16 - 1;
            lVar10 = lVar10 + 0x48;
          } while (uVar16 != 0);
          lVar10 = *(long *)(uVar14 + 0x98) + -1;
        }
        *(long *)(uVar14 + 0x98) = lVar10;
        lVar10 = param_1[0x98];
        param_1[0x98] = lVar2;
        if (lVar10 != 0) {
          uVar16 = param_1[0x9a];
          if (0x47 < uVar16) {
            uVar16 = uVar16 / 0x48;
            lVar2 = lVar10;
            do {
              FUN__text__006f5ce4(lVar2);
              uVar16 = uVar16 - 1;
              lVar2 = lVar2 + 0x48;
            } while (uVar16 != 0);
            uVar16 = param_1[0x9a];
          }
          (**(code **)(*(long *)param_1[0x99] + 0x18))
                    ((long *)param_1[0x99],lVar10,uVar16,param_1[0x9b]);
        }
        param_1[0x99] = plVar15;
        param_1[0x9a] = lVar13;
        param_1[0x9b] = 8;
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (undefined8 *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN__text__006ebe40(&local_a0);
        uVar3 = _DAT_008a0448;
        local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)((long)param_1 + 0x58c));
        local_98 = CONCAT62(local_98._2_6_,(short)param_2[7]);
        local_a0 = CONCAT26((short)*(undefined4 *)(param_1 + 0xb1),(undefined6)local_a0);
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),0x100);
        local_88._0_4_ = (int)param_2[3];
        uVar14 = FUN__text__006f57e0(_DAT_008a0448,&local_a0);
        local_90 = CONCAT44((int)param_2[1],(int)local_90);
        local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0xc));
        local_98 = CONCAT44((int)param_2[2],(undefined4)local_98);
        uVar16 = FUN__text__006f57e0(uVar3,&local_a0);
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        lVar2 = *param_2;
        if (lVar2 == 0) {
          lVar2 = *(long *)(DAT_008e1c28 + 0x10);
        }
        uVar3 = FUN__text__006f5764(_DAT_008a0448,&local_a0);
        FUN__text__005a5684(&local_c0,lVar2,1,uVar16,uVar3);
        param_1[0x13] = local_c0;
        if (param_1[0x14] != 0) {
          (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
        }
        lVar2 = local_b8;
        local_c0 = 0;
        local_b8 = 0;
        param_1[0x14] = lVar2;
        param_1[0x15] = local_b0;
        param_1[0x16] = local_a8;
        local_b0 = 0xffffffffffffffff;
        local_a8 = 0;
        FUN__text__005b509c(&local_c0);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        }
        uVar4 = FUN__text__005b50f0(puVar8);
        uVar3 = _DAT_008a0448;
        FUN__text__006f5944(param_1 + 0x4a,_DAT_008a0448,&local_a0,uVar4,param_1[0x15],param_1[0x16]
                           );
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),(int)local_90);
        local_88._0_4_ = (int)param_2[3];
        uVar4 = FUN__text__005b50f0(puVar8);
        FUN__text__006f5944(puVar1,uVar3,&local_a0,uVar4,param_1[0x15],param_1[0x16]);
        local_90 = CONCAT44((int)param_2[4],(int)local_90);
        local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0x24));
        uVar4 = FUN__text__005b50f0(puVar8);
        FUN__text__006f5944(param_1 + 0x7d,uVar3,&local_a0,uVar4,param_1[0x15],param_1[0x16]);
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (undefined8 *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN__text__006ebebc(&local_a0);
        uVar3 = _DAT_008a0448;
        uVar11 = *(uint *)(param_1 + 0xb1);
        uVar5 = 6;
        if ((int)param_2[7] < 2) {
          uVar5 = 1;
        }
        local_a0 = CONCAT71(local_a0._1_7_,uVar5);
        if ((uVar11 != 0) && (uVar7 = *(uint *)((long)param_1 + 0x58c), uVar7 != 0)) {
          uVar17 = 0;
          uVar12 = 1;
          do {
            if (uVar12 != 0) {
              uVar11 = 0;
              uVar12 = uVar7;
              do {
                local_98 = CONCAT44(local_98._4_4_,uVar11);
                local_a0._0_4_ = CONCAT22((short)uVar17,(ushort)local_a0);
                local_88 = puVar1;
                FUN__text__006f5ce8(param_1[0x32] + (ulong)(uVar11 + uVar17 * uVar12) * 0x48,uVar3,
                                    &local_a0);
                local_88 = param_1 + 0x4a;
                FUN__text__006f5ce8(param_1[0x65] +
                                    (ulong)(uVar11 + uVar17 * *(int *)((long)param_1 + 0x58c)) *
                                    0x48,uVar3,&local_a0);
                local_88 = param_1 + 0x7d;
                FUN__text__006f5ce8(param_1[0x98] +
                                    (ulong)(uVar11 + uVar17 * *(int *)((long)param_1 + 0x58c)) *
                                    0x48,uVar3,&local_a0);
                uVar12 = *(uint *)((long)param_1 + 0x58c);
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar12);
              uVar11 = *(uint *)(param_1 + 0xb1);
              uVar7 = uVar12;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar11);
        }
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (undefined8 *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN__text__006ebe70(&local_a0);
        uVar16 = (ulong)local_90 >> 0x20;
        local_90._0_4_ = (int)param_2[6] << 0x10;
        local_90 = CONCAT44((int)uVar16,(int)local_90);
        local_80 = (ulong)*(uint *)((long)param_2 + 0x2c) << 0x20;
        if ((int)param_2[7] < 2) {
          if (*(uint *)((long)param_1 + 0x58c) < 2) {
            bVar6 = 1;
          }
          else {
            bVar6 = 5;
          }
        }
        else if (*(uint *)((long)param_1 + 0x58c) < 2) {
          bVar6 = 6;
        }
        else {
          bVar6 = 7;
        }
        local_a0._0_2_ = (ushort)bVar6;
        local_a0 = CONCAT44((int)param_2[2],(undefined4)local_a0);
        local_70 = param_1 + 0x4a;
        FUN__text__006f5a88(param_1 + 0x69,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x69);
        if (param_1[0x7b] != 0) {
          (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
        }
        param_1[0x7b] = local_c0;
        local_a0._0_2_ = CONCAT11(1,(byte)local_a0);
        FUN__text__006f5a88(param_1 + 0x72,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x72);
        if (param_1[0x7c] != 0) {
          (**(code **)(*(long *)(param_1[0x7c] + 0x48) + 0x18))();
        }
        local_a0._0_2_ = (ushort)(byte)local_a0;
        param_1[0x7c] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_70 = puVar1;
        FUN__text__006f5a88(param_1 + 0x36,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x36);
        if (param_1[0x48] != 0) {
          (**(code **)(*(long *)(param_1[0x48] + 0x48) + 0x18))();
        }
        param_1[0x48] = local_c0;
        local_a0._0_2_ = CONCAT11(1,(byte)local_a0);
        FUN__text__006f5a88(param_1 + 0x3f,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x3f);
        if (param_1[0x49] != 0) {
          (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
        }
        local_a0._0_2_ = (ushort)(byte)local_a0;
        param_1[0x49] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_70 = param_1 + 0x7d;
        FUN__text__006f5a88(param_1 + 0x9c,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0x9c);
        if (param_1[0xae] != 0) {
          (**(code **)(*(long *)(param_1[0xae] + 0x48) + 0x18))();
        }
        param_1[0xae] = local_c0;
        local_a0._0_2_ = CONCAT11(1,(byte)local_a0);
        FUN__text__006f5a88(param_1 + 0xa5,_DAT_008a0448,&local_a0);
        thunk_FUN__text__005d6bd0(&local_c0,param_1 + 0xa5);
        if (param_1[0xaf] != 0) {
          (**(code **)(*(long *)(param_1[0xaf] + 0x48) + 0x18))();
        }
        param_1[0xaf] = local_c0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


