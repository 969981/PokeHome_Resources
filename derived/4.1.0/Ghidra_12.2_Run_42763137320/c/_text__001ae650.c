/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ae650; name: FUN_.text__001ae650
 */


void FUN__text__001ae650(long param_1,long *param_2,int param_3,undefined4 param_4)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  long local_138;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  lVar19 = *(long *)(param_1 + 8);
  lVar21 = *(long *)(lVar19 + 0x2d0);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  puVar27 = *(undefined8 **)(param_1 + 0x18);
  if (puVar27 == (undefined8 *)0x0) goto LAB__text__001af920;
  lVar25 = puVar27[0x21];
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  lVar26 = puVar27[0x22];
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  lVar23 = puVar27[0x1e];
  if (lVar23 != 0) {
    (**(code **)(*(long *)(lVar23 + 0x48) + 0x10))();
  }
  lVar24 = puVar27[0x23];
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(DAT_008e15a0 + 0x80);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  lVar28 = *(long *)(lVar22 + 0x2f8);
  if (lVar28 != 0) {
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  uVar14 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(local_70,uVar14,0);
  lVar22 = *(long *)(local_70[0] + 0x60);
  if ((lVar22 == 0) || ((**(code **)(*(long *)(lVar22 + 0x48) + 0x10))(), local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  iVar18 = param_3;
  if (param_3 == 0) {
    iVar18 = 3;
  }
  lVar15 = FUN__text__00325bc0();
  iVar12 = *(int *)(lVar15 + 0x2c);
  FUN__text__001afb3c(param_1,param_2,param_3);
  if ((*param_2 == 0) || (uVar16 = FUN__text__00306588(), (uVar16 & 1) != 0)) {
    FUN__text__001afcb8(param_1,0);
    FUN__text__001afe58(param_1);
    FUN__text__003c7c60(lVar21,param_1 + 0x128,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x148,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x130,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x150,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x138,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x158,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x140,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x160,0);
    goto joined_r0x001af880;
  }
  uVar7 = FUN__text__00306a08(*param_2,2);
  uVar8 = FUN__text__00306a08(*param_2,1);
  FUN__text__001afcb8(param_1,1);
  lVar15 = *(long *)(param_1 + 0x10);
  if ((uVar7 & 1) == 0) {
    if (lVar15 == 0) goto LAB__text__001af920;
    local_80 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_70[0] = 0x786a1e4480312115;
    FUN__text__001aad60(lVar15,param_1 + 0x48,&local_80,local_70,0,param_2);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    lVar15 = *(long *)(param_1 + 0x10);
    if (lVar15 == 0) goto LAB__text__001af920;
    local_88 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_70[0] = 0x786da44480343a9e;
    FUN__text__001aae70(lVar15,param_1 + 0x50,&local_88,local_70,0,param_2);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    lVar15 = *(long *)(param_1 + 0x10);
    if (lVar15 == 0) goto LAB__text__001af920;
    local_90 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_70[0] = 0x7871294480375274;
    FUN__text__001aaf94(lVar15,param_1 + 0x60,&local_90,local_70,0,param_2);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    uVar13 = FUN__text__0030673c(*param_2);
    uVar9 = FUN__text__0030679c(*param_2);
    FUN__text__003c7c60(lVar21,(long *)(param_1 + 0x178),(uVar13 & 0xff) != (uVar9 & 0xff));
    lVar15 = *(long *)(param_1 + 0x170);
    uVar14 = 0;
    if ((lVar15 != -0x340d631b7bddd9bb) && (lVar15 != 0)) {
      local_70[0] = lVar15;
      uVar14 = FUN__text__00155100(*(undefined8 *)(lVar19 + 0x2d0),local_70);
    }
    FUN__text__003d3dac(lVar25,uVar13,0,uVar14,0,0);
    lVar15 = *(long *)(param_1 + 0x178);
    uVar14 = 0;
    if ((lVar15 != -0x340d631b7bddd9bb) && (lVar15 != 0)) {
      local_70[0] = lVar15;
      uVar14 = FUN__text__00155100(*(undefined8 *)(lVar19 + 0x2d0),local_70);
    }
    FUN__text__003d3dac(lVar25,uVar9,0,uVar14,0,0);
    if (param_3 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN__text__00307e18(*param_2,param_3);
    }
    FUN__text__003c7c60(lVar21,param_1 + 0x180,uVar13 & 1);
    uVar13 = FUN__text__003067fc(*param_2);
    FUN__text__003c7c60(lVar21,param_1 + 0x188,uVar13 & 1);
    uVar10 = FUN__text__003069d0(*param_2);
    lVar15 = *(long *)(param_1 + 0x1a0);
    uVar14 = 0;
    if ((lVar15 != -0x340d631b7bddd9bb) && (lVar15 != 0)) {
      local_70[0] = lVar15;
      uVar14 = FUN__text__00155100(*(undefined8 *)(lVar19 + 0x2d0),local_70,0);
    }
    FUN__text__003c6808(lVar26,uVar10,uVar14,0,0);
    iVar11 = FUN__text__0030680c(*param_2);
    FUN__text__0012c97c(*(undefined4 *)((long)iVar11 * 4 + 0x725ce8),*(long *)(param_1 + 8) + 0x110,
                        param_1 + 0x1c8);
    iVar11 = FUN__text__00306a20(*param_2);
    bVar5 = FUN__text__00306888(*param_2);
    bVar4 = 0;
    if (param_3 != 0) {
      bVar4 = iVar11 == 3 & bVar5;
    }
    FUN__text__003c7c60(lVar21,param_1 + 0x1c0,bVar4);
    if ((uVar8 & 1) != 0) goto LAB__text__001af81c;
LAB__text__001aead8:
    local_138 = lVar19 + 0x110;
    lVar15 = *(long *)(param_1 + 0x168);
    uVar14 = 0;
    if ((lVar15 != -0x340d631b7bddd9bb) && (lVar15 != 0)) {
      local_70[0] = lVar15;
      uVar14 = FUN__text__00155100(*(undefined8 *)(lVar19 + 0x2d0),local_70,0);
    }
    FUN__text__003c3014(lVar28,param_4,uVar14,0,0);
    uVar8 = FUN__text__0016b1e0(iVar18);
    uVar16 = FUN__text__00306804(*param_2);
    if (((uVar8 & 1) == 0) || ((uVar16 & 1) == 0)) {
      uVar13 = FUN__text__003069c0(*param_2);
      FUN__text__003c7c60(lVar21,param_1 + 400,0);
      if ((uVar8 & uVar13 & 1) == 0) goto LAB__text__001aedac;
      uVar14 = 1;
    }
    else {
      FUN__text__003c7c60(lVar21,param_1 + 400,1);
LAB__text__001aedac:
      uVar14 = 0;
    }
    FUN__text__003c7c60(lVar21,param_1 + 0x198,uVar14);
    FUN__text__003069b0(*param_2);
    uVar10 = FUN__text__00205790();
    lVar15 = *(long *)(param_1 + 0x1a8);
    uVar14 = 0;
    if ((lVar15 != -0x340d631b7bddd9bb) && (lVar15 != 0)) {
      local_70[0] = lVar15;
      uVar14 = FUN__text__00155100(*(undefined8 *)(lVar19 + 0x2d0),local_70,0);
    }
    FUN__text__003c596c(lVar23,uVar10,uVar14,0,0);
    FUN__text__0012c898(local_138,param_1 + 0x458);
    FUN__text__0012c898(local_138,param_1 + 0x460);
    FUN__text__0012c898(local_138,param_1 + 0x468);
    iVar11 = FUN__text__003069a8(*param_2,0);
    FUN__text__0012c378(local_138,param_1 + 0x458 + (long)iVar11 * 8);
    FUN__text__0012c898(local_138,param_1 + 0x470);
    FUN__text__0012c898(local_138,param_1 + 0x478);
    FUN__text__0012c898(local_138,param_1 + 0x480);
    iVar11 = FUN__text__003069a8(*param_2,1);
    FUN__text__0012c378(local_138,param_1 + 0x470 + (long)iVar11 * 8);
    FUN__text__0012c898(local_138,param_1 + 0x488);
    FUN__text__0012c898(local_138,param_1 + 0x490);
    FUN__text__0012c898(local_138,param_1 + 0x498);
    iVar11 = FUN__text__003069a8(*param_2,2);
    FUN__text__0012c378(local_138,param_1 + 0x488 + (long)iVar11 * 8);
    FUN__text__0012c898(local_138,param_1 + 0x4a0);
    FUN__text__0012c898(local_138,param_1 + 0x4a8);
    FUN__text__0012c898(local_138,param_1 + 0x4b0);
    iVar11 = FUN__text__003069a8(*param_2,3);
    FUN__text__0012c378(local_138,param_1 + 0x4a0 + (long)iVar11 * 8);
    FUN__text__0012c898(local_138,param_1 + 0x4b8);
    FUN__text__0012c898(local_138,param_1 + 0x4c0);
    FUN__text__0012c898(local_138,param_1 + 0x4c8);
    iVar11 = FUN__text__003069a8(*param_2,4);
    FUN__text__0012c378(local_138,param_1 + 0x4b8 + (long)iVar11 * 8);
    FUN__text__0012c898(local_138,param_1 + 0x4d0);
    FUN__text__0012c898(local_138,param_1 + 0x4d8);
    FUN__text__0012c898(local_138,param_1 + 0x4e0);
    iVar11 = FUN__text__003069a8(*param_2,5);
    FUN__text__0012c378(local_138,param_1 + 0x4d0 + (long)iVar11 * 8);
  }
  else {
    if (lVar15 == 0) goto LAB__text__001af920;
    local_78 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_70[0] = 0x786a1e4480312115;
    FUN__text__001ac594(lVar15,param_1 + 0x48,&local_78,local_70,0,0);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    FUN__text__003c7c60(lVar21,param_1 + 0x50,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x58,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x60,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x170,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x178,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x180,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x188,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x1a0,0);
    FUN__text__0012c97c(0x40000000,*(long *)(param_1 + 8) + 0x110,param_1 + 0x1c8);
    FUN__text__003c7c60(lVar21,param_1 + 0x1c0,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x1d0,0);
    FUN__text__003c7c60(lVar21,0x725d88,0);
    if ((uVar8 & 1) == 0) goto LAB__text__001aead8;
LAB__text__001af81c:
    FUN__text__003c7c60(lVar21,param_1 + 0x168,0);
    FUN__text__003c7c60(lVar21,param_1 + 400,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x198,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x1a8,0);
    FUN__text__003c7c60(lVar21,param_1 + 0x4e8,0);
  }
  if ((uVar7 & 1) != 0) {
    FUN__text__001afe58(param_1);
    goto joined_r0x001af880;
  }
  local_138 = lVar19 + 0x110;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) {
LAB__text__001af920:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_98 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  local_70[0] = 0x785921448022b2fb;
  FUN__text__001ab0a4(lVar19,param_1 + 0x70,&local_98,local_70,0,param_2);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  uVar16 = FUN__text__00196294(param_2,param_3);
  lVar19 = *(long *)(param_1 + 0x10);
  if ((uVar16 & 1) == 0) {
    if (lVar19 == 0) goto LAB__text__001af920;
    local_a0 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_70[0] = -0x785149d2741daf75;
    FUN__text__001ac1fc(lVar19,param_1 + 0x80,&local_a0,local_70);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
  }
  else {
    if (lVar19 == 0) goto LAB__text__001af920;
    local_a8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    local_70[0] = 0x785ca5448025c91e;
    FUN__text__001ab1bc(lVar19,param_1 + 0x80,&local_a8,local_70,0,param_2);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
  }
  uVar16 = FUN__text__003279b0(iVar18);
  uVar7 = FUN__text__003279d0(iVar18);
  lVar19 = *(long *)(param_1 + 0x10);
  if ((uVar16 & 1) == 0) {
    if (lVar19 == 0) goto LAB__text__001af920;
    local_b8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    FUN__text__001ab2d4(lVar19,param_1 + 0xb8,&local_b8,0x725d90,0,param_2);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
  }
  else {
    if (lVar19 == 0) goto LAB__text__001af920;
    local_b0 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    FUN__text__001ab3f8(lVar19,param_1 + 0xb8,&local_b0,0x725d90,0,param_2,0);
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
  }
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) goto LAB__text__001af920;
  plVar1 = (long *)(lVar22 + 0x48);
  local_c0 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  FUN__text__001ab3f8(lVar19,param_1 + 0xc0,&local_c0,0x725d98,0,param_2,1);
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) goto LAB__text__001af920;
  local_c0 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN__text__001ab3f8(lVar19,param_1 + 200,&local_c0,0x725da0,0,param_2,2);
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) goto LAB__text__001af920;
  local_c0 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN__text__001ab3f8(lVar19,param_1 + 0xd0,&local_c0,0x725da8,0,param_2,3);
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) goto LAB__text__001af920;
  local_c0 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN__text__001ab3f8(lVar19,param_1 + 0xd8,&local_c0,0x725db0,0,param_2,4);
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) goto LAB__text__001af920;
  local_c0 = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN__text__001ab3f8(lVar19,param_1 + 0xe0,&local_c0,0x725db8,0,param_2,5);
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (iVar12 == 0) {
    uVar8 = FUN__text__0016af80(iVar18);
    bVar3 = (uVar8 & 0xff) != 0;
    piVar20 = (int *)*puVar27;
  }
  else {
    lVar19 = FUN__text__00325bc0();
    uVar8 = FUN__text__0016af80(*(undefined4 *)(lVar19 + 0x2c));
    lVar19 = FUN__text__00325bc0();
    bVar4 = FUN__text__0019513c(param_2,*(undefined4 *)(lVar19 + 0x2c));
    bVar3 = (bool)((uVar8 & 0xff) != 0 & bVar4);
    piVar20 = (int *)*puVar27;
  }
  if (piVar20 != (int *)0x0) {
    bVar2 = false;
    if (*piVar20 != 2) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2;
  }
  bVar2 = false;
  if (iVar12 != 0) {
    bVar2 = bVar3;
  }
  bVar5 = FUN__text__0030672c(*param_2);
  uVar29 = 0;
  bVar4 = 0;
  lVar19 = param_1 + 0xe8;
  do {
    iVar12 = FUN__text__00306724(*param_2,uVar29 & 0xffffffff);
    if (iVar12 != 0) {
      bVar4 = bVar4 + 1;
    }
    lVar15 = *(long *)(param_1 + 0x10);
    if (bVar5 < bVar4 || iVar12 == 0) {
      if (lVar15 == 0) goto LAB__text__001af920;
      local_d0 = lVar22;
      if (lVar22 != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      local_70[0] = -0x785149d2741daf75;
      FUN__text__001ac1fc(lVar15,lVar19,&local_d0,local_70);
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = 0;
      }
      FUN__text__003c7c60(lVar21,lVar19 + 0x40,0);
      FUN__text__003c7c60(lVar21,lVar19 + 0x60,0);
      uVar6 = 0x13;
    }
    else {
      if (lVar15 == 0) goto LAB__text__001af920;
      local_c8 = lVar22;
      if (lVar22 != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      local_70[0] = 0x7fc3474483fb7d45;
      FUN__text__001ab52c(lVar15,lVar19,&local_c8,local_70,0,param_2,uVar29 & 0xffffffff);
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
        local_c8 = 0;
      }
      if (bVar2 == false) {
LAB__text__001af68c:
        uVar6 = FUN__text__0063c6c8(iVar12,0);
      }
      else {
        uVar17 = FUN__text__00321bb0(uVar8,iVar12);
        uVar6 = 0x12;
        if ((uVar17 & 1) != 0) goto LAB__text__001af68c;
      }
      if ((uVar16 & 1) == 0) {
        uVar13 = 0;
      }
      else {
        uVar14 = FUN__text__00306bc4(*param_2);
        uVar13 = FUN__text__00635280(uVar14,iVar12);
      }
      FUN__text__003c7c60(lVar21,lVar19 + 0x40,uVar13 & 1);
      if ((uVar7 & 1) == 0) {
        FUN__text__003c7c60(lVar21,lVar19 + 0x60,0);
      }
      else {
        uVar14 = FUN__text__00306bc4(*param_2);
        uVar13 = FUN__text__00635e38(uVar14,iVar12);
        FUN__text__003c7c60(lVar21,lVar19 + 0x60,uVar13 & 1);
      }
    }
    FUN__text__001b0360(param_1,uVar29 & 0xffffffff,uVar6);
    uVar29 = uVar29 + 1;
    lVar19 = lVar19 + 8;
  } while (uVar29 != 4);
  if ((uVar16 & 1) == 0) {
    if ((uVar7 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      FUN__text__00306bc4(*param_2);
      uVar7 = FUN__text__00635e30();
    }
  }
  else {
    FUN__text__00306bc4(*param_2);
    uVar7 = FUN__text__00635270();
  }
  FUN__text__003c7c60(lVar21,param_1 + 0x1d0,uVar7 & 1);
  uVar16 = FUN__text__003279c0(iVar18);
  if ((uVar16 & 1) == 0) {
LAB__text__001af904:
    FUN__text__003c7c60(lVar21,0x725d88,0);
  }
  else {
    FUN__text__00306bc4(*param_2);
    bVar4 = FUN__text__00635be0();
    if (bVar4 < 0x12) {
      fVar30 = (float)bVar4;
    }
    else {
      if (bVar4 != 99) goto LAB__text__001af904;
      fVar30 = 18.0;
    }
    FUN__text__0012c97c(fVar30,local_138,0x725dc0);
    FUN__text__003c7c60(lVar21,0x725d88,1);
  }
joined_r0x001af880:
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  }
  if (lVar28 != 0) {
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x18))();
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  if (lVar23 != 0) {
    (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
  }
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
  }
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  }
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  }
  return;
}


