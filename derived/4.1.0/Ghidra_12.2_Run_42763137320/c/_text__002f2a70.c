/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f2a70; name: FUN_.text__002f2a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002f2a70(long param_1,long *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  char cVar8;
  bool bVar9;
  byte bVar10;
  size_t __n;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  void *__dest;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  uint *__dest_00;
  uint uVar23;
  undefined1 auVar24 [16];
  long local_128;
  long local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  uint local_d4;
  uint *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined1 local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  uVar22 = tpidr_el0;
  bVar10 = (byte)((uint)uVar22 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x7a);
  while (*pbVar1 == 0x4f) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar9) {
      *pbVar1 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB__text__002f2b34;
  }
  pcVar2 = (char *)(param_1 + 0x7b);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar9) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
        while (*pbVar1 == 0x4f) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar9) {
            *pbVar1 = bVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__002f2b24;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar9) {
      *pbVar1 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__002f2b24:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar9) {
      *pcVar2 = *pcVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__002f2b34:
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(long **)(param_1 + 0x58) == (long *)0x0) {
      uVar22 = 0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
      uVar22 = 0;
    }
    goto LAB__text__002f32d4;
  }
  plVar14 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar15 = (long *)(**(code **)(*plVar14 + 0x28))();
  uVar16 = (**(code **)(*plVar15 + 0x10))(plVar15,1,plVar14[1]);
  if ((uVar16 & 1) == 0) {
LAB__text__002f325c:
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    uVar22 = 1;
    lVar20 = 0;
    if (lVar5 != lVar4) {
      lVar20 = LZCOUNT(lVar5 - lVar4 >> 5) * -2 + 0x7e;
    }
    FUN__text__002f7470(lVar4,lVar5,&local_d0,lVar20,1);
  }
  else {
    puVar3 = (uint *)(_DAT_008a28f8 + 0x10);
    lVar20 = _DAT_008a25c0 + 0x10;
    lVar4 = _DAT_008a2900 + 0x10;
    lVar5 = _DAT_008a25b8 + 0x10;
    lVar6 = _DAT_008a25c8 + 0x10;
    while( true ) {
      plVar14 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar15 = (long *)(**(code **)(*plVar14 + 0x28))();
      uVar16 = (**(code **)(*plVar15 + 0x10))(plVar15,4,plVar14[1]);
      if ((uVar16 & 1) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_d0,4,0);
        uVar16 = uVar16 & 0xffffffff;
      }
      lVar17 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 4;
      if ((uVar16 & 1) == 0) break;
      local_d8 = 1;
      local_d4 = (uint)local_d0;
      if ((uint)local_d0 == 0) {
        uStack_78 = 0;
      }
      else {
        uVar21 = (uint)local_d0 - ((uint)local_d0 >> 1 & 0x55555555);
        uVar21 = (uVar21 & 0x33333333) + (uVar21 >> 2 & 0x33333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (3 < uVar21) {
          uVar16 = (ulong)uVar21 & 0x3c;
          do {
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 2;
            uVar16 = uVar16 - 4;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 >> 0xf;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 0xd;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 2;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 >> 0xf;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 0xd;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 2;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 >> 0xf;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 0xd;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 2;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 >> 0xf;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 0xd;
          } while (uVar16 != 0);
        }
        uVar16 = (ulong)uVar21 & 3;
        if ((uVar21 & 3) != 0) {
          do {
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 2;
            uVar16 = uVar16 - 1;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 >> 0xf;
            local_d0._0_4_ = (uint)local_d0 ^ (uint)local_d0 << 0xd;
          } while (uVar16 != 0);
        }
        uStack_78 = CONCAT44((uint)local_d0,(uint)local_d0);
      }
      local_b0 = param_2[4];
      lStack_a8 = param_2[5];
      local_80 = 0;
      local_a0 = (undefined1)param_2[6];
      local_98 = param_2[7];
      lStack_90 = param_2[8];
      local_88 = param_2[9];
      local_c0 = param_2[2];
      local_d0 = puVar3;
      local_c8 = lVar4;
      local_b8 = lVar20;
      local_70 = local_c0;
      auVar24 = FUN__text__002f5130(&local_d0);
      uVar16 = auVar24._8_8_;
      if ((auVar24._0_8_ & 0xff) == 0) break;
      plVar14 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar15 = (long *)(**(code **)(*plVar14 + 0x28))();
      uVar18 = (**(code **)(*plVar15 + 0x10))(plVar15,uVar16,plVar14[1]);
      if ((uVar18 & 1) == 0) break;
      __dest_00 = *(uint **)(param_1 + 8);
      puVar7 = *(uint **)(param_1 + 0x10);
      if (__dest_00 == puVar7) {
LAB__text__002f2e40:
        if (__dest_00 == puVar7) goto LAB__text__002f2f00;
        uStack_108 = *(undefined8 *)(__dest_00 + 2);
        local_100 = *(undefined8 *)(__dest_00 + 6);
        uVar21 = *__dest_00;
        if (uVar21 == 0) {
          uStack_e8 = 0;
        }
        else {
          uVar13 = uVar21 - (uVar21 >> 1 & 0x55555555);
          uVar13 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          if (3 < uVar13) {
            uVar18 = (ulong)uVar13 & 0x3c;
            do {
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar18 = uVar18 - 4;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
            } while (uVar18 != 0);
          }
          uVar18 = (ulong)uVar13 & 3;
          if ((uVar13 & 3) != 0) {
            do {
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar18 = uVar18 - 1;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
            } while (uVar18 != 0);
          }
          uStack_e8 = CONCAT44(uVar21,uVar21);
        }
        local_f8 = 0;
        lVar17 = _DAT_008a25c0 + 0x10;
        local_f0 = 0;
        local_e0 = 0;
        uStack_118 = 0;
        local_128 = lVar5;
        local_120 = lVar6;
        local_110 = lVar17;
        uVar22 = FUN__text__002c8ae4(&local_128);
        local_d0 = (uint *)(_DAT_008a28f8 + 0x10);
        if (local_d4 == 0) {
          uStack_78 = 0;
        }
        else {
          uVar21 = local_d4 - (local_d4 >> 1 & 0x55555555);
          uVar21 = (uVar21 & 0x33333333) + (uVar21 >> 2 & 0x33333333);
          uVar13 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          uVar21 = local_d4;
          if (3 < uVar13) {
            uVar18 = (ulong)uVar13 & 0x3c;
            do {
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar18 = uVar18 - 4;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
            } while (uVar18 != 0);
          }
          uVar18 = (ulong)uVar13 & 3;
          if ((uVar13 & 3) != 0) {
            do {
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar18 = uVar18 - 1;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
            } while (uVar18 != 0);
          }
          uStack_78 = CONCAT44(uVar21,uVar21);
        }
        local_b0 = param_2[4];
        lStack_a8 = param_2[5];
        local_80 = 0;
        uVar23 = (uint)uVar22;
        uVar21 = uVar23 & 0xff;
        local_a0 = (undefined1)param_2[6];
        local_98 = param_2[7];
        lStack_90 = param_2[8];
        local_88 = param_2[9];
        local_c0 = param_2[2];
        local_c8 = _DAT_008a2900 + 0x10;
        local_b8 = lVar17;
        local_70 = local_c0;
        uVar19 = FUN__text__002c8ae4(&local_d0);
        uVar13 = (uint)uVar19;
        if (uVar21 != (uVar13 & 0xff)) goto LAB__text__002f3108;
        uVar11 = uVar23 >> 8 & 0xff;
        uVar12 = uVar13 >> 8 & 0xff;
        if (uVar21 == 5) {
          if (((uVar11 == 3) || (uVar11 - 8 < 10)) && (uVar12 - 8 < 10 || uVar12 == 3)) {
LAB__text__002f30e4:
            if (uVar11 != uVar12) goto LAB__text__002f3108;
LAB__text__002f30ec:
            if ((uVar13 >> 0x10 & 0xff) == 0 && (uVar23 >> 0x10 & 0xff) == 0)
            goto LAB__text__002f3188;
            if ((int)((ulong)uVar22 >> 0x20) != (int)((ulong)uVar19 >> 0x20))
            goto LAB__text__002f3108;
          }
          else {
LAB__text__002f3108:
            plVar14 = *(long **)(param_1 + 0x58);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x58))(plVar14,&local_d4);
            }
          }
          if (uVar16 <= *(ulong *)(__dest_00 + 4)) goto LAB__text__002f3198;
LAB__text__002f312c:
          plVar14 = *(long **)(param_1 + 0x58);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14,__dest_00);
          }
          __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                                     (*(long **)(param_1 + 0x38),uVar16);
          if (__dest != (void *)0x0) {
            memcpy(__dest,*(void **)(__dest_00 + 2),*(size_t *)(__dest_00 + 6));
            (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                      (*(long **)(param_1 + 0x38),*(undefined8 *)(__dest_00 + 2),
                       *(undefined8 *)(__dest_00 + 4));
            *(void **)(__dest_00 + 2) = __dest;
            *(ulong *)(__dest_00 + 4) = uVar16;
            goto LAB__text__002f31bc;
          }
          __n = *(long *)(param_1 + 0x10) - (long)(__dest_00 + 8);
          if (__n != 0) {
            memmove(__dest_00,__dest_00 + 8,__n);
          }
          lVar20 = (long)__dest_00 + __n;
          goto LAB__text__002f32c4;
        }
        if ((9 < uVar21 - 8) && (1 < uVar21 - 3)) goto LAB__text__002f3108;
        if (uVar21 == 5) goto LAB__text__002f30e4;
        if (uVar21 == 4) goto LAB__text__002f30ec;
