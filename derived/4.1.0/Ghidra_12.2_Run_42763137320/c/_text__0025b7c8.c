/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025b7c8; name: FUN_.text__0025b7c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0025b7c8(long param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  float fVar27;
  long local_140;
  long local_138;
  long local_130;
  long local_128 [2];
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  long local_78;
  long local_70 [2];
  
  lVar25 = *(long *)(param_1 + 0x2d0);
  if (lVar25 != 0) {
    plVar19 = (long *)(lVar25 + 0x48);
    (**(code **)(*plVar19 + 0x10))(plVar19);
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  lVar20 = *(long *)(param_1 + 0x640);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_90 = *(ulong *)(param_1 + 0xfe0);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
  }
  puVar1 = (undefined4 *)(param_1 + 0x1004);
  FUN__text__0024efa0(lVar20,&local_90,puVar1,param_2);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  iVar14 = *(int *)(param_1 + 0x1004);
  lVar20 = *(long *)(param_1 + 0xfe0);
  pcVar2 = (char *)(param_1 + 0x1008);
  iVar16 = 3;
  if (iVar14 != 0) {
    iVar16 = iVar14;
  }
  *pcVar2 = iVar14 == 0;
  *(int *)(param_1 + 0x1000) = iVar16;
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  local_90 = 0x94f0ab6b70e7ac3f;
  local_88 = 0x719f5d;
  local_80 = 0x1c;
  local_78 = 0;
  FUN__text__00115650(local_70,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_90,0xb);
  lVar21 = *(long *)(local_70[0] + 0x60);
  if ((lVar21 == 0) || ((**(code **)(*(long *)(lVar21 + 0x48) + 0x10))(), local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  lVar22 = *(long *)(param_1 + 0x2d0);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  lVar24 = *(long *)(lVar22 + 0x2e0);
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  bVar5 = FUN__text__00306a08(lVar20,2);
  bVar6 = FUN__text__00306a08(lVar20,1);
  lVar22 = *(long *)(lVar25 + 0x2e8);
  local_90 = 0xf256e4202e0468fd;
  if (lVar22 == 0) {
    FUN__text__005f2d98(lVar21,&local_90,0);
  }
  else {
    plVar19 = (long *)(lVar22 + 0x48);
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN__text__005f2d98(lVar21,&local_90,lVar22);
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  FUN__text__00306608(lVar20,*(undefined8 *)(param_1 + 0x6e0));
  lVar22 = *(long *)(lVar25 + 0x2e0);
  if ((bVar5 & 1) == 0) {
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    uVar23 = *(undefined8 *)(param_1 + 0x6e0);
    uVar26 = FUN__text__0030680c(lVar20);
    uVar13 = FUN__text__003069d0(lVar20);
    FUN__text__00165990(lVar22,0,uVar23,uVar26,uVar13);
  }
  else {
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    FUN__text__00165904(lVar22,0,0);
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  FUN__text__003c8c20(lVar25,0x72cb90,0xb);
  lVar22 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cb98);
  *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe | ~bVar5 & 1;
  if ((bVar5 & 1) == 0) {
    uVar26 = FUN__text__00306610(lVar20);
    lVar22 = *(long *)(lVar25 + 0x2e8);
    local_90 = 0xf25a4a202e074c26;
    if (lVar22 == 0) {
      FUN__text__005f2d98(lVar21,&local_90,0);
      lVar22 = *(long *)(lVar25 + 0x2e0);
    }
    else {
      plVar19 = (long *)(lVar22 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      FUN__text__005f2d98(lVar21,&local_90,lVar22);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      lVar22 = *(long *)(lVar25 + 0x2e0);
    }
    if (lVar22 != 0) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar22,0,uVar26,3,0,1);
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
    FUN__text__003c8c20(lVar25,0x72cb98,0xb);
    uVar15 = FUN__text__0030680c(lVar20);
    if (uVar15 < 3) {
      uVar26 = *(undefined4 *)((long)(int)uVar15 * 4 + 0x72ccf8);
      goto LAB__text__0025bbac;
    }
  }
  else {
    uVar26 = 0x40000000;
LAB__text__0025bbac:
    FUN__text__0012c97c(uVar26,param_1 + 0x110,0x72cba0);
  }
  bVar9 = (bVar5 ^ 0xff) & 1;
  bVar7 = FUN__text__0016b1e0(*(undefined4 *)(param_1 + 0x1000));
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cba8);
  bVar12 = (bVar6 ^ 0xff) & 1;
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | ~bVar6 & 1;
  if ((bVar6 & 1) == 0) {
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cba8);
    bVar8 = FUN__text__00306804(lVar20);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar7 & bVar8 & 1;
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbb0);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar12;
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbb0);
    bVar8 = FUN__text__003069c0(lVar20);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar7 & bVar8 & 1;
  }
  else {
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbb0);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar12;
  }
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbb8);
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar9;
  if ((bVar5 & 1) == 0) {
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbb8);
    if (*pcVar2 == '\0') {
      bVar7 = FUN__text__00307e18(lVar20,*(undefined4 *)(param_1 + 0x1000));
    }
    else {
      bVar7 = 0;
    }
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar7 & 1;
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbc0);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar9;
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbc0);
    bVar9 = FUN__text__003067fc(lVar20);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar9 & 1;
    lVar25 = *(long *)(DAT_008e15a0 + 0x80);
  }
  else {
    lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbc0);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar9;
    lVar25 = *(long *)(DAT_008e15a0 + 0x80);
  }
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(lVar25 + 0x2f8);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  local_90 = *(ulong *)(*_DAT_0089f3d8 + 0x2a8);
  FUN__text__0018d370(local_70,local_90,&local_90);
  uVar23 = *(undefined8 *)(param_1 + 0x640);
  local_a0 = local_70[0];
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  FUN__text__0024ee80(&local_98,uVar23,&local_a0,*(undefined4 *)(param_1 + 0x6ec));
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  lVar25 = FUN__text__00325bc0();
  cVar10 = FUN__text__00194b7c(*(undefined4 *)(lVar25 + 0x2c));
  cVar11 = FUN__text__00194b7c(*puVar1);
  if (cVar11 == cVar10) {
    uVar23 = FUN__text__00306734(lVar20);
    uVar26 = FUN__text__0016b220(uVar23,*puVar1);
  }
  else {
    FUN__text__00306bc4(local_70[0]);
    uVar26 = FUN__text__006312f0();
  }
  if (((cVar10 == '\x02') && (cVar11 == '\x02')) &&
     (uVar18 = FUN__text__00307e54(local_70[0]), (uVar18 & 1) != 0)) {
    iVar16 = FUN__text__00306734(local_70[0]);
    uVar13 = 4;
    if (iVar16 != 0x1b) {
      uVar13 = uVar26;
    }
    uVar26 = uVar13;
  }
  uVar23 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72cbc8);
  FUN__text__003c3014(lVar22,uVar26,uVar23,0,0);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbc8);
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar12;
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbd0);
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar12;
  if ((bVar6 & 1) == 0) {
    lVar25 = *(long *)(param_1 + 0x568);
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    }
    FUN__text__003069b0(lVar20);
    uVar26 = FUN__text__00205790();
    local_90 = 0x5800f2a1523c41ad;
    uVar23 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_90);
    FUN__text__003c596c(lVar25,uVar26,uVar23,0,0);
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  }
  local_90 = local_90 & 0xffff000000000000;
  local_88 = local_88 & 0xffff000000000000;
  local_80 = 0;
  local_78 = CONCAT44(local_78._4_4_,0xffffffff);
  uVar23 = FUN__text__00306bc4(lVar20);
  FUN__text__00205d60(&local_90,uVar23);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_128[1] = 0;
  local_118 = (code *)0x0;
  FUN__text__003d29b0(param_1 + 0x980,&local_90,0,0,local_128 + 1);
  pcVar4 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_128[1] = 0;
    local_118 = (code *)0x0;
    (*pcVar4)(&local_100);
  }
  lVar25 = *(long *)(DAT_008e15a0 + 0x80);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(lVar25 + 0x2e8);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  iVar14 = FUN__text__0024ede0(*(undefined8 *)(param_1 + 0x640));
  uVar23 = *(undefined8 *)(param_1 + 0x640);
  local_130 = *(long *)(param_1 + 0xfe8);
  iVar16 = 0;
  if (param_2 + 1U <= iVar14 - 1U) {
    iVar16 = param_2 + 1;
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
  }
  FUN__text__0024edf8(local_128,uVar23,&local_130,iVar16);
  if (local_128[0] != 0) {
    (**(code **)(*(long *)(local_128[0] + 0x48) + 0x18))();
    local_128[0] = 0;
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  lVar25 = *(long *)(param_1 + 0xfe8);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  local_90 = local_90 & 0xffff000000000000;
  local_88 = local_88 & 0xffff000000000000;
  local_80 = 0;
  local_78 = CONCAT44(local_78._4_4_,0xffffffff);
  uVar23 = FUN__text__00306bc4(lVar25);
  FUN__text__00205d60(&local_90,uVar23);
  uVar23 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72cbd8);
  FUN__text__003c3378(lVar22,&local_90,0,uVar23,0,0);
  lVar17 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbd8);
  uVar15 = FUN__text__0024ede0(*(undefined8 *)(param_1 + 0x640));
  *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe | 1 < uVar15;
  (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  uVar23 = *(undefined8 *)(param_1 + 0x640);
  uVar15 = iVar14 - 1U;
  if (0 < param_2) {
    uVar15 = param_2 - 1;
  }
  local_140 = *(long *)(param_1 + 0xff0);
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x10))();
  }
  FUN__text__0024edf8(&local_138,uVar23,&local_140,uVar15);
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = 0;
  }
  lVar25 = *(long *)(param_1 + 0xff0);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  local_90 = local_90 & 0xffff000000000000;
  local_88 = local_88 & 0xffff000000000000;
  local_80 = 0;
  local_78 = CONCAT44(local_78._4_4_,0xffffffff);
  uVar23 = FUN__text__00306bc4(lVar25);
  FUN__text__00205d60(&local_90,uVar23);
  uVar23 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72cbe0);
  FUN__text__003c3378(lVar22,&local_90,0,uVar23,0,0);
  lVar17 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbe0);
  uVar15 = FUN__text__0024ede0(*(undefined8 *)(param_1 + 0x640));
  *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe | 1 < uVar15;
  (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  iVar16 = FUN__text__00306a20(lVar20);
  bVar12 = FUN__text__00306888(lVar20);
  bVar6 = 0;
  if (*pcVar2 == '\0') {
    bVar6 = iVar16 == 3 & bVar12;
  }
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbe8);
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar6 & (bVar5 ^ 0xff) & 1;
  uVar18 = FUN__text__003279b0(*(undefined4 *)(param_1 + 0x1000));
  if ((uVar18 & 1) == 0) {
    uVar18 = FUN__text__003279d0(*(undefined4 *)(param_1 + 0x1000));
    if ((uVar18 & 1) == 0) {
      bVar6 = 0;
    }
    else {
      FUN__text__00306bc4(lVar20);
      bVar6 = FUN__text__00635e30();
    }
  }
  else {
    FUN__text__00306bc4(lVar20);
    bVar6 = FUN__text__00635270();
  }
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cbf0);
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar6 & 1;
  bVar6 = FUN__text__003279c0(*(undefined4 *)(param_1 + 0x1000));
  if (((bVar5 | bVar6 ^ 0xff) & 1) == 0) {
    FUN__text__00306bc4(lVar20);
    bVar6 = FUN__text__00635be0();
    if (bVar6 < 0x12) {
      fVar27 = (float)bVar6;
    }
    else {
      if (bVar6 != 99) goto LAB__text__0025c44c;
      fVar27 = 18.0;
    }
    FUN__text__0012c97c(fVar27,param_1 + 0x110,0x72cbf8);
    bVar6 = 1;
  }
  else {
LAB__text__0025c44c:
    bVar6 = 0;
  }
  lVar25 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72cc00);
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar6;
  if ((bVar5 & 1) == 0) {
    iVar16 = FUN__text__003065f8(lVar20);
    uVar15 = FUN__text__00306600(lVar20);
    if (iVar16 == 0x365) {
      uVar3 = (uVar15 & 0xffff) * 0x2493 >> 0x10;
      uVar3 = uVar3 + ((uVar15 - uVar3 & 0xfffe) >> 1) >> 2;
    }
    else {
      uVar18 = FUN__text__0016b970(iVar16);
      uVar3 = 0;
      if ((uVar18 & 1) == 0) {
        uVar3 = uVar15;
      }
    }
    FUN__text__00205bf0(iVar16,uVar3 & 0xffff,0,0);
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  return;
}


