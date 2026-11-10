/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cf6b0; name: FUN_.text__001cf6b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001cf6b0(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 local_198;
  undefined8 local_190;
  code *local_188;
  code *local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_110;
  undefined8 local_108;
  code *local_100;
  undefined1 *local_f8;
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  lVar19 = *(long *)(param_1 + 8);
  lVar21 = *(long *)(lVar19 + 0x2d0);
  if (lVar21 == 0) {
    lVar22 = lVar19;
  }
  else {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
    lVar22 = *(long *)(param_1 + 8);
  }
  uVar9 = FUN__text__001281d4(lVar22);
  FUN__text__001156d0(&local_110,uVar9,0);
  lVar22 = *(long *)((long)local_110 + 0x60);
  if ((lVar22 == 0) ||
     ((**(code **)(*(long *)(lVar22 + 0x48) + 0x10))(), local_110 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)((long)local_110 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB__text__001d0688:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  piVar1 = (int *)(param_1 + 0x5790);
  *(undefined8 *)(param_1 + 0x5788) = param_2;
  *piVar1 = param_3;
  lVar10 = FUN__text__00192b40(param_2,param_3);
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == 0) goto LAB__text__001d0688;
  uVar2 = *(uint *)(lVar10 + 8);
  local_70[0] = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  local_110 = (undefined1 *)0xd0f774b9df43c6a4;
  FUN__text__001abd38(lVar20,param_1 + 0x78,local_70,&local_110,0,1,*piVar1 + 1,
                      *(undefined4 *)(*(long *)(param_1 + 0x5788) + 8));
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  FUN__text__001caa54(param_1,0);
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == 0) goto LAB__text__001d0688;
  local_78 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  local_110 = (undefined1 *)0x49d925aa54c1bc87;
  FUN__text__001ac1fc(lVar20,param_1 + 0x1d0,&local_78,&local_110);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == 0) goto LAB__text__001d0688;
  local_80 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  local_110 = (undefined1 *)0x49d925aa54c1bc87;
  FUN__text__001ac1fc(lVar20,param_1 + 0x1d8,&local_80,&local_110);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  FUN__text__003c7c60(lVar21,param_1 + 0x2f8,0);
  if (*(char *)(param_1 + 0x280) != '\0') {
    lVar20 = *(long *)(param_1 + 0x10);
    if (lVar20 == 0) goto LAB__text__001d0688;
    local_88 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_110 = (undefined1 *)0x49d59faa54bea2fe;
    FUN__text__001ac1fc(lVar20,param_1 + 0x2a0,&local_88,&local_110);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
  }
  bVar3 = false;
  uVar8 = 0;
  lVar19 = lVar19 + 0x110;
  do {
    local_108 = (code *)((ulong)uVar8 << 0x20);
    local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
    lVar20 = FUN__text__001961a8(uVar9,&local_110);
    local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
    local_108 = (code *)CONCAT44(uVar8,1);
    lVar11 = FUN__text__001961a8(uVar9,&local_110);
    local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
    local_108 = (code *)CONCAT44(uVar8,2);
    lVar12 = FUN__text__001961a8(uVar9,&local_110);
    local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
    local_108 = (code *)CONCAT44(uVar8,3);
    lVar13 = FUN__text__001961a8(uVar9,&local_110);
    local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
    local_108 = (code *)CONCAT44(uVar8,4);
    lVar14 = FUN__text__001961a8(uVar9,&local_110);
    local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
    local_108 = (code *)CONCAT44(uVar8,5);
    lVar15 = FUN__text__001961a8(uVar9,&local_110);
    uVar8 = uVar8 + 1;
    bVar3 = (bool)((((((lVar11 == 0 || lVar20 == 0) || lVar12 == 0) || lVar13 == 0) || lVar14 == 0)
                   || lVar15 == 0) | bVar3);
  } while (uVar8 != 5);
  if (bVar3) {
    FUN__text__0012c378(lVar19,param_1 + 0x478);
    uVar8 = 0;
    lVar20 = 0;
    do {
      local_108 = (code *)((ulong)uVar8 << 0x20);
      local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
      lVar12 = FUN__text__001961a8(uVar9,&local_110);
      lVar11 = param_1 + lVar20;
      FUN__text__003c7c60(lVar21,lVar11 + 0x308,lVar12 == 0);
      local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
      local_108 = (code *)CONCAT44(uVar8,1);
      lVar12 = FUN__text__001961a8(uVar9,&local_110);
      FUN__text__003c7c60(lVar21,lVar11 + 0x330,lVar12 == 0);
      local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
      local_108 = (code *)CONCAT44(uVar8,2);
      lVar12 = FUN__text__001961a8(uVar9,&local_110);
      FUN__text__003c7c60(lVar21,lVar11 + 0x358,lVar12 == 0);
      local_108 = (code *)CONCAT44(uVar8,3);
      local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
      lVar12 = FUN__text__001961a8(uVar9,&local_110);
      FUN__text__003c7c60(lVar21,lVar11 + 0x380,lVar12 == 0);
      local_108 = (code *)CONCAT44(uVar8,4);
      local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
      lVar12 = FUN__text__001961a8(uVar9,&local_110);
      FUN__text__003c7c60(lVar21,lVar11 + 0x3a8,lVar12 == 0);
      local_108 = (code *)CONCAT44(uVar8,5);
      local_110 = (undefined1 *)CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x34));
      lVar12 = FUN__text__001961a8(uVar9,&local_110);
      FUN__text__003c7c60(lVar21,lVar11 + 0x3d0,lVar12 == 0);
      lVar20 = lVar20 + 8;
      uVar8 = uVar8 + 1;
    } while (lVar20 != 0x28);
  }
  else {
    FUN__text__0012c378(lVar19,param_1 + 0x480);
  }
  FUN__text__001d0690(param_1,*piVar1,0);
  uVar7 = _DAT_008a0f48;
  pcVar6 = _DAT_008a0f40;
  pcVar5 = _DAT_008a0f38;
  uVar9 = _DAT_008a0f30;
  pcVar17 = _DAT_008a0f28;
  local_e0 = 0;
  lStack_e8 = _DAT_008a0f18;
  local_110 = _DAT_008a0f20;
  local_108 = _DAT_008a0f50;
  lVar20 = *(long *)(param_1 + 0x40);
  pcVar16 = *(code **)(lVar20 + 0xb8);
  local_100 = _DAT_008a0f28;
  local_f8 = _DAT_008a0f58;
  uStack_168 = _DAT_008a0f60;
  local_160 = 0;
  local_190 = _DAT_008a0f30;
  local_188 = _DAT_008a0f38;
  local_180 = _DAT_008a0f40;
  uStack_178 = _DAT_008a0f48;
  local_170 = param_1;
  local_f0 = param_1;
  if (pcVar16 == (code *)0x0) {
LAB__text__001d05e4:
    (*local_100)(&local_f0,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = local_110;
    *(code **)(lVar20 + 0xb8) = local_108;
    *(code **)(lVar20 + 0xc0) = local_100;
    *(undefined1 **)(lVar20 + 200) = local_f8;
    lVar20 = *(long *)(param_1 + 0x40);
    pcVar16 = *(code **)(lVar20 + 0x2b8);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    (*pcVar16)(lVar20 + 0xd0);
    if (local_100 != (code *)0x0) goto LAB__text__001d05e4;
    lVar20 = *(long *)(param_1 + 0x40);
    pcVar16 = *(code **)(lVar20 + 0x2b8);
  }
  puVar4 = (undefined8 *)(lVar20 + 0x2b0);
  if (pcVar16 != (code *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    (*pcVar16)(lVar20 + 0x2d0);
  }
  if (local_180 != (code *)0x0) {
    (*local_180)(&local_170,lVar20 + 0x2d0);
    *puVar4 = local_190;
    puVar4[1] = local_188;
    puVar4[2] = local_180;
    puVar4[3] = uStack_178;
  }
  local_198 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_198,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x40),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x40),1);
  pcVar16 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar16)(&local_170);
  }
  pcVar16 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar16)(&local_f0);
  }
  local_e0 = 0;
  local_110 = _DAT_008a0f20;
  lStack_e8 = _DAT_008a0f68;
  local_108 = _DAT_008a0f50;
  local_100 = pcVar17;
  lVar20 = *(long *)(param_1 + 0x48);
  local_f8 = _DAT_008a0f58;
  pcVar16 = *(code **)(lVar20 + 0xb8);
  local_160 = 0;
  local_190 = uVar9;
  local_188 = pcVar5;
  local_180 = pcVar6;
  uStack_178 = uVar7;
  uStack_168 = _DAT_008a0f70;
  local_170 = param_1;
  local_f0 = param_1;
  if (pcVar16 == (code *)0x0) {
LAB__text__001d061c:
    (*local_100)(&local_f0,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = local_110;
    *(code **)(lVar20 + 0xb8) = local_108;
    *(code **)(lVar20 + 0xc0) = local_100;
    *(undefined1 **)(lVar20 + 200) = local_f8;
    lVar20 = *(long *)(param_1 + 0x48);
    pcVar16 = *(code **)(lVar20 + 0x2b8);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    (*pcVar16)(lVar20 + 0xd0);
    if (local_100 != (code *)0x0) goto LAB__text__001d061c;
    lVar20 = *(long *)(param_1 + 0x48);
    pcVar16 = *(code **)(lVar20 + 0x2b8);
  }
  puVar4 = (undefined8 *)(lVar20 + 0x2b0);
  if (pcVar16 != (code *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    (*pcVar16)(lVar20 + 0x2d0);
  }
  if (local_180 != (code *)0x0) {
    (*local_180)(&local_170,lVar20 + 0x2d0);
    *puVar4 = local_190;
    puVar4[1] = local_188;
    puVar4[2] = local_180;
    puVar4[3] = uStack_178;
  }
  local_198 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x48),&local_198,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x48),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x48),1);
  pcVar16 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar16)(&local_170);
  }
  pcVar16 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar16)(&local_f0);
  }
  local_e0 = 0;
  local_110 = _DAT_008a0f20;
  lStack_e8 = _DAT_008a0f78;
  local_108 = _DAT_008a0f50;
  local_100 = pcVar17;
  lVar20 = *(long *)(param_1 + 0x50);
  local_f8 = _DAT_008a0f58;
  pcVar16 = *(code **)(lVar20 + 0xb8);
  local_160 = 0;
  local_190 = uVar9;
  local_188 = pcVar5;
  local_180 = pcVar6;
  uStack_178 = uVar7;
  uStack_168 = _DAT_008a0f80;
  local_170 = param_1;
  local_f0 = param_1;
  if (pcVar16 == (code *)0x0) {
LAB__text__001d0654:
    (*local_100)(&local_f0,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = local_110;
    *(code **)(lVar20 + 0xb8) = local_108;
    *(code **)(lVar20 + 0xc0) = local_100;
    *(undefined1 **)(lVar20 + 200) = local_f8;
    lVar20 = *(long *)(param_1 + 0x50);
    pcVar16 = *(code **)(lVar20 + 0x2b8);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    (*pcVar16)(lVar20 + 0xd0);
    if (local_100 != (code *)0x0) goto LAB__text__001d0654;
    lVar20 = *(long *)(param_1 + 0x50);
    pcVar16 = *(code **)(lVar20 + 0x2b8);
  }
  puVar4 = (undefined8 *)(lVar20 + 0x2b0);
  if (pcVar16 != (code *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    (*pcVar16)(lVar20 + 0x2d0);
  }
  if (local_180 != (code *)0x0) {
    (*local_180)(&local_170,lVar20 + 0x2d0);
    *puVar4 = local_190;
    puVar4[1] = local_188;
    puVar4[2] = local_180;
    puVar4[3] = uStack_178;
  }
  local_198 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x50),&local_198,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x50),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x50),1);
  pcVar16 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar16)(&local_170);
  }
  pcVar16 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar16)(&local_f0);
  }
  if (*(char *)(param_1 + 0x280) == '\0') goto LAB__text__001d00b8;
  local_e0 = 0;
  local_110 = _DAT_008a0f20;
  lStack_e8 = _DAT_008a0f88;
  local_108 = _DAT_008a0f50;
  local_100 = pcVar17;
  lVar20 = *(long *)(param_1 + 0x58);
  local_f8 = _DAT_008a0f58;
  pcVar17 = *(code **)(lVar20 + 0xb8);
  local_160 = 0;
  local_190 = uVar9;
  local_188 = pcVar5;
  local_180 = pcVar6;
  uStack_178 = uVar7;
  uStack_168 = _DAT_008a0f90;
  local_170 = param_1;
  local_f0 = param_1;
  if (pcVar17 == (code *)0x0) {
LAB__text__001cfff4:
    (*local_100)(&local_f0,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = local_110;
    *(code **)(lVar20 + 0xb8) = local_108;
    *(code **)(lVar20 + 0xc0) = local_100;
    *(undefined1 **)(lVar20 + 200) = local_f8;
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    (*pcVar17)(lVar20 + 0xd0);
    if (local_100 != (code *)0x0) goto LAB__text__001cfff4;
  }
  lVar20 = *(long *)(param_1 + 0x58);
  pcVar17 = *(code **)(lVar20 + 0x2b8);
  if (pcVar17 != (code *)0x0) {
    *(undefined8 *)(lVar20 + 0x2c0) = 0;
    *(undefined8 *)(lVar20 + 0x2c8) = 0;
    *(undefined8 *)(lVar20 + 0x2b0) = 0;
    *(undefined8 *)(lVar20 + 0x2b8) = 0;
    (*pcVar17)(lVar20 + 0x2d0);
  }
  if (local_180 != (code *)0x0) {
    (*local_180)(&local_170,lVar20 + 0x2d0);
    *(undefined8 *)(lVar20 + 0x2b0) = local_190;
    *(code **)(lVar20 + 0x2b8) = local_188;
    *(code **)(lVar20 + 0x2c0) = local_180;
    *(undefined8 *)(lVar20 + 0x2c8) = uStack_178;
  }
  local_198 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x58),&local_198,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x58),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x58),1);
  pcVar17 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar17)(&local_170);
  }
  pcVar17 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar17)(&local_f0);
  }
