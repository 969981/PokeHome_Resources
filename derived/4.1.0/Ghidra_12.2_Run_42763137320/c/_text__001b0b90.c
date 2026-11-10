/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b0b90; name: FUN_.text__001b0b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b0b90(long param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long local_2d0;
  ulong local_2c8;
  ulong local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  long local_2a8;
  undefined4 local_29c;
  int iStack_298;
  int local_288 [2];
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_238;
  undefined8 auStack_230 [9];
  undefined8 local_1e8;
  undefined8 auStack_1e0 [9];
  undefined8 local_198;
  undefined8 auStack_190 [9];
  undefined8 local_148;
  undefined8 auStack_140 [9];
  undefined8 local_f8;
  undefined8 auStack_f0 [9];
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  
  lVar9 = *(long *)(param_1 + 8);
  lVar24 = *(long *)(lVar9 + 0x2d0);
  lVar10 = lVar9;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
    lVar10 = *(long *)(param_1 + 8);
  }
  uVar11 = FUN__text__001281d4(lVar10);
  FUN__text__001156d0(local_288,uVar11,0);
  lVar10 = CONCAT44(local_288[1],local_288[0]);
  lVar25 = *(long *)(lVar10 + 0x60);
  if (lVar25 == 0) {
LAB__text__001b0c0c:
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    lVar10 = CONCAT44(local_288[1],local_288[0]);
    if (lVar10 != 0) goto LAB__text__001b0c0c;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) goto LAB__text__001b1b3c;
  uVar11 = *(undefined8 *)(lVar10 + 0x10);
  lVar20 = *(long *)(lVar10 + 0x158);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar10 + 0x250);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar21 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  lVar27 = *(long *)(lVar21 + 0x2e8);
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  if (*(char *)(param_1 + 0x438) == '\0') {
LAB__text__001b0ee8:
    FUN__text__003c7c60(lVar24,param_1 + 0x420,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x428,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x58,0);
    FUN__text__003c7c60(lVar24,param_1 + 0xf8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x198,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x238,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x2d8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x378,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x78,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x118,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x1b8,0);
    FUN__text__003c7c60(lVar24,param_1 + 600,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x2f8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x398,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x98,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x138,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x1d8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x278,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x318,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x3b8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0xb8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x158,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x1f8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x298,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x338,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x3d8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0xd8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x178,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x218,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x2b8,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x358,0);
    FUN__text__003c7c60(lVar24,param_1 + 0x3f8,0);
    goto joined_r0x001b10ec;
  }
  pcVar1 = (char *)(param_1 + 0x43c);
  lVar19 = *(long *)(*(long *)(param_1 + 0x50) + 0xe8);
  lVar21 = *(long *)(*(long *)(param_1 + 0x50) + 0x128);
  if (*(char *)(param_1 + 0x43c) == '\0') {
    local_288[0] = *(int *)(param_1 + 0x440);
    local_280._4_4_ = *(int *)(param_1 + 0x44c);
    uVar14 = *(undefined8 *)(param_1 + 0x444);
    local_288[1] = (int)uVar14;
    local_280._0_4_ = (int)((ulong)uVar14 >> 0x20);
    lVar12 = FUN__text__001961a8(uVar11,local_288);
    if (lVar12 == 0) goto LAB__text__001b0ee8;
    local_88 = lVar20;
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    uVar7 = FUN__text__00195870(uVar11,&local_88,lVar12);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    lVar29 = *(long *)(param_1 + 0x10);
    if (lVar29 == 0) goto LAB__text__001b1b3c;
    uVar2 = *(undefined4 *)(lVar12 + 0x2c);
    local_90 = lVar25;
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    }
    local_2c8 = 0xd0fe60b9df49c356;
    FUN__text__001ab790(lVar29,param_1 + 0x420,&local_90,&local_2c8,0,lVar12);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    uVar13 = FUN__text__0019f5bc(*(undefined8 *)(param_1 + 0x50));
    if ((uVar13 & 1) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = false;
      lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 0x148);
      if ((*(int *)(lVar12 + 0x20) == local_288[0]) && (*(int *)(lVar12 + 0x24) == local_288[1])) {
        bVar4 = *(int *)(lVar12 + 0x28) == (int)local_280 &&
                *(int *)(lVar12 + 0x2c) == local_280._4_4_;
      }
    }
    iVar8 = FUN__text__00191358((undefined8 *)(param_1 + 0x444));
  }
  else {
    lVar12 = FUN__text__00196200(uVar11,*(undefined4 *)(param_1 + 0x440));
    local_78 = lVar20;
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    uVar7 = FUN__text__00195cf0(uVar11,&local_78,lVar12);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    lVar29 = *(long *)(param_1 + 0x10);
    if (lVar29 == 0) goto LAB__text__001b1b3c;
    uVar2 = *(undefined4 *)(lVar12 + 0x14);
    local_80 = lVar25;
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    }
    local_288[0] = -0x20b63caa;
    local_288[1] = -0x2f019f47;
    FUN__text__001ab8f4(lVar29,param_1 + 0x420,&local_80,local_288,0,lVar12);
    if (local_80 == 0) {
      bVar4 = false;
      iVar8 = 0;
    }
    else {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      bVar4 = false;
      iVar8 = 0;
      local_80 = 0;
    }
  }
  FUN__text__003c7c60(lVar24,param_1 + 0x420,1);
  FUN__text__003c7c60(lVar24,param_1 + 0x428,1);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
