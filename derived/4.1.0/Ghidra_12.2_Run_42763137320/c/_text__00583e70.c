/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00583e70; name: FUN_.text__00583e70
 */


void FUN__text__00583e70(long param_1,float *param_2,int param_3)

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
  float local_74;
  float local_14;
  
  lVar5 = *(long *)(param_1 + 0x150);
  fVar39 = *(float *)(lVar5 + 0xc);
  fVar38 = *(float *)(lVar5 + 0x10);
  fVar13 = exp2f(*(float *)(lVar5 + 8) * 0.1660964);
  local_14 = *(float *)(param_1 + 0x16c);
  *(float *)(param_1 + 0x168) = fVar13;
  fVar33 = *(float *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x170) = 0;
  uVar4 = (uint)(ABS(fVar13 - local_14) / fVar33);
  fVar39 = *(float *)(param_1 + 0x2c) + fVar39;
  fVar38 = *(float *)(param_1 + 0x34) + fVar38;
  if (fVar13 - local_14 <= 0.0) {
    fVar33 = -fVar33;
  }
  *(uint *)(param_1 + 0x174) = uVar4;
  *(float *)(param_1 + 0x164) = fVar33;
  local_74 = 0.001;
  if ((0.001 <= fVar39) && (local_74 = fVar39, *(float *)(param_1 + 0x30) <= fVar39)) {
    local_74 = *(float *)(param_1 + 0x30) + -1.0;
  }
  fVar39 = 0.001;
  if ((0.001 <= fVar38) && (fVar39 = fVar38, *(float *)(param_1 + 0x30) <= fVar38)) {
    fVar39 = *(float *)(param_1 + 0x30) + -1.0;
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  fVar38 = (fVar39 - local_74) / (float)(uVar3 << 2);
  *(float *)(param_1 + 0x38) = fVar38;
  if (param_3 != 0) {
    fVar14 = *(float *)(param_1 + 0xe4);
    fVar23 = *(float *)(param_1 + 0xe8);
    uVar6 = 0;
    fVar15 = *(float *)(param_1 + 0xec);
    fVar34 = *(float *)(param_1 + 0x50);
    fVar24 = *(float *)(param_1 + 0xf0);
    fVar16 = *(float *)(param_1 + 0x108);
    fVar31 = *(float *)(param_1 + 0x13c);
    fVar39 = *(float *)(param_1 + 0x24);
    fVar50 = *(float *)(param_1 + 0x104);
    fVar25 = *(float *)(param_1 + 0x10c);
    fVar17 = *(float *)(param_1 + 0x110);
    fVar41 = *(float *)(param_1 + 0xfc);
    fVar49 = *(float *)(param_1 + 0x11c);
    fVar26 = *(float *)(param_1 + 0x114);
    fVar18 = *(float *)(param_1 + 0x118);
    fVar46 = *(float *)(param_1 + 0x128);
    fVar27 = *(float *)(param_1 + 300);
    fVar19 = *(float *)(param_1 + 0x130);
    fVar45 = *(float *)(param_1 + 0x148);
    fVar37 = *(float *)(param_1 + 0x7c);
    fVar28 = *(float *)(param_1 + 0x134);
    fVar20 = *(float *)(param_1 + 0x138);
    fVar21 = *(float *)(param_1 + 0xf4);
    fVar40 = *(float *)(param_1 + 0xf8);
    lVar5 = *(long *)(param_1 + 0x98);
    uVar7 = *(uint *)(param_1 + 0x14);
    fVar29 = 0.0;
    if (*(short *)(param_1 + 0xc) != 1 && *(int *)(param_1 + 0xc4) != 1) {
      fVar29 = 1.0;
    }
    uVar11 = *(uint *)(param_1 + 0x20);
    fVar22 = *(float *)(param_1 + 0x140);
    fVar32 = *(float *)(param_1 + 0x14c);
    uVar8 = *(uint *)(param_1 + 0x78);
    uVar9 = *(ushort *)(param_1 + 100);
    iVar10 = param_3;
    fVar42 = *(float *)(param_1 + 0x100);
    fVar43 = *(float *)(param_1 + 0x124);
    fVar47 = *(float *)(param_1 + 0x120);
    fVar44 = *(float *)(param_1 + 0x144);
    do {
      fVar35 = (local_74 + (float)(uVar7 << 2) * fVar38) * (1.0 / fVar34) * 512.0;
      *(float *)(param_1 + 0x28) = fVar35;
      iVar12 = (int)fVar35;
      fVar30 = *(float *)(lVar5 + (ulong)(uVar11 + 1 & 0x1ff) * 4);
      fVar35 = fVar35 - (float)(int)fVar35;
      fVar48 = *(float *)(lVar5 + (ulong)(uVar11 & 0x1ff) * 4);
      *(float *)(param_1 + 0x104) = fVar42;
      *(float *)(param_1 + 0x120) = fVar49;
      *(float *)(param_1 + 0x128) = fVar43;
      *(float *)(param_1 + 0x144) = fVar22;
      *(float *)(param_1 + 0x14c) = fVar45;
      uVar11 = uVar11 + iVar12;
      fVar48 = fVar48 + fVar39 * (fVar30 - fVar48);
      fVar39 = fVar39 + fVar35;
      if (1.0 < fVar39) {
        uVar11 = uVar11 + 1;
      }
      uVar1 = uVar11 & 0x1ff;
      *(float *)(param_1 + 0xf8) = fVar48;
      *(float *)(param_1 + 0xfc) = fVar40;
      fVar30 = fVar39 + -1.0;
      if (fVar39 <= 1.0) {
        fVar30 = fVar39;
      }
      *(uint *)(param_1 + 0x20) = uVar1;
      *(float *)(param_1 + 0x24) = fVar30;
      fVar36 = (fVar14 * fVar48 + fVar23 * fVar40 + fVar15 * fVar41) -
               (fVar42 * fVar24 + fVar21 * fVar50);
      *(float *)(param_1 + 0x100) = fVar36;
      *(float *)(param_1 + 0x11c) = fVar36;
      fVar51 = (fVar16 * fVar36 + fVar25 * fVar49 + fVar17 * fVar47) -
               (fVar43 * fVar26 + fVar18 * fVar46);
      *(float *)(param_1 + 0x124) = fVar51;
      *(float *)(param_1 + 0x140) = fVar51;
      fVar39 = (fVar27 * fVar51 + fVar19 * fVar22 + fVar28 * fVar44) -
               (fVar45 * fVar20 + fVar31 * fVar32);
      *(float *)(param_1 + 0x148) = fVar39;
      fVar47 = *(float *)(lVar5 + (ulong)uVar1 * 4);
      fVar41 = *(float *)(lVar5 + (ulong)(uVar11 + 1 & 0x1ff) * 4);
      uVar1 = uVar1 + iVar12;
      *(float *)(param_1 + 0x104) = fVar36;
      *(float *)(param_1 + 0x120) = fVar36;
      *(float *)(param_1 + 0x128) = fVar51;
      *(float *)(param_1 + 0x144) = fVar51;
      *(float *)(param_1 + 0x14c) = fVar39;
      fVar47 = fVar47 + fVar30 * (fVar41 - fVar47);
      fVar30 = fVar30 + fVar35;
      if (1.0 < fVar30) {
        uVar1 = uVar1 + 1;
      }
      uVar2 = uVar1 & 0x1ff;
      *(float *)(param_1 + 0xf8) = fVar47;
      *(float *)(param_1 + 0xfc) = fVar48;
      fVar50 = fVar30 + -1.0;
      if (fVar30 <= 1.0) {
        fVar50 = fVar30;
      }
      *(uint *)(param_1 + 0x20) = uVar2;
      *(float *)(param_1 + 0x24) = fVar50;
      fVar42 = (fVar14 * fVar47 + fVar23 * fVar48 + fVar15 * fVar40) -
               (fVar36 * fVar24 + fVar21 * fVar42);
      *(float *)(param_1 + 0x100) = fVar42;
      *(float *)(param_1 + 0x11c) = fVar42;
      fVar43 = (fVar16 * fVar42 + fVar25 * fVar36 + fVar17 * fVar49) -
               (fVar51 * fVar26 + fVar18 * fVar43);
      *(float *)(param_1 + 0x124) = fVar43;
      *(float *)(param_1 + 0x140) = fVar43;
      fVar45 = (fVar27 * fVar43 + fVar19 * fVar51 + fVar28 * fVar22) -
               (fVar39 * fVar20 + fVar31 * fVar45);
      *(float *)(param_1 + 0x148) = fVar45;
      fVar41 = *(float *)(lVar5 + (ulong)uVar2 * 4);
      fVar40 = *(float *)(lVar5 + (ulong)(uVar1 + 1 & 0x1ff) * 4);
      uVar2 = uVar2 + iVar12;
      *(float *)(param_1 + 0x104) = fVar42;
      *(float *)(param_1 + 0x120) = fVar42;
      *(float *)(param_1 + 0x128) = fVar43;
      *(float *)(param_1 + 0x144) = fVar43;
      *(float *)(param_1 + 0x14c) = fVar45;
      fVar41 = fVar41 + fVar50 * (fVar40 - fVar41);
      fVar50 = fVar50 + fVar35;
      if (1.0 < fVar50) {
        uVar2 = uVar2 + 1;
      }
      *(float *)(param_1 + 0xf8) = fVar41;
      *(float *)(param_1 + 0xfc) = fVar47;
      uVar11 = uVar2 + iVar12;
      fVar49 = fVar50 + -1.0;
      if (fVar50 <= 1.0) {
        fVar49 = fVar50;
      }
      *(uint *)(param_1 + 0x20) = uVar2 & 0x1ff;
      *(float *)(param_1 + 0x24) = fVar49;
      fVar50 = (fVar14 * fVar41 + fVar23 * fVar47 + fVar15 * fVar48) -
               (fVar42 * fVar24 + fVar21 * fVar36);
      *(float *)(param_1 + 0x100) = fVar50;
      *(float *)(param_1 + 0x11c) = fVar50;
      fVar46 = (fVar16 * fVar50 + fVar25 * fVar42 + fVar17 * fVar36) -
               (fVar43 * fVar26 + fVar18 * fVar51);
      *(float *)(param_1 + 0x124) = fVar46;
      *(float *)(param_1 + 0x140) = fVar46;
      fVar32 = (fVar27 * fVar46 + fVar19 * fVar43 + fVar28 * fVar51) -
               (fVar45 * fVar20 + fVar31 * fVar39);
      *(float *)(param_1 + 0x148) = fVar32;
      fVar40 = *(float *)(lVar5 + (ulong)(uVar2 & 0x1ff) * 4);
      fVar39 = *(float *)(lVar5 + (ulong)(uVar2 + 1 & 0x1ff) * 4);
      *(float *)(param_1 + 0x104) = fVar50;
      *(float *)(param_1 + 0x120) = fVar50;
      *(float *)(param_1 + 0x128) = fVar46;
      *(float *)(param_1 + 0x144) = fVar46;
      *(float *)(param_1 + 0x14c) = fVar32;
      fVar40 = fVar40 + fVar49 * (fVar39 - fVar40);
      fVar49 = fVar49 + fVar35;
      if (1.0 < fVar49) {
        uVar11 = uVar11 + 1;
      }
      *(float *)(param_1 + 0xf8) = fVar40;
      *(float *)(param_1 + 0xfc) = fVar41;
      uVar11 = uVar11 & 0x1ff;
      fVar39 = fVar49 + -1.0;
      if (fVar49 <= 1.0) {
        fVar39 = fVar49;
      }
      *(uint *)(param_1 + 0x20) = uVar11;
      *(float *)(param_1 + 0x24) = fVar39;
      fVar49 = (fVar14 * fVar40 + fVar23 * fVar41 + fVar15 * fVar47) -
               (fVar50 * fVar24 + fVar21 * fVar42);
      *(float *)(param_1 + 0x100) = fVar49;
      *(float *)(param_1 + 0x11c) = fVar49;
      fVar22 = (fVar16 * fVar49 + fVar25 * fVar50 + fVar17 * fVar42) -
               (fVar46 * fVar26 + fVar18 * fVar43);
      *(float *)(param_1 + 0x124) = fVar22;
      *(float *)(param_1 + 0x140) = fVar22;
      fVar45 = (fVar27 * fVar22 + fVar19 * fVar46 + fVar28 * fVar43) -
               (fVar32 * fVar20 + fVar31 * fVar45);
      *(float *)(param_1 + 0x148) = fVar45;
      if (*(uint *)(param_1 + (ulong)uVar9 * 4 + 0x68) <= uVar8) {
        uVar9 = uVar9 + 1;
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar9;
      }
      uVar8 = uVar8 + 1;
      fVar42 = *(float *)(param_1 + (ulong)uVar9 * 4 + 0x54);
      *(uint *)(param_1 + 0x78) = uVar8;
      fVar37 = fVar37 + fVar42;
      *(float *)(param_1 + 0x7c) = fVar37;
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
      *param_2 = local_14 * fVar37 * fVar45;
      if (uVar3 <= uVar7) {
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(float *)(param_1 + 0x7c) = fVar29;
        fVar37 = fVar29;
      }
      iVar10 = iVar10 + -1;
      param_2 = param_2 + 1;
      fVar42 = fVar49;
      fVar43 = fVar22;
      fVar47 = fVar50;
      fVar44 = fVar46;
    } while (iVar10 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}