LAB__text__001d00b8:
  lVar20 = 0;
  lVar11 = 0x720;
  do {
    uVar18 = (undefined4)lVar20;
    local_190 = lVar20 << 0x20;
    uVar8 = FUN__text__00191374(&local_190);
    if (uVar8 < uVar2) {
      FUN__text__001920e4(lVar10,&local_190);
    }
    lVar12 = param_1 + lVar11;
    lVar13 = FUN__text__0012cb14(lVar19,lVar12 + -0x230);
    *(undefined1 *)(lVar13 + 0x240) = 1;
    local_110 = &LAB__text__001d35b8;
    local_108 = FUN__text__001d35c4;
    lStack_e8 = local_190;
    pcVar17 = *(code **)(lVar13 + 0x408);
    local_100 = FUN__text__001d35c8;
    local_f8 = &LAB__text__001d35d4;
    local_f0 = param_1;
    if (pcVar17 == (code *)0x0) {
LAB__text__001d0474:
      (*local_100)(&local_f0,lVar13 + 0x420);
      *(undefined8 *)(lVar13 + 0x400) = local_110;
      *(code **)(lVar13 + 0x408) = local_108;
      *(code **)(lVar13 + 0x410) = local_100;
      *(undefined1 **)(lVar13 + 0x418) = local_f8;
      pcVar17 = local_108;
    }
    else {
      *(undefined8 *)(lVar13 + 0x410) = 0;
      *(undefined8 *)(lVar13 + 0x418) = 0;
      *(undefined8 *)(lVar13 + 0x400) = 0;
      *(undefined8 *)(lVar13 + 0x408) = 0;
      (*pcVar17)(lVar13 + 0x420);
      pcVar17 = local_108;
      if (local_100 != (code *)0x0) goto LAB__text__001d0474;
    }
    local_108 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar17)(&local_f0);
    }
    local_190 = CONCAT44(uVar18,1);
    uVar8 = FUN__text__00191374(&local_190);
    if (uVar8 < uVar2) {
      FUN__text__001920e4(lVar10,&local_190);
    }
    lVar13 = FUN__text__0012cb14(lVar19,lVar12);
    *(undefined1 *)(lVar13 + 0x240) = 1;
    local_110 = &LAB__text__001d35b8;
    local_108 = FUN__text__001d35c4;
    lStack_e8 = local_190;
    pcVar17 = *(code **)(lVar13 + 0x408);
    local_100 = FUN__text__001d35c8;
    local_f8 = &LAB__text__001d35d4;
    local_f0 = param_1;
    if (pcVar17 == (code *)0x0) {
LAB__text__001d04a4:
      (*local_100)(&local_f0,lVar13 + 0x420);
      *(undefined8 *)(lVar13 + 0x400) = local_110;
      *(code **)(lVar13 + 0x408) = local_108;
      *(code **)(lVar13 + 0x410) = local_100;
      *(undefined1 **)(lVar13 + 0x418) = local_f8;
      pcVar17 = local_108;
    }
    else {
      *(undefined8 *)(lVar13 + 0x410) = 0;
      *(undefined8 *)(lVar13 + 0x418) = 0;
      *(undefined8 *)(lVar13 + 0x400) = 0;
      *(undefined8 *)(lVar13 + 0x408) = 0;
      (*pcVar17)(lVar13 + 0x420);
      pcVar17 = local_108;
      if (local_100 != (code *)0x0) goto LAB__text__001d04a4;
    }
    local_108 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar17)(&local_f0);
    }
    local_190 = CONCAT44(uVar18,2);
    uVar8 = FUN__text__00191374(&local_190);
    if (uVar8 < uVar2) {
      FUN__text__001920e4(lVar10,&local_190);
    }
    lVar13 = FUN__text__0012cb14(lVar19,lVar12 + 0x230);
    *(undefined1 *)(lVar13 + 0x240) = 1;
    local_110 = &LAB__text__001d35b8;
    local_108 = FUN__text__001d35c4;
    lStack_e8 = local_190;
    pcVar17 = *(code **)(lVar13 + 0x408);
    local_100 = FUN__text__001d35c8;
    local_f8 = &LAB__text__001d35d4;
    local_f0 = param_1;
    if (pcVar17 == (code *)0x0) {
LAB__text__001d04d4:
      (*local_100)(&local_f0,lVar13 + 0x420);
      *(undefined8 *)(lVar13 + 0x400) = local_110;
      *(code **)(lVar13 + 0x408) = local_108;
      *(code **)(lVar13 + 0x410) = local_100;
      *(undefined1 **)(lVar13 + 0x418) = local_f8;
      pcVar17 = local_108;
    }
    else {
      *(undefined8 *)(lVar13 + 0x410) = 0;
      *(undefined8 *)(lVar13 + 0x418) = 0;
      *(undefined8 *)(lVar13 + 0x400) = 0;
      *(undefined8 *)(lVar13 + 0x408) = 0;
      (*pcVar17)(lVar13 + 0x420);
      pcVar17 = local_108;
      if (local_100 != (code *)0x0) goto LAB__text__001d04d4;
    }
    local_108 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar17)(&local_f0);
    }
    local_190 = CONCAT44(uVar18,3);
    uVar8 = FUN__text__00191374(&local_190);
    if (uVar8 < uVar2) {
      FUN__text__001920e4(lVar10,&local_190);
    }
    lVar13 = FUN__text__0012cb14(lVar19,lVar12 + 0x460);
    *(undefined1 *)(lVar13 + 0x240) = 1;
    local_110 = &LAB__text__001d35b8;
    local_108 = FUN__text__001d35c4;
    lStack_e8 = local_190;
    pcVar17 = *(code **)(lVar13 + 0x408);
    local_100 = FUN__text__001d35c8;
    local_f8 = &LAB__text__001d35d4;
    local_f0 = param_1;
    if (pcVar17 == (code *)0x0) {
LAB__text__001d0504:
      (*local_100)(&local_f0,lVar13 + 0x420);
      *(undefined8 *)(lVar13 + 0x400) = local_110;
      *(code **)(lVar13 + 0x408) = local_108;
      *(code **)(lVar13 + 0x410) = local_100;
      *(undefined1 **)(lVar13 + 0x418) = local_f8;
      pcVar17 = local_108;
    }
    else {
      *(undefined8 *)(lVar13 + 0x410) = 0;
      *(undefined8 *)(lVar13 + 0x418) = 0;
      *(undefined8 *)(lVar13 + 0x400) = 0;
      *(undefined8 *)(lVar13 + 0x408) = 0;
      (*pcVar17)(lVar13 + 0x420);
      pcVar17 = local_108;
      if (local_100 != (code *)0x0) goto LAB__text__001d0504;
    }
    local_108 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar17)(&local_f0);
    }
    local_190 = CONCAT44(uVar18,4);
    uVar8 = FUN__text__00191374(&local_190);
    if (uVar8 < uVar2) {
      FUN__text__001920e4(lVar10,&local_190);
    }
    lVar13 = FUN__text__0012cb14(lVar19,lVar12 + 0x690);
    *(undefined1 *)(lVar13 + 0x240) = 1;
    local_110 = &LAB__text__001d35b8;
    local_108 = FUN__text__001d35c4;
    lStack_e8 = local_190;
    pcVar17 = *(code **)(lVar13 + 0x408);
    local_100 = FUN__text__001d35c8;
    local_f8 = &LAB__text__001d35d4;
    local_f0 = param_1;
    if (pcVar17 == (code *)0x0) {
LAB__text__001d0534:
      (*local_100)(&local_f0,lVar13 + 0x420);
      *(undefined8 *)(lVar13 + 0x400) = local_110;
      *(code **)(lVar13 + 0x408) = local_108;
      *(code **)(lVar13 + 0x410) = local_100;
      *(undefined1 **)(lVar13 + 0x418) = local_f8;
      pcVar17 = local_108;
    }
    else {
      *(undefined8 *)(lVar13 + 0x410) = 0;
      *(undefined8 *)(lVar13 + 0x418) = 0;
      *(undefined8 *)(lVar13 + 0x400) = 0;
      *(undefined8 *)(lVar13 + 0x408) = 0;
      (*pcVar17)(lVar13 + 0x420);
      pcVar17 = local_108;
      if (local_100 != (code *)0x0) goto LAB__text__001d0534;
    }
    local_108 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar17)(&local_f0);
    }
    local_190 = CONCAT44(uVar18,5);
    uVar8 = FUN__text__00191374(&local_190);
    if (uVar8 < uVar2) {
      FUN__text__001920e4(lVar10,&local_190);
    }
    lVar12 = FUN__text__0012cb14(lVar19,lVar12 + 0x8c0);
    *(undefined1 *)(lVar12 + 0x240) = 1;
    local_110 = &LAB__text__001d35b8;
    local_108 = FUN__text__001d35c4;
    lStack_e8 = local_190;
    pcVar17 = *(code **)(lVar12 + 0x408);
    local_100 = FUN__text__001d35c8;
    local_f8 = &LAB__text__001d35d4;
    local_f0 = param_1;
    if (pcVar17 == (code *)0x0) {
LAB__text__001d0564:
      (*local_100)(&local_f0,lVar12 + 0x420);
      *(undefined8 *)(lVar12 + 0x400) = local_110;
      *(code **)(lVar12 + 0x408) = local_108;
      *(code **)(lVar12 + 0x410) = local_100;
      *(undefined1 **)(lVar12 + 0x418) = local_f8;
      pcVar17 = local_108;
    }
    else {
      *(undefined8 *)(lVar12 + 0x410) = 0;
      *(undefined8 *)(lVar12 + 0x418) = 0;
      *(undefined8 *)(lVar12 + 0x400) = 0;
      *(undefined8 *)(lVar12 + 0x408) = 0;
      (*pcVar17)(lVar12 + 0x420);
      pcVar17 = local_108;
      if (local_100 != (code *)0x0) goto LAB__text__001d0564;
    }
    local_108 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar17)(&local_f0);
    }
    lVar20 = lVar20 + 1;
    lVar11 = lVar11 + 0x70;
    if (lVar20 == 5) {
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
      }
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
      return;
    }
  } while( true );
}