LAB__text__001b1b3c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_98 = lVar25;
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  local_288[0] = 0x42d305ce;
  local_288[1] = 0x6edc950f;
  FUN__text__001abd38(lVar12,param_1 + 0x428,&local_98,local_288,0,1,uVar7,uVar2);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  local_a8 = 0;
  local_a0 = 0;
  uVar13 = FUN__text__0019f5b0(*(undefined8 *)(param_1 + 0x50));
  if ((uVar13 & 1) == 0) {
LAB__text__001b1228:
    bVar5 = false;
  }
  else {
    local_288[0] = (int)*(undefined8 *)(lVar19 + 0x20);
    local_288[1] = (int)((ulong)*(undefined8 *)(lVar19 + 0x20) >> 0x20);
    local_280._0_4_ = (int)*(undefined8 *)(lVar19 + 0x28);
    local_280._4_4_ = (int)((ulong)*(undefined8 *)(lVar19 + 0x28) >> 0x20);
    local_278 = *(undefined4 *)(lVar19 + 0x30);
    bVar5 = *(int *)(*(long *)(param_1 + 0x50) + 0x1b0) != local_288[1];
    bVar6 = *(int *)(*(long *)(param_1 + 0x50) + 0x1b4) == local_288[1];
    lVar19 = FUN__text__00195358(uVar11,local_288);
    local_a8 = *(undefined8 *)(lVar19 + 8);
    local_a0 = *(undefined8 *)(lVar19 + 0x10);
    if (*(uint *)(param_1 + 0x48) != (uint)(bVar5 && bVar6)) goto LAB__text__001b1228;
    if (*pcVar1 == '\0') {
      bVar5 = iVar8 == (int)((ulong)local_a8 >> 0x20);
    }
    else if ((char)local_288[0] == '\0') {
      uVar14 = FUN__text__00196200(uVar11,*(undefined4 *)(param_1 + 0x440));
      lVar19 = FUN__text__00192680(uVar14,&local_a8);
      bVar5 = lVar19 != 0;
    }
    else {
      bVar5 = true;
    }
  }
  memset(local_288,0,0x1e0);
  uVar13 = FUN__text__0019f5c8(*(undefined8 *)(param_1 + 0x50));
  bVar3 = 0;
  if ((uVar13 & 1) != 0) {
    lVar19 = 0;
    puVar22 = &local_198;
    iVar18 = *(int *)(*(long *)(param_1 + 0x50) + 0x1b0);
    local_2c8 = *(ulong *)(lVar21 + 0x20);
    local_2c0 = *(ulong *)(lVar21 + 0x28);
    iVar23 = *(int *)(*(long *)(param_1 + 0x50) + 0x1b4);
    iVar16 = (int)(local_2c8 >> 0x20);
    local_2b8 = CONCAT44(local_2b8._4_4_,*(undefined4 *)(lVar21 + 0x30));
    do {
      iVar17 = (int)lVar19;
      local_29c = 0;
      iStack_298 = iVar17;
      uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
      if ((uVar13 & 1) == 0) {
        local_29c = 1;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) == 0) goto LAB__text__001b1314;
LAB__text__001b13d4:
        local_70 = CONCAT44(iVar17,1);
        FUN__text__00191328(&local_29c,&local_2c8,&local_70);
        lVar12 = FUN__text__00195358(uVar11,&local_29c);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        puVar22[-0x14] = *(undefined8 *)(lVar12 + 8);
        puVar22[-0x13] = uVar14;
        local_29c = 2;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) != 0) goto LAB__text__001b1328;
