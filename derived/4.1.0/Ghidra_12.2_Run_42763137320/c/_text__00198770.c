/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00198770; name: FUN_.text__00198770
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN__text__00198770(long *param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5,
                        undefined8 *param_6)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  uint uStack_c4;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_70;
  uint uStack_6c;
  
  bVar11 = false;
  *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0xf8) = 0;
  uVar16 = *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0x110);
  uVar1 = tpidr_el0;
  uVar14 = uVar1 & 0xffffffffffffe000;
  bVar3 = true;
  do {
    bVar12 = bVar3;
    local_88 = *param_4;
    local_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    if (bVar11) {
      local_88 = *param_6;
      local_80 = param_6[1];
      local_78 = *(undefined4 *)(param_6 + 2);
      if ((param_5 & 1) == 0) break;
LAB__text__00198848:
      if ((char)local_88 == '\0') {
        local_98 = CONCAT44(local_98._4_4_,local_88._4_4_);
        uStack_90._0_4_ = (undefined4)((ulong)local_80 >> 0x20);
        lVar6 = FUN__text__001961a8(uVar16,&local_98);
        if (lVar6 != 0) {
          uVar4 = FUN__text__00191358(&local_80);
          uVar13 = 0;
          do {
            uVar15 = 0;
            do {
              local_c8 = uVar15;
              uStack_c4 = uVar13;
              lVar8 = FUN__text__00191d1c(lVar6,&local_c8);
              if (*(int *)(lVar8 + 0x18) != 0) {
                local_d8 = *(undefined8 *)(lVar8 + 8);
                uStack_d0 = *(undefined8 *)(lVar8 + 0x10);
                local_e0 = *param_1;
                if (local_e0 != 0) {
                  (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
                }
                uVar7 = FUN__text__00194e98(uVar16,&local_e0,&local_d8);
                if (local_e0 != 0) {
                  (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
                  local_e0 = 0;
                }
                uVar2 = local_bc;
                if ((uVar7 & 1) != 0) {
                  local_bc = local_bc & 0xffffff00;
                  uStack_b8 = local_88._4_4_;
                  local_b0 = local_c8;
                  uStack_ac = uStack_c4;
                  uStack_a8 = 0;
                  local_a4 = 0;
                  lVar8 = *(long *)(*param_2 + 0x60);
                  puVar10 = (ulong *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xf8) * 0x1c);
                  uStack_b4 = uVar4;
                  if (*(long *)(lVar8 + 0xf8) == *(long *)(lVar8 + 0x100)) {
                    FUN__text__0019accc(&local_70,lVar8 + 0xb0,puVar10,1,&local_bc);
                  }
                  else {
                    if (*(long *)(uVar14 + 0x98) == 0x10) goto LAB__text__00198b24;
                    *(undefined8 *)(uVar14 + *(long *)(uVar14 + 0x98) * 8 + 0x18) =
                         *(undefined8 *)(lVar8 + 0xb0);
                    *(long *)(uVar14 + 0x98) = *(long *)(uVar14 + 0x98) + 1;
                    *(undefined4 *)(puVar10 + 3) = 0;
                    *puVar10 = CONCAT44(local_88._4_4_,uVar2) & 0xffffffffffffff00;
                    puVar10[1] = CONCAT44(local_c8,uVar4);
                    puVar10[2] = (ulong)uStack_c4;
                    *(long *)(uVar14 + 0x98) = *(long *)(uVar14 + 0x98) + -1;
                    *(long *)(lVar8 + 0xf8) = *(long *)(lVar8 + 0xf8) + 1;
                  }
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != 6);
            uVar13 = uVar13 + 1;
          } while (uVar13 != 5);
        }
      }
      else {
        uVar5 = FUN__text__00196200(uVar16,local_88._4_4_);
        uVar13 = 0;
        do {
          uVar15 = 0;
          do {
            local_70 = uVar15;
            uStack_6c = uVar13;
            lVar6 = FUN__text__0019264c(uVar5,&local_70);
            if (*(int *)(lVar6 + 0x18) != 0) {
              local_98 = *(undefined8 *)(lVar6 + 8);
              uStack_90 = *(undefined8 *)(lVar6 + 0x10);
              local_a0 = *param_1;
              if (local_a0 != 0) {
                (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
              }
              uVar7 = FUN__text__00194e98(uVar16,&local_a0,&local_98);
              if (local_a0 != 0) {
                (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
                local_a0 = 0;
              }
              if ((uVar7 & 1) != 0) {
                local_bc = CONCAT31(local_bc._1_3_,1);
                uStack_b8 = local_88._4_4_;
                uStack_b4 = 0;
                local_b0 = local_70;
                uStack_ac = uStack_6c;
                uStack_a8 = 0;
                local_a4 = 0;
                lVar6 = *(long *)(*param_2 + 0x60);
                puVar9 = (undefined8 *)(*(long *)(lVar6 + 0xf0) + *(long *)(lVar6 + 0xf8) * 0x1c);
                if (*(long *)(lVar6 + 0xf8) == *(long *)(lVar6 + 0x100)) {
                  FUN__text__0019accc(&local_d8,lVar6 + 0xb0,puVar9,1,&local_bc);
                }
                else {
                  uVar7 = uVar1 & 0xffffffffffffe000;
                  if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__00198b24:
                    local_a4 = 0;
                    uStack_a8 = 0;
                    /* WARNING: Subroutine does not return */
                    FUN__text__00102c10();
                  }
                  *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) =
                       *(undefined8 *)(lVar6 + 0xb0);
                  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
                  *(undefined4 *)(puVar9 + 3) = 0;
                  *puVar9 = CONCAT44(local_88._4_4_,local_bc);
                  puVar9[1] = (ulong)local_70 << 0x20;
                  puVar9[2] = (ulong)uStack_6c;
                  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
                  *(long *)(lVar6 + 0xf8) = *(long *)(lVar6 + 0xf8) + 1;
                }
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 6);
          uVar13 = uVar13 + 1;
        } while (uVar13 != 5);
      }
    }
    else if ((param_3 & 1) != 0) goto LAB__text__00198848;
    bVar11 = true;
    bVar3 = false;
  } while (bVar12);
  FUN__text__0019c3e4(*(long *)(*param_2 + 0x60) + 8);
  FUN__text__0019bb44(*param_2,0);
  return;
}


