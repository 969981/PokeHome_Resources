/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b3820; name: FUN_.text__002b3820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002b3820(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  uint *__dest;
  uint uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long local_150;
  long local_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  uint *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  uint local_f4;
  uint *local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  uint *local_80;
  long local_78;
  uint local_70;
  uint uStack_6c;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    plVar12 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
    plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
    uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,1,plVar12[1]);
    if ((uVar14 & 1) != 0) {
      puVar2 = (uint *)(_DAT_008a2390 + 0x10);
      lVar17 = _DAT_008a2398 + 0x10;
      lVar3 = _DAT_008a2380 + 0x10;
      lVar4 = _DAT_008a23a0 + 0x10;
      lVar5 = _DAT_008a23a8 + 0x10;
      lVar6 = _DAT_008a23b0 + 0x10;
      do {
        plVar12 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
        uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,4,plVar12[1]);
        if ((uVar14 & 1) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,&local_f0,4,0);
          uVar14 = uVar14 & 0xffffffff;
        }
        lVar15 = (**(code **)(*param_2 + 0x10))(param_2);
        *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 4;
        if ((uVar14 & 1) == 0) goto LAB__text__002b3f14;
        local_f8 = 1;
        local_f4 = (uint)local_f0;
        local_140 = (long)local_f0 << 0x20;
        local_148 = 0;
        local_150 = lVar17;
        local_f0 = puVar2;
        if ((uint)local_f0 == 0) {
          uVar18 = 0;
        }
        else {
          uVar8 = (uint)local_f0 - ((uint)local_f0 >> 1 & 0x55555555);
          uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
          uVar14 = (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
          do {
            (**(code **)(local_150 + 0x10))(&local_150);
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          uVar18 = local_140._4_4_;
        }
        local_140 = CONCAT44(local_140._4_4_,uVar18);
        local_d0 = param_2[4];
        lStack_c8 = param_2[5];
        local_c0 = (undefined1)param_2[6];
        local_b8 = param_2[7];
        lStack_b0 = param_2[8];
        local_a8 = param_2[9];
        local_e0 = param_2[2];
        local_a0 = _DAT_008a2398 + 0x10;
        local_90 = local_140;
        local_e8 = lVar4;
        local_d8 = lVar3;
        lStack_98 = local_148;
        lStack_88 = local_e0;
        auVar22 = FUN__text__002b55b0(&local_f0);
        uVar14 = auVar22._8_8_;
        if ((auVar22._0_8_ & 0xff) == 0) goto LAB__text__002b3f14;
        plVar12 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
        uVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,uVar14,plVar12[1]);
        if ((uVar16 & 1) == 0) goto LAB__text__002b3f14;
        __dest = *(uint **)(param_1 + 8);
        puVar7 = *(uint **)(param_1 + 0x10);
        if (__dest == puVar7) {
LAB__text__002b3b50:
          if (__dest == puVar7) goto LAB__text__002b3be0;
          uVar19 = *(undefined8 *)(__dest + 2);
          uVar8 = *__dest;
          uVar21 = *(undefined8 *)(__dest + 8);
          puVar7 = (uint *)(_DAT_008a2398 + 0x10);
          local_e0 = (ulong)uVar8 << 0x20;
          local_e8 = 0;
          local_150 = lVar5;
          if (uVar8 == 0) {
            uVar18 = 0;
            local_f0 = puVar7;
          }
          else {
            uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
            uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
            uVar16 = (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            local_f0 = puVar7;
            do {
              (**(code **)(local_f0 + 4))(&local_f0);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            uVar18 = local_e0._4_4_;
          }
          local_e0 = CONCAT44(local_e0._4_4_,uVar18);
          lVar15 = _DAT_008a2380 + 0x10;
          local_120 = 0;
          local_108 = local_e0;
          uStack_100 = 0;
          local_140 = 0;
          local_148 = lVar6;
          lStack_138 = lVar15;
          local_130 = uVar19;
          uStack_128 = uVar21;
          local_118 = puVar7;
          uStack_110 = local_e8;
          uVar19 = FUN__text__002a9db0(&local_150);
          local_78 = 0;
          local_f0 = (uint *)(_DAT_008a2390 + 0x10);
          local_70 = 0;
          uStack_6c = local_f4;
          local_80 = puVar7;
          if (local_f4 == 0) {
            local_70 = 0;
          }
          else {
            uVar8 = local_f4 - (local_f4 >> 1 & 0x55555555);
            uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
            uVar16 = (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            do {
              (**(code **)(local_80 + 4))(&local_80);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            local_70 = uStack_6c;
          }
          local_d0 = param_2[4];
          lStack_c8 = param_2[5];
          uVar20 = (uint)uVar19;
          uVar8 = uVar20 & 0xff;
          local_c0 = (undefined1)param_2[6];
          local_b8 = param_2[7];
          lStack_b0 = param_2[8];
          local_a8 = param_2[9];
          local_e0 = param_2[2];
          local_a0 = _DAT_008a2398 + 0x10;
          local_90 = CONCAT44(uStack_6c,local_70);
          local_e8 = _DAT_008a23a0 + 0x10;
          local_d8 = lVar15;
          lStack_98 = local_78;
          lStack_88 = local_e0;
          uVar21 = FUN__text__002a9db0(&local_f0);
          uVar11 = (uint)uVar21;
          if (uVar8 != (uVar11 & 0xff)) goto LAB__text__002b3dd8;
          uVar9 = uVar20 >> 8 & 0xff;
          uVar10 = uVar11 >> 8 & 0xff;
          if (uVar8 == 5) {
            if (((uVar9 == 3) || (uVar9 - 8 < 10)) && (uVar10 - 8 < 10 || uVar10 == 3)) {
LAB__text__002b3db4:
              if (uVar9 != uVar10) goto LAB__text__002b3dd8;
LAB__text__002b3dbc:
              if ((uVar11 >> 0x10 & 0xff) == 0 && (uVar20 >> 0x10 & 0xff) == 0)
              goto LAB__text__002b3eec;
              if ((int)((ulong)uVar19 >> 0x20) != (int)((ulong)uVar21 >> 0x20))
              goto LAB__text__002b3dd8;
            }
            else {
LAB__text__002b3dd8:
              plVar12 = *(long **)(param_1 + 0x58);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x58))(plVar12,&local_f4);
              }
            }
            uVar16 = *(ulong *)(__dest + 8);
          }
          else {
            if ((9 < uVar8 - 8) && (1 < uVar8 - 3)) goto LAB__text__002b3dd8;
            if (uVar8 == 5) goto LAB__text__002b3db4;
            if (uVar8 == 4) goto LAB__text__002b3dbc;
LAB__text__002b3eec:
            uVar16 = *(ulong *)(__dest + 8);
          }
          if (uVar16 != uVar14) {
            nn::os::LockMutex(pMVar1);
            plVar12 = *(long **)(param_1 + 0x58);
            if (plVar12 != (long *)0x0) {
              lVar15 = 0x18;
              if (uVar14 <= *(ulong *)(__dest + 6)) {
                lVar15 = 0x20;
              }
              (**(code **)(*plVar12 + lVar15))(plVar12,__dest);
            }
            FUN__text__002aa604(__dest,*(undefined8 *)(param_1 + 0x38),uVar14);
            nn::os::UnlockMutex(pMVar1);
          }
          lVar15 = *(long *)(__dest + 2);
          if ((lVar15 == 0) || (*(long *)(__dest + 4) == 0)) {
            lVar17 = *(long *)(param_1 + 0x10) - (long)(__dest + 0xc);
            if (lVar17 != 0) {
              memmove(__dest,__dest + 0xc,lVar17 - 7);
            }
            lVar17 = (long)__dest + lVar17;
            goto LAB__text__002b3fc0;
          }
        }
        else {
          do {
            if (*__dest == local_f4) goto LAB__text__002b3b50;
            __dest = __dest + 0xc;
          } while (__dest != puVar7);
LAB__text__002b3be0:
          FUN__text__002aa790(&local_f0,param_1,&local_f4,uVar14);
          if (local_f0 == (uint *)0x0) {
            lVar17 = *(long *)(param_1 + 0x10) + -0x30;
LAB__text__002b3fc0:
            *(long *)(param_1 + 0x10) = lVar17;
            goto LAB__text__002b3f14;
          }
          lVar15 = *(long *)(local_f0 + 2);
          __dest = local_f0;
        }
        *(undefined1 *)(__dest + 10) = 1;
        plVar12 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        if (lVar15 != 0) {
          plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
          uVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,uVar14,plVar12[1]);
          if ((uVar16 & 1) != 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,lVar15,uVar14,0);
          }
        }
        lVar15 = (**(code **)(*param_2 + 0x10))(param_2);
        *(ulong *)(lVar15 + 8) = *(long *)(lVar15 + 8) + uVar14;
        plVar12 = *(long **)(param_1 + 0x58);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x48))(plVar12,__dest);
        }
        plVar12 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
        uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,1,plVar12[1]);
      } while ((uVar14 & 1) != 0);
    }
    nn::os::LockMutex(pMVar1);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    uVar19 = 1;
    lVar17 = 0;
    if (lVar4 != lVar3) {
      lVar17 = LZCOUNT((lVar4 - lVar3 >> 4) * -0x5555555555555555) * -2 + 0x7e;
    }
    FUN__text__002aabf0(lVar3,lVar4,&local_f0,lVar17,1);
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
LAB__text__002b3f14:
    uVar19 = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar19;
}


