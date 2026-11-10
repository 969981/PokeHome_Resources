/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00526420; name: FUN_.text__00526420
 */


void FUN__text__00526420(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  lVar5 = *(long *)(*(long *)(param_4 + 8) + 0x20);
  lVar9 = *(long *)(*(long *)(param_4 + 8) + 0x48);
  uVar15 = *(undefined8 *)(lVar5 + 0x78);
  uVar17 = *(undefined8 *)(lVar5 + 0x80);
  uVar19 = *(undefined8 *)(lVar5 + 0x88);
  local_b8 = uVar15;
  uStack_b0 = uVar17;
  local_a8 = uVar19;
  FUN__text__00526e0c(param_1,param_2,lVar5);
  uVar21 = 0;
  if (*(uint *)(param_1 + 0x60) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 0x60) << 3;
    plVar4 = *(long **)(param_1 + 0x58);
    do {
      lVar6 = *plVar4;
      if (*(long *)(lVar6 + 0x70) == *(long *)(param_4 + 0x58)) {
        lVar3 = FUN__text__005211e0(lVar6,*(undefined8 *)(param_1 + 0x78));
        if (lVar3 != 0) {
          local_c8 = 0;
          local_c0 = 0;
          FUN__text__00525410(*(undefined4 *)(lVar9 + 0x50),param_1,lVar9,&local_c8);
          uVar7 = 0;
          if (*(int *)(param_1 + 0x60) != 0) {
            plVar4 = *(long **)(param_1 + 0x58);
            do {
              lVar8 = *plVar4;
              if ((((lVar8 != lVar6) || (*(long *)(param_4 + 0x68) != *(long *)(param_1 + 0x78))) &&
                  (*(char *)(lVar8 + 0x568) != '\0')) &&
                 (uVar1 = FUN__text__00521260(lVar8,*(undefined8 *)(lVar3 + 0x78)), (uVar1 & 1) != 0
                 )) {
                FUN__text__00522400(uVar15,uVar17,uVar19,lVar8,&local_c8,
                                    *(undefined8 *)(param_1 + 0x78),lVar9);
              }
              plVar4 = plVar4 + 1;
              uVar7 = *(uint *)(param_1 + 0x60);
            } while (plVar4 != (long *)(*(long *)(param_1 + 0x58) + (ulong)uVar7 * 8));
          }
          if (local_c8 != 0) {
            local_c0 = local_c0 & 0xffffffff00000000;
            FUN__text__00400fc0(9);
            uVar7 = *(uint *)(param_1 + 0x60);
          }
          fVar14 = *(float *)(param_4 + 0x98);
          fVar10 = 1.0 - fVar14;
          if (*(long *)(param_4 + 0x68) != *(long *)(param_1 + 0x78)) {
            fVar10 = fVar14;
          }
          if (uVar7 != 0) {
            plVar4 = *(long **)(param_1 + 0x58);
            uVar7 = 1;
            do {
              lVar8 = *plVar4;
              if ((*(char *)(lVar8 + 0x568) == '\0') ||
                 (uVar1 = FUN__text__00521260(lVar8,*(undefined8 *)(lVar3 + 0x78)), (uVar1 & 1) == 0
                 )) {
                uVar1 = FUN__text__0052163c(lVar8,param_1);
                *(undefined4 *)(lVar8 + (uVar1 & 0xffffffff) * 0x40 + 200) = 0;
              }
              else {
                if (lVar8 == lVar6) {
                  if (*(long *)(param_1 + 0x78) != *(long *)(param_4 + 0x68)) {
                    lVar8 = lVar6;
                    fVar11 = fVar14;
                    goto LAB__text__005267d0;
                  }
                  uVar15 = uStack_b0;
                  uVar19 = local_a8;
                  uVar12 = FUN__text__005213f4(local_b8,uStack_b0,local_a8,lVar6);
                  uVar17 = uStack_b0;
                  uVar13 = local_a8;
                  uVar15 = FUN__text__005214a4(local_b8,uStack_b0,local_a8,uVar12,uVar15,uVar19,
                                               fVar14,lVar6,param_1);
                  fVar11 = (float)FUN__text__00521144(lVar6,&local_b8);
                  uVar16 = *(undefined4 *)(param_1 + 0x34);
                  uVar22 = *(undefined4 *)(param_1 + 0x38);
                  uVar23 = *(undefined4 *)(param_1 + 0x24);
                  uVar21 = *(undefined4 *)(param_1 + 0x28);
                  uVar18 = *(undefined4 *)(param_1 + 0x2c);
                  uVar20 = *(undefined4 *)(param_1 + 0x30);
                  puVar2 = (undefined4 *)FUN__text__00492bb0(param_3,1,1);
                  if (puVar2 != (undefined4 *)0x0) {
                    fVar11 = fVar11 * -15.915494 + 100.0;
                    uVar19 = *(undefined8 *)(*(long *)(lVar5 + 8) + 0x58);
                    *puVar2 = uVar20;
                    puVar2[1] = uVar16;
                    puVar2[2] = uVar22;
                    puVar2[3] = uVar23;
                    puVar2[4] = uVar21;
                    puVar2[5] = uVar18;
                    *(undefined8 *)(puVar2 + 10) = uVar13;
                    *(undefined8 *)(puVar2 + 0x1c) = uVar19;
                    *(undefined8 *)(puVar2 + 0x12) = 0;
                    *(undefined8 *)(puVar2 + 0x14) = 0;
                    puVar2[0x19] = 0xffffffff;
                    puVar2[0x1a] = uVar7 & 0xff;
                    *(undefined8 *)(puVar2 + 6) = uVar15;
                    *(undefined8 *)(puVar2 + 8) = uVar17;
                    puVar2[0x16] = fVar11;
                    puVar2[0x17] = fVar11;
                    uVar19 = *(undefined8 *)(param_2 + 8);
                    FUN__text__00480e64(lVar5,uVar19,puVar2);
                    if (*(long *)(lVar5 + 0x98) != 0) {
                      uVar13 = FUN__text__0047da2c(*(undefined8 *)(*(long *)(lVar9 + 8) + 0x20));
                      lVar8 = FUN__text__0047da58(*(undefined8 *)(*(long *)(lVar9 + 8) + 0x20));
                      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0)) {
                        lVar8 = *(long *)(*(long *)(lVar9 + 8) + 0x38);
                      }
                      FUN__text__00526f60(uVar13,uVar17,uVar15,param_1,lVar6,
                                          *(undefined8 *)(lVar8 + 0x68));
                      FUN__text__00480e30(lVar5,uVar19,puVar2);
                    }
                    FUN__text__00527200(0,param_1,param_2,9,param_3);
                    uVar7 = uVar7 + 1;
                    goto LAB__text__005265e8;
                  }
                }
                else {
                  fVar11 = fVar10 * fVar10 * fVar10;
LAB__text__005267d0:
                  FUN__text__005273a0(local_b8,uStack_b0,local_a8,fVar11,param_1,param_2,lVar8,uVar7
                                      ,lVar5,param_3);
                }
                uVar7 = uVar7 + 1;
              }
LAB__text__005265e8:
              plVar4 = plVar4 + 1;
            } while (plVar4 != (long *)(*(long *)(param_1 + 0x58) +
                                       (ulong)*(uint *)(param_1 + 0x60) * 8));
          }
          uVar21 = *(undefined4 *)(lVar3 + 0xa4);
        }
        break;
      }
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN__text__00527718(uVar21,param_1,param_2,param_3,lVar5);
  return;
}


