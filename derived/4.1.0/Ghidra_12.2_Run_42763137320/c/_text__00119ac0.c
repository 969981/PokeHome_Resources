/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00119ac0; name: FUN_.text__00119ac0
 */


void FUN__text__00119ac0(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  int iVar14;
  ulong *puVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  code *local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80 [2];
  
  iVar14 = 0;
  lVar16 = 0x40;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  do {
    if ((*(long **)(param_3 + lVar16) != (long *)0x0) &&
       (uVar6 = (**(code **)(**(long **)(param_3 + lVar16) + 0x58))(), (uVar6 & 1) != 0)) {
      *(undefined4 *)(*(long *)(param_3 + lVar16) + 0x38) = *(undefined4 *)(param_3 + 0xe0);
      (**(code **)(**(long **)(param_3 + lVar16) + 0x10))();
      pcVar17 = *(code **)(param_3 + 0x80);
      if ((pcVar17 == (code *)0x0) || (iVar14 == 0)) {
        local_88 = (**(code **)(**(long **)(param_3 + lVar16) + 0x18))();
        pcVar17 = *(code **)(param_3 + 0x88);
        lVar9 = **(long **)(param_3 + lVar16);
        if (pcVar17 != (code *)0x0) goto LAB__text__00119c64;
LAB__text__00119b18:
        puVar5 = (undefined8 *)(**(code **)(lVar9 + 0x20))();
        local_a0 = *puVar5;
        puVar5 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar16) + 0x28))();
        local_98 = *puVar5;
        puVar5 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar16) + 0x38))();
        local_b0 = *puVar5;
        puVar5 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar16) + 0x30))();
        local_a8 = *puVar5;
        fVar19 = (float)local_a8;
        param_2 = (float)((ulong)local_a8 >> 0x20);
      }
      else {
        uVar4 = (**(code **)(**(long **)(param_3 + lVar16) + 0x40))();
        local_130 = (code *)(**(code **)(**(long **)(param_3 + lVar16) + 0x18))();
        local_88 = (*pcVar17)(&local_88,uVar4,&local_130);
        pcVar17 = *(code **)(param_3 + 0x88);
        lVar9 = **(long **)(param_3 + lVar16);
        if (pcVar17 == (code *)0x0) goto LAB__text__00119b18;
LAB__text__00119c64:
        if (iVar14 == 0) goto LAB__text__00119b18;
        uVar4 = (**(code **)(lVar9 + 0x40))();
        uVar7 = (**(code **)(**(long **)(param_3 + lVar16) + 0x20))();
        uVar4 = (*pcVar17)(&local_a0,uVar4,uVar7);
        local_a0 = CONCAT44(param_2,uVar4);
        pcVar17 = *(code **)(param_3 + 0x88);
        uVar4 = (**(code **)(**(long **)(param_3 + lVar16) + 0x40))();
        uVar7 = (**(code **)(**(long **)(param_3 + lVar16) + 0x28))();
        uVar4 = (*pcVar17)(&local_98,uVar4,uVar7);
        local_98 = CONCAT44(param_2,uVar4);
        pcVar17 = *(code **)(param_3 + 0x88);
        uVar4 = (**(code **)(**(long **)(param_3 + lVar16) + 0x40))();
        uVar7 = (**(code **)(**(long **)(param_3 + lVar16) + 0x38))();
        uVar4 = (*pcVar17)(&local_b0,uVar4,uVar7);
        local_b0 = CONCAT44(param_2,uVar4);
        pcVar17 = *(code **)(param_3 + 0x88);
        uVar4 = (**(code **)(**(long **)(param_3 + lVar16) + 0x40))();
        uVar7 = (**(code **)(**(long **)(param_3 + lVar16) + 0x30))();
        fVar19 = (float)(*pcVar17)(&local_a8,uVar4,uVar7);
        local_a8 = CONCAT44(param_2,fVar19);
      }
      iVar14 = iVar14 + 1;
      fVar21 = local_a0._4_4_ + param_2;
      fVar19 = (float)local_a0 + fVar19;
      fVar22 = 1.0;
      if (fVar19 <= 1.0) {
        fVar22 = fVar19;
      }
      fVar20 = -1.0;
      if (-1.0 <= fVar19) {
        fVar20 = fVar22;
      }
      fVar19 = 1.0;
      if (fVar21 <= 1.0) {
        fVar19 = fVar21;
      }
      param_2 = -1.0;
      if (-1.0 <= fVar21) {
        param_2 = fVar19;
      }
      local_90 = CONCAT44(param_2,fVar20);
    }
    lVar16 = lVar16 + -0x20;
  } while (lVar16 != 0);
  if ((local_88 == 0) || (local_88 != *(ulong *)(param_3 + 0xd8))) {
    FUN__text__0011a9a8(param_3 + 8);
  }
  FUN__text__0011a9c4(param_3 + 8);
  uVar6 = 0;
  puVar15 = (ulong *)(param_3 + 0x90);
  *puVar15 = 0;
  puVar12 = (ulong *)(param_3 + 0xa0);
  *puVar12 = 0;
  puVar11 = (ulong *)(param_3 + 0xa8);
  *puVar11 = 0;
  puVar10 = (ulong *)(param_3 + 0x98);
  *puVar10 = 0;
  do {
    uVar2 = local_88;
    uVar18 = 1L << (uVar6 & 0x3f);
    uVar13 = *(ulong *)(param_3 + 0xd8);
    uVar1 = local_88 & uVar18;
    bVar3 = FUN__text__0011a9b4(param_3 + 8);
    if (uVar1 != 0) {
      *puVar15 = *puVar15 | uVar18;
    }
    if ((uVar18 & (uVar13 ^ 0xffffffffffffffff) & uVar2) != 0) {
      *puVar10 = *puVar10 | uVar18;
    }
    if ((uVar18 & (uVar2 ^ 0xffffffffffffffff) & uVar13) != 0) {
      *puVar12 = *puVar12 | uVar18;
    }
    if ((bVar3 & uVar1 != 0) != 0) {
      *puVar11 = *puVar11 | uVar18;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x40);
  if (*(long *)(param_3 + 0x60) != 0) {
    if (*(long **)(param_3 + 0x40) == (long *)0x0) {
      bVar3 = 0;
      plVar8 = *(long **)(param_3 + 0x20);
    }
    else {
      bVar3 = (**(code **)(**(long **)(param_3 + 0x40) + 0x58))();
      lVar16 = *(long *)(param_3 + 0x60);
      if ((bVar3 & 1) != 0) {
        uVar4 = (**(code **)(**(long **)(param_3 + 0x40) + 0x40))();
        FUN__text__0011b65c(&local_130,lVar16,uVar4);
        local_80[0] = *(ulong *)(param_3 + 0x90);
        uVar7 = (*local_130)(auStack_110,local_80);
        local_80[0] = *(ulong *)(param_3 + 0xa0);
        *(undefined8 *)(param_3 + 0x90) = uVar7;
        uVar7 = (*local_130)(auStack_110,local_80);
        local_80[0] = *(ulong *)(param_3 + 0xa8);
        *(undefined8 *)(param_3 + 0xa0) = uVar7;
        uVar7 = (*local_130)(auStack_110,local_80);
        local_80[0] = *(ulong *)(param_3 + 0x98);
        *(undefined8 *)(param_3 + 0xa8) = uVar7;
        uVar7 = (*local_130)(auStack_110,local_80);
        pcVar17 = local_128;
        *(undefined8 *)(param_3 + 0x98) = uVar7;
        if (local_128 != (code *)0x0) {
          local_120 = 0;
          uStack_118 = 0;
          local_130 = (code *)0x0;
          local_128 = (code *)0x0;
          (*pcVar17)(auStack_110);
        }
        lVar16 = *(long *)(param_3 + 0x60);
      }
      if (lVar16 == 0) goto LAB__text__0011a13c;
      plVar8 = *(long **)(param_3 + 0x20);
    }
    if ((plVar8 != (long *)0x0) && (uVar6 = (**(code **)(*plVar8 + 0x58))(), (uVar6 & 1) != 0)) {
      uVar7 = *(undefined8 *)(param_3 + 0x60);
      uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
      FUN__text__0011b65c(&local_130,uVar7,uVar4);
      pcVar17 = *(code **)(param_3 + 0x80);
      if ((pcVar17 != (code *)0x0 & bVar3) == 0) {
        local_80[0] = *puVar15;
        uVar6 = (*local_130)(auStack_110,local_80);
        *puVar15 = uVar6;
        local_80[0] = *puVar12;
        uVar6 = (*local_130)(auStack_110,local_80);
        *puVar12 = uVar6;
        local_80[0] = *puVar11;
        uVar6 = (*local_130)(auStack_110,local_80);
        *puVar11 = uVar6;
        local_80[0] = *puVar10;
        uVar6 = (*local_130)(auStack_110,local_80);
        *puVar10 = uVar6;
        pcVar17 = local_128;
      }
      else {
        uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
        local_80[0] = *(ulong *)(param_3 + 0x90);
        local_80[0] = (*local_130)(auStack_110,local_80);
        uVar7 = (*pcVar17)(puVar15,uVar4,local_80);
        *(undefined8 *)(param_3 + 0x90) = uVar7;
        pcVar17 = *(code **)(param_3 + 0x80);
        uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
        local_80[0] = *(ulong *)(param_3 + 0xa0);
        local_80[0] = (*local_130)(auStack_110,local_80);
        uVar7 = (*pcVar17)(puVar12,uVar4,local_80);
        *(undefined8 *)(param_3 + 0xa0) = uVar7;
        pcVar17 = *(code **)(param_3 + 0x80);
        uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
        local_80[0] = *(ulong *)(param_3 + 0xa8);
        local_80[0] = (*local_130)(auStack_110,local_80);
        uVar7 = (*pcVar17)(puVar11,uVar4,local_80);
        *(undefined8 *)(param_3 + 0xa8) = uVar7;
        pcVar17 = *(code **)(param_3 + 0x80);
        uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
        local_80[0] = *(ulong *)(param_3 + 0x98);
        local_80[0] = (*local_130)(auStack_110,local_80);
        uVar6 = (*pcVar17)(puVar10,uVar4,local_80);
        *puVar10 = uVar6;
        pcVar17 = local_128;
      }
      if (pcVar17 != (code *)0x0) {
        local_120 = 0;
        uStack_118 = 0;
        local_130 = (code *)0x0;
        local_128 = (code *)0x0;
        (*pcVar17)(auStack_110);
      }
    }
  }
LAB__text__0011a13c:
  *(undefined8 *)(param_3 + 0xc0) = local_a0;
  *(undefined8 *)(param_3 + 200) = local_98;
  *(undefined8 *)(param_3 + 0xd0) = local_90;
  *(ulong *)(param_3 + 0xd8) = local_88;
  *(undefined8 *)(param_3 + 0xb0) = local_b0;
  *(undefined8 *)(param_3 + 0xb8) = local_a8;
  return;
}


