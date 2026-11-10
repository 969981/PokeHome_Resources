/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039d290; name: FUN_.text__0039d290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039d290(long *param_1,long *param_2)

{
  long lVar1;
  MutexType *pMVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong *puVar17;
  long *plVar18;
  long local_e8 [3];
  long local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [24];
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar15 = *param_1;
  FUN__text__005e927c(&local_c8,_DAT_008a3150);
  FUN__text__0039b7d0(lVar15,&local_c8);
  FUN__text__003983d0();
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_78 = 0xe4d07a996e5ef5e8;
  uStack_70 = 0x715101;
  local_68 = 4;
  FUN__text__005e927c(auStack_98,&local_78);
  uVar7 = FUN__text__0039b7d0(lVar15,auStack_98);
  uVar16 = *(undefined8 *)(lVar15 + 8);
  lVar1 = lVar15 + 0xa8;
  FUN__text__005e927c(local_e8,&local_78);
  if (local_e8[0] == -0x1b2f856691a10a18) {
    if (*param_2 == _DAT_00880908) {
      FUN__text__002c3a0c(&local_c8,0x715f77,lVar1);
      FUN__text__00397ad0(uVar7,uVar16,&local_c8);
    }
    else {
      FUN__text__002c3bb4(&local_c8,0x715101,lVar1);
      FUN__text__00397ad0(uVar7,uVar16,&local_c8);
    }
  }
  else {
    FUN__text__002fa7e0(&local_c8,local_e8,lVar1);
    FUN__text__00397ad0(uVar7,uVar16,&local_c8);
  }
  if ((local_b0 != 0) && (local_c8 != 0)) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  local_c8 = 0;
  uStack_c0 = 0xcbf29ce484222645;
  local_b8 = 0x70f683;
  local_b0 = 0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
  }
  local_a8 = 0;
  local_a0 = 0;
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  while( true ) {
    FUN__text__005e927c(&local_c8,&local_78);
    FUN__text__0039b7d0(lVar15,&local_c8);
    uVar8 = FUN__text__00397bf0();
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    }
    if ((uVar8 & 1) != 0) break;
    nn::os::SleepThread(&DAT_00989680);
  }
  FUN__text__005e927c(&local_c8,&local_78);
  FUN__text__0039b7d0(lVar15,&local_c8);
  iVar6 = FUN__text__00397c10();
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_c8 = CONCAT44(local_c8._4_4_,iVar6);
  if (iVar6 == 2) {
    bVar4 = FUN__text__0039f1e4();
    bVar5 = FUN__text__0039f1dc();
    if (bVar4 < bVar5) {
      local_c8 = CONCAT44(local_c8._4_4_,3);
    }
  }
  pMVar2 = (MutexType *)(lVar15 + 0x170);
  nn::os::LockMutex(pMVar2);
  if (*(long *)(lVar15 + 0x150) != 0) {
    FUN__text__0039fc38(*(long *)(lVar15 + 0x150),&local_c8);
  }
  nn::os::UnlockMutex(pMVar2);
  plVar18 = *(long **)(lVar15 + 0x120);
joined_r0x0039d538:
  if (plVar18 == (long *)0x0) {
    return;
  }
  puVar17 = (ulong *)(plVar18 + 2);
  if (*puVar17 != 0xe4d07a996e5ef5e8) {
    uVar7 = FUN__text__0039b7d0(lVar15,puVar17);
    uVar16 = *(undefined8 *)(lVar15 + 8);
    if (*puVar17 == 0xe4d07a996e5ef5e8) {
      FUN__text__002c3bb4(&local_c8,0x715101,lVar1);
      FUN__text__00397ad0(uVar7,uVar16,&local_c8);
    }
    else {
      FUN__text__002fa7e0(&local_c8,puVar17,lVar1);
      FUN__text__00397ad0(uVar7,uVar16,&local_c8);
    }
    if ((local_b0 != 0) && (local_c8 != 0)) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    }
    local_c8 = 0;
    uStack_c0 = 0xcbf29ce484222645;
    local_b8 = 0x70f683;
    local_b0 = 0;
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    }
    uVar8 = *(ulong *)(lVar15 + 0x100);
