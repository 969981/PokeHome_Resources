/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b2f80; name: FUN_.text__001b2f80
 */


void FUN__text__001b2f80(long param_1,int param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
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
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  code *pcVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  undefined8 *puVar29;
  char *pcVar30;
  long lVar31;
  undefined8 uVar32;
  char *pcVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [12];
  long local_1b8;
  char local_1b0 [32];
  undefined4 local_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
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
  
  pcVar30 = (char *)(param_1 + 0x5a58);
  if (*pcVar30 != '\0') {
    return;
  }
  lVar27 = *(long *)(param_1 + 8);
  lVar31 = *(long *)(lVar27 + 0x2d0);
  if (lVar31 != 0) {
    (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(param_1 + 0x18);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar32 = *(undefined8 *)(lVar22 + 0x10);
  lVar27 = lVar27 + 0x110;
  lVar22 = *(long *)(lVar22 + 0x158);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  FUN__text__001961e8(uVar32,*(undefined4 *)(param_1 + 0x5a5c));
  uVar6 = FUN__text__00192b70();
  iVar7 = FUN__text__00191358(param_1 + 0x5a60);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (param_2 == 0) {
    local_e0 = 0;
    uStack_d8 = 0;
    uVar28 = (iVar7 + uVar6) - 1;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if (*(code **)(param_1 + 0x5aa0) != (code *)0x0) {
      (**(code **)(param_1 + 0x5aa0))(param_1 + 0x5ab0,auStack_d0);
      local_f0 = *(undefined8 *)(param_1 + 0x5a90);
      local_e8 = *(code **)(param_1 + 0x5a98);
      local_e0 = *(undefined8 *)(param_1 + 0x5aa0);
      uStack_d8 = *(undefined8 *)(param_1 + 0x5aa8);
    }
    puVar29 = &local_f0;
    FUN__text__0012c564(lVar27,param_1 + 0x5a48,&local_f0);
    if (local_e8 == (code *)0x0) goto LAB__text__001b3120;
    puVar24 = &local_f0;
    pcVar23 = local_e8;
  }
  else {
    uVar28 = iVar7 + 1;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    if (*(code **)(param_1 + 0x5aa0) != (code *)0x0) {
      (**(code **)(param_1 + 0x5aa0))(param_1 + 0x5ab0,auStack_150);
      local_170 = *(undefined8 *)(param_1 + 0x5a90);
      local_168 = *(code **)(param_1 + 0x5a98);
      local_160 = *(undefined8 *)(param_1 + 0x5aa0);
      uStack_158 = *(undefined8 *)(param_1 + 0x5aa8);
    }
    puVar29 = &local_170;
    FUN__text__0012c564(lVar27,param_1 + 0x5a40,&local_170);
    if (local_168 == (code *)0x0) goto LAB__text__001b3120;
    puVar24 = &local_170;
    pcVar23 = local_168;
  }
  puVar29[2] = 0;
  puVar29[3] = 0;
  *puVar29 = 0;
  puVar29[1] = 0;
  (*pcVar23)(puVar24 + 4);
LAB__text__001b3120:
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = uVar28 / uVar6;
  }
  uVar25 = *(undefined4 *)(param_1 + 0x5a5c);
  auVar36 = FUN__text__00191278(uVar28 - uVar4 * uVar6);
  bVar2 = false;
  bVar3 = false;
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x4c8) = 1;
  pcVar33 = (char *)(param_1 + 0x5a6c);
  *pcVar33 = '\0';
  *(undefined4 *)(param_1 + 0x5a70) = uVar25;
  *(undefined1 (*) [12])(param_1 + 0x5a74) = auVar36;
  *(undefined1 *)(param_1 + 0x5a80) = 1;
  do {
    local_188 = (ulong)uVar6 << 0x20;
    FUN__text__00191328(local_1b0,pcVar30,&local_188);
    lVar9 = FUN__text__00195358(uVar32,local_1b0);
    local_190 = 0;
    uStack_18c = uVar6;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    lVar10 = FUN__text__00195358(uVar32,&local_188);
    local_188 = CONCAT44(uVar6,1);
    FUN__text__00191328(local_1b0,pcVar30,&local_188);
    lVar11 = FUN__text__00195358(uVar32,local_1b0);
    local_190 = 1;
    uStack_18c = uVar6;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    lVar12 = FUN__text__00195358(uVar32,&local_188);
    local_188 = CONCAT44(uVar6,2);
    FUN__text__00191328(local_1b0,pcVar30,&local_188);
    lVar13 = FUN__text__00195358(uVar32,local_1b0);
    local_190 = 2;
    uStack_18c = uVar6;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    lVar14 = FUN__text__00195358(uVar32,&local_188);
    local_188 = CONCAT44(uVar6,3);
    FUN__text__00191328(local_1b0,pcVar30,&local_188);
    lVar15 = FUN__text__00195358(uVar32,local_1b0);
    local_190 = 3;
    uStack_18c = uVar6;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    lVar16 = FUN__text__00195358(uVar32,&local_188);
    local_188 = CONCAT44(uVar6,4);
    FUN__text__00191328(local_1b0,pcVar30,&local_188);
    lVar17 = FUN__text__00195358(uVar32,local_1b0);
    local_190 = 4;
    uStack_18c = uVar6;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    lVar18 = FUN__text__00195358(uVar32,&local_188);
    local_188 = CONCAT44(uVar6,5);
    FUN__text__00191328(local_1b0,pcVar30,&local_188);
    lVar19 = FUN__text__00195358(uVar32,local_1b0);
    local_190 = 5;
    uStack_18c = uVar6;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    lVar20 = FUN__text__00195358(uVar32,&local_188);
    uVar6 = uVar6 + 1;
    bVar2 = (bool)((((((lVar11 == 0 || lVar9 == 0) || lVar13 == 0) || lVar15 == 0) || lVar17 == 0)
                   || lVar19 == 0) | bVar2);
    bVar3 = (bool)((((((lVar12 == 0 || lVar10 == 0) || lVar14 == 0) || lVar16 == 0) || lVar18 == 0)
                   || lVar20 == 0) | bVar3);
  } while (uVar6 != 5);
  if (bVar2) {
    FUN__text__0012c378(lVar27,param_1 + 0x490);
  }
  else if (bVar3) {
    FUN__text__0012c378(lVar27,param_1 + 0x488);
    uVar6 = 0;
    lVar27 = 0;
    do {
      local_188 = (ulong)uVar6 << 0x20;
      FUN__text__00191328(local_1b0,pcVar33,&local_188);
      lVar10 = FUN__text__00195358(uVar32,local_1b0);
      lVar9 = param_1 + lVar27;
      FUN__text__003c7c60(lVar31,lVar9 + 0x308,lVar10 == 0);
      local_188 = CONCAT44(uVar6,1);
      FUN__text__00191328(local_1b0,pcVar33,&local_188);
      lVar10 = FUN__text__00195358(uVar32,local_1b0);
      FUN__text__003c7c60(lVar31,lVar9 + 0x330,lVar10 == 0);
      local_188 = CONCAT44(uVar6,2);
      FUN__text__00191328(local_1b0,pcVar33,&local_188);
      lVar10 = FUN__text__00195358(uVar32,local_1b0);
      FUN__text__003c7c60(lVar31,lVar9 + 0x358,lVar10 == 0);
      local_188 = CONCAT44(uVar6,3);
      FUN__text__00191328(local_1b0,pcVar33,&local_188);
      lVar10 = FUN__text__00195358(uVar32,local_1b0);
      FUN__text__003c7c60(lVar31,lVar9 + 0x380,lVar10 == 0);
      local_188 = CONCAT44(uVar6,4);
      FUN__text__00191328(local_1b0,pcVar33,&local_188);
      lVar10 = FUN__text__00195358(uVar32,local_1b0);
      FUN__text__003c7c60(lVar31,lVar9 + 0x3a8,lVar10 == 0);
      local_188 = CONCAT44(uVar6,5);
      FUN__text__00191328(local_1b0,pcVar33,&local_188);
      lVar10 = FUN__text__00195358(uVar32,local_1b0);
      FUN__text__003c7c60(lVar31,lVar9 + 0x3d0,lVar10 == 0);
      lVar27 = lVar27 + 8;
      uVar6 = uVar6 + 1;
    } while (lVar27 != 0x28);
  }
  lVar27 = *(long *)(param_1 + 0x38);
  local_1b0[0x18] = '\0';
  local_1b0[0x19] = '\0';
  local_1b0[0x1a] = '\0';
  local_1b0[0x1b] = '\0';
  local_1b0[0x1c] = '\0';
  local_1b0[0x1d] = '\0';
  local_1b0[0] = '\0';
  local_1b0[1] = '\0';
  local_1b0[2] = '\0';
  local_1b0[3] = '\0';
  local_1b0[4] = '\0';
  local_1b0[5] = '\0';
  local_1b0[6] = '\0';
  local_1b0[7] = '\0';
  uVar35 = *(undefined8 *)(lVar27 + 0xe8);
  uVar34 = *(undefined8 *)(lVar27 + 0x128);
  iVar7 = *(int *)(lVar27 + 0x1e8);
  local_1b0[8] = '\0';
  local_1b0[9] = '\0';
  local_1b0[10] = '\0';
  local_1b0[0xb] = '\0';
  local_1b0[0xc] = '\0';
  local_1b0[0xd] = '\0';
  local_1b0[0xe] = '\0';
  local_1b0[0xf] = '\0';
  local_1b0[0x10] = '\0';
  local_1b0[0x11] = '\0';
  local_1b0[0x12] = '\0';
  local_1b0[0x13] = '\0';
  local_1b0[0x14] = '\0';
  local_1b0[0x15] = '\0';
  local_1b0[0x16] = '\0';
  local_1b0[0x17] = '\0';
  if (iVar7 == 3) {
    lVar27 = 0;
    lVar9 = 1;
    do {
      uVar25 = (undefined4)lVar27;
      local_190 = 0;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001aa328(uVar35,&local_188);
      if ((uVar21 & 1) != 0) {
        lVar9 = 0;
LAB__text__001b3a74:
        local_1b0[lVar27 + lVar9 * 5] = '\x01';
        break;
      }
      local_190 = 1;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001aa328(uVar35,&local_188);
      if ((uVar21 & 1) != 0) goto LAB__text__001b3a74;
      local_190 = 2;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001aa328(uVar35,&local_188);
      if ((uVar21 & 1) != 0) {
        lVar9 = 2;
        goto LAB__text__001b3a74;
      }
      local_190 = 3;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001aa328(uVar35,&local_188);
      if ((uVar21 & 1) != 0) {
        lVar9 = 3;
        goto LAB__text__001b3a74;
      }
      local_190 = 4;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001aa328(uVar35,&local_188);
      if ((uVar21 & 1) != 0) {
        lVar9 = 4;
        goto LAB__text__001b3a74;
      }
      local_190 = 5;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001aa328(uVar35,&local_188);
      if ((uVar21 & 1) != 0) {
        lVar9 = 5;
        goto LAB__text__001b3a74;
      }
      lVar27 = lVar27 + 1;
    } while ((int)lVar27 != 5);
  }
  else if (iVar7 == 6) {
    local_188 = *(undefined8 *)(*(long *)(lVar27 + 0x148) + 0x20);
    local_180 = *(undefined8 *)(*(long *)(lVar27 + 0x148) + 0x28);
    if (((int)local_188 == *(int *)(param_1 + 0x5a70)) &&
       (lVar27 = FUN__text__001961a8(uVar32,&local_188), lVar27 != 0)) {
      if (*pcVar33 == '\0') {
        if (((local_188._4_4_ == *(int *)(param_1 + 0x5a74)) &&
            ((int)local_180 == *(int *)(param_1 + 0x5a78))) &&
           (local_180._4_4_ == *(int *)(param_1 + 0x5a7c))) {
          builtin_strncpy(local_1b0 + 0x18,"\x01\x01\x01\x01\x01\x01",6);
          builtin_strncpy(local_1b0,
                          "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                          ,0x18);
        }
      }
      else {
        uVar34 = FUN__text__00196200(uVar32,*(undefined4 *)(param_1 + 0x5a70));
        iVar7 = 0;
        do {
          iVar26 = 0;
          do {
            iVar5 = (int)local_188;
            iVar8 = FUN__text__00191358((ulong)&local_188 | 4);
            lVar27 = 0;
            do {
              uVar6 = (uint)lVar27;
              local_190 = 0;
              uStack_18c = uVar6;
              lVar9 = FUN__text__0019264c(uVar34,&local_190);
              if (((*(int *)(lVar9 + 0x18) != 0) &&
                  (iVar5 == *(int *)(lVar9 + 8) && iVar8 == *(int *)(lVar9 + 0xc))) &&
                 ((iVar26 == *(int *)(lVar9 + 0x10) && (iVar7 == *(int *)(lVar9 + 0x14))))) {
                local_1b0[lVar27] = '\x01';
              }
              local_190 = 1;
              uStack_18c = uVar6;
              lVar9 = FUN__text__0019264c(uVar34,&local_190);
              if (((*(int *)(lVar9 + 0x18) != 0) && (iVar5 == *(int *)(lVar9 + 8))) &&
                 ((iVar8 == *(int *)(lVar9 + 0xc) &&
                  ((iVar26 == *(int *)(lVar9 + 0x10) && (iVar7 == *(int *)(lVar9 + 0x14))))))) {
                local_1b0[lVar27 + 5] = '\x01';
              }
              local_190 = 2;
              uStack_18c = uVar6;
              lVar9 = FUN__text__0019264c(uVar34,&local_190);
              if ((((*(int *)(lVar9 + 0x18) != 0) && (iVar5 == *(int *)(lVar9 + 8))) &&
                  (iVar8 == *(int *)(lVar9 + 0xc))) &&
                 ((iVar26 == *(int *)(lVar9 + 0x10) && (iVar7 == *(int *)(lVar9 + 0x14))))) {
                local_1b0[lVar27 + 10] = '\x01';
              }
              local_190 = 3;
              uStack_18c = uVar6;
              lVar9 = FUN__text__0019264c(uVar34,&local_190);
              if (((*(int *)(lVar9 + 0x18) != 0) && (iVar5 == *(int *)(lVar9 + 8))) &&
                 ((iVar8 == *(int *)(lVar9 + 0xc) &&
                  ((iVar26 == *(int *)(lVar9 + 0x10) && (iVar7 == *(int *)(lVar9 + 0x14))))))) {
                local_1b0[lVar27 + 0xf] = '\x01';
              }
              local_190 = 4;
              uStack_18c = uVar6;
              lVar9 = FUN__text__0019264c(uVar34,&local_190);
              if ((((*(int *)(lVar9 + 0x18) != 0) && (iVar5 == *(int *)(lVar9 + 8))) &&
                  (iVar8 == *(int *)(lVar9 + 0xc))) &&
                 ((iVar26 == *(int *)(lVar9 + 0x10) && (iVar7 == *(int *)(lVar9 + 0x14))))) {
                local_1b0[lVar27 + 0x14] = '\x01';
              }
              local_190 = 5;
              uStack_18c = uVar6;
              lVar9 = FUN__text__0019264c(uVar34,&local_190);
              if (((*(int *)(lVar9 + 0x18) != 0) && (iVar5 == *(int *)(lVar9 + 8))) &&
                 ((iVar8 == *(int *)(lVar9 + 0xc) &&
                  ((iVar26 == *(int *)(lVar9 + 0x10) && (iVar7 == *(int *)(lVar9 + 0x14))))))) {
                local_1b0[lVar27 + 0x19] = '\x01';
              }
              lVar27 = lVar27 + 1;
            } while (lVar27 != 5);
            iVar26 = iVar26 + 1;
          } while (iVar26 != 6);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 5);
      }
    }
  }
  else if (iVar7 == 5) {
    lVar27 = 0;
    do {
      uVar25 = (undefined4)lVar27;
      local_190 = 0;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001a5810(uVar34,&local_188);
      if ((uVar21 & 1) != 0) {
        local_1b0[lVar27] = '\x01';
      }
      local_190 = 1;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001a5810(uVar34,&local_188);
      if ((uVar21 & 1) != 0) {
        local_1b0[lVar27 + 5] = '\x01';
      }
      local_190 = 2;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001a5810(uVar34,&local_188);
      if ((uVar21 & 1) != 0) {
        local_1b0[lVar27 + 10] = '\x01';
      }
      local_190 = 3;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001a5810(uVar34,&local_188);
      if ((uVar21 & 1) != 0) {
        local_1b0[lVar27 + 0xf] = '\x01';
      }
      local_190 = 4;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001a5810(uVar34,&local_188);
      if ((uVar21 & 1) != 0) {
        local_1b0[lVar27 + 0x14] = '\x01';
      }
      local_190 = 5;
      uStack_18c = uVar25;
      FUN__text__00191328(&local_188,pcVar33,&local_190);
      uVar21 = FUN__text__001a5810(uVar34,&local_188);
      if ((uVar21 & 1) != 0) {
        local_1b0[lVar27 + 0x19] = '\x01';
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != 5);
  }
  lVar27 = 0;
  plVar1 = (long *)(lVar22 + 0x48);
  pcVar30 = local_1b0;
  lVar9 = param_1 + 0x2b68;
  do {
    local_190 = (undefined4)lVar27;
    uStack_18c = 0;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    local_1b8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar21 = FUN__text__00194730(uVar32,&local_1b8,&local_188);
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if ((uVar21 & 1) == 0) {
      FUN__text__003c7c60(lVar31,lVar9,0);
    }
    else {
      FUN__text__003c7c60(lVar31,lVar9,1);
      lVar10 = lVar9 + 0xa8;
      if (*pcVar30 != '\0') {
        lVar10 = lVar9 + 0xb0;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar10);
    }
    FUN__text__003c7c60(lVar31,lVar9 + 0x80,0);
    lVar27 = lVar27 + 1;
    lVar9 = lVar9 + 1000;
    pcVar30 = pcVar30 + 5;
  } while (lVar27 != 6);
  lVar27 = 0;
  lVar9 = 0x2cb0;
  pcVar30 = (char *)((ulong)local_1b0 | 1);
  lVar10 = 0x2cd8;
  lVar11 = 0x2ce0;
  lVar12 = 0x2c30;
  do {
    local_190 = (undefined4)lVar27;
    uStack_18c = 1;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    local_1b8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar21 = FUN__text__00194730(uVar32,&local_1b8,&local_188);
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if ((uVar21 & 1) == 0) {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,0);
    }
    else {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,1);
      lVar13 = lVar10;
      if (*pcVar30 != '\0') {
        lVar13 = lVar11;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar13);
    }
    FUN__text__003c7c60(lVar31,param_1 + lVar9,0);
    lVar27 = lVar27 + 1;
    lVar9 = lVar9 + 1000;
    lVar10 = lVar10 + 1000;
    lVar11 = lVar11 + 1000;
    pcVar30 = pcVar30 + 5;
    lVar12 = lVar12 + 1000;
  } while (lVar27 != 6);
  lVar27 = 0;
  lVar9 = 0x2d78;
  pcVar30 = (char *)((ulong)local_1b0 | 2);
  lVar10 = 0x2da0;
  lVar11 = 0x2da8;
  lVar12 = 0x2cf8;
  do {
    local_190 = (undefined4)lVar27;
    uStack_18c = 2;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    local_1b8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar21 = FUN__text__00194730(uVar32,&local_1b8,&local_188);
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if ((uVar21 & 1) == 0) {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,0);
    }
    else {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,1);
      lVar13 = lVar10;
      if (*pcVar30 != '\0') {
        lVar13 = lVar11;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar13);
    }
    FUN__text__003c7c60(lVar31,param_1 + lVar9,0);
    lVar27 = lVar27 + 1;
    lVar9 = lVar9 + 1000;
    lVar10 = lVar10 + 1000;
    lVar11 = lVar11 + 1000;
    pcVar30 = pcVar30 + 5;
    lVar12 = lVar12 + 1000;
  } while (lVar27 != 6);
  lVar27 = 0;
  lVar9 = 0x2e40;
  pcVar30 = (char *)((ulong)local_1b0 | 3);
  lVar10 = 0x2e68;
  lVar11 = 0x2e70;
  lVar12 = 0x2dc0;
  do {
    local_190 = (undefined4)lVar27;
    uStack_18c = 3;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    local_1b8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar21 = FUN__text__00194730(uVar32,&local_1b8,&local_188);
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if ((uVar21 & 1) == 0) {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,0);
    }
    else {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,1);
      lVar13 = lVar10;
      if (*pcVar30 != '\0') {
        lVar13 = lVar11;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar13);
    }
    FUN__text__003c7c60(lVar31,param_1 + lVar9,0);
    lVar27 = lVar27 + 1;
    lVar9 = lVar9 + 1000;
    lVar10 = lVar10 + 1000;
    lVar11 = lVar11 + 1000;
    pcVar30 = pcVar30 + 5;
    lVar12 = lVar12 + 1000;
  } while (lVar27 != 6);
  lVar27 = 0;
  lVar9 = 0x2f08;
  pcVar30 = (char *)((ulong)local_1b0 | 4);
  lVar10 = 0x2f30;
  lVar11 = 0x2f38;
  lVar12 = 0x2e88;
  do {
    local_190 = (undefined4)lVar27;
    uStack_18c = 4;
    FUN__text__00191328(&local_188,pcVar33,&local_190);
    local_1b8 = lVar22;
    if (lVar22 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar21 = FUN__text__00194730(uVar32,&local_1b8,&local_188);
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if ((uVar21 & 1) == 0) {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,0);
    }
    else {
      FUN__text__003c7c60(lVar31,param_1 + lVar12,1);
      lVar13 = lVar10;
      if (*pcVar30 != '\0') {
        lVar13 = lVar11;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar13);
    }
    FUN__text__003c7c60(lVar31,param_1 + lVar9,0);
    lVar27 = lVar27 + 1;
    lVar9 = lVar9 + 1000;
    lVar10 = lVar10 + 1000;
    lVar11 = lVar11 + 1000;
    pcVar30 = pcVar30 + 5;
    lVar12 = lVar12 + 1000;
  } while (lVar27 != 6);
  FUN__text__001bc4a0(param_1,0,0,0);
  if (lVar22 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (lVar31 != 0) {
    (**(code **)(*(long *)(lVar31 + 0x48) + 0x18))((long *)(lVar31 + 0x48));
  }
  return;
}


