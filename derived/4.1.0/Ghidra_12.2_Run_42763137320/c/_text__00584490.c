/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00584490; name: FUN_.text__00584490
 */


void FUN__text__00584490(long param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_14;
  
  lVar5 = *(long *)(param_1 + 0x150);
  fVar45 = *(float *)(lVar5 + 0xc);
  fVar42 = *(float *)(lVar5 + 0x10);
  fVar13 = exp2f(*(float *)(lVar5 + 8) * 0.1660964);
  local_14 = *(float *)(param_1 + 0x16c);
  *(float *)(param_1 + 0x168) = fVar13;
  fVar33 = *(float *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x170) = 0;
  uVar4 = (uint)(ABS(fVar13 - local_14) / fVar33);
  fVar45 = *(float *)(param_1 + 0x2c) + fVar45;
  fVar42 = *(float *)(param_1 + 0x34) + fVar42;
  if (fVar13 - local_14 <= 0.0) {
    fVar33 = -fVar33;
  }
  *(uint *)(param_1 + 0x174) = uVar4;
  *(float *)(param_1 + 0x164) = fVar33;
  fVar22 = 0.001;
  if ((0.001 <= fVar45) && (fVar22 = fVar45, *(float *)(param_1 + 0x30) <= fVar45)) {
    fVar22 = *(float *)(param_1 + 0x30) + -1.0;
  }
  fVar45 = 0.001;
  if ((0.001 <= fVar42) && (fVar45 = fVar42, *(float *)(param_1 + 0x30) <= fVar42)) {
    fVar45 = *(float *)(param_1 + 0x30) + -1.0;
  }
  if (fVar22 < fVar45) {
    uVar3 = *(uint *)(param_1 + 0x1c);
    fVar42 = (fVar45 - fVar22) / ((float)uVar3 * 4.0 * (float)uVar3 * 4.0);
    *(float *)(param_1 + 0x38) = fVar42;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1c);
    fVar42 = (fVar45 - fVar22) / SQRT((float)uVar3 * 4.0);
    *(float *)(param_1 + 0x38) = fVar42;
  }
  if (param_3 != 0) {
    fVar14 = *(float *)(param_1 + 0xe4);
    fVar24 = *(float *)(param_1 + 0xe8);
    uVar6 = 0;
    fVar49 = *(float *)(param_1 + 0x50);
    fVar15 = *(float *)(param_1 + 0xec);
    fVar34 = *(float *)(param_1 + 0x13c);
    fVar47 = *(float *)(param_1 + 0xfc);
    fVar40 = 0.0;
    if (*(short *)(param_1 + 0xc) != 1 && *(int *)(param_1 + 0xc4) != 1) {
      fVar40 = 1.0;
    }
    fVar43 = *(float *)(param_1 + 0x104);
    fVar52 = *(float *)(param_1 + 0x11c);
    fVar37 = *(float *)(param_1 + 0x140);
    fVar38 = *(float *)(param_1 + 0x14c);
    lVar5 = *(long *)(param_1 + 0x98);
    fVar25 = *(float *)(param_1 + 0xf0);
    fVar16 = *(float *)(param_1 + 0x108);
    fVar26 = *(float *)(param_1 + 0x10c);
    fVar17 = *(float *)(param_1 + 0x110);
    fVar27 = *(float *)(param_1 + 0x114);
    fVar18 = *(float *)(param_1 + 0x118);
    fVar28 = *(float *)(param_1 + 300);
    fVar19 = *(float *)(param_1 + 0x130);
    fVar41 = *(float *)(param_1 + 0x7c);
    fVar29 = *(float *)(param_1 + 0x134);
    fVar20 = *(float *)(param_1 + 0x138);
    fVar30 = *(float *)(param_1 + 0xf4);
    fVar46 = *(float *)(param_1 + 0xf8);
    fVar21 = *(float *)(param_1 + 0x24);
    uVar7 = *(uint *)(param_1 + 0x14);
    fVar35 = *(float *)(param_1 + 0x128);
    fVar31 = *(float *)(param_1 + 0x148);
    uVar11 = *(uint *)(param_1 + 0x20);
    uVar8 = *(uint *)(param_1 + 0x78);
    uVar9 = *(ushort *)(param_1 + 100);
    iVar10 = param_3;
    fVar32 = *(float *)(param_1 + 0x100);
    fVar48 = *(float *)(param_1 + 0x124);
    fVar36 = *(float *)(param_1 + 0x120);
    fVar39 = *(float *)(param_1 + 0x144);
    do {
      fVar50 = (float)(uVar7 << 2);
      fVar23 = SQRT(fVar50);
      if (fVar22 < fVar45) {
        fVar23 = fVar50 * fVar50;
      }
      fVar50 = (fVar22 + fVar23 * fVar42) * (1.0 / fVar49) * 512.0;
      *(float *)(param_1 + 0x28) = fVar50;
      iVar12 = (int)fVar50;
      fVar23 = *(float *)(lVar5 + (ulong)(uVar11 + 1 & 0x1ff) * 4);
      fVar50 = fVar50 - (float)(int)fVar50;
      fVar51 = *(float *)(lVar5 + (ulong)(uVar11 & 0x1ff) * 4);
      *(float *)(param_1 + 0xfc) = fVar46;
      *(float *)(param_1 + 0x104) = fVar32;
      *(float *)(param_1 + 0x120) = fVar52;
      *(float *)(param_1 + 0x128) = fVar48;
      *(float *)(param_1 + 0x144) = fVar37;
      *(float *)(param_1 + 0x14c) = fVar31;
      uVar11 = uVar11 + iVar12;
      fVar51 = fVar51 + fVar21 * (fVar23 - fVar51);
      fVar21 = fVar21 + fVar50;
      if (1.0 < fVar21) {
        uVar11 = uVar11 + 1;
      }
      uVar1 = uVar11 & 0x1ff;
      *(float *)(param_1 + 0xf8) = fVar51;
      fVar23 = fVar21 + -1.0;
      if (fVar21 <= 1.0) {
        fVar23 = fVar21;
      }
      *(uint *)(param_1 + 0x20) = uVar1;
      *(float *)(param_1 + 0x24) = fVar23;
      fVar21 = (fVar14 * fVar51 + fVar24 * fVar46 + fVar15 * fVar47) -
               (fVar32 * fVar25 + fVar30 * fVar43);
      *(float *)(param_1 + 0x100) = fVar21;
      *(float *)(param_1 + 0x11c) = fVar21;
      fVar44 = (fVar16 * fVar21 + fVar26 * fVar52 + fVar17 * fVar36) -
               (fVar48 * fVar27 + fVar18 * fVar35);
      *(float *)(param_1 + 0x124) = fVar44;
      *(float *)(param_1 + 0x140) = fVar44;
      fVar39 = (fVar28 * fVar44 + fVar19 * fVar37 + fVar29 * fVar39) -
               (fVar31 * fVar20 + fVar34 * fVar38);
      *(float *)(param_1 + 0x148) = fVar39;
      fVar36 = *(float *)(lVar5 + (ulong)uVar1 * 4);
      fVar47 = *(float *)(lVar5 + (ulong)(uVar11 + 1 & 0x1ff) * 4);
      uVar1 = uVar1 + iVar12;
      *(float *)(param_1 + 0xfc) = fVar51;
      *(float *)(param_1 + 0x104) = fVar21;
      *(float *)(param_1 + 0x120) = fVar21;
      *(float *)(param_1 + 0x128) = fVar44;
      *(float *)(param_1 + 0x144) = fVar44;
      *(float *)(param_1 + 0x14c) = fVar39;
      fVar36 = fVar36 + fVar23 * (fVar47 - fVar36);
      fVar23 = fVar23 + fVar50;
      if (1.0 < fVar23) {
        uVar1 = uVar1 + 1;
      }
      uVar2 = uVar1 & 0x1ff;
      *(float *)(param_1 + 0xf8) = fVar36;
      fVar35 = fVar23 + -1.0;
      if (fVar23 <= 1.0) {
        fVar35 = fVar23;
      }
      *(uint *)(param_1 + 0x20) = uVar2;
      *(float *)(param_1 + 0x24) = fVar35;
      fVar23 = (fVar14 * fVar36 + fVar24 * fVar51 + fVar15 * fVar46) -
               (fVar21 * fVar25 + fVar30 * fVar32);
      *(float *)(param_1 + 0x100) = fVar23;
      *(float *)(param_1 + 0x11c) = fVar23;
      fVar48 = (fVar16 * fVar23 + fVar26 * fVar21 + fVar17 * fVar52) -
               (fVar44 * fVar27 + fVar18 * fVar48);
      *(float *)(param_1 + 0x124) = fVar48;
      *(float *)(param_1 + 0x140) = fVar48;
      fVar32 = (fVar28 * fVar48 + fVar19 * fVar44 + fVar29 * fVar37) -
               (fVar39 * fVar20 + fVar34 * fVar31);
      *(float *)(param_1 + 0x148) = fVar32;
      fVar47 = *(float *)(lVar5 + (ulong)uVar2 * 4);
      fVar46 = *(float *)(lVar5 + (ulong)(uVar1 + 1 & 0x1ff) * 4);
      uVar2 = uVar2 + iVar12;
      *(float *)(param_1 + 0xfc) = fVar36;
      *(float *)(param_1 + 0x104) = fVar23;
      *(float *)(param_1 + 0x120) = fVar23;
      *(float *)(param_1 + 0x128) = fVar48;
      *(float *)(param_1 + 0x144) = fVar48;
      *(float *)(param_1 + 0x14c) = fVar32;
      fVar47 = fVar47 + fVar35 * (fVar46 - fVar47);
      fVar35 = fVar35 + fVar50;
      if (1.0 < fVar35) {
        uVar2 = uVar2 + 1;
      }
      *(float *)(param_1 + 0xf8) = fVar47;
      uVar11 = uVar2 + iVar12;
      fVar31 = fVar35 + -1.0;
      if (fVar35 <= 1.0) {
        fVar31 = fVar35;
      }
      *(uint *)(param_1 + 0x20) = uVar2 & 0x1ff;
      *(float *)(param_1 + 0x24) = fVar31;
      fVar43 = (fVar14 * fVar47 + fVar24 * fVar36 + fVar15 * fVar51) -
               (fVar23 * fVar25 + fVar30 * fVar21);
      *(float *)(param_1 + 0x100) = fVar43;
      *(float *)(param_1 + 0x11c) = fVar43;
      fVar35 = (fVar16 * fVar43 + fVar26 * fVar23 + fVar17 * fVar21) -
               (fVar48 * fVar27 + fVar18 * fVar44);
      *(float *)(param_1 + 0x124) = fVar35;
      *(float *)(param_1 + 0x140) = fVar35;
      fVar38 = (fVar28 * fVar35 + fVar19 * fVar48 + fVar29 * fVar44) -
               (fVar32 * fVar20 + fVar34 * fVar39);
      *(float *)(param_1 + 0x148) = fVar38;
      fVar46 = *(float *)(lVar5 + (ulong)(uVar2 & 0x1ff) * 4);
      fVar21 = *(float *)(lVar5 + (ulong)(uVar2 + 1 & 0x1ff) * 4);
      *(float *)(param_1 + 0xfc) = fVar47;
      *(float *)(param_1 + 0x104) = fVar43;
      *(float *)(param_1 + 0x120) = fVar43;
      *(float *)(param_1 + 0x128) = fVar35;
      *(float *)(param_1 + 0x144) = fVar35;
      *(float *)(param_1 + 0x14c) = fVar38;
      fVar46 = fVar46 + fVar31 * (fVar21 - fVar46);
      fVar31 = fVar31 + fVar50;
      if (1.0 < fVar31) {
        uVar11 = uVar11 + 1;
      }
      *(float *)(param_1 + 0xf8) = fVar46;
      uVar11 = uVar11 & 0x1ff;
      fVar21 = fVar31 + -1.0;
      if (fVar31 <= 1.0) {
        fVar21 = fVar31;
      }
      *(uint *)(param_1 + 0x20) = uVar11;
      *(float *)(param_1 + 0x24) = fVar21;
      fVar52 = (fVar14 * fVar46 + fVar24 * fVar47 + fVar15 * fVar36) -
               (fVar43 * fVar25 + fVar30 * fVar23);
      *(float *)(param_1 + 0x100) = fVar52;
      *(float *)(param_1 + 0x11c) = fVar52;
      fVar37 = (fVar16 * fVar52 + fVar26 * fVar43 + fVar17 * fVar23) -
               (fVar35 * fVar27 + fVar18 * fVar48);
      *(float *)(param_1 + 0x124) = fVar37;
      *(float *)(param_1 + 0x140) = fVar37;
      fVar31 = (fVar28 * fVar37 + fVar19 * fVar35 + fVar29 * fVar48) -
               (fVar38 * fVar20 + fVar34 * fVar32);
      *(float *)(param_1 + 0x148) = fVar31;
      if (*(uint *)(param_1 + (ulong)uVar9 * 4 + 0x68) <= uVar8) {
        uVar9 = uVar9 + 1;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar9;
      }
      uVar8 = uVar8 + 1;
      fVar32 = *(float *)(param_1 + (ulong)uVar9 * 4 + 0x54);
      *(uint *)(param_1 + 0x78) = uVar8;
      fVar41 = fVar41 + fVar32;
      *(float *)(param_1 + 0x7c) = fVar41;
      if (uVar6 < uVar4) {
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + 0x170) = uVar6;
        local_14 = local_14 + fVar33;
      }
      else {
        local_14 = fVar13;
      }
      uVar7 = uVar7 + 1;
      *(float *)(param_1 + 0x16c) = local_14;
      *(uint *)(param_1 + 0x14) = uVar7;
      *param_2 = local_14 * fVar41 * fVar31;
      if (uVar3 <= uVar7) {
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(float *)(param_1 + 0x7c) = fVar40;
        fVar41 = fVar40;
      }
      iVar10 = iVar10 + -1;
      param_2 = param_2 + 1;
      fVar32 = fVar52;
      fVar48 = fVar37;
      fVar36 = fVar43;
      fVar39 = fVar35;
    } while (iVar10 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}


