/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dc220; name: FUN_.text__006dc220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006dc220(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  char cVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined2 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int *piVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  int iVar55;
  float fVar63;
  undefined1 auVar56 [12];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar64;
  int iVar65;
  int iVar66;
  undefined1 auVar62 [16];
  undefined4 uVar67;
  undefined4 uVar68;
  undefined8 uVar69;
  undefined1 auVar70 [12];
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined4 uVar82;
  undefined8 uVar83;
  undefined1 auVar85 [12];
  undefined8 uVar84;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  float fVar98;
  float fVar99;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar30 = *(long *)(param_2 + 0x10);
  lVar31 = *(long *)(lVar30 + 0x418);
  piVar28 = *(int **)(*(long *)(lVar30 + 0x238) + 0x338);
  lVar21 = FUN__text__006eb01c(lVar30 + 0x7a8,*(undefined4 *)(lVar31 + 0x38));
  param_3[0x1f] = *(float *)(param_2 + 0x18);
  fVar33 = *(float *)(param_2 + 0x1c);
  param_3[0x1e] = 0.0;
  param_3[0x20] = fVar33;
  lVar23 = *(long *)(param_2 + 0x10);
  puVar32 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_58 = puVar32[1];
  local_60 = *puVar32;
  FUN__text__006d9510(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                      *(undefined8 *)(lVar23 + 0x98),param_3,*(undefined8 *)(lVar23 + 0x238),
                      &local_60);
  FUN__text__006d9ff0(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                      *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 4,
                      *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x238),&local_60);
  puVar32 = *(undefined8 **)(param_3 + 0x16);
  uVar35 = *(undefined8 *)param_3;
  fVar33 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x238) + 0x18) + 0x360);
  *param_3 = fVar33 * (float)uVar35;
  param_3[1] = fVar33 * (float)((ulong)uVar35 >> 0x20);
  param_3[2] = fVar33 * (float)*(undefined8 *)(param_3 + 2);
  param_3[6] = fVar33 * param_3[6];
  fVar34 = param_3[0x22];
  param_3[4] = fVar33 * param_3[4];
  param_3[5] = fVar33 * param_3[5];
  param_3[0x22] = *(float *)(param_2 + 0x18);
  if ((0.0 < (float)(int)param_3[0x1f] - (float)(int)fVar34) || (param_3[0x1f] == 0.0)) {
    local_80 = 0;
    uStack_78 = 0;
    *(undefined8 *)(param_3 + 0x16) = puVar32[7];
    if (piVar28[1] == 0) {
      lVar23 = *(long *)(param_2 + 0x10);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
      uStack_58 = puVar29[1];
      local_60 = *puVar29;
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1e8) + lVar24);
      uStack_68 = puVar29[1];
      local_70 = *puVar29;
      uVar22 = FUN__text__006d8a40(*(undefined4 *)(param_2 + 0x1c),
                                   (char)*(undefined4 *)(param_2 + 0x18),
                                   *(undefined8 *)(lVar23 + 0x98),&local_80,
                                   *(undefined8 *)(lVar23 + 0x238),&local_70,&local_60);
      lVar23 = *(long *)(param_2 + 0x10);
      uVar84 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x148);
      uVar35 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x140);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar35 >> 0x20),
                          (float)local_80 * (float)uVar35);
      uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar84 >> 0x20),
                           (float)uStack_78 * (float)uVar84);
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1d0) + lVar24);
      pfVar3 = (float *)(*(long *)(lVar23 + 0x210) + lVar24);
      pfVar4 = (float *)(*(long *)(lVar23 + 0x218) + lVar24);
      pfVar5 = (float *)(*(long *)(lVar23 + 0x220) + lVar24);
      cVar6 = *(char *)(*(long *)(lVar23 + 0xa0) + 0x753);
      uVar35 = *puVar29;
      fVar33 = *(float *)(puVar29 + 1);
      fVar34 = (float)uVar35;
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      if (cVar6 == '\x02') {
        auVar59 = *(undefined1 (*) [16])(lVar23 + 0x370);
        auVar77 = NEON_ext(auVar59,auVar59,8,1);
        uVar35 = CONCAT44(*pfVar4,*pfVar3);
        uVar25 = (ulong)(uint)*pfVar5;
        fVar38 = pfVar3[2];
        fVar79 = pfVar4[2];
        fVar37 = pfVar3[1];
        fVar98 = pfVar4[1];
        auVar59._8_4_ = (float)auVar77._0_4_;
        auVar59._12_4_ = 0.0;
        fVar80 = pfVar5[2];
        fVar81 = 0.0;
        fVar99 = pfVar5[1];
        fVar63 = 0.0;
LAB__text__006dc628:
        fVar88 = (float)uVar35 * fVar34 + fVar37 * fVar36 + fVar38 * fVar33;
        fVar89 = (float)((ulong)uVar35 >> 0x20) * fVar34 + fVar98 * fVar36 + fVar79 * fVar33;
        fVar90 = (float)uVar25 * fVar34 + fVar99 * fVar36 + fVar80 * fVar33;
        fVar91 = (float)(uVar25 >> 0x20) * fVar34 + fVar63 * fVar36 + fVar81 * fVar33;
      }
      else {
        if (cVar6 == '\0') {
          uVar25 = *(ulong *)(lVar23 + 0x348);
          uVar35 = *(undefined8 *)(lVar23 + 0x340);
          fVar37 = *(float *)(lVar23 + 0x350);
          fVar98 = *(float *)(lVar23 + 0x354);
          fVar99 = *(float *)(lVar23 + 0x358);
          fVar63 = *(float *)(lVar23 + 0x35c);
          fVar38 = *(float *)(lVar23 + 0x360);
          fVar79 = *(float *)(lVar23 + 0x364);
          fVar80 = *(float *)(lVar23 + 0x368);
          fVar81 = *(float *)(lVar23 + 0x36c);
          auVar59 = *(undefined1 (*) [16])(lVar23 + 0x370);
          goto LAB__text__006dc628;
        }
        uVar35 = CONCAT44(*pfVar4,*pfVar3);
        uVar25 = (ulong)(uint)*pfVar5;
        fVar38 = pfVar3[2];
        fVar88 = pfVar3[3];
        fVar37 = pfVar3[1];
        fVar79 = pfVar4[2];
        fVar89 = pfVar4[3];
        fVar98 = pfVar4[1];
        fVar90 = pfVar5[3];
        fVar91 = 0.0;
        fVar80 = pfVar5[2];
        fVar81 = 0.0;
        fVar99 = pfVar5[1];
        fVar63 = 0.0;
        auVar59._0_4_ = *pfVar3 * fVar34 + fVar37 * fVar36 + fVar38 * fVar33;
        auVar59._4_4_ = *pfVar4 * fVar34 + fVar98 * fVar36 + fVar79 * fVar33;
        auVar59._8_4_ = *pfVar5 * fVar34 + fVar99 * fVar36 + fVar80 * fVar33;
        auVar59._12_4_ = fVar34 * 0.0 + fVar36 * 0.0 + fVar33 * 0.0;
      }
      fVar88 = auVar59._0_4_ + fVar88;
      uVar39 = SUB41(fVar88,0);
      uVar40 = (undefined1)((uint)fVar88 >> 8);
      uVar41 = (undefined1)((uint)fVar88 >> 0x10);
      uVar42 = (undefined1)((uint)fVar88 >> 0x18);
      fVar89 = auVar59._4_4_ + fVar89;
      uVar43 = SUB41(fVar89,0);
      uVar44 = (undefined1)((uint)fVar89 >> 8);
      uVar45 = (undefined1)((uint)fVar89 >> 0x10);
      uVar46 = (undefined1)((uint)fVar89 >> 0x18);
      fVar90 = auVar59._8_4_ + fVar90;
      uVar47 = SUB41(fVar90,0);
      uVar48 = (undefined1)((uint)fVar90 >> 8);
      uVar49 = (undefined1)((uint)fVar90 >> 0x10);
      uVar50 = (undefined1)((uint)fVar90 >> 0x18);
      fVar91 = auVar59._12_4_ + fVar91;
      uVar51 = SUB41(fVar91,0);
      uVar52 = (undefined1)((uint)fVar91 >> 8);
      uVar53 = (undefined1)((uint)fVar91 >> 0x10);
      uVar54 = (undefined1)((uint)fVar91 >> 0x18);
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1d8) + (long)*(int *)(param_2 + 0x20) * 0x10);
      uVar84 = *puVar29;
      fVar33 = *(float *)(puVar29 + 1);
      fVar34 = (float)uVar84;
      fVar36 = (float)((ulong)uVar84 >> 0x20);
      uVar35 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar34 + fVar98 * fVar36 + fVar79 * fVar33
                        + 0.0,(float)uVar35 * fVar34 + fVar37 * fVar36 + fVar38 * fVar33 + 0.0);
      uVar25 = CONCAT44((float)(uVar25 >> 0x20) * fVar34 + fVar63 * fVar36 + fVar81 * fVar33 + 0.0,
                        (float)uVar25 * fVar34 + fVar99 * fVar36 + fVar80 * fVar33 + 0.0);
    }
    else {
      lVar23 = *(long *)(param_2 + 0x10);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
      uStack_58 = puVar29[1];
      local_60 = *puVar29;
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1e8) + lVar24);
      uStack_68 = puVar29[1];
      local_70 = *puVar29;
      uVar22 = FUN__text__006d8a40(*(undefined4 *)(param_2 + 0x1c),
                                   (char)*(undefined4 *)(param_2 + 0x18),
                                   *(undefined8 *)(lVar23 + 0x98),&local_80,
                                   *(undefined8 *)(lVar23 + 0x238),&local_70,&local_60);
      lVar23 = *(long *)(param_2 + 0x10);
      uVar84 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x148);
      uVar35 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x140);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1d0) + lVar24);
      local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar35 >> 0x20),
                          (float)local_80 * (float)uVar35);
      uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar84 >> 0x20),
                           (float)uStack_78 * (float)uVar84);
      puVar1 = (undefined8 *)(*(long *)(lVar23 + 0x1d8) + lVar24);
      uVar35 = *puVar29;
      uVar39 = (undefined1)uVar35;
      uVar40 = (undefined1)((ulong)uVar35 >> 8);
      uVar41 = (undefined1)((ulong)uVar35 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar35 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar35 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar35 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar35 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar35 >> 0x38);
      uVar67 = *(undefined4 *)(puVar29 + 1);
      uVar47 = (undefined1)uVar67;
      uVar48 = (undefined1)((uint)uVar67 >> 8);
      uVar49 = (undefined1)((uint)uVar67 >> 0x10);
      uVar50 = (undefined1)((uint)uVar67 >> 0x18);
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar35 = *puVar1;
      uVar25 = (ulong)*(uint *)(puVar1 + 1);
    }
    *(ulong *)(param_3 + 0x12) =
         CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,CONCAT13(uVar50,CONCAT12(
                                                  uVar49,CONCAT11(uVar48,uVar47)))))));
    *(ulong *)(param_3 + 0x10) =
         CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,CONCAT12(
                                                  uVar41,CONCAT11(uVar40,uVar39)))))));
    *puVar32 = CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,
                                                  CONCAT12(uVar41,CONCAT11(uVar40,uVar39)))))));
    *(uint *)(puVar32 + 1) = CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
    puVar32[3] = uVar25;
    puVar32[2] = uVar35;
    *(undefined4 *)((long)puVar32 + 0xc) = (undefined4)local_80;
    uVar35 = _DAT_00724ba0;
    if (piVar28[1] == 0) {
      uVar25 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x358);
      puVar32[4] = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x350);
      puVar32[5] = uVar25 & 0xffffffff;
      puVar32[4] = puVar32[4];
      iVar55 = *piVar28;
    }
    else {
      puVar32[5] = uRam0000000000724ba8;
      puVar32[4] = uVar35;
      iVar55 = *piVar28;
    }
    if ((iVar55 - 1U < 2) &&
       (lVar23 = *(long *)(param_2 + 0x10), *(char *)(*(long *)(lVar23 + 0xa0) + 0x8b2) != '\0')) {
      if ((int)param_3[0x1c] < 1) {
        uVar35 = puVar32[2];
        uVar84 = puVar32[3];
      }
      else {
        uVar35 = *(undefined8 *)puVar32[6];
        fVar33 = 1.0 / *(float *)(lVar23 + 0x4c);
        uVar35 = CONCAT44(((float)((ulong)*puVar32 >> 0x20) - (float)((ulong)uVar35 >> 0x20)) *
                          fVar33 + 0.0,((float)*puVar32 - (float)uVar35) * fVar33 + 0.0);
        uVar84 = CONCAT44(fVar33 * 0.0 + 0.0,
                          ((float)puVar32[1] - (float)((undefined8 *)puVar32[6])[1]) * fVar33 + 0.0)
        ;
      }
      fVar33 = (float)uVar35 * (float)uVar35;
      fVar34 = (float)((ulong)uVar35 >> 0x20);
      fVar34 = fVar34 * fVar34;
      uVar39 = (undefined1)((uint)fVar34 >> 8);
      uVar40 = (undefined1)((uint)fVar34 >> 0x10);
      uVar41 = (undefined1)((uint)fVar34 >> 0x18);
      fVar36 = (float)uVar84 * (float)uVar84;
      uVar42 = (undefined1)((uint)fVar36 >> 8);
      uVar43 = (undefined1)((uint)fVar36 >> 0x10);
      uVar44 = (undefined1)((uint)fVar36 >> 0x18);
      fVar37 = (float)((ulong)uVar84 >> 0x20);
      fVar37 = fVar37 * fVar37;
      uVar45 = (undefined1)((uint)fVar37 >> 8);
      uVar46 = (undefined1)((uint)fVar37 >> 0x10);
      uVar47 = (undefined1)((uint)fVar37 >> 0x18);
      auVar77[4] = SUB41(fVar34,0);
      auVar77._0_4_ = fVar33;
      auVar77[5] = uVar39;
      auVar77[6] = uVar40;
      auVar77[7] = uVar41;
      auVar77[8] = SUB41(fVar36,0);
      auVar77[9] = uVar42;
      auVar77[10] = uVar43;
      auVar77[0xb] = uVar44;
      auVar77[0xc] = SUB41(fVar37,0);
      auVar77[0xd] = uVar45;
      auVar77[0xe] = uVar46;
      auVar77[0xf] = uVar47;
      auVar13[4] = SUB41(fVar34,0);
      auVar13._0_4_ = fVar33;
      auVar13[5] = uVar39;
      auVar13[6] = uVar40;
      auVar13[7] = uVar41;
      auVar13[8] = SUB41(fVar36,0);
      auVar13[9] = uVar42;
      auVar13[10] = uVar43;
      auVar13[0xb] = uVar44;
      auVar13[0xc] = SUB41(fVar37,0);
      auVar13[0xd] = uVar45;
      auVar13[0xe] = uVar46;
      auVar13[0xf] = uVar47;
      auVar59 = NEON_ext(auVar77,auVar13,8,1);
      fVar33 = auVar59._0_4_ + fVar33;
      fVar34 = auVar59._4_4_ + fVar34;
      fVar36 = fVar33 + fVar34;
      fVar33 = fVar33 + fVar34;
      uVar39 = SUB41(fVar36,0);
      uVar40 = (undefined1)((uint)fVar36 >> 8);
      uVar41 = (undefined1)((uint)fVar36 >> 0x10);
      uVar42 = (undefined1)((uint)fVar36 >> 0x18);
      uVar43 = SUB41(fVar33,0);
      uVar44 = (undefined1)((uint)fVar33 >> 8);
      uVar45 = (undefined1)((uint)fVar33 >> 0x10);
      uVar46 = (undefined1)((uint)fVar33 >> 0x18);
      if (fVar36 < 1e-05) {
        uVar84 = *(undefined8 *)(lVar23 + 0x368);
        uVar35 = *(undefined8 *)(lVar23 + 0x360);
        fVar33 = (float)uVar35 * (float)uVar35;
        fVar34 = (float)((ulong)uVar35 >> 0x20);
        fVar34 = fVar34 * fVar34;
        uVar39 = (undefined1)((uint)fVar34 >> 8);
        uVar40 = (undefined1)((uint)fVar34 >> 0x10);
        uVar41 = (undefined1)((uint)fVar34 >> 0x18);
        fVar36 = (float)uVar84 * (float)uVar84;
        uVar42 = (undefined1)((uint)fVar36 >> 8);
        uVar43 = (undefined1)((uint)fVar36 >> 0x10);
        uVar44 = (undefined1)((uint)fVar36 >> 0x18);
        fVar37 = (float)((ulong)uVar84 >> 0x20);
        fVar37 = fVar37 * fVar37;
        uVar45 = (undefined1)((uint)fVar37 >> 8);
        uVar46 = (undefined1)((uint)fVar37 >> 0x10);
        uVar47 = (undefined1)((uint)fVar37 >> 0x18);
        auVar14[4] = SUB41(fVar34,0);
        auVar14._0_4_ = fVar33;
        auVar14[5] = uVar39;
        auVar14[6] = uVar40;
        auVar14[7] = uVar41;
        auVar14[8] = SUB41(fVar36,0);
        auVar14[9] = uVar42;
        auVar14[10] = uVar43;
        auVar14[0xb] = uVar44;
        auVar14[0xc] = SUB41(fVar37,0);
        auVar14[0xd] = uVar45;
        auVar14[0xe] = uVar46;
        auVar14[0xf] = uVar47;
        auVar15[4] = SUB41(fVar34,0);
        auVar15._0_4_ = fVar33;
        auVar15[5] = uVar39;
        auVar15[6] = uVar40;
        auVar15[7] = uVar41;
        auVar15[8] = SUB41(fVar36,0);
        auVar15[9] = uVar42;
        auVar15[10] = uVar43;
        auVar15[0xb] = uVar44;
        auVar15[0xc] = SUB41(fVar37,0);
        auVar15[0xd] = uVar45;
        auVar15[0xe] = uVar46;
        auVar15[0xf] = uVar47;
        auVar59 = NEON_ext(auVar14,auVar15,8,1);
        fVar33 = auVar59._0_4_ + fVar33;
        fVar34 = auVar59._4_4_ + fVar34;
        fVar36 = fVar33 + fVar34;
        fVar33 = fVar33 + fVar34;
        uVar39 = SUB41(fVar36,0);
        uVar40 = (undefined1)((uint)fVar36 >> 8);
        uVar41 = (undefined1)((uint)fVar36 >> 0x10);
        uVar42 = (undefined1)((uint)fVar36 >> 0x18);
        uVar43 = SUB41(fVar33,0);
        uVar44 = (undefined1)((uint)fVar33 >> 8);
        uVar45 = (undefined1)((uint)fVar33 >> 0x10);
        uVar46 = (undefined1)((uint)fVar33 >> 0x18);
      }
      uVar7 = CONCAT11(uVar40,uVar39);
      uVar20 = CONCAT11(uVar44,uVar43);
      local_a0 = 0;
      local_98 = 0;
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      auVar16[1] = uVar40;
      auVar16[0] = uVar39;
      auVar16[2] = uVar41;
      auVar16[3] = uVar42;
      auVar16[4] = uVar43;
      auVar16[5] = uVar44;
      auVar16[6] = uVar45;
      auVar16[7] = uVar46;
      auVar16[8] = uVar39;
      auVar16[9] = uVar40;
      auVar16[10] = uVar41;
      auVar16[0xb] = uVar42;
      auVar16[0xc] = uVar43;
      auVar16[0xd] = uVar44;
      auVar16[0xe] = uVar45;
      auVar16[0xf] = uVar46;
      auVar59 = NEON_frsqrte(auVar16,4);
      auVar71._0_4_ =
           auVar59._0_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
      auVar71._4_4_ =
           auVar59._4_4_ * (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
      auVar71._8_4_ = auVar59._8_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7));
      auVar71._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar20));
      auVar77 = NEON_frsqrts(auVar59,auVar71,4);
      auVar57._0_4_ = auVar59._0_4_ * auVar77._0_4_;
      auVar57._4_4_ = auVar59._4_4_ * auVar77._4_4_;
      auVar57._8_4_ = auVar59._8_4_ * auVar77._8_4_;
      auVar57._12_4_ = auVar59._12_4_ * auVar77._12_4_;
      auVar72._0_4_ =
           (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * auVar57._0_4_;
      auVar72._4_4_ =
           (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * auVar57._4_4_;
      auVar72._8_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) * auVar57._8_4_;
      auVar72._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar20)) * auVar57._12_4_;
      iVar55 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) == 0.0);
      iVar64 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) == 0.0);
      iVar65 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) == 0.0);
      iVar66 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,uVar20)) == 0.0);
      auVar59 = NEON_frsqrts(auVar57,auVar72,4);
      fVar33 = (float)uVar35 * auVar57._0_4_ * auVar59._0_4_;
      fVar34 = (float)((ulong)uVar35 >> 0x20) * auVar57._4_4_ * auVar59._4_4_;
      fVar36 = (float)uVar84 * auVar57._8_4_ * auVar59._8_4_;
      fVar37 = (float)((ulong)uVar84 >> 0x20) * auVar57._12_4_ * auVar59._12_4_;
      local_90 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                          CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                   CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                            CONCAT14(SUB41(fVar34,0) & ~(byte)iVar64,
                                                     CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                              ~(byte)((uint)iVar55 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar33 >> 0x10)
                                                                       & ~(byte)((uint)iVar55 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar33
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar55
                                                                                       >> 8),
                                                                                SUB41(fVar33,0) &
                                                                                ~(byte)iVar55)))))))
      ;
      uStack_88 = CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                           CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                    CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                             CONCAT14(SUB41(fVar37,0) & ~(byte)iVar66,
                                                      CONCAT13((byte)((uint)fVar36 >> 0x18) &
                                                               ~(byte)((uint)iVar65 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar36 >> 0x10)
                                                                        & ~(byte)((uint)iVar65 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar36
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar65 >> 8),SUB41(fVar36,0) & ~(byte)iVar65))))))
                          );
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1f8) + lVar24);
      uStack_58 = puVar29[1];
      local_60 = *puVar29;
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
      uStack_68 = puVar29[1];
      local_70 = *puVar29;
      FUN__text__006da524(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(lVar23 + 0x98),&local_a0,
                          *(undefined8 *)(lVar23 + 0x238),&local_60,&local_70);
      puVar29 = puVar32 + 4;
      uVar22 = FUN__text__006d8840(local_98 & 0xffffffff,puVar29,puVar29,&local_90);
      fVar98 = (float)puVar32[4];
      fVar33 = fVar98 * fVar98;
      fVar99 = (float)((ulong)puVar32[4] >> 0x20);
      fVar34 = fVar99 * fVar99;
      uVar39 = (undefined1)((uint)fVar34 >> 8);
      uVar40 = (undefined1)((uint)fVar34 >> 0x10);
      uVar41 = (undefined1)((uint)fVar34 >> 0x18);
      fVar63 = (float)puVar32[5];
      fVar36 = fVar63 * fVar63;
      uVar42 = (undefined1)((uint)fVar36 >> 8);
      uVar43 = (undefined1)((uint)fVar36 >> 0x10);
      uVar44 = (undefined1)((uint)fVar36 >> 0x18);
      fVar38 = (float)((ulong)puVar32[5] >> 0x20);
      fVar37 = fVar38 * fVar38;
      uVar45 = (undefined1)((uint)fVar37 >> 8);
      uVar46 = (undefined1)((uint)fVar37 >> 0x10);
      uVar47 = (undefined1)((uint)fVar37 >> 0x18);
      auVar17[4] = SUB41(fVar34,0);
      auVar17._0_4_ = fVar33;
      auVar17[5] = uVar39;
      auVar17[6] = uVar40;
      auVar17[7] = uVar41;
      auVar17[8] = SUB41(fVar36,0);
      auVar17[9] = uVar42;
      auVar17[10] = uVar43;
      auVar17[0xb] = uVar44;
      auVar17[0xc] = SUB41(fVar37,0);
      auVar17[0xd] = uVar45;
      auVar17[0xe] = uVar46;
      auVar17[0xf] = uVar47;
      auVar18[4] = SUB41(fVar34,0);
      auVar18._0_4_ = fVar33;
      auVar18[5] = uVar39;
      auVar18[6] = uVar40;
      auVar18[7] = uVar41;
      auVar18[8] = SUB41(fVar36,0);
      auVar18[9] = uVar42;
      auVar18[10] = uVar43;
      auVar18[0xb] = uVar44;
      auVar18[0xc] = SUB41(fVar37,0);
      auVar18[0xd] = uVar45;
      auVar18[0xe] = uVar46;
      auVar18[0xf] = uVar47;
      auVar59 = NEON_ext(auVar17,auVar18,8,1);
      fVar33 = auVar59._0_4_ + fVar33;
      fVar34 = auVar59._4_4_ + fVar34;
      fVar36 = fVar33 + fVar34;
      fVar33 = fVar33 + fVar34;
      uVar39 = SUB41(fVar33,0);
      uVar40 = (undefined1)((uint)fVar33 >> 8);
      uVar41 = (undefined1)((uint)fVar33 >> 0x10);
      uVar42 = (undefined1)((uint)fVar33 >> 0x18);
      auVar19[4] = uVar39;
      auVar19._0_4_ = fVar36;
      auVar19[5] = uVar40;
      auVar19[6] = uVar41;
      auVar19[7] = uVar42;
      auVar19[8] = SUB41(fVar36,0);
      auVar19[9] = (char)((uint)fVar36 >> 8);
      auVar19[10] = (char)((uint)fVar36 >> 0x10);
      auVar19[0xb] = (char)((uint)fVar36 >> 0x18);
      auVar19[0xc] = uVar39;
      auVar19[0xd] = uVar40;
      auVar19[0xe] = uVar41;
      auVar19[0xf] = uVar42;
      auVar59 = NEON_frsqrte(auVar19,4);
      auVar73._0_4_ = auVar59._0_4_ * fVar36;
      auVar73._4_4_ = auVar59._4_4_ * fVar33;
      auVar73._8_4_ = auVar59._8_4_ * fVar36;
      uVar7 = (undefined2)(CONCAT15(uVar40,CONCAT14(uVar39,fVar36)) >> 0x20);
      auVar73._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7));
      auVar77 = NEON_frsqrts(auVar59,auVar73,4);
      auVar58._0_4_ = auVar59._0_4_ * auVar77._0_4_;
      auVar58._4_4_ = auVar59._4_4_ * auVar77._4_4_;
      auVar58._8_4_ = auVar59._8_4_ * auVar77._8_4_;
      auVar58._12_4_ = auVar59._12_4_ * auVar77._12_4_;
      auVar74._0_4_ = fVar36 * auVar58._0_4_;
      auVar74._4_4_ = fVar33 * auVar58._4_4_;
      auVar74._8_4_ = fVar36 * auVar58._8_4_;
      auVar74._12_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) * auVar58._12_4_;
      iVar55 = -(uint)(fVar36 == 0.0);
      iVar64 = -(uint)(fVar33 == 0.0);
      iVar65 = -(uint)(fVar36 == 0.0);
      iVar66 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) == 0.0);
      auVar59 = NEON_frsqrts(auVar58,auVar74,4);
      fVar98 = fVar98 * auVar58._0_4_ * auVar59._0_4_;
      fVar99 = fVar99 * auVar58._4_4_ * auVar59._4_4_;
      fVar63 = fVar63 * auVar58._8_4_ * auVar59._8_4_;
      fVar38 = fVar38 * auVar58._12_4_ * auVar59._12_4_;
      puVar32[5] = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                            CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                     CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar66 >> 8)
                                              ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar66,
                                                        CONCAT13((byte)((uint)fVar63 >> 0x18) &
                                                                 ~(byte)((uint)iVar65 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar63 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar65 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar63 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                                  SUB41(fVar63,0) & ~(byte)iVar65)))))));
      puVar32[4] = CONCAT17((byte)((uint)fVar99 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                            CONCAT16((byte)((uint)fVar99 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                     CONCAT15((byte)((uint)fVar99 >> 8) & ~(byte)((uint)iVar64 >> 8)
                                              ,CONCAT14(SUB41(fVar99,0) & ~(byte)iVar64,
                                                        CONCAT13((byte)((uint)fVar98 >> 0x18) &
                                                                 ~(byte)((uint)iVar55 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar98 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar55 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar98 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                                  SUB41(fVar98,0) & ~(byte)iVar55)))))));
      if (param_3[0x1c] == 1.4013e-45) {
        lVar23 = puVar32[6];
        *(undefined8 *)(lVar23 + 0x28) = puVar32[5];
        *(undefined8 *)(lVar23 + 0x20) = *puVar29;
      }
    }
    fVar33 = param_3[0x1c];
    if ((float)(int)fVar33 < (float)piVar28[5]) {
      fVar33 = (float)((int)fVar33 + 1);
      param_3[0x1c] = fVar33;
    }
    goto LAB__text__006dc8c4;
  }
  lVar23 = *(long *)(param_2 + 0x10);
  local_80 = 0;
  uStack_78 = 0;
  puVar29 = (undefined8 *)puVar32[6];
  lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
  puVar32 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
  uStack_58 = puVar32[1];
  local_60 = *puVar32;
  puVar32 = (undefined8 *)(*(long *)(lVar23 + 0x1e8) + lVar24);
  uStack_68 = puVar32[1];
  local_70 = *puVar32;
  uVar22 = FUN__text__006d8a40(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18)
                               ,*(undefined8 *)(lVar23 + 0x98),&local_80,
                               *(undefined8 *)(lVar23 + 0x238),&local_70,&local_60);
  lVar23 = *(long *)(param_2 + 0x10);
  uVar84 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x148);
  uVar35 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x140);
  fVar33 = (float)local_80 * (float)uVar35;
  local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar35 >> 0x20),fVar33);
  uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar84 >> 0x20),
                       (float)uStack_78 * (float)uVar84);
  puVar32 = (undefined8 *)(*(long *)(lVar23 + 0x1d0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uVar84 = puVar32[1];
  uVar35 = *puVar32;
  if (piVar28[1] == 0) {
    lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
    puVar27 = (undefined4 *)(*(long *)(lVar23 + 0x210) + lVar24);
    puVar26 = (undefined4 *)(*(long *)(lVar23 + 0x218) + lVar24);
    puVar2 = (undefined4 *)(*(long *)(lVar23 + 0x220) + lVar24);
    cVar6 = *(char *)(*(long *)(lVar23 + 0xa0) + 0x753);
    if (cVar6 == '\x02') {
      auVar59 = *(undefined1 (*) [16])(lVar23 + 0x370);
      auVar77 = NEON_ext(auVar59,auVar59,8,1);
      uVar67 = *puVar27;
      uVar39 = (undefined1)uVar67;
      uVar40 = (undefined1)((uint)uVar67 >> 8);
      uVar41 = (undefined1)((uint)uVar67 >> 0x10);
      uVar42 = (undefined1)((uint)uVar67 >> 0x18);
      uVar67 = *puVar26;
      uVar43 = (undefined1)uVar67;
      uVar44 = (undefined1)((uint)uVar67 >> 8);
      uVar45 = (undefined1)((uint)uVar67 >> 0x10);
      uVar46 = (undefined1)((uint)uVar67 >> 0x18);
      uVar67 = *puVar2;
      uVar47 = (undefined1)uVar67;
      uVar48 = (undefined1)((uint)uVar67 >> 8);
      uVar49 = (undefined1)((uint)uVar67 >> 0x10);
      uVar50 = (undefined1)((uint)uVar67 >> 0x18);
      uVar83 = CONCAT44(puVar26[2],puVar27[2]);
      uVar69 = CONCAT44(puVar26[1],puVar27[1]);
      auVar56._8_4_ = auVar77._0_4_;
      auVar56._0_8_ = auVar59._0_8_;
LAB__text__006dc5a0:
      auVar85._8_4_ = puVar2[2];
      auVar85._0_8_ = uVar83;
      auVar70._8_4_ = puVar2[1];
      auVar70._0_8_ = uVar69;
    }
    else {
      if (cVar6 != '\0') {
        uVar67 = *puVar27;
        uVar39 = (undefined1)uVar67;
        uVar40 = (undefined1)((uint)uVar67 >> 8);
        uVar41 = (undefined1)((uint)uVar67 >> 0x10);
        uVar42 = (undefined1)((uint)uVar67 >> 0x18);
        uVar67 = *puVar26;
        uVar43 = (undefined1)uVar67;
        uVar44 = (undefined1)((uint)uVar67 >> 8);
        uVar45 = (undefined1)((uint)uVar67 >> 0x10);
        uVar46 = (undefined1)((uint)uVar67 >> 0x18);
        uVar67 = *puVar2;
        uVar47 = (undefined1)uVar67;
        uVar48 = (undefined1)((uint)uVar67 >> 8);
        uVar49 = (undefined1)((uint)uVar67 >> 0x10);
        uVar50 = (undefined1)((uint)uVar67 >> 0x18);
        auVar56._0_4_ = puVar27[3];
        uVar83 = CONCAT44(puVar26[2],puVar27[2]);
        auVar56._4_4_ = puVar26[3];
        uVar69 = CONCAT44(puVar26[1],puVar27[1]);
        auVar56._8_4_ = puVar2[3];
        goto LAB__text__006dc5a0;
      }
      uVar69 = *(undefined8 *)(lVar23 + 0x348);
      uVar47 = (undefined1)uVar69;
      uVar48 = (undefined1)((ulong)uVar69 >> 8);
      uVar49 = (undefined1)((ulong)uVar69 >> 0x10);
      uVar50 = (undefined1)((ulong)uVar69 >> 0x18);
      uVar69 = *(undefined8 *)(lVar23 + 0x340);
      uVar39 = (undefined1)uVar69;
      uVar40 = (undefined1)((ulong)uVar69 >> 8);
      uVar41 = (undefined1)((ulong)uVar69 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar69 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar69 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar69 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar69 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar69 >> 0x38);
      auVar70 = SUB1612(*(undefined1 (*) [16])(lVar23 + 0x350),0);
      auVar85 = SUB1612(*(undefined1 (*) [16])(lVar23 + 0x360),0);
      auVar56 = SUB1612(*(undefined1 (*) [16])(lVar23 + 0x370),0);
    }
    fVar34 = (float)uVar35;
    fVar37 = (float)((ulong)uVar35 >> 0x20);
    fVar36 = (float)uVar84;
    *puVar29 = CONCAT44(auVar56._4_4_ +
                        (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * fVar34 +
                        auVar70._4_4_ * fVar37 + auVar85._4_4_ * fVar36,
                        auVar56._0_4_ +
                        (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * fVar34 +
                        auVar70._0_4_ * fVar37 + auVar85._0_4_ * fVar36);
    *(float *)(puVar29 + 1) =
         auVar56._8_4_ +
         (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) * fVar34 +
         auVar70._8_4_ * fVar37 + auVar85._8_4_ * fVar36;
  }
  else {
    puVar29[1] = uVar84;
    *puVar29 = uVar35;
  }
  *(float *)((long)puVar29 + 0xc) = fVar33;
  uVar35 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x350);
  puVar29[5] = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x358);
  puVar29[4] = uVar35;
  fVar33 = param_3[0x1c];
LAB__text__006dc8c4:
  if (1 < (int)fVar33) {
    puVar32 = *(undefined8 **)(*(long *)(param_3 + 0x16) + 0x30);
    puVar29 = (undefined8 *)puVar32[6];
    fVar34 = (float)*puVar32 - (float)*puVar29;
    fVar36 = (float)((ulong)*puVar32 >> 0x20) - (float)((ulong)*puVar29 >> 0x20);
    uVar35 = CONCAT44(fVar36,fVar34);
    fVar37 = (float)puVar32[1] - (float)puVar29[1];
    fVar33 = (float)piVar28[10];
    uVar25 = (ulong)(uint)fVar37;
    if (fVar33 <= 0.0) {
      puVar32[3] = uVar25;
      puVar32[2] = uVar35;
      fVar33 = param_3[0x1c];
    }
    else {
      if (2.0 <= param_3[0x1f]) {
        auVar60._0_4_ = fVar34 * fVar34;
        auVar60._4_4_ = fVar36 * fVar36;
        auVar60._8_4_ = fVar37 * fVar37;
        auVar60._12_4_ = 0;
        auVar59 = NEON_ext(auVar60,auVar60,8,1);
        fVar99 = auVar59._0_4_ + auVar60._0_4_;
        fVar63 = auVar59._4_4_ + auVar60._4_4_;
        fVar98 = fVar99 + fVar63;
        fVar99 = fVar99 + fVar63;
        if (0.0 < fVar98) {
          auVar61._8_8_ = CONCAT44(fVar99,fVar98);
          auVar61._0_8_ = CONCAT44(fVar99,fVar98);
          auVar59 = NEON_frsqrte(auVar61,4);
          auVar86._0_4_ = fVar98 * auVar59._0_4_;
          auVar86._4_4_ = fVar99 * auVar59._4_4_;
          auVar86._8_4_ = fVar98 * auVar59._8_4_;
          auVar86._12_4_ = fVar99 * auVar59._12_4_;
          auVar77 = NEON_frsqrts(auVar59,auVar86,4);
          auVar75._0_4_ = auVar59._0_4_ * auVar77._0_4_;
          auVar75._4_4_ = auVar59._4_4_ * auVar77._4_4_;
          auVar75._8_4_ = auVar59._8_4_ * auVar77._8_4_;
          auVar75._12_4_ = auVar59._12_4_ * auVar77._12_4_;
          auVar87._0_4_ = fVar98 * auVar75._0_4_;
          auVar87._4_4_ = fVar99 * auVar75._4_4_;
          auVar87._8_4_ = fVar98 * auVar75._8_4_;
          auVar87._12_4_ = fVar99 * auVar75._12_4_;
          iVar55 = -(uint)(fVar98 == 0.0);
          iVar64 = -(uint)(fVar99 == 0.0);
          iVar65 = -(uint)(fVar98 == 0.0);
          iVar66 = -(uint)(fVar99 == 0.0);
          auVar59 = NEON_frsqrts(auVar75,auVar87,4);
          fVar34 = fVar34 * auVar75._0_4_ * auVar59._0_4_;
          fVar36 = fVar36 * auVar75._4_4_ * auVar59._4_4_;
          fVar37 = fVar37 * auVar75._8_4_ * auVar59._8_4_;
          fVar98 = auVar75._12_4_ * auVar59._12_4_ * 0.0;
          uVar35 = CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                            CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                     CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar64 >> 8)
                                              ,CONCAT14(SUB41(fVar36,0) & ~(byte)iVar64,
                                                        CONCAT13((byte)((uint)fVar34 >> 0x18) &
                                                                 ~(byte)((uint)iVar55 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar34 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar55 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar34 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                                  SUB41(fVar34,0) & ~(byte)iVar55)))))));
          uVar25 = CONCAT17((byte)((uint)fVar98 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                            CONCAT16((byte)((uint)fVar98 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                     CONCAT15((byte)((uint)fVar98 >> 8) & ~(byte)((uint)iVar66 >> 8)
                                              ,CONCAT14(SUB41(fVar98,0) & ~(byte)iVar66,
                                                        CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                                 ~(byte)((uint)iVar65 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar37 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar65 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar37 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                                  SUB41(fVar37,0) & ~(byte)iVar65)))))));
        }
        fVar34 = param_3[0xc] + ((float)uVar35 - param_3[0xc]) * fVar33;
        fVar36 = param_3[0xd] + ((float)((ulong)uVar35 >> 0x20) - param_3[0xd]) * fVar33;
        uVar35 = CONCAT44(fVar36,fVar34);
        fVar37 = param_3[0xe] + ((float)uVar25 - param_3[0xe]) * fVar33;
        fVar33 = param_3[0xf] + ((float)(uVar25 >> 0x20) - param_3[0xf]) * fVar33;
        uVar25 = CONCAT44(fVar33,fVar37);
        fVar34 = fVar34 * fVar34;
        fVar36 = fVar36 * fVar36;
        uVar39 = (undefined1)((uint)fVar36 >> 8);
        uVar40 = (undefined1)((uint)fVar36 >> 0x10);
        uVar41 = (undefined1)((uint)fVar36 >> 0x18);
        fVar37 = fVar37 * fVar37;
        uVar42 = (undefined1)((uint)fVar37 >> 8);
        uVar43 = (undefined1)((uint)fVar37 >> 0x10);
        uVar44 = (undefined1)((uint)fVar37 >> 0x18);
        fVar33 = fVar33 * fVar33;
        uVar45 = (undefined1)((uint)fVar33 >> 8);
        uVar46 = (undefined1)((uint)fVar33 >> 0x10);
        uVar47 = (undefined1)((uint)fVar33 >> 0x18);
        auVar11[4] = SUB41(fVar36,0);
        auVar11._0_4_ = fVar34;
        auVar11[5] = uVar39;
        auVar11[6] = uVar40;
        auVar11[7] = uVar41;
        auVar11[8] = SUB41(fVar37,0);
        auVar11[9] = uVar42;
        auVar11[10] = uVar43;
        auVar11[0xb] = uVar44;
        auVar11[0xc] = SUB41(fVar33,0);
        auVar11[0xd] = uVar45;
        auVar11[0xe] = uVar46;
        auVar11[0xf] = uVar47;
        auVar12[4] = SUB41(fVar36,0);
        auVar12._0_4_ = fVar34;
        auVar12[5] = uVar39;
        auVar12[6] = uVar40;
        auVar12[7] = uVar41;
        auVar12[8] = SUB41(fVar37,0);
        auVar12[9] = uVar42;
        auVar12[10] = uVar43;
        auVar12[0xb] = uVar44;
        auVar12[0xc] = SUB41(fVar33,0);
        auVar12[0xd] = uVar45;
        auVar12[0xe] = uVar46;
        auVar12[0xf] = uVar47;
        auVar59 = NEON_ext(auVar11,auVar12,8,1);
        fVar34 = auVar59._0_4_ + fVar34;
        fVar36 = auVar59._4_4_ + fVar36;
        fVar33 = fVar34 + fVar36;
        fVar34 = fVar34 + fVar36;
        uVar39 = SUB41(fVar33,0);
        uVar40 = (undefined1)((uint)fVar33 >> 8);
        uVar41 = (undefined1)((uint)fVar33 >> 0x10);
        uVar42 = (undefined1)((uint)fVar33 >> 0x18);
        uVar43 = SUB41(fVar34,0);
        uVar44 = (undefined1)((uint)fVar34 >> 8);
        uVar45 = (undefined1)((uint)fVar34 >> 0x10);
        uVar46 = (undefined1)((uint)fVar34 >> 0x18);
      }
      else {
        fVar34 = fVar34 * fVar34;
        fVar36 = fVar36 * fVar36;
        uVar39 = (undefined1)((uint)fVar36 >> 8);
        uVar40 = (undefined1)((uint)fVar36 >> 0x10);
        uVar41 = (undefined1)((uint)fVar36 >> 0x18);
        fVar37 = fVar37 * fVar37;
        uVar42 = (undefined1)((uint)fVar37 >> 8);
        uVar43 = (undefined1)((uint)fVar37 >> 0x10);
        uVar44 = (undefined1)((uint)fVar37 >> 0x18);
        auVar8[4] = SUB41(fVar36,0);
        auVar8._0_4_ = fVar34;
        auVar8[5] = uVar39;
        auVar8[6] = uVar40;
        auVar8[7] = uVar41;
        auVar8[8] = SUB41(fVar37,0);
        auVar8[9] = uVar42;
        auVar8[10] = uVar43;
        auVar8[0xb] = uVar44;
        auVar8._12_4_ = 0;
        auVar9[4] = SUB41(fVar36,0);
        auVar9._0_4_ = fVar34;
        auVar9[5] = uVar39;
        auVar9[6] = uVar40;
        auVar9[7] = uVar41;
        auVar9[8] = SUB41(fVar37,0);
        auVar9[9] = uVar42;
        auVar9[10] = uVar43;
        auVar9[0xb] = uVar44;
        auVar9._12_4_ = 0;
        auVar59 = NEON_ext(auVar8,auVar9,8,1);
        fVar34 = auVar59._0_4_ + fVar34;
        fVar36 = auVar59._4_4_ + fVar36;
        fVar33 = fVar34 + fVar36;
        fVar34 = fVar34 + fVar36;
        uVar39 = SUB41(fVar33,0);
        uVar40 = (undefined1)((uint)fVar33 >> 8);
        uVar41 = (undefined1)((uint)fVar33 >> 0x10);
        uVar42 = (undefined1)((uint)fVar33 >> 0x18);
        uVar43 = SUB41(fVar34,0);
        uVar44 = (undefined1)((uint)fVar34 >> 8);
        uVar45 = (undefined1)((uint)fVar34 >> 0x10);
        uVar46 = (undefined1)((uint)fVar34 >> 0x18);
      }
      if (0.0 < fVar33) {
        uVar7 = CONCAT11(uVar40,uVar39);
        uVar20 = CONCAT11(uVar44,uVar43);
        auVar10[1] = uVar40;
        auVar10[0] = uVar39;
        auVar10[2] = uVar41;
        auVar10[3] = uVar42;
        auVar10[4] = uVar43;
        auVar10[5] = uVar44;
        auVar10[6] = uVar45;
        auVar10[7] = uVar46;
        auVar10[8] = uVar39;
        auVar10[9] = uVar40;
        auVar10[10] = uVar41;
        auVar10[0xb] = uVar42;
        auVar10[0xc] = uVar43;
        auVar10[0xd] = uVar44;
        auVar10[0xe] = uVar45;
        auVar10[0xf] = uVar46;
        auVar59 = NEON_frsqrte(auVar10,4);
        auVar76._0_4_ =
             (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * auVar59._0_4_;
        auVar76._4_4_ =
             (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * auVar59._4_4_;
        auVar76._8_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) * auVar59._8_4_;
        auVar76._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar20)) * auVar59._12_4_;
        auVar77 = NEON_frsqrts(auVar59,auVar76,4);
        auVar62._0_4_ = auVar59._0_4_ * auVar77._0_4_;
        auVar62._4_4_ = auVar59._4_4_ * auVar77._4_4_;
        auVar62._8_4_ = auVar59._8_4_ * auVar77._8_4_;
        auVar62._12_4_ = auVar59._12_4_ * auVar77._12_4_;
        auVar78._0_4_ =
             (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * auVar62._0_4_;
        auVar78._4_4_ =
             (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * auVar62._4_4_;
        auVar78._8_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) * auVar62._8_4_;
        auVar78._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar20)) * auVar62._12_4_;
        iVar55 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) == 0.0);
        iVar64 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) == 0.0);
        iVar65 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar7)) == 0.0);
        iVar66 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,uVar20)) == 0.0);
        auVar59 = NEON_frsqrts(auVar62,auVar78,4);
        fVar33 = (float)uVar35 * auVar62._0_4_ * auVar59._0_4_;
        fVar34 = (float)((ulong)uVar35 >> 0x20) * auVar62._4_4_ * auVar59._4_4_;
        fVar36 = (float)uVar25 * auVar62._8_4_ * auVar59._8_4_;
        fVar37 = (float)(uVar25 >> 0x20) * auVar62._12_4_ * auVar59._12_4_;
        uVar35 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                          CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                   CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                            CONCAT14(SUB41(fVar34,0) & ~(byte)iVar64,
                                                     CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                              ~(byte)((uint)iVar55 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar33 >> 0x10)
                                                                       & ~(byte)((uint)iVar55 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar33
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar55
                                                                                       >> 8),
                                                                                SUB41(fVar33,0) &
                                                                                ~(byte)iVar55)))))))
        ;
        uVar25 = CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                          CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                   CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                            CONCAT14(SUB41(fVar37,0) & ~(byte)iVar66,
                                                     CONCAT13((byte)((uint)fVar36 >> 0x18) &
                                                              ~(byte)((uint)iVar65 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar36 >> 0x10)
                                                                       & ~(byte)((uint)iVar65 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar36
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar65
                                                                                       >> 8),
                                                                                SUB41(fVar36,0) &
                                                                                ~(byte)iVar65)))))))
        ;
      }
      *(ulong *)(param_3 + 0xe) = uVar25;
      *(undefined8 *)(param_3 + 0xc) = uVar35;
      puVar32[3] = *(undefined8 *)(param_3 + 0xe);
      puVar32[2] = *(undefined8 *)(param_3 + 0xc);
      fVar33 = param_3[0x1c];
    }
    if (fVar33 == 2.8026e-45) {
      puVar29[3] = puVar32[3];
      puVar29[2] = puVar32[2];
    }
    if (piVar28[3] == 1) {
      fVar33 = (float)piVar28[5];
    }
    else {
      fVar33 = 1.0;
      if (piVar28[3] == 0) {
        fVar33 = (float)(int)param_3[0x1c];
      }
    }
    lVar31 = (long)*(int *)(lVar31 + 0x20) * (long)(int)param_3[0x1d];
    lVar23 = *(long *)(*(long *)(lVar30 + 0x238) + 0x10);
    uVar67 = *(undefined4 *)(lVar30 + 0x70);
    fVar34 = 1.0;
    if (*(char *)(lVar23 + 0x75c) != '\0') {
      fVar34 = *(float *)(lVar30 + 0x74);
    }
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0x80;
    uVar42 = 0x3f;
    if (*(char *)(lVar23 + 0x756) != '\0') {
      uVar39 = (undefined1)uVar67;
      uVar40 = (undefined1)((uint)uVar67 >> 8);
      uVar41 = (undefined1)((uint)uVar67 >> 0x10);
      uVar42 = (undefined1)((uint)uVar67 >> 0x18);
    }
    fVar34 = fVar34 * (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
    if ((float)piVar28[4] == 0.0) {
      fVar36 = param_3[0x1c];
      if ((int)fVar36 < 3) {
        param_3[0x1e] = 0.0;
      }
      else {
        puVar26 = *(undefined4 **)(param_3 + 0x16);
        uVar25 = 0;
        puVar27 = (undefined4 *)(lVar21 + lVar31 * 0x50 + 0x50);
        do {
          fVar98 = (float)(int)uVar25;
          uVar25 = uVar25 + 1;
          puVar26 = *(undefined4 **)(puVar26 + 0xc);
          fVar99 = (1.0 / (fVar33 + -1.0)) * fVar98;
          uVar82 = puVar26[2];
          fVar37 = (float)puVar26[3];
          uVar94 = puVar26[4];
          uVar67 = *puVar26;
          uVar68 = puVar26[1];
          uVar97 = puVar26[10];
          uVar93 = puVar26[5];
          uVar92 = puVar26[6];
          uVar95 = puVar26[8];
          uVar96 = puVar26[9];
          *(undefined8 *)(puVar27 + -8) = 0;
          *(undefined8 *)(puVar27 + -6) = 0;
          puVar27[-0x14] = uVar67;
          puVar27[-0x13] = uVar68;
          *(undefined8 *)(puVar27 + -4) = 0;
          *(undefined8 *)(puVar27 + -2) = 0;
          puVar27[-0x10] = uVar94;
          puVar27[-0xf] = uVar93;
          puVar27[-0xc] = uVar95;
          puVar27[-0xb] = uVar96;
          puVar27[-10] = uVar97;
          puVar27[-9] = fVar98;
          *puVar27 = uVar67;
          puVar27[1] = uVar68;
          puVar27[4] = uVar94;
          puVar27[5] = uVar93;
          puVar27[8] = uVar95;
          puVar27[9] = uVar96;
          puVar27[10] = uVar97;
          puVar27[0xb] = fVar98;
          puVar27[-0x12] = uVar82;
          puVar27[-0x11] = fVar34 * fVar37;
          puVar27[2] = uVar82;
          puVar27[3] = -(fVar37 * fVar34);
          puVar27[-0xe] = uVar92;
          puVar27[-0xd] = fVar99;
          puVar27[6] = uVar92;
          puVar27[7] = fVar99;
          *(undefined8 *)(puVar27 + 0x10) = 0;
          *(undefined8 *)(puVar27 + 0x12) = 0;
          *(undefined8 *)(puVar27 + 0xc) = 0;
          *(undefined8 *)(puVar27 + 0xe) = 0;
          puVar27 = puVar27 + 0x28;
        } while ((uint)fVar36 != uVar25);
        param_3[0x1e] = (float)((int)fVar36 << 1);
      }
    }
    else {
      FUN__text__006dbcf0(uVar22,param_3,piVar28,lVar21 + lVar31 * 0x50);
    }
  }
  FUN__text__006eb028(*(long *)(param_2 + 0x10) + 0x7a8);
  return;
}


