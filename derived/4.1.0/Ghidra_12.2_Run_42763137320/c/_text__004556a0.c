/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004556a0; name: FUN_.text__004556a0
 */


void FUN__text__004556a0(uint param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long alStack_150 [2];
  long local_140;
  long local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  ulong local_70;
  
  if (param_1 != 0) {
    local_a0 = 0;
    plVar1 = param_4;
    if (param_3 != (long *)0x0) {
      plVar1 = param_3;
    }
    local_b0 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uVar3 = *(ushort *)(*plVar1 + 0x10);
    uVar21 = (ulong)uVar3;
    local_d0 = 0;
    uVar9 = (ulong)param_1 * 2 + 0xf & 0x3fffffff0;
    local_78 = (long)alStack_150 + (0x10 - uVar9);
    local_70 = 0;
    local_88 = local_78 - uVar9;
    uStack_80 = 0;
    local_98 = local_88 - uVar9;
    uStack_90 = 0;
    local_a8 = local_98 - uVar9;
    local_c0 = local_a8 - uVar9;
    lVar10 = local_c0 - uVar9;
    local_d8 = lVar10;
    FUN__text__00451f50(param_2,(ulong)param_1,&local_78,&local_88,&local_a8,&local_98,&local_d8,
                        &local_c0);
    uVar7 = uStack_80;
    lVar14 = local_88;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    local_140 = lVar14;
    FUN__text__00455ab0(lVar14,uVar7,param_2,uVar21,plVar1,param_4,0,0);
    lVar14 = local_78;
    uVar9 = local_70 & 0xffffffff;
    uVar20 = (uint)uVar3;
    if (uVar9 != 0) {
      if (plVar1 == param_4) {
        uVar22 = 0;
        do {
          uVar11 = (ulong)*(ushort *)(local_78 + uVar22 * 2);
          bVar2 = *(byte *)((long *)param_4[uVar11] + 1);
          if (bVar2 != 0) {
            lVar14 = *(long *)(*(long *)(param_2 + uVar11 * 8) + 0x20);
            lVar13 = *(long *)param_4[uVar11] + uVar21 * 4 + -8;
            if (bVar2 == 1) {
              uVar11 = 0;
            }
            else {
              uVar16 = 0;
              uVar11 = 0;
              do {
                lVar15 = uVar16 * 4;
                iVar17 = (int)uVar16;
                lVar8 = uVar11 * 0x10;
                uVar11 = uVar11 + 2;
                uVar16 = (ulong)(iVar17 + uVar20 * 2);
                uVar5 = *(undefined8 *)(lVar13 + lVar15);
                lVar15 = *(long *)(lVar14 + 0x30);
                puVar4 = (undefined8 *)(*(long *)(lVar14 + 0x28) + lVar8);
                puVar4[1] = uVar5;
                *puVar4 = uVar5;
                puVar4 = (undefined8 *)(lVar15 + lVar8);
                puVar4[1] = uVar5;
                *puVar4 = uVar5;
                uVar5 = *(undefined8 *)(lVar13 + (ulong)(uVar20 + iVar17) * 4);
                lVar15 = *(long *)(lVar14 + 0x28) + lVar8;
                lVar8 = *(long *)(lVar14 + 0x30) + lVar8;
                *(undefined8 *)(lVar15 + 0x18) = uVar5;
                *(undefined8 *)(lVar15 + 0x10) = uVar5;
                *(undefined8 *)(lVar8 + 0x18) = uVar5;
                *(undefined8 *)(lVar8 + 0x10) = uVar5;
              } while (((ulong)bVar2 & 0xfe) != uVar11);
            }
            if ((bVar2 & 1) != 0) {
              uVar5 = *(undefined8 *)(lVar13 + (ulong)((int)uVar11 * uVar20) * 4);
              lVar13 = *(long *)(lVar14 + 0x30);
              puVar4 = (undefined8 *)(*(long *)(lVar14 + 0x28) + uVar11 * 0x10);
              puVar4[1] = uVar5;
              *puVar4 = uVar5;
              puVar4 = (undefined8 *)(lVar13 + uVar11 * 0x10);
              puVar4[1] = uVar5;
              *puVar4 = uVar5;
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar9);
      }
      else {
        uVar22 = 0;
        do {
          uVar11 = (ulong)*(ushort *)(lVar14 + uVar22 * 2);
          plVar12 = (long *)plVar1[uVar11];
          bVar2 = *(byte *)(plVar12 + 1);
          if (bVar2 != 0) {
            lVar13 = *(long *)(*(long *)(param_2 + uVar11 * 8) + 0x20);
            lVar15 = *plVar12 + uVar21 * 4 + -8;
            if (bVar2 == 1) {
              uVar16 = 0;
            }
            else {
              uVar18 = 0;
              uVar16 = 0;
              do {
                lVar8 = uVar18 * 4;
                iVar17 = (int)uVar18;
                lVar19 = uVar16 * 0x10;
                uVar16 = uVar16 + 2;
                uVar18 = (ulong)(iVar17 + uVar20 * 2);
                uVar5 = *(undefined8 *)(lVar15 + lVar8);
                lVar8 = *(long *)(lVar13 + 0x30);
                puVar4 = (undefined8 *)(*(long *)(lVar13 + 0x28) + lVar19);
                puVar4[1] = uVar5;
                *puVar4 = uVar5;
                puVar4 = (undefined8 *)(lVar8 + lVar19);
                puVar4[1] = uVar5;
                *puVar4 = uVar5;
                uVar5 = *(undefined8 *)(lVar15 + (ulong)((uint)uVar3 + iVar17) * 4);
                lVar8 = *(long *)(lVar13 + 0x28) + lVar19;
                lVar19 = *(long *)(lVar13 + 0x30) + lVar19;
                *(undefined8 *)(lVar8 + 0x18) = uVar5;
                *(undefined8 *)(lVar8 + 0x10) = uVar5;
                *(undefined8 *)(lVar19 + 0x18) = uVar5;
                *(undefined8 *)(lVar19 + 0x10) = uVar5;
              } while (((ulong)bVar2 & 0xfe) != uVar16);
            }
            if ((bVar2 & 1) != 0) {
              uVar5 = *(undefined8 *)(lVar15 + (ulong)((int)uVar16 * (uint)uVar3) * 4);
              lVar15 = *(long *)(lVar13 + 0x30);
              puVar4 = (undefined8 *)(*(long *)(lVar13 + 0x28) + uVar16 * 0x10);
              puVar4[1] = uVar5;
              *puVar4 = uVar5;
              puVar4 = (undefined8 *)(lVar15 + uVar16 * 0x10);
              puVar4[1] = uVar5;
              *puVar4 = uVar5;
            }
            plVar12 = (long *)plVar1[uVar11];
          }
          memcpy(*(void **)param_4[uVar11],(void *)*plVar12,uVar21 * 4 * (ulong)bVar2);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar9);
      }
    }
    uVar6 = uStack_90;
    lVar13 = local_98;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    FUN__text__00456440(lVar13,uVar6,param_2,uVar21,plVar1,param_4,0,0);
    local_f0 = local_c0;
    uStack_e8 = local_b8;
    local_e0 = CONCAT44(uStack_ac,local_b0);
    FUN__text__004565a0(&local_f0,param_2,uVar21,plVar1,param_4,0,0,0);
    uVar5 = local_a0;
    lVar14 = local_a8;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    FUN__text__00456ac0(lVar14,uVar5,param_2,uVar21,plVar1,param_4,0,0);
    local_108 = local_d8;
    uStack_100 = local_d0;
    local_f8 = CONCAT44(uStack_c4,local_c8);
    FUN__text__00456f50(&local_108,param_2,uVar21,plVar1,param_4,0,0,0);
    local_120 = local_d8;
    uStack_118 = local_d0;
    local_128 = CONCAT44(uStack_ac,local_b0);
    local_110 = CONCAT44(uStack_c4,local_c8);
    local_138 = local_c0;
    uStack_130 = local_b8;
    *(long *)(lVar10 + -0x10) = local_140;
    *(undefined8 *)(lVar10 + -8) = uVar7;
    FUN__text__004525e0(param_2,lVar14,uVar5,lVar13,uVar6,&local_120,&local_138);
  }
  return;
}