joined_r0x0039d628:
    if (uVar8 != 0) {
      uVar9 = *puVar17;
      uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar13 = uVar8 - 1 & uVar9;
      }
      else {
        uVar13 = uVar9;
        if (uVar8 <= uVar9) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar9 / uVar8;
          }
          uVar13 = uVar9 - uVar13 * uVar8;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar15 + 0xf8) + uVar13 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        uVar12 = uVar8 - 1;
        if (1 < uVar10) {
          do {
            uVar14 = plVar11[1];
            if (uVar9 == uVar14) {
              if (plVar11[2] == uVar9) goto LAB__text__0039d6dc;
            }
            else {
              if (uVar8 <= uVar14) {
                uVar3 = 0;
                if (uVar8 != 0) {
                  uVar3 = uVar14 / uVar8;
                }
                uVar14 = uVar14 - uVar3 * uVar8;
              }
              if (uVar14 != uVar13) goto LAB__text__0039d860;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB__text__0039d860;
          } while( true );
        }
        do {
          if (uVar9 == plVar11[1]) {
            if (plVar11[2] == uVar9) goto LAB__text__0039d6dc;
          }
          else if ((plVar11[1] & uVar12) != uVar13) break;
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) break;
        } while( true );
      }
    }
LAB__text__0039d860:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  goto LAB__text__0039d54c;
LAB__text__0039d6dc:
  if (uVar10 < 2) {
    uVar13 = uVar12 & uVar9;
  }
  else {
    uVar13 = uVar9;
    if (uVar8 <= uVar9) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar9 / uVar8;
      }
      uVar13 = uVar9 - uVar13 * uVar8;
    }
  }
  plVar11 = *(long **)(*(long *)(lVar15 + 0xf8) + uVar13 * 8);
  if ((plVar11 == (long *)0x0) || (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0)) {
LAB__text__0039d864:
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x711beb);
  }
  if (1 < uVar10) {
    do {
      uVar10 = plVar11[1];
      if (uVar9 == uVar10) {
        if (plVar11[2] == uVar9) goto LAB__text__0039d790;
      }
      else {
        if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar10 = uVar10 - uVar12 * uVar8;
        }
        if (uVar10 != uVar13) goto LAB__text__0039d864;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB__text__0039d864;
    } while( true );
  }
  do {
    if (uVar9 == plVar11[1]) {
      if (plVar11[2] == uVar9) break;
    }
    else if ((plVar11[1] & uVar12) != uVar13) goto LAB__text__0039d864;
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) goto LAB__text__0039d864;
  } while( true );
LAB__text__0039d790:
  uVar8 = FUN__text__00397bf0(plVar11[6]);
  if ((uVar8 & 1) != 0) goto LAB__text__0039d7f4;
  nn::os::SleepThread(&DAT_00989680);
  uVar8 = *(ulong *)(lVar15 + 0x100);
  goto joined_r0x0039d628;
LAB__text__0039d7f4:
  FUN__text__0039b7d0(lVar15,puVar17);
  iVar6 = FUN__text__00397c10();
  if (iVar6 == 4) {
    FUN__text__0039b7d0(lVar15,puVar17);
    FUN__text__00397ff0();
    iVar6 = 2;
  }
  local_c8 = CONCAT44(local_c8._4_4_,iVar6);
  nn::os::LockMutex(pMVar2);
  if (*(long *)(lVar15 + 0x150) != 0) {
    FUN__text__0039fc38(*(long *)(lVar15 + 0x150),&local_c8);
  }
  nn::os::UnlockMutex(pMVar2);
LAB__text__0039d54c:
  plVar18 = (long *)*plVar18;
  goto joined_r0x0039d538;
}


