/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dbcf0; name: FUN_.text__006dbcf0
 */


void FUN__text__006dbcf0(float param_1,float param_2,undefined8 param_3,long param_4,int *param_5,
                        long param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  iVar6 = *(int *)(param_4 + 0x70);
  if (2 < iVar6) {
    iVar7 = (iVar6 + -1) * (int)(float)param_5[4];
    uVar1 = iVar7 + iVar6;
    if (0 < (int)uVar1) {
      uVar11 = 0;
      iVar12 = 0;
      puVar13 = (undefined8 *)(param_6 + 0x50);
      lVar10 = *(long *)(*(long *)(param_4 + 0x58) + 0x30);
      fVar46 = 1.0 / (float)((int)(float)param_5[4] + 1);
      do {
        fVar47 = (float)(int)uVar11;
        fVar14 = fVar46 * fVar47;
        iVar4 = (int)fVar14;
        if (iVar12 < iVar4) {
          lVar10 = *(long *)(lVar10 + 0x30);
          iVar12 = iVar4;
        }
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        FUN__text__006dbf40(SUB41(fVar14 - (float)iVar4,0),&local_90,&local_a0,lVar10,iVar4,iVar6);
        uVar11 = uVar11 + 1;
        *(int *)(puVar13 + -9) = (int)uStack_88;
        puVar13[-10] = local_90;
        *puVar13 = local_90;
        *(int *)(puVar13 + 1) = (int)uStack_88;
        fVar14 = *(float *)(lVar10 + 0xc);
        *(float *)((long)puVar13 + -0x44) = fVar14;
        fVar36 = *(float *)(lVar10 + 0xc);
        *(int *)(puVar13 + -7) = (int)uStack_98;
        puVar13[-8] = local_a0;
        puVar13[2] = local_a0;
        *(float *)((long)puVar13 + -0x24) = fVar47;
        *(float *)((long)puVar13 + 0x2c) = fVar47;
        *(int *)(puVar13 + 3) = (int)uStack_98;
        fVar47 = (1.0 / (param_1 + -1.0 + (float)iVar7)) * fVar47;
        *(float *)((long)puVar13 + -0x44) = fVar14 * param_2;
        *(float *)((long)puVar13 + -0x34) = fVar47;
        *(float *)((long)puVar13 + 0x1c) = fVar47;
        *(float *)((long)puVar13 + 0xc) = -(fVar36 * param_2);
        puVar13 = puVar13 + 0x14;
      } while (uVar1 != uVar11);
      *(uint *)(param_4 + 0x78) = uVar1 * 2;
      if (*param_5 == 0) {
        return;
      }
      if ((int)uVar1 < 1) {
        return;
      }
      uVar11 = 0;
      iVar6 = 0;
      puVar5 = (undefined4 *)(param_6 + 0x78);
      lVar10 = *(long *)(*(long *)(param_4 + 0x58) + 0x30);
      do {
        fVar14 = fVar46 * (float)(int)uVar11;
        iVar7 = (int)fVar14;
        if (iVar6 < iVar7) {
          lVar10 = *(long *)(lVar10 + 0x30);
          iVar6 = iVar7;
        }
        uVar11 = uVar11 + 1;
        lVar8 = *(long *)(lVar10 + 0x30);
        fVar14 = fVar14 - (float)iVar7;
        puVar9 = puVar5 + -0x14;
        fVar39 = (float)*(undefined8 *)(lVar10 + 0x20);
        fVar40 = (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
        fVar41 = (float)*(undefined8 *)(lVar10 + 0x28);
        fVar42 = (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
        fVar39 = fVar39 + (*(float *)(lVar8 + 0x20) - fVar39) * fVar14;
        fVar40 = fVar40 + (*(float *)(lVar8 + 0x24) - fVar40) * fVar14;
        fVar41 = fVar41 + (*(float *)(lVar8 + 0x28) - fVar41) * fVar14;
        fVar42 = fVar42 + (*(float *)(lVar8 + 0x2c) - fVar42) * fVar14;
        fVar14 = fVar39 * fVar39;
        fVar47 = fVar40 * fVar40;
        uVar19 = (undefined1)((uint)fVar47 >> 8);
        uVar21 = (undefined1)((uint)fVar47 >> 0x10);
        uVar23 = (undefined1)((uint)fVar47 >> 0x18);
        fVar36 = fVar41 * fVar41;
        uVar25 = (undefined1)((uint)fVar36 >> 8);
        uVar29 = (undefined1)((uint)fVar36 >> 0x10);
        uVar31 = (undefined1)((uint)fVar36 >> 0x18);
        fVar42 = fVar42 * fVar42;
        uVar33 = (undefined1)((uint)fVar42 >> 8);
        uVar34 = (undefined1)((uint)fVar42 >> 0x10);
        uVar35 = (undefined1)((uint)fVar42 >> 0x18);
        auVar37[4] = SUB41(fVar47,0);
        auVar37._0_4_ = fVar14;
        auVar37[5] = uVar19;
        auVar37[6] = uVar21;
        auVar37[7] = uVar23;
        auVar37[8] = SUB41(fVar36,0);
        auVar37[9] = uVar25;
        auVar37[10] = uVar29;
        auVar37[0xb] = uVar31;
        auVar37[0xc] = SUB41(fVar42,0);
        auVar37[0xd] = uVar33;
        auVar37[0xe] = uVar34;
        auVar37[0xf] = uVar35;
        auVar44[4] = SUB41(fVar47,0);
        auVar44._0_4_ = fVar14;
        auVar44[5] = uVar19;
        auVar44[6] = uVar21;
        auVar44[7] = uVar23;
        auVar44[8] = SUB41(fVar36,0);
        auVar44[9] = uVar25;
        auVar44[10] = uVar29;
        auVar44[0xb] = uVar31;
        auVar44[0xc] = SUB41(fVar42,0);
        auVar44[0xd] = uVar33;
        auVar44[0xe] = uVar34;
        auVar44[0xf] = uVar35;
        auVar37 = NEON_ext(auVar37,auVar44,8,1);
        fVar14 = auVar37._0_4_ + fVar14;
        fVar47 = auVar37._4_4_ + fVar47;
        fVar36 = fVar14 + fVar47;
        fVar14 = fVar14 + fVar47;
        uVar19 = SUB41(fVar14,0);
        uVar21 = (undefined1)((uint)fVar14 >> 8);
        uVar23 = (undefined1)((uint)fVar14 >> 0x10);
        uVar25 = (undefined1)((uint)fVar14 >> 0x18);
        auVar2[4] = uVar19;
        auVar2._0_4_ = fVar36;
        auVar2[5] = uVar21;
        auVar2[6] = uVar23;
        auVar2[7] = uVar25;
        auVar2[8] = SUB41(fVar36,0);
        auVar2[9] = (char)((uint)fVar36 >> 8);
        auVar2[10] = (char)((uint)fVar36 >> 0x10);
        auVar2[0xb] = (char)((uint)fVar36 >> 0x18);
        auVar2[0xc] = uVar19;
        auVar2[0xd] = uVar21;
        auVar2[0xe] = uVar23;
        auVar2[0xf] = uVar25;
        auVar37 = NEON_frsqrte(auVar2,4);
        auVar43._0_4_ = auVar37._0_4_ * fVar36;
        auVar43._4_4_ = auVar37._4_4_ * fVar14;
        auVar43._8_4_ = auVar37._8_4_ * fVar36;
        uVar3 = (undefined2)(CONCAT15(uVar21,CONCAT14(uVar19,fVar36)) >> 0x20);
        auVar43._12_4_ = auVar37._12_4_ * (float)CONCAT13(uVar25,CONCAT12(uVar23,uVar3));
        auVar44 = NEON_frsqrts(auVar37,auVar43,4);
        auVar38._0_4_ = auVar37._0_4_ * auVar44._0_4_;
        auVar38._4_4_ = auVar37._4_4_ * auVar44._4_4_;
        auVar38._8_4_ = auVar37._8_4_ * auVar44._8_4_;
        auVar38._12_4_ = auVar37._12_4_ * auVar44._12_4_;
        auVar45._0_4_ = fVar36 * auVar38._0_4_;
        auVar45._4_4_ = fVar14 * auVar38._4_4_;
        auVar45._8_4_ = fVar36 * auVar38._8_4_;
        auVar45._12_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar23,uVar3)) * auVar38._12_4_;
        iVar7 = -(uint)(fVar36 == 0.0);
        iVar12 = -(uint)(fVar14 == 0.0);
        iVar4 = -(uint)(fVar36 == 0.0);
        auVar37 = NEON_frsqrts(auVar38,auVar45,4);
        fVar39 = fVar39 * auVar38._0_4_ * auVar37._0_4_;
        fVar40 = fVar40 * auVar38._4_4_ * auVar37._4_4_;
        fVar41 = fVar41 * auVar38._8_4_ * auVar37._8_4_;
        bVar15 = SUB41(fVar39,0) & ~(byte)iVar7;
        bVar16 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar7 >> 8);
        bVar17 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
        bVar18 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
        bVar20 = SUB41(fVar40,0) & ~(byte)iVar12;
        bVar22 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar12 >> 8);
        bVar24 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
        bVar26 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
        bVar27 = SUB41(fVar41,0) & ~(byte)iVar4;
        bVar28 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar4 >> 8);
        bVar30 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
        bVar32 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
        *(ulong *)(puVar5 + -0x16) =
             CONCAT17(bVar26,CONCAT16(bVar24,CONCAT15(bVar22,CONCAT14(bVar20,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))));
        *(ulong *)(puVar5 + -2) =
             CONCAT17(bVar26,CONCAT16(bVar24,CONCAT15(bVar22,CONCAT14(bVar20,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))));
        *puVar5 = CONCAT13(bVar32,CONCAT12(bVar30,CONCAT11(bVar28,bVar27)));
        puVar5 = puVar5 + 0x28;
        *puVar9 = CONCAT13(bVar32,CONCAT12(bVar30,CONCAT11(bVar28,bVar27)));
      } while (uVar1 != uVar11);
      return;
    }
  }
  *(undefined4 *)(param_4 + 0x78) = 0;
  return;
}