LAB__text__001b1410:
        local_29c = 3;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) == 0) goto LAB__text__001b1364;
LAB__text__001b1424:
        local_70 = CONCAT44(iVar17,3);
        FUN__text__00191328(&local_29c,&local_2c8,&local_70);
        lVar12 = FUN__text__00195358(uVar11,&local_29c);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        *puVar22 = *(undefined8 *)(lVar12 + 8);
        puVar22[1] = uVar14;
        local_29c = 4;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) != 0) goto LAB__text__001b1378;
LAB__text__001b1460:
        local_29c = 5;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
      }
      else {
        local_70 = lVar19 << 0x20;
        FUN__text__00191328(&local_29c,&local_2c8,&local_70);
        lVar12 = FUN__text__00195358(uVar11,&local_29c);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        puVar22[-0x1e] = *(undefined8 *)(lVar12 + 8);
        puVar22[-0x1d] = uVar14;
        local_29c = 1;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) != 0) goto LAB__text__001b13d4;
LAB__text__001b1314:
        local_29c = 2;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) == 0) goto LAB__text__001b1410;
LAB__text__001b1328:
        local_70 = CONCAT44(iVar17,2);
        FUN__text__00191328(&local_29c,&local_2c8,&local_70);
        lVar12 = FUN__text__00195358(uVar11,&local_29c);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        puVar22[-10] = *(undefined8 *)(lVar12 + 8);
        puVar22[-9] = uVar14;
        local_29c = 3;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) != 0) goto LAB__text__001b1424;
LAB__text__001b1364:
        local_29c = 4;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if ((uVar13 & 1) == 0) goto LAB__text__001b1460;
