/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a39c0; name: FUN_.text__004a39c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004a39c0(long param_1,long param_2,long *param_3,uint param_4,byte param_5)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  int local_98;
  int local_94;
  int local_90;
  char local_8c [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  nn::os::LockMutex(_DAT_008a46d0);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x30) != 2) {
    uVar10 = 0;
  }
  lVar7 = FUN__text__004ada80(param_1 + 0xa8,
                              CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8)),
                              uVar10);
  if (lVar7 == 0) {
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
    lVar7 = FUN__text__00400f80(0,0x78);
    if (lVar7 == 0) {
      uVar16 = 0x34;
    }
    else {
      bVar4 = param_4 != 0;
      uVar10 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(param_2 + 0x30) != 2) {
        uVar10 = 0;
      }
      FUN__text__004a1b28(lVar7,CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8)),
                          uVar10,param_4 == 0,bVar4 & (param_5 ^ 1),bVar4 & param_5);
      uVar16 = 1;
    }
    *param_3 = lVar7;
  }
  else {
    bVar2 = *(byte *)(lVar7 + 0x68);
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
    if ((bVar2 & 1) != 0) {
      return 0x45;
    }
    *param_3 = lVar7;
    if ((param_5 & 1) != 0) {
      *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + 1;
    }
    uVar16 = 1;
  }
  lVar7 = param_1 + 8;
  FUN__text__004ae378(lVar7);
  uVar5 = *(uint *)(param_2 + 4);
  uVar14 = 100;
  if (((0x1f < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0xc0000001U) == 0)) ||
     (uVar14 = (ulong)uVar16, uVar16 != 1)) {
    local_70 = 0;
    uStack_68 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    goto LAB__text__004a3fcc;
  }
  uVar16 = *(uint *)(param_2 + 0x30);
  if (param_4 == 0) {
    if (uVar16 == 1) {
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      goto LAB__text__004a3b90;
    }
    if ((uVar16 & 0xfffffffe) != 2) goto LAB__text__004a3b10;
    uVar5 = FUN__text__004ae4c0(lVar7,*(undefined8 *)(param_2 + 0x38),
                                *(undefined4 *)(param_2 + 0x40));
  }
  else {
LAB__text__004a3b10:
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    if (((uVar5 < 0x20) && ((1 << (ulong)(uVar5 & 0x1f) & 0xc0000001U) != 0)) &&
       (*(long *)(param_2 + 0x10) != 0)) {
      uVar5 = FUN__text__004ae4d4(lVar7,*(long *)(param_2 + 0x10),uVar1,0,uVar5);
    }
    else {
LAB__text__004a3b90:
      uVar5 = FUN__text__004ae6d0(lVar7,uVar1,0,uVar5,uVar10,1);
    }
  }
  uVar14 = (ulong)uVar5;
  local_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_8c[0] = '\0';
  local_80 = 0;
  uStack_78 = 0;
  if (uVar5 == 1) {
    uVar5 = FUN__text__004a403c(param_1,&local_88,local_8c);
    puVar3 = _DAT_008a47c0;
    uVar14 = (ulong)uVar5;
    if (uVar5 == 1) {
LAB__text__004a3be4:
      local_98 = 0;
      uVar5 = FUN__text__004aea70(lVar7,&local_94,8,&local_98,0xffffffff);
      if (uVar5 != 1) {
        uVar14 = (ulong)uVar5;
        goto LAB__text__004a3fcc;
      }
      if (local_98 != 8) {
        if (local_98 == 0) {
          uVar14 = 1;
        }
        else {
          uVar14 = 7;
        }
        goto LAB__text__004a3fcc;
      }
      uVar5 = (uint)local_88;
      if (local_8c[0] == '\0') {
        if (local_94 < 0x53564e45) {
          if (local_94 < 0x44495453) {
            if (local_94 == 0x41544144) goto LAB__text__004a3cb0;
            if (local_94 != 0x43524948) goto LAB__text__004a3db4;
            uVar14 = FUN__text__004a4d00(param_1,*param_3,uVar1);
          }
          else if (local_94 == 0x44495453) {
            uVar14 = FUN__text__004a5140(param_1,local_90);
          }
          else {
            if (local_94 != 0x474d5453) goto LAB__text__004a3db4;
            uVar14 = FUN__text__004a53d8(param_1,local_90);
          }
        }
        else {
          if (0x54494e48 < local_94) {
            if (local_94 == 0x54494e49) {
              piVar8 = (int *)FUN__text__004ae940(lVar7,local_90);
              if (piVar8 != (int *)0x0) {
                iVar6 = *piVar8;
                if (iVar6 == 0) goto LAB__text__004a3f24;
                piVar8 = piVar8 + 1;
                do {
                  piVar9 = piVar8 + 1;
                  piVar15 = piVar9;
                  if ((char)*piVar9 != '\0') {
                    do {
                      piVar15 = (int *)((long)piVar15 + 1);
                    } while (*(char *)piVar15 != '\0');
                  }
                  piVar11 = (int *)*puVar3;
                  uVar5 = *(uint *)(puVar3 + 1);
                  piVar12 = piVar11;
                  if (uVar5 == 0) {
LAB__text__004a3ec4:
                    if (piVar12 == piVar11 + (ulong)uVar5 * 8) goto LAB__text__004a3ed0;
                  }
                  else {
                    lVar13 = (ulong)uVar5 << 5;
                    do {
                      if (*piVar12 == *piVar8) goto LAB__text__004a3ec4;
                      piVar12 = piVar12 + 8;
                      lVar13 = lVar13 + -0x20;
                    } while (lVar13 != 0);
LAB__text__004a3ed0:
                    piVar12 = DAT_00aea5d8;
                    if (DAT_00aea5e0 == 0) {
LAB__text__004a3f10:
                      if (piVar12 != DAT_00aea5d8 + (ulong)DAT_00aea5e0 * 10)
                      goto LAB__text__004a3e5c;
                    }
                    else {
                      lVar13 = (ulong)DAT_00aea5e0 * 0x28;
                      do {
                        if (*piVar12 == *piVar8) goto LAB__text__004a3f10;
                        piVar12 = piVar12 + 10;
                        lVar13 = lVar13 + -0x28;
                      } while (lVar13 != 0);
                    }
                    FUN__text__00405c10(piVar9,0);
                  }
LAB__text__004a3e5c:
                  bVar4 = false;
                  piVar8 = (int *)((long)piVar15 + 1);
                  iVar6 = iVar6 + -1;
                  uVar14 = 1;
                } while (iVar6 != 0);
                goto LAB__text__004a3f68;
              }
              uVar14 = 0x38;
              goto LAB__text__004a3fcc;
            }
            if (local_94 == 0x58444944) goto LAB__text__004a3c40;
LAB__text__004a3db4:
            FUN__text__004ae7a0(lVar7,local_90,&local_98);
            bVar4 = local_98 != local_90;
            uVar5 = 7;
            if (!bVar4) {
              uVar5 = 1;
            }
            uVar14 = (ulong)uVar5;
            goto LAB__text__004a3f68;
          }
          if (local_94 == 0x53564e45) {
            uVar14 = FUN__text__004a59d4(param_1,local_90);
          }
          else {
            if (local_94 != 0x54414c50) goto LAB__text__004a3db4;
            uVar14 = FUN__text__004a5cd0(param_1,local_90);
          }
        }
LAB__text__004a3f60:
        uVar14 = uVar14 & 0xffffffff;
        bVar4 = false;
      }
      else {
        if (local_94 == 0x41544144) {
LAB__text__004a3cb0:
          uVar5 = (uint)local_80._4_2_;
          if ((uint)local_88 < 0x87) {
            uVar5 = 0x10;
          }
          *(uint *)(*param_3 + 0x6c) = uVar5;
          if (param_4 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x004a3ce4 */
                    /* WARNING: Treating indirect jump as call */
            uVar14 = (*(code *)(&UNK__text__004a3cf0 +
                               (ulong)*(byte *)((ulong)param_4 + 0x73d956) * 4))();
            return uVar14;
          }
        }
        else {
          if (local_94 != 0x58444944) {
            if (((DAT_00aea960 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_00aea960), iVar6 != 0)) {
              DAT_00aea958 = 0x71062f;
              if (0x90 < uVar5) {
                DAT_00aea958 = 0x71110b;
              }
              __cxa_guard_release(&DAT_00aea960);
            }
            uVar14 = 0x40;
            goto LAB__text__004a3fcc;
          }
LAB__text__004a3c40:
          if ((param_4 < 2) || (param_4 == 3)) {
            uVar14 = FUN__text__004a4bf0(param_1,*param_3,local_90,uVar16 == 2);
            goto LAB__text__004a3f60;
          }
          if (param_4 == 2) goto LAB__text__004a3db4;
        }
LAB__text__004a3f24:
        bVar4 = false;
        uVar14 = 1;
      }
LAB__text__004a3f68:
      if (((int)uVar14 != 1) || (bVar4)) goto LAB__text__004a3fcc;
      goto LAB__text__004a3be4;
    }
  }
LAB__text__004a3fcc:
  FUN__text__004ae3ec(lVar7);
  return uVar14;
}