LAB__text__002f3188:
        if (*(ulong *)(__dest_00 + 4) < uVar16) goto LAB__text__002f312c;
LAB__text__002f3198:
        if (*(ulong *)(__dest_00 + 6) != uVar16) {
          plVar14 = *(long **)(param_1 + 0x58);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x20))(plVar14,__dest_00);
          }
LAB__text__002f31bc:
          *(ulong *)(__dest_00 + 6) = uVar16;
        }
      }
      else {
        do {
          if (*__dest_00 == local_d4) goto LAB__text__002f2e40;
          __dest_00 = __dest_00 + 8;
        } while (__dest_00 != puVar7);
LAB__text__002f2f00:
        FUN__text__002c8fc4(&local_d0,param_1,&local_d4,uVar16);
        __dest_00 = local_d0;
        if (local_d0 == (uint *)0x0) {
          if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
            lVar20 = *(long *)(param_1 + 0x10) + -0x20;
LAB__text__002f32c4:
            *(long *)(param_1 + 0x10) = lVar20;
          }
          break;
        }
      }
      lVar17 = *(long *)(__dest_00 + 2);
      plVar14 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      if (lVar17 != 0) {
        plVar15 = (long *)(**(code **)(*plVar14 + 0x28))();
        uVar18 = (**(code **)(*plVar15 + 0x10))(plVar15,uVar16,plVar14[1]);
        if ((uVar18 & 1) != 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,lVar17,uVar16,0);
        }
      }
      lVar17 = (**(code **)(*param_2 + 0x10))(param_2);
      *(ulong *)(lVar17 + 8) = *(long *)(lVar17 + 8) + uVar16;
      plVar14 = *(long **)(param_1 + 0x58);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x48))(plVar14,__dest_00);
      }
      plVar14 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar15 = (long *)(**(code **)(*plVar14 + 0x28))();
      uVar16 = (**(code **)(*plVar15 + 0x10))(plVar15,1,plVar14[1]);
      if ((uVar16 & 1) == 0) goto LAB__text__002f325c;
    }
    uVar22 = 0;
  }
LAB__text__002f32d4:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar9) {
      *pbVar1 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x7b) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x78));
  }
  return uVar22;
}


