/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b9d20; name: FUN_.text__001b9d20
 */


void FUN__text__001b9d20(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  char local_80 [32];
  
  lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  lVar7 = *(long *)(lVar7 + 0x158);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(lVar9 + 0xe8);
  uVar14 = *(undefined8 *)(lVar9 + 0x128);
  iVar16 = *(int *)(lVar9 + 0x1e8);
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  local_80[8] = '\0';
  local_80[9] = '\0';
  local_80[10] = '\0';
  local_80[0xb] = '\0';
  local_80[0xc] = '\0';
  local_80[0xd] = '\0';
  local_80[0xe] = '\0';
  local_80[0xf] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  if (iVar16 == 3) {
    lVar9 = 0;
    lVar12 = 1;
    lVar6 = param_1 + 0x5a58;
    do {
      uVar10 = (undefined4)lVar9;
      local_a0 = 0;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001aa328(uVar15,&local_98);
      if ((uVar5 & 1) != 0) {
        lVar12 = 0;
LAB__text__001ba2e0:
        local_80[lVar9 + lVar12 * 5] = '\x01';
        break;
      }
      local_a0 = 1;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001aa328(uVar15,&local_98);
      if ((uVar5 & 1) != 0) goto LAB__text__001ba2e0;
      local_a0 = 2;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001aa328(uVar15,&local_98);
      if ((uVar5 & 1) != 0) {
        lVar12 = 2;
        goto LAB__text__001ba2e0;
      }
      local_a0 = 3;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001aa328(uVar15,&local_98);
      if ((uVar5 & 1) != 0) {
        lVar12 = 3;
        goto LAB__text__001ba2e0;
      }
      local_a0 = 4;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001aa328(uVar15,&local_98);
      if ((uVar5 & 1) != 0) {
        lVar12 = 4;
        goto LAB__text__001ba2e0;
      }
      local_a0 = 5;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001aa328(uVar15,&local_98);
      if ((uVar5 & 1) != 0) {
        lVar12 = 5;
        goto LAB__text__001ba2e0;
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 != 5);
  }
  else if (iVar16 == 6) {
    local_98 = *(undefined8 *)(*(long *)(lVar9 + 0x148) + 0x20);
    local_90 = *(undefined8 *)(*(long *)(lVar9 + 0x148) + 0x28);
    if (((int)local_98 == *(int *)(param_1 + 0x5a5c)) &&
       (lVar9 = FUN__text__001961a8(uVar8,&local_98), lVar9 != 0)) {
      if (*(char *)(param_1 + 0x5a58) == '\0') {
        if (((local_98._4_4_ == *(int *)(param_1 + 0x5a60)) &&
            ((int)local_90 == *(int *)(param_1 + 0x5a64))) &&
           (local_90._4_4_ == *(int *)(param_1 + 0x5a68))) {
          builtin_strncpy(local_80 + 0x18,"\x01\x01\x01\x01\x01\x01",6);
          builtin_strncpy(local_80,
                          "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                          ,0x18);
        }
      }
      else {
        uVar14 = FUN__text__00196200(uVar8,*(undefined4 *)(param_1 + 0x5a5c));
        iVar16 = 0;
        do {
          iVar17 = 0;
          do {
            iVar3 = (int)local_98;
            iVar4 = FUN__text__00191358((ulong)&local_98 | 4);
            lVar9 = 0;
            do {
              uVar10 = (undefined4)lVar9;
              local_a0 = 0;
              uStack_9c = uVar10;
              lVar6 = FUN__text__0019264c(uVar14,&local_a0);
              if (((*(int *)(lVar6 + 0x18) != 0) &&
                  (iVar3 == *(int *)(lVar6 + 8) && iVar4 == *(int *)(lVar6 + 0xc))) &&
                 ((iVar17 == *(int *)(lVar6 + 0x10) && (iVar16 == *(int *)(lVar6 + 0x14))))) {
                local_80[lVar9] = '\x01';
              }
              local_a0 = 1;
              uStack_9c = uVar10;
              lVar6 = FUN__text__0019264c(uVar14,&local_a0);
              if (((*(int *)(lVar6 + 0x18) != 0) && (iVar3 == *(int *)(lVar6 + 8))) &&
                 ((iVar4 == *(int *)(lVar6 + 0xc) &&
                  ((iVar17 == *(int *)(lVar6 + 0x10) && (iVar16 == *(int *)(lVar6 + 0x14))))))) {
                local_80[lVar9 + 5] = '\x01';
              }
              local_a0 = 2;
              uStack_9c = uVar10;
              lVar6 = FUN__text__0019264c(uVar14,&local_a0);
              if ((((*(int *)(lVar6 + 0x18) != 0) && (iVar3 == *(int *)(lVar6 + 8))) &&
                  (iVar4 == *(int *)(lVar6 + 0xc))) &&
                 ((iVar17 == *(int *)(lVar6 + 0x10) && (iVar16 == *(int *)(lVar6 + 0x14))))) {
                local_80[lVar9 + 10] = '\x01';
              }
              local_a0 = 3;
              uStack_9c = uVar10;
              lVar6 = FUN__text__0019264c(uVar14,&local_a0);
              if (((*(int *)(lVar6 + 0x18) != 0) && (iVar3 == *(int *)(lVar6 + 8))) &&
                 ((iVar4 == *(int *)(lVar6 + 0xc) &&
                  ((iVar17 == *(int *)(lVar6 + 0x10) && (iVar16 == *(int *)(lVar6 + 0x14))))))) {
                local_80[lVar9 + 0xf] = '\x01';
              }
              local_a0 = 4;
              uStack_9c = uVar10;
              lVar6 = FUN__text__0019264c(uVar14,&local_a0);
              if ((((*(int *)(lVar6 + 0x18) != 0) && (iVar3 == *(int *)(lVar6 + 8))) &&
                  (iVar4 == *(int *)(lVar6 + 0xc))) &&
                 ((iVar17 == *(int *)(lVar6 + 0x10) && (iVar16 == *(int *)(lVar6 + 0x14))))) {
                local_80[lVar9 + 0x14] = '\x01';
              }
              local_a0 = 5;
              uStack_9c = uVar10;
              lVar6 = FUN__text__0019264c(uVar14,&local_a0);
              if (((*(int *)(lVar6 + 0x18) != 0) && (iVar3 == *(int *)(lVar6 + 8))) &&
                 ((iVar4 == *(int *)(lVar6 + 0xc) &&
                  ((iVar17 == *(int *)(lVar6 + 0x10) && (iVar16 == *(int *)(lVar6 + 0x14))))))) {
                local_80[lVar9 + 0x19] = '\x01';
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != 5);
            iVar17 = iVar17 + 1;
          } while (iVar17 != 6);
          iVar16 = iVar16 + 1;
        } while (iVar16 != 5);
      }
    }
  }
  else if (iVar16 == 5) {
    lVar9 = 0;
    lVar6 = param_1 + 0x5a58;
    do {
      uVar10 = (undefined4)lVar9;
      local_a0 = 0;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001a5810(uVar14,&local_98);
      if ((uVar5 & 1) != 0) {
        local_80[lVar9] = '\x01';
      }
      local_a0 = 1;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001a5810(uVar14,&local_98);
      if ((uVar5 & 1) != 0) {
        local_80[lVar9 + 5] = '\x01';
      }
      local_a0 = 2;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001a5810(uVar14,&local_98);
      if ((uVar5 & 1) != 0) {
        local_80[lVar9 + 10] = '\x01';
      }
      local_a0 = 3;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001a5810(uVar14,&local_98);
      if ((uVar5 & 1) != 0) {
        local_80[lVar9 + 0xf] = '\x01';
      }
      local_a0 = 4;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001a5810(uVar14,&local_98);
      if ((uVar5 & 1) != 0) {
        local_80[lVar9 + 0x14] = '\x01';
      }
      local_a0 = 5;
      uStack_9c = uVar10;
      FUN__text__00191328(&local_98,lVar6,&local_a0);
      uVar5 = FUN__text__001a5810(uVar14,&local_98);
      if ((uVar5 & 1) != 0) {
        local_80[lVar9 + 0x19] = '\x01';
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 5);
  }
  lVar9 = 0;
  pcVar13 = local_80;
  lVar12 = param_1 + 0x5a58;
  plVar1 = (long *)(lVar7 + 0x48);
  lVar6 = param_1 + 0x13f8;
  do {
    local_a0 = (undefined4)lVar9;
    uStack_9c = 0;
    FUN__text__00191328(&local_98,lVar12,&local_a0);
    local_a8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar5 = FUN__text__00194730(uVar8,&local_a8,&local_98);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if ((uVar5 & 1) == 0) {
      FUN__text__003c7c60(lVar11,lVar6,0);
    }
    else {
      FUN__text__003c7c60(lVar11,lVar6,1);
      lVar2 = lVar6 + 0xa8;
      if (*pcVar13 != '\0') {
        lVar2 = lVar6 + 0xb0;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar2);
    }
    FUN__text__003c7c60(lVar11,lVar6 + 0x80,0);
    lVar9 = lVar9 + 1;
    lVar6 = lVar6 + 1000;
    pcVar13 = pcVar13 + 5;
  } while (lVar9 != 6);
  lVar9 = 0;
  lVar6 = param_1 + 0x1570;
  pcVar13 = (char *)((ulong)local_80 | 1);
  do {
    local_a0 = (undefined4)lVar9;
    uStack_9c = 1;
    FUN__text__00191328(&local_98,lVar12,&local_a0);
    local_a8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar5 = FUN__text__00194730(uVar8,&local_a8,&local_98);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if ((uVar5 & 1) == 0) {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,0);
    }
    else {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,1);
      lVar2 = lVar6 + -8;
      if (*pcVar13 != '\0') {
        lVar2 = lVar6;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar2);
    }
    FUN__text__003c7c60(lVar11,lVar6 + -0x30,0);
    lVar9 = lVar9 + 1;
    lVar6 = lVar6 + 1000;
    pcVar13 = pcVar13 + 5;
  } while (lVar9 != 6);
  lVar9 = 0;
  lVar6 = param_1 + 0x1638;
  pcVar13 = (char *)((ulong)local_80 | 2);
  do {
    local_a0 = (undefined4)lVar9;
    uStack_9c = 2;
    FUN__text__00191328(&local_98,lVar12,&local_a0);
    local_a8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar5 = FUN__text__00194730(uVar8,&local_a8,&local_98);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if ((uVar5 & 1) == 0) {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,0);
    }
    else {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,1);
      lVar2 = lVar6 + -8;
      if (*pcVar13 != '\0') {
        lVar2 = lVar6;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar2);
    }
    FUN__text__003c7c60(lVar11,lVar6 + -0x30,0);
    lVar9 = lVar9 + 1;
    lVar6 = lVar6 + 1000;
    pcVar13 = pcVar13 + 5;
  } while (lVar9 != 6);
  lVar9 = 0;
  lVar6 = param_1 + 0x1700;
  pcVar13 = (char *)((ulong)local_80 | 3);
  do {
    local_a0 = (undefined4)lVar9;
    uStack_9c = 3;
    FUN__text__00191328(&local_98,lVar12,&local_a0);
    local_a8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar5 = FUN__text__00194730(uVar8,&local_a8,&local_98);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if ((uVar5 & 1) == 0) {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,0);
    }
    else {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,1);
      lVar2 = lVar6 + -8;
      if (*pcVar13 != '\0') {
        lVar2 = lVar6;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar2);
    }
    FUN__text__003c7c60(lVar11,lVar6 + -0x30,0);
    lVar9 = lVar9 + 1;
    lVar6 = lVar6 + 1000;
    pcVar13 = pcVar13 + 5;
  } while (lVar9 != 6);
  lVar9 = 0;
  lVar6 = param_1 + 0x17c8;
  pcVar13 = (char *)((ulong)local_80 | 4);
  do {
    local_a0 = (undefined4)lVar9;
    uStack_9c = 4;
    FUN__text__00191328(&local_98,lVar12,&local_a0);
    local_a8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar5 = FUN__text__00194730(uVar8,&local_a8,&local_98);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if ((uVar5 & 1) == 0) {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,0);
    }
    else {
      FUN__text__003c7c60(lVar11,lVar6 + -0xb0,1);
      lVar2 = lVar6 + -8;
      if (*pcVar13 != '\0') {
        lVar2 = lVar6;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar2);
    }
    FUN__text__003c7c60(lVar11,lVar6 + -0x30,0);
    lVar9 = lVar9 + 1;
    lVar6 = lVar6 + 1000;
    pcVar13 = pcVar13 + 5;
  } while (lVar9 != 6);
  if (lVar7 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


