/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cc0d0; name: FUN_.text__001cc0d0
 */


void FUN__text__001cc0d0(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  int iVar25;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  int iStack_184;
  undefined4 local_180;
  int iStack_17c;
  undefined4 local_178;
  int iStack_174;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  lVar21 = *(long *)(param_1 + 8);
  lVar24 = *(long *)(lVar21 + 0x2d0);
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar21 = lVar21 + 0x110;
  piVar1 = (int *)(param_1 + 0x5790);
  if (param_2 == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x5788) + 8);
    local_f0 = 0;
    local_e8 = (code *)0x0;
    uVar5 = (uVar2 + *piVar1) - 1;
    local_e0 = 0;
    uStack_d8 = 0;
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = uVar5 / uVar2;
    }
    *(uint *)(param_1 + 0x5794) = uVar5 - uVar6 * uVar2;
    if (*(code **)(param_1 + 0x57b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x57b0))(param_1 + 0x57c0,auStack_d0);
      local_f0 = *(undefined8 *)(param_1 + 0x57a0);
      local_e8 = *(code **)(param_1 + 0x57a8);
      local_e0 = *(undefined8 *)(param_1 + 0x57b0);
      uStack_d8 = *(undefined8 *)(param_1 + 0x57b8);
    }
    puVar22 = &local_f0;
    FUN__text__0012c564(lVar21,param_1 + 0x5778,&local_f0);
    if (local_e8 == (code *)0x0) goto LAB__text__001cc248;
    puVar20 = &local_f0;
    pcVar19 = local_e8;
  }
  else {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x5788) + 8);
    local_170 = 0;
    local_168 = (code *)0x0;
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = (*piVar1 + 1U) / uVar2;
    }
    local_160 = 0;
    uStack_158 = 0;
    *(uint *)(param_1 + 0x5794) = (*piVar1 + 1U) - uVar5 * uVar2;
    if (*(code **)(param_1 + 0x57b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x57b0))(param_1 + 0x57c0,auStack_150);
      local_170 = *(undefined8 *)(param_1 + 0x57a0);
      local_168 = *(code **)(param_1 + 0x57a8);
      local_160 = *(undefined8 *)(param_1 + 0x57b0);
      uStack_158 = *(undefined8 *)(param_1 + 0x57b8);
    }
    puVar22 = &local_170;
    FUN__text__0012c564(lVar21,param_1 + 0x5770,&local_170);
    if (local_168 == (code *)0x0) goto LAB__text__001cc248;
    puVar20 = &local_170;
    pcVar19 = local_168;
  }
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  (*pcVar19)(puVar20 + 4);
LAB__text__001cc248:
  FUN__text__001d0690(param_1,*(undefined4 *)(param_1 + 0x5794),1);
  bVar3 = false;
  bVar4 = false;
  *(undefined1 *)(param_1 + 0x4c8) = 1;
  iVar25 = 0;
  do {
    local_180 = *(undefined4 *)(param_1 + 0x34);
    iStack_17c = *piVar1;
    local_178 = 0;
    iStack_174 = iVar25;
    lVar7 = FUN__text__001961a8(uVar23,&local_180);
    local_190 = *(undefined4 *)(param_1 + 0x34);
    uStack_18c = *(undefined4 *)(param_1 + 0x5794);
    local_188 = 0;
    iStack_184 = iVar25;
    lVar8 = FUN__text__001961a8(uVar23,&local_190);
    local_180 = *(undefined4 *)(param_1 + 0x34);
    iStack_17c = *piVar1;
    local_178 = 1;
    iStack_174 = iVar25;
    lVar9 = FUN__text__001961a8(uVar23,&local_180);
    local_190 = *(undefined4 *)(param_1 + 0x34);
    uStack_18c = *(undefined4 *)(param_1 + 0x5794);
    local_188 = 1;
    iStack_184 = iVar25;
    lVar10 = FUN__text__001961a8(uVar23,&local_190);
    local_180 = *(undefined4 *)(param_1 + 0x34);
    iStack_17c = *piVar1;
    local_178 = 2;
    iStack_174 = iVar25;
    lVar11 = FUN__text__001961a8(uVar23,&local_180);
    local_190 = *(undefined4 *)(param_1 + 0x34);
    uStack_18c = *(undefined4 *)(param_1 + 0x5794);
    local_188 = 2;
    iStack_184 = iVar25;
    lVar12 = FUN__text__001961a8(uVar23,&local_190);
    local_180 = *(undefined4 *)(param_1 + 0x34);
    iStack_17c = *piVar1;
    local_178 = 3;
    iStack_174 = iVar25;
    lVar13 = FUN__text__001961a8(uVar23,&local_180);
    local_190 = *(undefined4 *)(param_1 + 0x34);
    uStack_18c = *(undefined4 *)(param_1 + 0x5794);
    local_188 = 3;
    iStack_184 = iVar25;
    lVar14 = FUN__text__001961a8(uVar23,&local_190);
    local_180 = *(undefined4 *)(param_1 + 0x34);
    iStack_17c = *piVar1;
    local_178 = 4;
    iStack_174 = iVar25;
    lVar15 = FUN__text__001961a8(uVar23,&local_180);
    local_190 = *(undefined4 *)(param_1 + 0x34);
    uStack_18c = *(undefined4 *)(param_1 + 0x5794);
    local_188 = 4;
    iStack_184 = iVar25;
    lVar16 = FUN__text__001961a8(uVar23,&local_190);
    local_180 = *(undefined4 *)(param_1 + 0x34);
    iStack_17c = *piVar1;
    local_178 = 5;
    iStack_174 = iVar25;
    lVar17 = FUN__text__001961a8(uVar23,&local_180);
    local_188 = 5;
    uStack_18c = *(undefined4 *)(param_1 + 0x5794);
    local_190 = *(undefined4 *)(param_1 + 0x34);
    iStack_184 = iVar25;
    lVar18 = FUN__text__001961a8(uVar23,&local_190);
    iVar25 = iVar25 + 1;
    bVar3 = (bool)((((((lVar9 == 0 || lVar7 == 0) || lVar11 == 0) || lVar13 == 0) || lVar15 == 0) ||
                   lVar17 == 0) | bVar3);
    bVar4 = (bool)((((((lVar10 == 0 || lVar8 == 0) || lVar12 == 0) || lVar14 == 0) || lVar16 == 0)
                   || lVar18 == 0) | bVar4);
  } while (iVar25 != 5);
  if (bVar3) {
    FUN__text__0012c378(lVar21,param_1 + 0x490);
  }
  else if (bVar4) {
    FUN__text__0012c378(lVar21,param_1 + 0x488);
    iVar25 = 0;
    lVar21 = 0;
    do {
      local_180 = *(undefined4 *)(param_1 + 0x34);
      iStack_17c = *(undefined4 *)(param_1 + 0x5794);
      local_178 = 0;
      iStack_174 = iVar25;
      lVar8 = FUN__text__001961a8(uVar23,&local_180);
      lVar7 = param_1 + lVar21;
      FUN__text__003c7c60(lVar24,lVar7 + 0x308,lVar8 == 0);
      local_180 = *(undefined4 *)(param_1 + 0x34);
      iStack_17c = *(undefined4 *)(param_1 + 0x5794);
      local_178 = 1;
      iStack_174 = iVar25;
      lVar8 = FUN__text__001961a8(uVar23,&local_180);
      FUN__text__003c7c60(lVar24,lVar7 + 0x330,lVar8 == 0);
      local_180 = *(undefined4 *)(param_1 + 0x34);
      iStack_17c = *(undefined4 *)(param_1 + 0x5794);
      local_178 = 2;
      iStack_174 = iVar25;
      lVar8 = FUN__text__001961a8(uVar23,&local_180);
      FUN__text__003c7c60(lVar24,lVar7 + 0x358,lVar8 == 0);
      local_180 = *(undefined4 *)(param_1 + 0x34);
      iStack_17c = *(undefined4 *)(param_1 + 0x5794);
      local_178 = 3;
      iStack_174 = iVar25;
      lVar8 = FUN__text__001961a8(uVar23,&local_180);
      FUN__text__003c7c60(lVar24,lVar7 + 0x380,lVar8 == 0);
      local_180 = *(undefined4 *)(param_1 + 0x34);
      iStack_17c = *(undefined4 *)(param_1 + 0x5794);
      local_178 = 4;
      iStack_174 = iVar25;
      lVar8 = FUN__text__001961a8(uVar23,&local_180);
      FUN__text__003c7c60(lVar24,lVar7 + 0x3a8,lVar8 == 0);
      local_180 = *(undefined4 *)(param_1 + 0x34);
      iStack_17c = *(int *)(param_1 + 0x5794);
      local_178 = 5;
      iStack_174 = iVar25;
      lVar8 = FUN__text__001961a8(uVar23,&local_180);
      FUN__text__003c7c60(lVar24,lVar7 + 0x3d0,lVar8 == 0);
      lVar21 = lVar21 + 8;
      iVar25 = iVar25 + 1;
    } while (lVar21 != 0x28);
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  return;
}


