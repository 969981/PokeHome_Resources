/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f1330; name: FUN_.text__005f1330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f1330(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  
  lVar20 = param_1[1];
  if ((*(long *)(lVar20 + 0x140) == 0) ||
     (puVar22 = *(undefined8 **)(*(long *)(lVar20 + 0x140) + 0x60), puVar22 == (undefined8 *)0x0)) {
LAB__text__005f1510:
    *(ulong *)(*(long *)(lVar20 + 0x148) + 0x138) =
         *(ulong *)(*(long *)(lVar20 + 0x148) + 0x138) | 1;
    return;
  }
  lVar20 = *param_1;
  plVar18 = (long *)(**(code **)*puVar22)(puVar22);
  plVar19 = (long *)FUN__text__0012d4b4();
  if (plVar19 != plVar18) {
    do {
      plVar18 = (long *)*plVar18;
    } while (plVar18 != plVar19 && plVar18 != (long *)0x0);
    if (plVar18 == (long *)0x0) {
      lVar20 = param_1[1];
      goto LAB__text__005f1510;
    }
  }
  lVar21 = puVar22[0x19];
  uVar6 = NEON_fmov(0x3f800000,4);
  fVar43 = (float)((ulong)uVar6 >> 0x20);
  pauVar1 = (undefined1 (*) [16])(lVar21 + 0x60);
  uVar34 = *(undefined8 *)(lVar21 + 0x68);
  uVar33 = *(undefined8 *)*pauVar1;
  pauVar4 = (undefined1 (*) [16])(lVar21 + 0x70);
  uVar36 = *(undefined8 *)(lVar21 + 0x78);
  uVar35 = *(undefined8 *)*pauVar4;
  pauVar2 = (undefined1 (*) [16])(lVar21 + 0x80);
  uVar6 = *(undefined8 *)(lVar21 + 0x88);
  uVar32 = (undefined4)((ulong)uVar6 >> 0x20);
  auVar11 = *pauVar2;
  auVar17 = *(undefined1 (*) [12])(lVar21 + 0x90);
  auVar16 = *(undefined1 (*) [12])(lVar21 + 0x90);
  auVar45 = NEON_ext(*pauVar4,*pauVar4,8,1);
  uVar49 = *_DAT_008a5c38;
  puVar22 = (undefined8 *)param_1[1];
  auVar42 = NEON_ext(*pauVar1,*pauVar1,8,1);
  fVar37 = *(float *)(*(long *)(lVar21 + 0x270) + 200);
  fVar38 = *(float *)(*(long *)(lVar21 + 0x270) + 0xcc);
  auVar47._12_4_ = uVar32;
  auVar47._0_12_ = *(undefined1 (*) [12])*pauVar2;
  auVar5._12_4_ = uVar32;
  auVar5._0_12_ = *(undefined1 (*) [12])*pauVar2;
  auVar47 = NEON_ext(auVar47,auVar5,8,1);
  uVar40 = *(undefined8 *)(lVar21 + 0x268);
  uVar39 = *(undefined8 *)(lVar21 + 0x260);
  puVar22[0x26] = 0x3f8000003f800000;
  *(undefined4 *)((long)puVar22 + 0x13c) = 0;
  fVar44 = auVar45._0_4_;
  *(undefined4 *)(puVar22 + 0x27) = uVar49;
  fVar41 = auVar42._0_4_;
  fVar46 = auVar47._0_4_;
  pauVar3 = (undefined1 (*) [12])(lVar21 + 0xa0);
  fVar52 = (float)*(undefined8 *)(lVar21 + 0xa8);
  fVar53 = (float)((ulong)*(undefined8 *)(lVar21 + 0xa8) >> 0x20);
  auVar12 = *pauVar3;
  auVar7 = *pauVar3;
  fVar50 = (float)*(undefined8 *)*pauVar3;
  fVar51 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  pauVar3 = (undefined1 (*) [12])(lVar21 + 0xb0);
  fVar56 = (float)*(undefined8 *)(lVar21 + 0xb8);
  fVar57 = (float)((ulong)*(undefined8 *)(lVar21 + 0xb8) >> 0x20);
  auVar14 = *pauVar3;
  auVar9 = *pauVar3;
  fVar54 = (float)*(undefined8 *)*pauVar3;
  fVar55 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  pauVar3 = (undefined1 (*) [12])(lVar21 + 0xc0);
  fVar60 = (float)*(undefined8 *)(lVar21 + 200);
  fVar61 = (float)((ulong)*(undefined8 *)(lVar21 + 200) >> 0x20);
  auVar13 = *pauVar3;
  auVar8 = *pauVar3;
  fVar58 = (float)*(undefined8 *)*pauVar3;
  fVar59 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  pauVar3 = (undefined1 (*) [12])(lVar21 + 0xd0);
  fVar64 = (float)*(undefined8 *)(lVar21 + 0xd8);
  fVar65 = (float)((ulong)*(undefined8 *)(lVar21 + 0xd8) >> 0x20);
  auVar15 = *pauVar3;
  auVar10 = *pauVar3;
  fVar62 = (float)*(undefined8 *)*pauVar3;
  fVar63 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  *(int *)(puVar22 + 0x21) = (int)uVar6;
  puVar22[0x20] = CONCAT44((int)uVar36,(int)uVar34);
  *(undefined4 *)((long)puVar22 + 0x10c) = 0;
  puVar22[0x22] = uVar39;
  *(undefined4 *)((long)puVar22 + 0x11c) = 0;
  *(float *)(puVar22 + 0x24) = fVar37;
  *(float *)((long)puVar22 + 0x124) = fVar38;
  *(int *)(puVar22 + 8) = auVar7._0_4_;
  *(int *)((long)puVar22 + 0x44) = auVar9._0_4_;
  *(int *)(puVar22 + 9) = auVar8._0_4_;
  *(int *)((long)puVar22 + 0x4c) = auVar10._0_4_;
  fVar23 = (float)uVar35;
  fVar25 = (float)((ulong)uVar35 >> 0x20);
  fVar27 = auVar16._0_4_;
  fVar29 = auVar16._4_4_;
  fVar31 = auVar17._8_4_;
  auVar42._12_4_ = auVar45._12_4_;
  auVar42._8_4_ = fVar61;
  auVar42._0_8_ = CONCAT44(fVar57,fVar53);
  auVar45._0_12_ = auVar42._0_12_;
  auVar45._12_4_ = fVar65;
  *(int *)(puVar22 + 0xc) = auVar12._8_4_;
  *(int *)((long)puVar22 + 100) = auVar14._8_4_;
  *(int *)(puVar22 + 0xd) = auVar13._8_4_;
  *(int *)((long)puVar22 + 0x6c) = auVar15._8_4_;
  puVar22[0xb] = CONCAT44(auVar10._4_4_,auVar8._4_4_);
  puVar22[10] = CONCAT44(auVar9._4_4_,auVar7._4_4_);
  fVar24 = (float)uVar33;
  fVar26 = (float)((ulong)uVar33 >> 0x20);
  fVar28 = auVar11._0_4_;
  fVar30 = auVar11._4_4_;
  auVar48._12_4_ = auVar47._12_4_;
  auVar48._0_12_ = ZEXT812(0);
  puVar22[0x1e] = 0;
  puVar22[0x1f] = 0x3f80000000000000;
  *(int *)(puVar22 + 0x23) = (int)uVar40;
  puVar22[0x1b] = (ulong)(uint)fVar44;
  puVar22[0x1a] = uVar35;
  puVar22[0x1d] = (ulong)(uint)fVar46;
  puVar22[0x1c] = auVar11._0_8_;
  puVar22[1] = CONCAT44(fVar27,fVar28);
  *puVar22 = CONCAT44(fVar23,fVar24);
  puVar22[3] = CONCAT44(fVar29,fVar30);
  puVar22[2] = CONCAT44(fVar25,fVar26);
  puVar22[5] = CONCAT44(fVar31,fVar46);
  puVar22[4] = CONCAT44(fVar44,fVar41);
  puVar22[7] = (ulong)(uint)fVar43 << 0x20;
  puVar22[6] = auVar48._8_8_ & 0xffffffff;
  puVar22[0xf] = auVar45._8_8_;
  puVar22[0xe] = auVar42._0_8_;
  puVar22[0x11] =
       CONCAT44(fVar27 * fVar50 + fVar29 * fVar54 + fVar31 * fVar58 + fVar43 * fVar62,
                fVar28 * fVar50 + fVar30 * fVar54 + fVar46 * fVar58 + fVar62 * 0.0);
  puVar22[0x10] =
       CONCAT44(fVar23 * fVar50 + fVar25 * fVar54 + fVar44 * fVar58 + fVar62 * 0.0,
                fVar24 * fVar50 + fVar26 * fVar54 + fVar41 * fVar58 + fVar62 * 0.0);
  *(float *)(puVar22 + 0x13) = fVar28 * fVar51 + fVar30 * fVar55 + fVar46 * fVar59 + fVar63 * 0.0;
  *(float *)((long)puVar22 + 0x9c) =
       fVar27 * fVar51 + fVar29 * fVar55 + fVar31 * fVar59 + fVar43 * fVar63;
  *(float *)(puVar22 + 0x12) = fVar24 * fVar51 + fVar26 * fVar55 + fVar41 * fVar59 + fVar63 * 0.0;
  *(float *)((long)puVar22 + 0x94) =
       fVar23 * fVar51 + fVar25 * fVar55 + fVar44 * fVar59 + fVar63 * 0.0;
  puVar22[0x15] =
       CONCAT44(fVar27 * fVar52 + fVar29 * fVar56 + fVar31 * fVar60 + fVar43 * fVar64,
                fVar28 * fVar52 + fVar30 * fVar56 + fVar46 * fVar60 + fVar64 * 0.0);
  puVar22[0x14] =
       CONCAT44(fVar23 * fVar52 + fVar25 * fVar56 + fVar44 * fVar60 + fVar64 * 0.0,
                fVar24 * fVar52 + fVar26 * fVar56 + fVar41 * fVar60 + fVar64 * 0.0);
  *(float *)(puVar22 + 0x25) = fVar37 * fVar38;
  *(float *)((long)puVar22 + 300) = fVar38 - fVar37;
  puVar22[0x17] =
       CONCAT44(fVar27 * fVar53 + fVar29 * fVar57 + fVar31 * fVar61 + fVar43 * fVar65,
                fVar28 * fVar53 + fVar30 * fVar57 + fVar46 * fVar61 + fVar65 * 0.0);
  puVar22[0x16] =
       CONCAT44(fVar23 * fVar53 + fVar25 * fVar57 + fVar44 * fVar61 + fVar65 * 0.0,
                fVar24 * fVar53 + fVar26 * fVar57 + fVar41 * fVar61 + fVar65 * 0.0);
  puVar22[0x19] = (ulong)(uint)fVar41;
  puVar22[0x18] = uVar33;
  FUN__text__005ec3a4(*(undefined8 *)(lVar20 + 0x238),*(undefined4 *)(param_1[1] + 0x150));
  return;
}


