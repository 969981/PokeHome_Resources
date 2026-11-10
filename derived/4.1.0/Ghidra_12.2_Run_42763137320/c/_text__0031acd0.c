/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031acd0; name: FUN_.text__0031acd0
 */


bool FUN__text__0031acd0(long param_1)

{
  char *pcVar1;
  int *piVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ushort uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  undefined4 uVar23;
  long lVar24;
  ushort *puVar25;
  long lVar26;
  bool bVar27;
  ushort *puVar28;
  long local_9a8;
  long local_9a0;
  long local_998;
  long local_990;
  long local_988;
  undefined4 local_980;
  undefined4 uStack_97c;
  undefined8 local_978;
  long local_970;
  long local_968;
  long *local_960;
  undefined1 auStack_954 [2260];
  long local_80;
  long local_78;
  long local_70 [2];
  
  nn::os::GetSystemTick();
  nn::os::ConvertToTimeSpan();
  FUN__text__003204d0(local_70);
  FUN__text__003227d0(&local_78);
  FUN__text__00320500(&local_80);
  lVar11 = FUN__text__00321ac0();
  lVar26 = DAT_008e1d78;
  if ((lVar11 == 0) || (DAT_008e1d78 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  piVar2 = (int *)(lVar11 + 0x9a2c);
  lVar12 = FUN__text__00321ac0();
  cVar7 = (&DAT__text__001936e1)[lVar12];
  FUN__text__00300180(local_78);
  *piVar2 = 0;
  if (cVar7 == '\0') {
    FUN__text__0031dc40(auStack_954,param_1);
    FUN__text__003059c0(lVar26,auStack_954);
  }
  else {
    uVar13 = FUN__text__00305788(lVar26);
    FUN__text__0031dab0(auStack_954,param_1);
    FUN__text__003059c0(lVar26,auStack_954);
    if ((uVar13 & 1) != 0) {
      FUN__text__00305c44(auStack_954);
    }
  }
  lVar12 = FUN__text__00304b90();
  plVar14 = (long *)FUN__text__0064c260();
  uVar13 = tpidr_el0;
  uVar13 = uVar13 & 0xffffffffffffe000;
  local_960 = plVar14;
  if (*(long *)(uVar13 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar3 = (ulong *)(param_1 + 0x31270a8);
  *(long **)(uVar13 + *(long *)(uVar13 + 0x98) * 8 + 0x18) = plVar14;
  pcVar1 = &DAT__text__001936e0 + lVar11;
  *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
  lVar15 = (**(code **)(*plVar14 + 0x10))(plVar14,0x310,8);
  if (lVar15 == 0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  FUN__text__00637458(lVar15,local_960,0,0,0);
  *(long **)(lVar15 + 8) = plVar14;
  *(long *)(lVar15 + 0x10) = lVar15;
  *(undefined8 *)(lVar15 + 0x18) = 0x310;
  *(undefined8 *)(lVar15 + 0x20) = 8;
  *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
  local_968 = lVar15;
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))((long *)(lVar15 + 0x48));
  FUN__text__002a33c8(&local_970,local_960,&local_968);
  bVar27 = false;
  lVar15 = lVar12 + 0xac;
  uVar13 = 0;
  do {
    uVar16 = FUN__text__00305a4c(auStack_954,uVar13 & 0xffffffff);
    if (((uVar16 & 1) != 0) && (*(char *)(lVar12 + uVar13 * 0x3a0 + 0x30) == '\x01')) {
      FUN__text__0063116c(local_968);
      lVar24 = lVar12 + uVar13 * 0x3a0;
      FUN__text__006311bc(local_968,lVar24 + 0x134,1);
      lVar17 = FUN__text__00637404(local_968);
      lVar10 = local_970;
      if (lVar17 != *(long *)(lVar24 + 0x38)) {
        FUN__text__00304fc8(lVar26,1);
        if (local_970 == 0) goto LAB__text__0031b598;
        goto LAB__text__0031b58c;
      }
      uVar18 = FUN__text__00637404(local_968);
      lVar17 = lVar12 + uVar13 * 0x3a0;
      *(undefined8 *)(lVar10 + 0xa0) = uVar18;
      *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar17 + 0x118);
      pbVar22 = (byte *)(lVar17 + 0xab);
      *(uint *)(lVar10 + 0x8c) = (uint)*pbVar22;
      lVar17 = *(long *)(lVar11 + 0x7a070);
      *(long *)(lVar11 + 0x7a070) = lVar17 + 1;
      *(long *)(lVar10 + 0x60) = lVar17;
      if (*pbVar22 != 0) {
        uVar16 = 0;
        do {
          *(uint *)(lVar10 + 0x78 + uVar16 * 4) = (uint)*(byte *)(lVar15 + uVar16);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *pbVar22);
      }
      *(undefined4 *)(lVar10 + 0x94) = 0;
      lVar24 = FUN__text__00637404(*(undefined8 *)(local_970 + 0x58));
      lVar17 = 0;
      do {
        lVar4 = lVar11 + 0x7a088 + lVar17;
        if ((((*(long *)(lVar4 + -0x10) == lVar24) || (*(long *)(lVar4 + -8) == lVar24)) ||
            (*(long *)(lVar11 + 0x7a088 + lVar17) == lVar24)) || (*(long *)(lVar4 + 8) == lVar24)) {
          *(undefined4 *)(lVar10 + 0x94) = 1;
          uVar20 = *(ushort *)(lVar12 + uVar13 * 0x3a0 + 0x130);
          goto joined_r0x0031b044;
        }
        lVar17 = lVar17 + 0x20;
      } while (lVar17 != 0x800);
      uVar20 = *(ushort *)(lVar12 + uVar13 * 0x3a0 + 0x130);
joined_r0x0031b044:
      uVar9 = uVar20 - 0x2a;
      if ((uVar9 & 0xffff) < 0x10) {
        uVar16 = -((ulong)(uVar9 >> 0xf) & 1) & 0xfffffffffffc0000 | ((ulong)uVar9 & 0xffff) << 2;
        uVar21 = *(undefined4 *)(uVar16 + 0x7348e8);
        uVar23 = *(undefined4 *)(uVar16 + 0x734928);
      }
      else {
        uVar21 = 0;
        uVar23 = 3;
      }
      lVar17 = lVar12 + uVar13 * 0x3a0;
      *(undefined4 *)(lVar10 + 0x98) = uVar21;
      *(undefined4 *)(lVar10 + 0x90) = uVar23;
      *(bool *)(lVar10 + 0x9c) = *(char *)(lVar17 + 0x111) == '\x01';
      puVar28 = (ushort *)(lVar17 + 0x44);
      *(uint *)(lVar10 + 0x6c) = (uint)*puVar28;
      puVar25 = (ushort *)(lVar17 + 0x42);
      *(uint *)(lVar10 + 0x68) = (uint)*puVar25;
      if (*(long *)(lVar17 + 0x128) != 0) {
        FUN__text__0018d370(&local_978,local_960,&local_960);
        FUN__text__0030659c(local_978,local_970);
        uVar16 = local_978;
        iVar8 = *(int *)(param_1 + 0x31270b4);
        if (local_978 != 0) {
          (**(code **)(*(long *)(local_978 + 0x48) + 0x10))();
        }
        puVar5 = (ulong *)(param_1 + (long)iVar8 * 8 + 0x3103e28);
        uVar19 = *puVar5;
        *puVar5 = uVar16;
        if (uVar19 != 0) {
          (**(code **)(*(long *)(uVar19 + 0x48) + 0x18))();
        }
        *(ulong *)(param_1 + (long)*(int *)(param_1 + 0x31270b4) * 8 + 0x3115768) =
             *(ulong *)(lVar17 + 0x128);
        *(int *)(param_1 + 0x31270b4) = *(int *)(param_1 + 0x31270b4) + 1;
        uVar16 = *(ulong *)(lVar17 + 0x128);
        if (uVar16 < *puVar3) {
          *puVar3 = uVar16;
        }
        if (local_978 != 0) {
          (**(code **)(*(long *)(local_978 + 0x48) + 0x18))();
        }
        goto LAB__text__0031aed0;
      }
      uVar20 = *puVar28;
      if (cVar7 == '\0') {
LAB__text__0031b194:
        uVar16 = 0;
        if (*pcVar1 == '\0') {
LAB__text__0031b18c:
          if (uVar20 == 0) goto LAB__text__0031b228;
        }
        else {
LAB__text__0031b1a4:
          if (uVar20 == 0) goto LAB__text__0031b1bc;
        }
LAB__text__0031b220:
        if ((uVar16 & 1) != 0) goto LAB__text__0031b2e8;
LAB__text__0031b234:
        lVar10 = local_70[0];
        local_988 = local_970;
        if (local_970 != 0) {
          (**(code **)(*(long *)(local_970 + 0x48) + 0x10))();
        }
        FUN__text__00301f08(lVar10,&local_988,*puVar25 - 1,*puVar28 - 1,1);
        if (local_988 != 0) {
          (**(code **)(*(long *)(local_988 + 0x48) + 0x18))();
          local_988 = 0;
        }
        lVar10 = local_78;
        local_990 = local_970;
        if (local_970 != 0) {
          (**(code **)(*(long *)(local_970 + 0x48) + 0x10))();
        }
        FUN__text__00301f08(lVar10,&local_990,*puVar25 - 1,*puVar28 - 1,1);
        if (local_990 != 0) {
          (**(code **)(*(long *)(local_990 + 0x48) + 0x18))();
          local_990 = 0;
        }
      }
      else {
        if (uVar20 != 0) {
          if (*puVar25 == 0) goto LAB__text__0031b194;
          uVar16 = FUN__text__00301480(local_70[0],*puVar25 - 1,uVar20 - 1,local_960,1);
          uVar20 = *puVar28;
          uVar16 = uVar16 & 0xffffffff;
          if (*pcVar1 != '\0') goto LAB__text__0031b1a4;
          goto LAB__text__0031b18c;
        }
        uVar16 = 0;
        if (*pcVar1 == '\0') {
LAB__text__0031b228:
          uVar20 = *puVar25;
        }
        else {
LAB__text__0031b1bc:
          uVar20 = *puVar25;
          if (uVar20 == 0) {
            local_978 = 0xffffffffffffffff;
            FUN__text__003204d0(&local_980);
            uVar19 = FUN__text__00303fd0(CONCAT44(uStack_97c,local_980),
                                         (undefined8 *)(lVar10 + 0xa0),&local_978);
            if (CONCAT44(uStack_97c,local_980) != 0) {
              (**(code **)(*(long *)(CONCAT44(uStack_97c,local_980) + 0x48) + 0x18))();
            }
            if ((uVar19 & 1) != 0) {
              *puVar25 = (short)local_978 + 1;
              *puVar28 = local_978._4_2_ + 1;
            }
            if (*puVar28 != 0) goto LAB__text__0031b220;
            goto LAB__text__0031b228;
          }
        }
        if (((uVar16 & 1) == 0) && (uVar20 != 0)) goto LAB__text__0031b234;
LAB__text__0031b2e8:
        FUN__text__0018d370(&local_978,local_960,&local_960);
        FUN__text__0030659c(local_978,local_970);
        uVar16 = local_978;
        iVar8 = *(int *)(param_1 + 0x31270b0);
        if (local_978 != 0) {
          (**(code **)(*(long *)(local_978 + 0x48) + 0x10))();
        }
        puVar5 = (ulong *)(param_1 + (long)iVar8 * 8 + 0x30f24e8);
        uVar19 = *puVar5;
        *puVar5 = uVar16;
        if (uVar19 != 0) {
          (**(code **)(*(long *)(uVar19 + 0x48) + 0x18))();
        }
        *(int *)(param_1 + 0x31270b0) = *(int *)(param_1 + 0x31270b0) + 1;
        if (local_978 != 0) {
          (**(code **)(*(long *)(local_978 + 0x48) + 0x18))();
        }
      }
      *piVar2 = *piVar2 + 1;
    }
LAB__text__0031aed0:
    uVar16 = uVar13 + 1;
    lVar15 = lVar15 + 0x3a0;
    bVar27 = 0x2326 < uVar13;
    uVar13 = uVar16;
  } while (uVar16 != 9000);
  if (0 < *(int *)(param_1 + 0x31270b4)) {
    lVar26 = 0;
    lVar11 = param_1 + 0x3103e28;
    do {
      lVar12 = local_80;
      lVar15 = *(long *)(lVar11 + lVar26 * 8);
      if (*(ulong *)(param_1 + 0x3115768 + lVar26 * 8) == *puVar3) {
        iVar8 = *(int *)(lVar15 + 0x68);
        iVar6 = *(int *)(lVar15 + 0x6c);
        *(undefined8 *)(lVar15 + 0x68) = 0;
        local_998 = *(long *)(lVar11 + lVar26 * 8);
        if (local_998 != 0) {
          (**(code **)(*(long *)(local_998 + 0x48) + 0x10))();
        }
        FUN__text__00301f08(lVar12,&local_998,iVar8 + -1,iVar6 + -1,1);
        if (local_998 != 0) {
          (**(code **)(*(long *)(local_998 + 0x48) + 0x18))();
          local_998 = 0;
        }
      }
      else {
        *(undefined8 *)(lVar15 + 0x68) = 0;
        iVar8 = *(int *)(param_1 + 0x31270b0);
        lVar12 = *(long *)(lVar11 + lVar26 * 8);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        }
        plVar14 = (long *)(param_1 + (long)iVar8 * 8 + 0x30f24e8);
        lVar15 = *plVar14;
        *plVar14 = lVar12;
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
        }
        *(int *)(param_1 + 0x31270b0) = *(int *)(param_1 + 0x31270b0) + 1;
        *piVar2 = *piVar2 + 1;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 < *(int *)(param_1 + 0x31270b4));
  }
  uVar18 = FUN__text__0064c260();
  if (0 < *(int *)(param_1 + 0x31270b0)) {
    lVar26 = 0;
    do {
      lVar11 = local_70[0];
      local_978 = local_978 & 0xffffffff00000000;
      local_980 = 0;
      local_9a0 = *(long *)(param_1 + 0x30f24e8 + lVar26 * 8);
      if (local_9a0 != 0) {
        (**(code **)(*(long *)(local_9a0 + 0x48) + 0x10))();
      }
      FUN__text__003019dc(lVar11,&local_9a0,uVar18,&local_978,&local_980);
      if (local_9a0 != 0) {
        (**(code **)(*(long *)(local_9a0 + 0x48) + 0x18))();
        local_9a0 = 0;
      }
      lVar11 = local_78;
      local_9a8 = *(long *)(param_1 + 0x30f24e8 + lVar26 * 8);
      if (local_9a8 != 0) {
        (**(code **)(*(long *)(local_9a8 + 0x48) + 0x10))();
      }
      FUN__text__003019dc(lVar11,&local_9a8,uVar18,&local_978,&local_980);
      if (local_9a8 != 0) {
        (**(code **)(*(long *)(local_9a8 + 0x48) + 0x18))();
        local_9a8 = 0;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 < *(int *)(param_1 + 0x31270b0));
  }
  *pcVar1 = '\0';
  nn::os::GetSystemTick();
  nn::os::ConvertToTimeSpan();
  if (local_970 != 0) {
LAB__text__0031b58c:
    (**(code **)(*(long *)(local_970 + 0x48) + 0x18))();
  }
LAB__text__0031b598:
  if (local_968 != 0) {
    (**(code **)(*(long *)(local_968 + 0x48) + 0x18))();
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return bVar27;
}


