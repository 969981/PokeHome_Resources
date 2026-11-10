/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00197040; name: FUN_.text__00197040
 */


void FUN__text__00197040(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  uint uVar19;
  int local_d0;
  long local_c8;
  uint local_c0;
  uint uStack_bc;
  int local_b8;
  undefined8 local_b4;
  int local_a8;
  int iStack_a4;
  uint local_9c;
  int iStack_98;
  undefined4 uStack_94;
  uint local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  
  *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0xf8) = 0;
  lVar13 = *(long *)(*(long *)(*param_2 + 0x60) + 0x110);
  lVar12 = *(long *)(lVar13 + 0x40);
  iVar1 = *(int *)(lVar12 + 8);
  if (iVar1 != 0) {
    uVar3 = tpidr_el0;
    iVar16 = 0;
    do {
      lVar6 = FUN__text__001930e0(lVar12,iVar16);
      if (*(int *)(lVar6 + 0xc) != 0) {
        lVar7 = *(long *)(lVar6 + 0x30);
        if ((*(int *)(lVar6 + 0xc) == 1) && (*(char *)(*(long *)(*param_2 + 0x60) + 0x120) != '\0'))
        {
          uVar18 = *(undefined8 *)(lVar7 + 0x150);
          uVar14 = 0;
          do {
            uVar19 = 0;
            do {
              local_68 = uVar19;
              uStack_64 = uVar14;
              lVar6 = FUN__text__0019264c(uVar18,&local_68);
              if (*(int *)(lVar6 + 0x18) != 0) {
                local_78 = *(undefined8 *)(lVar6 + 8);
                uStack_70 = *(undefined8 *)(lVar6 + 0x10);
                local_80 = *param_1;
                if (local_80 != 0) {
                  (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
                }
                uVar8 = FUN__text__00194e98(lVar13,&local_80,&local_78);
                if (local_80 != 0) {
                  (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                  local_80 = 0;
                }
                if ((uVar8 & 1) != 0) {
                  local_9c = CONCAT31(local_9c._1_3_,1);
                  uStack_94 = 0;
                  local_90 = local_68;
                  uStack_8c = uStack_64;
                  uStack_88 = 0;
                  local_84 = 0;
                  lVar6 = *(long *)(*param_2 + 0x60);
                  puVar10 = (undefined8 *)(*(long *)(lVar6 + 0xf0) + *(long *)(lVar6 + 0xf8) * 0x1c)
                  ;
                  if (*(long *)(lVar6 + 0xf8) == *(long *)(lVar6 + 0x100)) {
                    iStack_98 = iVar16;
                    FUN__text__0019accc(&local_b8,lVar6 + 0xb0,puVar10,1,&local_9c);
                  }
                  else {
                    uVar8 = uVar3 & 0xffffffffffffe000;
                    if (*(long *)(uVar8 + 0x98) == 0x10) {
LAB__text__00197410:
                      local_84 = 0;
                      uStack_88 = 0;
                      iStack_98 = iVar16;
                    /* WARNING: Subroutine does not return */
                      FUN__text__00102c10();
                    }
                    *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) =
                         *(undefined8 *)(lVar6 + 0xb0);
                    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                    *(undefined4 *)(puVar10 + 3) = 0;
                    *puVar10 = CONCAT44(iVar16,local_9c);
                    puVar10[1] = (ulong)local_68 << 0x20;
                    puVar10[2] = (ulong)uStack_64;
                    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                    *(long *)(lVar6 + 0xf8) = *(long *)(lVar6 + 0xf8) + 1;
                    iStack_98 = iVar16;
                  }
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != 6);
            uVar14 = uVar14 + 1;
          } while (uVar14 != 5);
        }
        else {
          iVar2 = *(int *)(lVar7 + 8);
          if (iVar2 != 0) {
            iVar15 = 0;
            do {
              uVar18 = FUN__text__00192b40(lVar7,iVar15);
              local_d0 = 0;
              do {
                iVar17 = 0;
                do {
                  iStack_a4 = local_d0;
                  local_a8 = iVar17;
                  lVar6 = FUN__text__001920e4(uVar18,&local_a8);
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    local_b4 = CONCAT44(iStack_a4,local_a8);
                    local_b8 = iVar15;
                    uVar5 = FUN__text__00191358(&local_b8);
                    uVar14 = 0;
                    do {
                      uVar19 = 0;
                      do {
                        local_c0 = uVar19;
                        uStack_bc = uVar14;
                        lVar9 = FUN__text__00191d1c(lVar6,&local_c0);
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          local_78 = *(undefined8 *)(lVar9 + 8);
                          uStack_70 = *(undefined8 *)(lVar9 + 0x10);
                          local_c8 = *param_1;
                          if (local_c8 != 0) {
                            (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
                          }
                          uVar8 = FUN__text__00194e98(lVar13,&local_c8,&local_78);
                          if (local_c8 != 0) {
                            (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
                            local_c8 = 0;
                          }
                          uVar4 = local_9c;
                          if ((uVar8 & 1) != 0) {
                            local_9c = local_9c & 0xffffff00;
                            local_90 = local_c0;
                            uStack_8c = uStack_bc;
                            uStack_88 = 0;
                            local_84 = 0;
                            lVar9 = *(long *)(*param_2 + 0x60);
                            puVar11 = (ulong *)(*(long *)(lVar9 + 0xf0) +
                                               *(long *)(lVar9 + 0xf8) * 0x1c);
                            uStack_94 = uVar5;
                            if (*(long *)(lVar9 + 0xf8) == *(long *)(lVar9 + 0x100)) {
                              iStack_98 = iVar16;
                              FUN__text__0019accc(&local_68,lVar9 + 0xb0,puVar11,1,&local_9c);
                            }
                            else {
                              uVar8 = uVar3 & 0xffffffffffffe000;
                              if (*(long *)(uVar8 + 0x98) == 0x10) goto LAB__text__00197410;
                              *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) =
                                   *(undefined8 *)(lVar9 + 0xb0);
                              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                              *(undefined4 *)(puVar11 + 3) = 0;
                              *puVar11 = CONCAT44(iVar16,uVar4) & 0xffffffffffffff00;
                              puVar11[1] = CONCAT44(local_c0,uVar5);
                              puVar11[2] = (ulong)uStack_bc;
                              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                              *(long *)(lVar9 + 0xf8) = *(long *)(lVar9 + 0xf8) + 1;
                              iStack_98 = iVar16;
                            }
                          }
                        }
                        uVar19 = uVar19 + 1;
                      } while (uVar19 != 6);
                      uVar14 = uVar14 + 1;
                    } while (uVar14 != 5);
                  }
                  iVar17 = iVar17 + 1;
                } while (iVar17 != 6);
                local_d0 = local_d0 + 1;
              } while (local_d0 != 5);
              iVar15 = iVar15 + 1;
            } while (iVar15 != iVar2);
          }
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar1);
  }
  return;
}