LAB__text__001b1378:
        local_70 = CONCAT44(iVar17,4);
        FUN__text__00191328(&local_29c,&local_2c8,&local_70);
        lVar12 = FUN__text__00195358(uVar11,&local_29c);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        puVar22[10] = *(undefined8 *)(lVar12 + 8);
        puVar22[0xb] = uVar14;
        local_29c = 5;
        iStack_298 = iVar17;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
      }
      if ((uVar13 & 1) != 0) {
        local_70 = CONCAT44(iVar17,5);
        FUN__text__00191328(&local_29c,&local_2c8,&local_70);
        lVar12 = FUN__text__00195358(uVar11,&local_29c);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        puVar22[0x14] = *(undefined8 *)(lVar12 + 8);
        puVar22[0x15] = uVar14;
      }
      lVar19 = lVar19 + 1;
      puVar22 = puVar22 + 2;
    } while (lVar19 != 5);
    if (*(uint *)(param_1 + 0x48) == (uint)(iVar18 != iVar16 && iVar23 == iVar16)) {
      if (*pcVar1 != '\0') {
        bVar3 = 1;
        if ((char)local_2c8 == '\0') {
          uVar14 = FUN__text__00196200(uVar11,*(undefined4 *)(param_1 + 0x440));
          iVar8 = 0;
          lVar19 = 0;
          do {
            local_29c = 0;
            iStack_298 = iVar8;
            uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
            if (((uVar13 & 1) != 0) &&
               (lVar12 = FUN__text__00192680(uVar14,(long)local_288 + lVar19), lVar12 != 0))
            goto LAB__text__001b1700;
            local_29c = 1;
            iStack_298 = iVar8;
            uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
            if (((uVar13 & 1) != 0) &&
               (lVar12 = FUN__text__00192680(uVar14,(long)auStack_230 + lVar19 + -8), lVar12 != 0))
            goto LAB__text__001b1700;
            local_29c = 2;
            iStack_298 = iVar8;
            uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
            if (((uVar13 & 1) != 0) &&
               (lVar12 = FUN__text__00192680(uVar14,(long)auStack_230 + lVar19 + 0x48), lVar12 != 0)
               ) goto LAB__text__001b1700;
            local_29c = 3;
            iStack_298 = iVar8;
            uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
            if (((uVar13 & 1) != 0) &&
               (lVar12 = FUN__text__00192680(uVar14,(long)auStack_1e0 + lVar19 + 0x48), lVar12 != 0)
               ) goto LAB__text__001b1700;
            local_29c = 4;
            iStack_298 = iVar8;
            uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
            if (((uVar13 & 1) != 0) &&
               (lVar12 = FUN__text__00192680(uVar14,(long)auStack_190 + lVar19 + 0x48), lVar12 != 0)
               ) goto LAB__text__001b1700;
            local_29c = 5;
            iStack_298 = iVar8;
            uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
            if (((uVar13 & 1) != 0) &&
               (lVar12 = FUN__text__00192680(uVar14,(long)auStack_140 + lVar19 + 0x48), lVar12 != 0)
               ) goto LAB__text__001b1700;
            lVar19 = lVar19 + 0x10;
            bVar3 = 0;
            iVar8 = iVar8 + 1;
          } while (lVar19 != 0x50);
        }
        goto LAB__text__001b1710;
      }
      lVar19 = 0;
      piVar26 = (int *)((long)&local_198 + 4);
      do {
        iVar18 = (int)lVar19;
        local_29c = 0;
        iStack_298 = iVar18;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if (((uVar13 & 1) != 0) && (piVar26[-0x3c] == iVar8)) goto LAB__text__001b1700;
        local_29c = 1;
        iStack_298 = iVar18;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if (((uVar13 & 1) != 0) && (piVar26[-0x28] == iVar8)) goto LAB__text__001b1700;
        local_29c = 2;
        iStack_298 = iVar18;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if (((uVar13 & 1) != 0) && (piVar26[-0x14] == iVar8)) goto LAB__text__001b1700;
        local_29c = 3;
        iStack_298 = iVar18;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if (((uVar13 & 1) != 0) && (*piVar26 == iVar8)) goto LAB__text__001b1700;
        local_29c = 4;
        iStack_298 = iVar18;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if (((uVar13 & 1) != 0) && (piVar26[0x14] == iVar8)) goto LAB__text__001b1700;
        local_29c = 5;
        iStack_298 = iVar18;
        uVar13 = FUN__text__001a56dc(lVar21,&local_29c);
        if (((uVar13 & 1) != 0) && (piVar26[0x28] == iVar8)) goto LAB__text__001b1700;
        lVar19 = lVar19 + 1;
        piVar26 = piVar26 + 4;
      } while (lVar19 != 5);
    }
    bVar3 = 0;
  }
