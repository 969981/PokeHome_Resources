/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cd650; name: FUN_.text__001cd650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001cd650(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  void *pvVar42;
  undefined8 uVar43;
  long lVar44;
  undefined4 uVar45;
  uint uVar46;
  undefined1 auStack_170 [24];
  long local_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_b8 [56];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  if (*(char *)(param_1 + 0x588c) != '\0') {
    lVar41 = *(long *)(param_1 + 0x18);
    if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    lVar20 = *(long *)(param_1 + 0x38);
    lVar40 = *(long *)(lVar20 + 0x128);
    iVar10 = *(int *)(lVar20 + 0x1b0);
    iVar5 = *(int *)(lVar20 + 0x1b4);
    lVar13 = *(long *)(lVar20 + (ulong)(iVar10 != *(int *)(lVar40 + 0x24) &&
                                       iVar5 == *(int *)(lVar40 + 0x24)) * 0x20 + 0x68);
    if (*(char *)(lVar40 + 0x90) == '\0') {
      local_78 = *(undefined8 *)(lVar40 + 0x7c);
      local_70 = *(undefined4 *)(lVar40 + 0x84);
      local_80._4_4_ = (int)(*(ulong *)(lVar40 + 0x74) >> 0x20);
      lVar44 = *(long *)(param_1 + 8);
      bVar8 = iVar10 != local_80._4_4_ && iVar5 == local_80._4_4_;
      iVar10 = *(int *)(param_1 + 0x5890);
      local_80 = *(ulong *)(lVar40 + 0x74);
    }
    else {
      local_78 = *(undefined8 *)(lVar40 + 0x98);
      iVar6 = *(int *)(lVar40 + 0x94);
      local_70 = *(undefined4 *)(lVar40 + 0xa0);
      local_80 = CONCAT44(iVar6,(undefined4)local_80) & 0xffffffffffffff00;
      lVar44 = *(long *)(param_1 + 8);
      bVar8 = iVar10 != iVar6 && iVar5 == iVar6;
      iVar10 = *(int *)(param_1 + 0x5890);
    }
    if (iVar10 == 0) {
      lVar41 = 0;
      lVar44 = lVar44 + 0x110;
      pvVar42 = (void *)(lVar13 + 0x42d0);
      do {
        uVar45 = (undefined4)lVar41;
        local_150 = lVar41 << 0x20;
        uVar11 = FUN__text__001a56dc(lVar40,&local_150);
        if ((uVar11 & 1) == 0) {
          local_150 = CONCAT44(uVar45,1);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cda64;
LAB__text__001cd9dc:
          local_150 = CONCAT44(uVar45,2);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cda94;
LAB__text__001cd9f0:
          local_150 = CONCAT44(uVar45,3);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cdac4;
LAB__text__001cda04:
          local_150 = CONCAT44(uVar45,4);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cdaf4;
LAB__text__001cda18:
          local_150 = CONCAT44(uVar45,5);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
        }
        else {
          memcpy(&local_150,pvVar42,200);
          FUN__text__0012c378(lVar44,auStack_b8);
          local_150 = CONCAT44(uVar45,1);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cd9dc;
LAB__text__001cda64:
          memcpy(&local_150,(void *)((long)pvVar42 + 1000),200);
          FUN__text__0012c378(lVar44,auStack_b8);
          local_150 = CONCAT44(uVar45,2);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cd9f0;
LAB__text__001cda94:
          memcpy(&local_150,(void *)((long)pvVar42 + 2000),200);
          FUN__text__0012c378(lVar44,auStack_b8);
          local_150 = CONCAT44(uVar45,3);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cda04;
LAB__text__001cdac4:
          memcpy(&local_150,(void *)((long)pvVar42 + 3000),200);
          FUN__text__0012c378(lVar44,auStack_b8);
          local_150 = CONCAT44(uVar45,4);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cda18;
LAB__text__001cdaf4:
          memcpy(&local_150,(void *)((long)pvVar42 + 4000),200);
          FUN__text__0012c378(lVar44,auStack_b8);
          local_150 = CONCAT44(uVar45,5);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
        }
        if ((uVar11 & 1) != 0) {
          memcpy(&local_150,(void *)((long)pvVar42 + 5000),200);
          FUN__text__0012c378(lVar44,auStack_b8);
        }
        lVar41 = lVar41 + 1;
        pvVar42 = (void *)((long)pvVar42 + 200);
      } while (lVar41 != 5);
      lVar41 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_170,_DAT_008a0610);
      uVar43 = FUN__text__003eec14(lVar41);
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = 0;
      local_140 = 0;
      local_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      iVar10 = FUN__text__003ef560(lVar41,auStack_170,uVar43,0);
      if ((iVar10 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar41 + 0x210),auStack_170,iVar10,uVar43,0,&local_150
                              ,0), pcVar7 = local_148, local_148 != (code *)0x0)) {
        local_140 = 0;
        local_138 = 0;
        local_150 = 0;
        local_148 = (code *)0x0;
        (*pcVar7)(&local_130);
      }
      if (local_158 != 0) {
        (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
      }
      *(int *)(param_1 + 0x5890) = *(int *)(param_1 + 0x5890) + 1;
    }
    else if (iVar10 == 2) {
      uVar43 = *(undefined8 *)(lVar20 + (ulong)bVar8 * 0x20 + 0x68);
      if ((*(char *)(*(long *)(lVar41 + 8) + 0x2a4) == '\0') &&
         (uVar11 = FUN__text__001a8720(lVar40), (uVar11 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x5821) = 1;
      }
      FUN__text__001a0844(*(undefined8 *)(param_1 + 0x38));
      FUN__text__001beac4(uVar43);
      FUN__text__001a7024(lVar40);
      uVar46 = *(uint *)(lVar40 + 0x1c8);
      local_120 = CONCAT44(local_120._4_4_,uVar46);
      uVar1 = *(undefined8 *)(lVar40 + 0x1b8);
      uVar3 = *(undefined8 *)(lVar40 + 0x1c0);
      *(undefined8 *)(lVar40 + 0x1bc) = 0;
      uVar2 = *(undefined8 *)(lVar40 + 0x1a8);
      uVar4 = *(undefined8 *)(lVar40 + 0x1b0);
      *(undefined8 *)(lVar40 + 0x1ac) = 0;
      *(undefined8 *)(lVar40 + 0x1b4) = 0;
      local_150 = *(undefined8 *)(lVar40 + 0x198);
      local_148 = *(code **)(lVar40 + 0x1a0);
      *(undefined8 *)(lVar40 + 0x1c2) = 0;
      local_130._3_1_ = (byte)((ulong)uVar1 >> 0x18);
      uVar9 = (uint)((ulong)uVar2 >> 0x20);
      local_138._1_1_ = (byte)((ulong)uVar4 >> 8);
      local_138._6_1_ = (byte)((ulong)uVar4 >> 0x30);
      uVar14 = (uint)local_138._1_1_;
      uVar12 = (uint)local_130._3_1_;
      uVar21 = (uint)local_138._6_1_;
      local_128._5_1_ = (byte)((ulong)uVar3 >> 0x28);
      local_128._0_1_ = (byte)uVar3;
      uVar22 = (uint)local_128._5_1_;
      uVar15 = (uint)(byte)local_128;
      local_138._7_1_ = (byte)((ulong)uVar4 >> 0x38);
      local_138._2_1_ = (byte)((ulong)uVar4 >> 0x10);
      uVar23 = (uint)local_138._7_1_;
      uVar16 = (uint)local_138._2_1_;
      local_130._4_1_ = (byte)((ulong)uVar1 >> 0x20);
      uVar24 = (uint)local_130._4_1_;
      local_128._1_1_ = (byte)((ulong)uVar3 >> 8);
      uVar25 = (uint)local_128._1_1_;
      local_140._6_1_ = (byte)((ulong)uVar2 >> 0x30);
      local_128._6_1_ = (byte)((ulong)uVar3 >> 0x30);
      uVar26 = (uint)local_140._6_1_;
      uVar17 = (uint)local_128._6_1_;
      local_138._3_1_ = (byte)((ulong)uVar4 >> 0x18);
      uVar27 = (uint)local_138._3_1_;
      local_130._0_1_ = (byte)uVar1;
      uVar28 = (uint)(byte)local_130;
      local_130._5_1_ = (byte)((ulong)uVar1 >> 0x28);
      uVar29 = (uint)local_130._5_1_;
      local_128._7_1_ = (byte)((ulong)uVar3 >> 0x38);
      local_128._2_1_ = (byte)((ulong)uVar3 >> 0x10);
      uVar30 = (uint)local_128._7_1_;
      uVar18 = (uint)local_128._2_1_;
      local_140._7_1_ = (byte)((ulong)uVar2 >> 0x38);
      uVar31 = (uint)local_140._7_1_;
      local_138._4_1_ = (byte)((ulong)uVar4 >> 0x20);
      uVar32 = (uint)local_138._4_1_;
      local_130._1_1_ = (byte)((ulong)uVar1 >> 8);
      uVar33 = (uint)local_130._1_1_;
      local_130._6_1_ = (byte)((ulong)uVar1 >> 0x30);
      uVar34 = (uint)local_130._6_1_;
      local_128._3_1_ = (byte)((ulong)uVar3 >> 0x18);
      uVar19 = (uint)local_128._3_1_;
      local_138._0_1_ = (byte)uVar4;
      uVar35 = (uint)(byte)local_138;
      local_138._5_1_ = (byte)((ulong)uVar4 >> 0x28);
      uVar36 = (uint)local_138._5_1_;
      local_130._2_1_ = (byte)((ulong)uVar1 >> 0x10);
      uVar37 = (uint)local_130._2_1_;
      local_130._7_1_ = (byte)((ulong)uVar1 >> 0x38);
      uVar38 = (uint)local_130._7_1_;
      local_128._4_1_ = (byte)((ulong)uVar3 >> 0x20);
      uVar39 = (uint)local_128._4_1_;
      local_140 = uVar2;
      local_138 = uVar4;
      local_130 = uVar1;
      local_128 = uVar3;
      if (uVar14 + (uVar9 & 0xff) + uVar21 + uVar12 + uVar15 + uVar22 + (uVar9 >> 8 & 0xff) +
          uVar16 + uVar23 + uVar24 + uVar25 + uVar17 + uVar26 + uVar27 + uVar28 + uVar29 +
          uVar18 + uVar30 + uVar31 + uVar32 + uVar33 + uVar34 +
          uVar19 + (uVar46 & 0xff) + uVar35 + uVar36 + uVar37 + uVar38 + uVar39 +
          (uVar46 >> 8 & 0xff) != 0) {
        FUN__text__001a8bec(&local_150,lVar41);
      }
      FUN__text__001be9b0(uVar43);
      FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68),0,0,0);
      FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88),0,0,0);
      lVar13 = *(long *)(param_1 + 0x38);
      lVar41 = *(long *)(lVar13 + 0xa8);
      if (*(long *)(lVar41 + 0x5788) != 0) {
        FUN__text__001d0690(lVar41,*(undefined4 *)(lVar41 + 0x5790),0);
        lVar13 = *(long *)(param_1 + 0x38);
      }
      lVar41 = *(long *)(lVar13 + 200);
      if (*(long *)(lVar41 + 0x5788) != 0) {
        FUN__text__001d0690(lVar41,*(undefined4 *)(lVar41 + 0x5790),0);
      }
      FUN__text__001ad490(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x30),1,
                          &local_80);
      FUN__text__001a191c(*(undefined8 *)(param_1 + 0x38),1,&local_80);
      FUN__text__001ad4a8(*(undefined8 *)(param_1 + 0x4d0));
      FUN__text__001a193c(*(undefined8 *)(param_1 + 0x38));
      *(undefined1 *)(param_1 + 0x588c) = 0;
      *(int *)(param_1 + 0x5890) = *(int *)(param_1 + 0x5890) + 1;
    }
    else if (iVar10 == 1) {
      lVar41 = 0;
      pvVar42 = (void *)(lVar13 + 0x42d0);
      uVar46 = 1;
      do {
        uVar45 = (undefined4)lVar41;
        local_150 = lVar41 << 0x20;
        uVar11 = FUN__text__001a56dc(lVar40,&local_150);
        if ((uVar11 & 1) == 0) {
          local_150 = CONCAT44(uVar45,1);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cd814;
LAB__text__001cd778:
          local_150 = CONCAT44(uVar45,2);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cd858;
LAB__text__001cd790:
          local_150 = CONCAT44(uVar45,3);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cd898;
LAB__text__001cd7a4:
          local_150 = CONCAT44(uVar45,4);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) != 0) goto LAB__text__001cd8d8;
LAB__text__001cd7b8:
          local_150 = CONCAT44(uVar45,5);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
        }
        else {
          memcpy(&local_150,pvVar42,200);
          if (*(long *)(lVar44 + 0x2d0) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = FUN__text__003c7ec0(*(long *)(lVar44 + 0x2d0),auStack_b8);
          }
          uVar46 = uVar9 & uVar46;
          local_150 = CONCAT44(uVar45,1);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cd778;
LAB__text__001cd814:
          memcpy(&local_150,(void *)((long)pvVar42 + 1000),200);
          if (*(long *)(lVar44 + 0x2d0) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = FUN__text__003c7ec0(*(long *)(lVar44 + 0x2d0),auStack_b8);
          }
          uVar46 = uVar9 & uVar46;
          local_150 = CONCAT44(uVar45,2);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cd790;
LAB__text__001cd858:
          memcpy(&local_150,(void *)((long)pvVar42 + 2000),200);
          if (*(long *)(lVar44 + 0x2d0) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = FUN__text__003c7ec0(*(long *)(lVar44 + 0x2d0),auStack_b8);
          }
          uVar46 = uVar9 & uVar46;
          local_150 = CONCAT44(uVar45,3);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cd7a4;
LAB__text__001cd898:
          memcpy(&local_150,(void *)((long)pvVar42 + 3000),200);
          if (*(long *)(lVar44 + 0x2d0) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = FUN__text__003c7ec0(*(long *)(lVar44 + 0x2d0),auStack_b8);
          }
          uVar46 = uVar9 & uVar46;
          local_150 = CONCAT44(uVar45,4);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
          if ((uVar11 & 1) == 0) goto LAB__text__001cd7b8;
LAB__text__001cd8d8:
          memcpy(&local_150,(void *)((long)pvVar42 + 4000),200);
          if (*(long *)(lVar44 + 0x2d0) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = FUN__text__003c7ec0(*(long *)(lVar44 + 0x2d0),auStack_b8);
          }
          uVar46 = uVar9 & uVar46;
          local_150 = CONCAT44(uVar45,5);
          uVar11 = FUN__text__001a56dc(lVar40,&local_150);
        }
        if ((uVar11 & 1) != 0) {
          memcpy(&local_150,(void *)((long)pvVar42 + 5000),200);
          if (*(long *)(lVar44 + 0x2d0) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = FUN__text__003c7ec0(*(long *)(lVar44 + 0x2d0),auStack_b8);
          }
          uVar46 = uVar9 & uVar46;
        }
        lVar41 = lVar41 + 1;
        pvVar42 = (void *)((long)pvVar42 + 200);
      } while (lVar41 != 5);
      if (uVar46 != 0) {
        *(int *)(param_1 + 0x5890) = *(int *)(param_1 + 0x5890) + 1;
      }
    }
  }
  return;
}