LAB__text__001b1710:
  puVar22 = _DAT_0089fa78;
  lVar19 = 0;
  do {
    lVar12 = 0;
    do {
      while( true ) {
        local_2c8 = CONCAT44((int)lVar19,(int)lVar12);
        FUN__text__00191328(&local_29c,pcVar1,&local_2c8);
        local_2a8 = lVar20;
        if (lVar20 != 0) {
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
        }
        uVar13 = FUN__text__00194730(uVar11,&local_2a8,&local_29c);
        if (local_2a8 != 0) {
          (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
          local_2a8 = 0;
        }
        lVar29 = param_1 + lVar12 * 0xa0 + lVar19 * 0x20 + 0x58;
        if ((uVar13 & 1) == 0) break;
        FUN__text__003c7c60(lVar24,lVar29,1);
        if (!bVar4 && (bool)(bVar5 | bVar3)) {
          lVar29 = FUN__text__00195358(uVar11,&local_29c);
          iVar23 = (int)*(undefined8 *)(lVar29 + 8);
          iVar16 = (int)*(undefined8 *)(lVar29 + 0x10);
          iVar8 = (int)((ulong)*(undefined8 *)(lVar29 + 8) >> 0x20);
          iVar18 = (int)((ulong)*(undefined8 *)(lVar29 + 0x10) >> 0x20);
          if (bVar5) {
            if (((int)local_a8 == iVar23) && (local_a8._4_4_ == iVar8)) {
              if (local_a0._4_4_ == iVar18 && (int)local_a0 == iVar16) goto LAB__text__001b1804;
            }
          }
          else {
            local_2c8 = CONCAT44((int)lVar19,(int)lVar12);
            uVar13 = FUN__text__001a56dc(lVar21,&local_2c8);
            if (((((uVar13 & 1) != 0) && (local_288[lVar12 * 0x14 + lVar19 * 4] == iVar23)) &&
                (local_288[lVar12 * 0x14 + lVar19 * 4 + 1] == iVar8)) &&
               (local_288[lVar12 * 0x14 + lVar19 * 4 + 3] == iVar18 &&
                local_288[lVar12 * 0x14 + lVar19 * 4 + 2] == iVar16)) goto LAB__text__001b1804;
          }
LAB__text__001b18d4:
          lVar29 = param_1 + lVar12 * 0xa0 + lVar19 * 0x20 + 0x68;
        }
        else {
          if (!bVar4) goto LAB__text__001b18d4;
LAB__text__001b1804:
          lVar29 = param_1 + lVar12 * 0xa0 + lVar19 * 0x20 + 0x70;
        }
        FUN__text__0012c378(lVar9 + 0x110,lVar29);
        local_2c8 = local_2c8 & 0xffff000000000000;
        local_2c0 = local_2c0 & 0xffff000000000000;
        local_2b8 = 0;
        local_2b0 = 0xffffffff;
        local_2d0 = lVar10;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
        }
        FUN__text__001916b0(uVar11,&local_2d0,&local_29c,0);
        if (local_2d0 != 0) {
          (**(code **)(*(long *)(local_2d0 + 0x48) + 0x18))();
          local_2d0 = 0;
        }
        FUN__text__00306a28(lVar10,&local_2c8);
        plVar28 = (long *)0x0;
        lVar29 = *(long *)(param_1 + lVar12 * 0xa0 + lVar19 * 0x20 + 0x60);
        if ((lVar29 != -0x340d631b7bddd9bb) && (lVar29 != 0)) {
          local_70 = lVar29;
          plVar28 = (long *)FUN__text__003c79c0(*(undefined8 *)(lVar9 + 0x2d0),&local_70);
          if (((*_DAT_0089fa70 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(_DAT_0089fa70), iVar8 != 0)) {
            if (((*_DAT_0089f898 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(_DAT_0089f898), iVar8 != 0)) {
              *_DAT_0089f8a0 = 0;
              __cxa_guard_release(_DAT_0089f898);
            }
            *puVar22 = _DAT_0089f8a0;
            __cxa_guard_release(_DAT_0089fa70);
          }
          if (plVar28 == (long *)0x0) {
LAB__text__001b19e4:
            plVar28 = (long *)0x0;
          }
          else {
            puVar15 = (undefined8 *)(**(code **)(*plVar28 + 0x10))(plVar28);
            if (puVar15 != puVar22) {
              do {
                puVar15 = (undefined8 *)*puVar15;
              } while (puVar15 != puVar22 && puVar15 != (undefined8 *)0x0);
              if (puVar15 == (undefined8 *)0x0) goto LAB__text__001b19e4;
            }
          }
        }
        FUN__text__003c3378(lVar27,&local_2c8,0,plVar28,0,0);
        lVar12 = lVar12 + 1;
        if (lVar12 == 6) goto LAB__text__001b1750;
      }
      FUN__text__003c7c60(lVar24,lVar29,0);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 6);
LAB__text__001b1750:
    lVar19 = lVar19 + 1;
  } while (lVar19 != 5);
joined_r0x001b10ec:
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  return;
LAB__text__001b1700:
  bVar3 = 1;
  goto LAB__text__001b1710;
}


