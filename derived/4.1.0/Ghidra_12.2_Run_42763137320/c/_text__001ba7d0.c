/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ba7d0; name: FUN_.text__001ba7d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001ba7d0(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined6 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  int iVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 local_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined1 local_130 [4];
  undefined1 auStack_12c [2];
  undefined2 uStack_12a;
  undefined1 uStack_128;
  undefined1 auStack_127 [5];
  undefined2 uStack_122;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78 [3];
  
  lVar24 = *(long *)(param_1 + 8);
  lVar34 = *(long *)(lVar24 + 0x2d0);
  if (lVar34 == 0) {
    lVar20 = lVar24;
  }
  else {
    (**(code **)(*(long *)(lVar34 + 0x48) + 0x10))();
    lVar20 = *(long *)(param_1 + 8);
  }
  uVar15 = FUN__text__001281d4(lVar20);
  FUN__text__001156d0(&local_140,uVar15,0);
  lVar20 = CONCAT44(uStack_13c,local_140);
  lVar31 = *(long *)(lVar20 + 0x60);
  if (lVar31 == 0) {
LAB__text__001ba854:
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
    lVar20 = CONCAT44(uStack_13c,local_140);
    if (lVar20 != 0) goto LAB__text__001ba854;
  }
  lVar20 = *(long *)(param_1 + 0x18);
  if (lVar20 == 0) goto LAB__text__001bc498;
  lVar26 = *(long *)(lVar20 + 0x158);
  puVar2 = (ulong *)(param_1 + 0x5a58);
  uVar15 = *(undefined8 *)(lVar20 + 0x10);
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  uVar17 = *param_2;
  uVar18 = param_2[1];
  *(int *)(param_1 + 0x5a68) = (int)param_2[2];
  *puVar2 = uVar17;
  *(ulong *)(param_1 + 0x5a60) = uVar18;
  lVar20 = FUN__text__00195844(uVar15,uVar17 >> 0x20);
  if (*(int *)(lVar20 + 0xc) == 1) {
    if (*(int *)(param_1 + 0x4cc) == 0) {
      uVar16 = 0;
LAB__text__001ba8f0:
      FUN__text__003239b0(uVar16);
      goto LAB__text__001ba8f8;
    }
    if (*(char *)puVar2 == '\0') {
      uVar16 = FUN__text__00191358(param_1 + 0x5a60);
      goto LAB__text__001ba8f0;
    }
LAB__text__001ba900:
    uVar16 = FUN__text__00196200(uVar15,*(undefined4 *)(param_1 + 0x5a5c));
    lVar20 = *(long *)(param_1 + 0x10);
    if (lVar20 == 0) goto LAB__text__001bc498;
    local_78[0] = lVar31;
    if (lVar31 != 0) {
      (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
    }
    local_140 = 0xdf49c356;
    uStack_13c = 0xd0fe60b9;
    FUN__text__001ab8f4(lVar20,param_1 + 0x78,local_78,&local_140,0,uVar16);
    if (local_78[0] != 0) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
      local_78[0] = 0;
    }
    if (*(int *)(param_1 + 0x4cc) == 0) {
      FUN__text__001caa54(param_1,1);
      lVar20 = *(long *)(param_1 + 0x10);
      if (lVar20 == 0) goto LAB__text__001bc498;
      local_80 = lVar31;
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
      }
      local_140 = 0x54b9496c;
      uStack_13c = 0x49cf13aa;
      FUN__text__001ac1fc(lVar20,param_1 + 0x238,&local_80,&local_140);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
    }
    else {
      FUN__text__001caa54(param_1,0);
      lVar20 = *(long *)(param_1 + 0x10);
      if (lVar20 == 0) goto LAB__text__001bc498;
      local_88 = lVar31;
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
      }
      local_140 = 0x54c1bc87;
      uStack_13c = 0x49d925aa;
      FUN__text__001ac1fc(lVar20,param_1 + 0x1d0,&local_88,&local_140);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      lVar20 = *(long *)(param_1 + 0x10);
      if (lVar20 == 0) goto LAB__text__001bc498;
      local_90 = lVar31;
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
      }
      local_140 = 0x54c1bc87;
      uStack_13c = 0x49d925aa;
      FUN__text__001ac1fc(lVar20,param_1 + 0x1d8,&local_90,&local_140);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
    }
    FUN__text__003c7c60(lVar34,param_1 + 0x2f8,0);
    cVar4 = *(char *)(param_1 + 0x280);
  }
  else {
LAB__text__001ba8f8:
    if (*(char *)puVar2 != '\0') goto LAB__text__001ba900;
    FUN__text__001961e8(uVar15,*(undefined4 *)(param_1 + 0x5a5c));
    uVar12 = FUN__text__00192b70();
    local_140 = *(undefined4 *)(param_1 + 0x5a5c);
    uStack_13c = (undefined4)*(undefined8 *)(param_1 + 0x5a60);
    local_138 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5a60) >> 0x20);
    uStack_134 = *(undefined4 *)(param_1 + 0x5a68);
    lVar20 = FUN__text__001961a8(uVar15,&local_140);
    if (lVar20 != 0) {
      local_1c0 = *(undefined8 *)(lVar20 + 8);
      local_1b8 = *(code **)(lVar20 + 0x10);
      iVar13 = FUN__text__00191358((ulong)&local_1c0 | 4);
      lVar27 = *(long *)(param_1 + 0x10);
      if (lVar27 == 0) goto LAB__text__001bc498;
      local_98 = lVar31;
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
      }
      local_a0 = 0xd0fe60b9df49c356;
      FUN__text__001ab790(lVar27,param_1 + 0x78,&local_98,&local_a0,0,lVar20);
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        local_98 = 0;
      }
      FUN__text__001caa54(param_1,1);
      lVar20 = *(long *)(param_1 + 0x10);
      if (lVar20 == 0) goto LAB__text__001bc498;
      local_a8 = lVar31;
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
      }
      local_a0 = 0x49cf13aa54b9496c;
      FUN__text__001ac1fc(lVar20,param_1 + 0x238,&local_a8,&local_a0);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
      FUN__text__003c7c60(lVar34,param_1 + 0x2f8,1);
      lVar20 = *(long *)(param_1 + 0x10);
      if (lVar20 == 0) goto LAB__text__001bc498;
      local_b0 = lVar31;
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
      }
      local_a0 = 0x1d8ad436b757fc46;
      FUN__text__001abbc8(lVar20,param_1 + 0x2f8,&local_b0,&local_a0,0,1,iVar13 + 1,uVar12);
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
        local_b0 = 0;
      }
    }
    cVar4 = *(char *)(param_1 + 0x280);
  }
  if (cVar4 != '\0') {
    lVar20 = *(long *)(param_1 + 0x10);
    if (lVar20 == 0) {
LAB__text__001bc498:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    local_b8 = lVar31;
    if (lVar31 != 0) {
      (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
    }
    local_140 = 0x54bea2fe;
    uStack_13c = 0x49d59faa;
    FUN__text__001ac1fc(lVar20,param_1 + 0x2a0,&local_b8,&local_140);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
  }
  lVar20 = *(long *)(param_1 + 0x38);
  lVar24 = lVar24 + 0x110;
  _uStack_128 = 0;
  local_138 = 0;
  uStack_134 = 0;
  _local_130 = 0;
  uStack_12a = 0;
  uVar33 = *(undefined8 *)(lVar20 + 0xe8);
  uVar16 = *(undefined8 *)(lVar20 + 0x128);
  iVar13 = *(int *)(lVar20 + 0x1e8);
  local_140 = 0;
  uStack_13c = 0;
  if (iVar13 == 3) {
    lVar20 = 0;
    lVar27 = 1;
    do {
      uVar12 = (undefined4)lVar20;
      local_a0 = lVar20 << 0x20;
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001aa328(uVar33,&local_1c0);
      if ((uVar17 & 1) != 0) {
        lVar27 = 0;
LAB__text__001bb25c:
        local_130[lVar20 + lVar27 * 5 + -0x10] = 1;
        break;
      }
      local_a0 = CONCAT44(uVar12,1);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001aa328(uVar33,&local_1c0);
      if ((uVar17 & 1) != 0) goto LAB__text__001bb25c;
      local_a0 = CONCAT44(uVar12,2);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001aa328(uVar33,&local_1c0);
      if ((uVar17 & 1) != 0) {
        lVar27 = 2;
        goto LAB__text__001bb25c;
      }
      local_a0 = CONCAT44(uVar12,3);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001aa328(uVar33,&local_1c0);
      if ((uVar17 & 1) != 0) {
        lVar27 = 3;
        goto LAB__text__001bb25c;
      }
      local_a0 = CONCAT44(uVar12,4);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001aa328(uVar33,&local_1c0);
      if ((uVar17 & 1) != 0) {
        lVar27 = 4;
        goto LAB__text__001bb25c;
      }
      local_a0 = CONCAT44(uVar12,5);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001aa328(uVar33,&local_1c0);
      if ((uVar17 & 1) != 0) {
        lVar27 = 5;
        goto LAB__text__001bb25c;
      }
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 != 5);
  }
  else if (iVar13 == 6) {
    local_1c0 = *(undefined8 *)(*(long *)(lVar20 + 0x148) + 0x20);
    local_1b8 = *(code **)(*(long *)(lVar20 + 0x148) + 0x28);
    if (((int)local_1c0 == *(int *)(param_1 + 0x5a5c)) &&
       (lVar20 = FUN__text__001961a8(uVar15,&local_1c0), lVar20 != 0)) {
      if (*(char *)puVar2 == '\0') {
        if (((local_1c0._4_4_ == *(int *)(param_1 + 0x5a60)) &&
            ((int)local_1b8 == *(int *)(param_1 + 0x5a64))) &&
           (local_1b8._4_4_ == *(int *)(param_1 + 0x5a68))) {
          _uStack_128 = 0x10101010101;
          local_140 = 0x1010101;
          uStack_13c = 0x1010101;
          local_138 = 0x1010101;
          uStack_134 = 0x1010101;
          _local_130 = 0x10101010101;
          uStack_12a = 0x101;
        }
      }
      else {
        uVar16 = FUN__text__00196200(uVar15,*(undefined4 *)(param_1 + 0x5a5c));
        iVar13 = 0;
        do {
          iVar23 = 0;
          do {
            iVar8 = (int)local_1c0;
            iVar14 = FUN__text__00191358((ulong)&local_1c0 | 4);
            lVar20 = 0;
            do {
              uVar12 = (undefined4)lVar20;
              local_a0 = lVar20 << 0x20;
              lVar27 = FUN__text__0019264c(uVar16,&local_a0);
              if (((*(int *)(lVar27 + 0x18) != 0) &&
                  (iVar8 == *(int *)(lVar27 + 8) && iVar14 == *(int *)(lVar27 + 0xc))) &&
                 ((iVar23 == *(int *)(lVar27 + 0x10) && (iVar13 == *(int *)(lVar27 + 0x14))))) {
                local_130[lVar20 + -0x10] = 1;
              }
              local_a0 = CONCAT44(uVar12,1);
              lVar27 = FUN__text__0019264c(uVar16,&local_a0);
              if (((*(int *)(lVar27 + 0x18) != 0) && (iVar8 == *(int *)(lVar27 + 8))) &&
                 ((iVar14 == *(int *)(lVar27 + 0xc) &&
                  ((iVar23 == *(int *)(lVar27 + 0x10) && (iVar13 == *(int *)(lVar27 + 0x14))))))) {
                local_130[lVar20 + -0xb] = 1;
              }
              local_a0 = CONCAT44(uVar12,2);
              lVar27 = FUN__text__0019264c(uVar16,&local_a0);
              if ((((*(int *)(lVar27 + 0x18) != 0) && (iVar8 == *(int *)(lVar27 + 8))) &&
                  (iVar14 == *(int *)(lVar27 + 0xc))) &&
                 ((iVar23 == *(int *)(lVar27 + 0x10) && (iVar13 == *(int *)(lVar27 + 0x14))))) {
                local_130[lVar20 + -6] = 1;
              }
              local_a0 = CONCAT44(uVar12,3);
              lVar27 = FUN__text__0019264c(uVar16,&local_a0);
              if (((*(int *)(lVar27 + 0x18) != 0) && (iVar8 == *(int *)(lVar27 + 8))) &&
                 ((iVar14 == *(int *)(lVar27 + 0xc) &&
                  ((iVar23 == *(int *)(lVar27 + 0x10) && (iVar13 == *(int *)(lVar27 + 0x14))))))) {
                local_130[lVar20 + -1] = 1;
              }
              local_a0 = CONCAT44(uVar12,4);
              lVar27 = FUN__text__0019264c(uVar16,&local_a0);
              if ((((*(int *)(lVar27 + 0x18) != 0) && (iVar8 == *(int *)(lVar27 + 8))) &&
                  (iVar14 == *(int *)(lVar27 + 0xc))) &&
                 ((iVar23 == *(int *)(lVar27 + 0x10) && (iVar13 == *(int *)(lVar27 + 0x14))))) {
                auStack_12c[lVar20] = 1;
              }
              local_a0 = CONCAT44(uVar12,5);
              lVar27 = FUN__text__0019264c(uVar16,&local_a0);
              if (((*(int *)(lVar27 + 0x18) != 0) && (iVar8 == *(int *)(lVar27 + 8))) &&
                 ((iVar14 == *(int *)(lVar27 + 0xc) &&
                  ((iVar23 == *(int *)(lVar27 + 0x10) && (iVar13 == *(int *)(lVar27 + 0x14))))))) {
                auStack_127[lVar20] = 1;
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 != 5);
            iVar23 = iVar23 + 1;
          } while (iVar23 != 6);
          iVar13 = iVar13 + 1;
        } while (iVar13 != 5);
      }
    }
  }
  else if (iVar13 == 5) {
    lVar20 = 0;
    do {
      uVar12 = (undefined4)lVar20;
      local_a0 = lVar20 << 0x20;
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001a5810(uVar16,&local_1c0);
      if ((uVar17 & 1) != 0) {
        local_130[lVar20 + -0x10] = 1;
      }
      local_a0 = CONCAT44(uVar12,1);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001a5810(uVar16,&local_1c0);
      if ((uVar17 & 1) != 0) {
        local_130[lVar20 + -0xb] = 1;
      }
      local_a0 = CONCAT44(uVar12,2);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001a5810(uVar16,&local_1c0);
      if ((uVar17 & 1) != 0) {
        local_130[lVar20 + -6] = 1;
      }
      local_a0 = CONCAT44(uVar12,3);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001a5810(uVar16,&local_1c0);
      if ((uVar17 & 1) != 0) {
        local_130[lVar20 + -1] = 1;
      }
      local_a0 = CONCAT44(uVar12,4);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001a5810(uVar16,&local_1c0);
      if ((uVar17 & 1) != 0) {
        auStack_12c[lVar20] = 1;
      }
      local_a0 = CONCAT44(uVar12,5);
      FUN__text__00191328(&local_1c0,puVar2,&local_a0);
      uVar17 = FUN__text__001a5810(uVar16,&local_1c0);
      if ((uVar17 & 1) != 0) {
        auStack_127[lVar20] = 1;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 5);
  }
  uVar17 = 0;
  pcVar28 = (char *)&local_140;
  plVar1 = (long *)(lVar26 + 0x48);
  lVar20 = param_1 + 0x13f8;
  do {
    local_a0 = uVar17 & 0xffffffff;
    FUN__text__00191328(&local_1c0,puVar2,&local_a0);
    local_c0 = lVar26;
    if (lVar26 != 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar18 = FUN__text__00194730(uVar15,&local_c0,&local_1c0);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if ((uVar18 & 1) == 0) {
      FUN__text__003c7c60(lVar34,lVar20,0);
    }
    else {
      FUN__text__003c7c60(lVar34,lVar20,1);
      lVar27 = lVar20 + 0xa8;
      if (*pcVar28 != '\0') {
        lVar27 = lVar20 + 0xb0;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar27);
    }
    FUN__text__003c7c60(lVar34,lVar20 + 0x80,0);
    uVar17 = uVar17 + 1;
    lVar20 = lVar20 + 1000;
    pcVar28 = pcVar28 + 5;
  } while (uVar17 != 6);
  lVar20 = 0;
  lVar27 = 0x1540;
  pcVar28 = (char *)((ulong)&local_140 | 1);
  lVar29 = 0x1568;
  lVar30 = 0x1570;
  lVar32 = 0x14c0;
  do {
    local_a0 = CONCAT44(1,(int)lVar20);
    FUN__text__00191328(&local_1c0,puVar2,&local_a0);
    local_c0 = lVar26;
    if (lVar26 != 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar17 = FUN__text__00194730(uVar15,&local_c0,&local_1c0);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if ((uVar17 & 1) == 0) {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,0);
    }
    else {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,1);
      lVar19 = lVar29;
      if (*pcVar28 != '\0') {
        lVar19 = lVar30;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar19);
    }
    FUN__text__003c7c60(lVar34,param_1 + lVar27,0);
    lVar20 = lVar20 + 1;
    lVar27 = lVar27 + 1000;
    lVar29 = lVar29 + 1000;
    lVar30 = lVar30 + 1000;
    pcVar28 = pcVar28 + 5;
    lVar32 = lVar32 + 1000;
  } while (lVar20 != 6);
  lVar20 = 0;
  lVar27 = 0x1608;
  pcVar28 = (char *)((ulong)&local_140 | 2);
  lVar29 = 0x1630;
  lVar30 = 0x1638;
  lVar32 = 0x1588;
  do {
    local_a0 = CONCAT44(2,(int)lVar20);
    FUN__text__00191328(&local_1c0,puVar2,&local_a0);
    local_c0 = lVar26;
    if (lVar26 != 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar17 = FUN__text__00194730(uVar15,&local_c0,&local_1c0);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if ((uVar17 & 1) == 0) {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,0);
    }
    else {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,1);
      lVar19 = lVar29;
      if (*pcVar28 != '\0') {
        lVar19 = lVar30;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar19);
    }
    FUN__text__003c7c60(lVar34,param_1 + lVar27,0);
    lVar20 = lVar20 + 1;
    lVar27 = lVar27 + 1000;
    lVar29 = lVar29 + 1000;
    lVar30 = lVar30 + 1000;
    pcVar28 = pcVar28 + 5;
    lVar32 = lVar32 + 1000;
  } while (lVar20 != 6);
  lVar20 = 0;
  lVar27 = 0x16d0;
  pcVar28 = (char *)((ulong)&local_140 | 3);
  lVar29 = 0x16f8;
  lVar30 = 0x1700;
  lVar32 = 0x1650;
  do {
    local_a0 = CONCAT44(3,(int)lVar20);
    FUN__text__00191328(&local_1c0,puVar2,&local_a0);
    local_c0 = lVar26;
    if (lVar26 != 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar17 = FUN__text__00194730(uVar15,&local_c0,&local_1c0);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if ((uVar17 & 1) == 0) {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,0);
    }
    else {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,1);
      lVar19 = lVar29;
      if (*pcVar28 != '\0') {
        lVar19 = lVar30;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar19);
    }
    FUN__text__003c7c60(lVar34,param_1 + lVar27,0);
    lVar20 = lVar20 + 1;
    lVar27 = lVar27 + 1000;
    lVar29 = lVar29 + 1000;
    lVar30 = lVar30 + 1000;
    pcVar28 = pcVar28 + 5;
    lVar32 = lVar32 + 1000;
  } while (lVar20 != 6);
  lVar20 = 0;
  lVar27 = 0x1798;
  pcVar28 = (char *)((ulong)&local_140 | 4);
  lVar29 = 0x17c0;
  lVar30 = 0x17c8;
  lVar32 = 0x1718;
  do {
    local_a0 = CONCAT44(4,(int)lVar20);
    FUN__text__00191328(&local_1c0,puVar2,&local_a0);
    local_c0 = lVar26;
    if (lVar26 != 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar17 = FUN__text__00194730(uVar15,&local_c0,&local_1c0);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if ((uVar17 & 1) == 0) {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,0);
    }
    else {
      FUN__text__003c7c60(lVar34,param_1 + lVar32,1);
      lVar19 = lVar29;
      if (*pcVar28 != '\0') {
        lVar19 = lVar30;
      }
      FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + lVar19);
    }
    FUN__text__003c7c60(lVar34,param_1 + lVar27,0);
    lVar20 = lVar20 + 1;
    lVar27 = lVar27 + 1000;
    lVar29 = lVar29 + 1000;
    lVar30 = lVar30 + 1000;
    pcVar28 = pcVar28 + 5;
    lVar32 = lVar32 + 1000;
  } while (lVar20 != 6);
  if (*(char *)puVar2 == '\0') {
    bVar3 = false;
    uVar25 = 0;
    do {
      local_1c0 = (ulong)uVar25 << 0x20;
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar20 = FUN__text__00195358(uVar15,&local_140);
      local_1c0 = CONCAT44(uVar25,1);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar27 = FUN__text__00195358(uVar15,&local_140);
      local_1c0 = CONCAT44(uVar25,2);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      local_1c0 = CONCAT44(uVar25,3);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar30 = FUN__text__00195358(uVar15,&local_140);
      local_1c0 = CONCAT44(uVar25,4);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar32 = FUN__text__00195358(uVar15,&local_140);
      local_1c0 = CONCAT44(uVar25,5);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar19 = FUN__text__00195358(uVar15,&local_140);
      uVar25 = uVar25 + 1;
      if (((((lVar20 == 0 || lVar27 == 0) || lVar29 == 0) || lVar30 == 0) || lVar32 == 0) ||
          lVar19 == 0) {
        bVar3 = true;
      }
    } while (uVar25 != 5);
    if (!bVar3) goto LAB__text__001bb8a8;
    FUN__text__0012c378(lVar24,param_1 + 0x478);
    uVar25 = 0;
    lVar20 = 0;
    do {
      local_1c0 = (ulong)uVar25 << 0x20;
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      lVar27 = param_1 + lVar20;
      FUN__text__003c7c60(lVar34,lVar27 + 0x308,lVar29 == 0);
      local_1c0 = CONCAT44(uVar25,1);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      FUN__text__003c7c60(lVar34,lVar27 + 0x330,lVar29 == 0);
      local_1c0 = CONCAT44(uVar25,2);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      FUN__text__003c7c60(lVar34,lVar27 + 0x358,lVar29 == 0);
      local_1c0 = CONCAT44(uVar25,3);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      FUN__text__003c7c60(lVar34,lVar27 + 0x380,lVar29 == 0);
      local_1c0 = CONCAT44(uVar25,4);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      FUN__text__003c7c60(lVar34,lVar27 + 0x3a8,lVar29 == 0);
      local_1c0 = CONCAT44(uVar25,5);
      FUN__text__00191328(&local_140,puVar2,&local_1c0);
      lVar29 = FUN__text__00195358(uVar15,&local_140);
      FUN__text__003c7c60(lVar34,lVar27 + 0x3d0,lVar29 == 0);
      lVar20 = lVar20 + 8;
      uVar25 = uVar25 + 1;
    } while (lVar20 != 0x28);
  }
  else {
LAB__text__001bb8a8:
    FUN__text__0012c378(lVar24,param_1 + 0x480);
  }
  FUN__text__001bc4a0(param_1,0,0,0);
  uVar16 = _DAT_008a1038;
  pcVar7 = _DAT_008a1018;
  pcVar6 = _DAT_008a1010;
  uVar15 = _DAT_008a1008;
  pcVar22 = _DAT_008a1000;
  local_110 = 0;
  local_118 = _DAT_008a0ff0;
  local_140 = (undefined4)_DAT_008a0ff8;
  uVar12 = local_140;
  uStack_13c = (undefined4)((ulong)_DAT_008a0ff8 >> 0x20);
  uVar9 = uStack_13c;
  local_138 = (undefined4)_DAT_008a1020;
  uStack_134 = (undefined4)((ulong)_DAT_008a1020 >> 0x20);
  lVar20 = *(long *)(param_1 + 0x40);
  pcVar21 = *(code **)(lVar20 + 0xb8);
  _local_130 = SUB86(_DAT_008a1000,0);
  uVar10 = _local_130;
  uStack_12a = (undefined2)((ulong)_DAT_008a1000 >> 0x30);
  uVar11 = uStack_12a;
  _uStack_128 = (undefined6)_DAT_008a1028;
  uStack_122 = (undefined2)((ulong)_DAT_008a1028 >> 0x30);
  uStack_198 = _DAT_008a1030;
  local_190 = 0;
  local_1c0 = _DAT_008a1008;
  local_1b8 = _DAT_008a1010;
  local_1b0 = _DAT_008a1018;
  uStack_1a8 = _DAT_008a1038;
  local_1a0 = param_1;
  local_120 = param_1;
  if (pcVar21 == (code *)0x0) {
    pcVar21 = _DAT_008a1000;
LAB__text__001bc260:
    (*pcVar21)(&local_120,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = CONCAT44(uStack_13c,local_140);
    *(ulong *)(lVar20 + 0xb8) = CONCAT44(uStack_134,local_138);
    *(ulong *)(lVar20 + 0xc0) = CONCAT26(uStack_12a,_local_130);
    *(ulong *)(lVar20 + 200) = CONCAT26(uStack_122,_uStack_128);
    lVar20 = *(long *)(param_1 + 0x40);
    pcVar21 = *(code **)(lVar20 + 0x2b8);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    (*pcVar21)(lVar20 + 0xd0);
    pcVar21 = (code *)CONCAT26(uStack_12a,_local_130);
    if ((code *)CONCAT26(uStack_12a,_local_130) != (code *)0x0) goto LAB__text__001bc260;
    lVar20 = *(long *)(param_1 + 0x40);
    pcVar21 = *(code **)(lVar20 + 0x2b8);
  }
  puVar5 = (undefined8 *)(lVar20 + 0x2b0);
  if (pcVar21 != (code *)0x0) {
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    (*pcVar21)(lVar20 + 0x2d0);
  }
  if (local_1b0 != (code *)0x0) {
    (*local_1b0)(&local_1a0,lVar20 + 0x2d0);
    *puVar5 = local_1c0;
    puVar5[1] = local_1b8;
    puVar5[2] = local_1b0;
    puVar5[3] = uStack_1a8;
  }
  local_a0 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_a0,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x40),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x40),1);
  pcVar21 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar21)(&local_1a0);
  }
  pcVar21 = (code *)CONCAT44(uStack_134,local_138);
  if (pcVar21 != (code *)0x0) {
    _local_130 = 0;
    uStack_12a = 0;
    _uStack_128 = 0;
    uStack_122 = 0;
    local_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_134 = 0;
    (*pcVar21)(&local_120);
  }
  local_110 = 0;
  local_138 = (undefined4)_DAT_008a1020;
  uStack_134 = (undefined4)((ulong)_DAT_008a1020 >> 0x20);
  local_118 = _DAT_008a1040;
  lVar20 = *(long *)(param_1 + 0x48);
  _uStack_128 = (undefined6)_DAT_008a1028;
  uStack_122 = (undefined2)((ulong)_DAT_008a1028 >> 0x30);
  pcVar21 = *(code **)(lVar20 + 0xb8);
  local_190 = 0;
  local_1c0 = uVar15;
  local_1b8 = pcVar6;
  local_1b0 = pcVar7;
  uStack_1a8 = uVar16;
  uStack_198 = _DAT_008a1048;
  local_140 = uVar12;
  uStack_13c = uVar9;
  _local_130 = uVar10;
  uStack_12a = uVar11;
  if (pcVar21 == (code *)0x0) {
    pcVar21 = pcVar22;
    local_1a0 = param_1;
    local_120 = param_1;
LAB__text__001bc29c:
    (*pcVar21)(&local_120,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = CONCAT44(uStack_13c,local_140);
    *(ulong *)(lVar20 + 0xb8) = CONCAT44(uStack_134,local_138);
    *(ulong *)(lVar20 + 0xc0) = CONCAT26(uStack_12a,_local_130);
    *(ulong *)(lVar20 + 200) = CONCAT26(uStack_122,_uStack_128);
    lVar20 = *(long *)(param_1 + 0x48);
    pcVar21 = *(code **)(lVar20 + 0x2b8);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    local_1a0 = param_1;
    local_120 = param_1;
    (*pcVar21)(lVar20 + 0xd0);
    pcVar21 = (code *)CONCAT26(uStack_12a,_local_130);
    if ((code *)CONCAT26(uStack_12a,_local_130) != (code *)0x0) goto LAB__text__001bc29c;
    lVar20 = *(long *)(param_1 + 0x48);
    pcVar21 = *(code **)(lVar20 + 0x2b8);
  }
  puVar5 = (undefined8 *)(lVar20 + 0x2b0);
  if (pcVar21 != (code *)0x0) {
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    (*pcVar21)(lVar20 + 0x2d0);
  }
  if (local_1b0 != (code *)0x0) {
    (*local_1b0)(&local_1a0,lVar20 + 0x2d0);
    *puVar5 = local_1c0;
    puVar5[1] = local_1b8;
    puVar5[2] = local_1b0;
    puVar5[3] = uStack_1a8;
  }
  local_a0 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x48),&local_a0,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x48),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x48),1);
  pcVar21 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar21)(&local_1a0);
  }
  pcVar21 = (code *)CONCAT44(uStack_134,local_138);
  if (pcVar21 != (code *)0x0) {
    _local_130 = 0;
    uStack_12a = 0;
    _uStack_128 = 0;
    uStack_122 = 0;
    local_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_134 = 0;
    (*pcVar21)(&local_120);
  }
  local_110 = 0;
  local_138 = (undefined4)_DAT_008a1020;
  uStack_134 = (undefined4)((ulong)_DAT_008a1020 >> 0x20);
  local_118 = _DAT_008a1050;
  lVar20 = *(long *)(param_1 + 0x50);
  _uStack_128 = (undefined6)_DAT_008a1028;
  uStack_122 = (undefined2)((ulong)_DAT_008a1028 >> 0x30);
  pcVar21 = *(code **)(lVar20 + 0xb8);
  local_190 = 0;
  local_1c0 = uVar15;
  local_1b8 = pcVar6;
  local_1b0 = pcVar7;
  uStack_1a8 = uVar16;
  uStack_198 = _DAT_008a1058;
  if (pcVar21 == (code *)0x0) {
    pcVar21 = pcVar22;
    local_1a0 = param_1;
    local_140 = uVar12;
    uStack_13c = uVar9;
    _local_130 = uVar10;
    uStack_12a = uVar11;
    local_120 = param_1;
LAB__text__001bc2d8:
    (*pcVar21)(&local_120,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = CONCAT44(uStack_13c,local_140);
    *(ulong *)(lVar20 + 0xb8) = CONCAT44(uStack_134,local_138);
    *(ulong *)(lVar20 + 0xc0) = CONCAT26(uStack_12a,_local_130);
    *(ulong *)(lVar20 + 200) = CONCAT26(uStack_122,_uStack_128);
    lVar20 = *(long *)(param_1 + 0x50);
    pcVar21 = *(code **)(lVar20 + 0x2b8);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    local_1a0 = param_1;
    local_140 = uVar12;
    uStack_13c = uVar9;
    _local_130 = uVar10;
    uStack_12a = uVar11;
    local_120 = param_1;
    (*pcVar21)(lVar20 + 0xd0);
    pcVar21 = (code *)CONCAT26(uStack_12a,_local_130);
    if ((code *)CONCAT26(uStack_12a,_local_130) != (code *)0x0) goto LAB__text__001bc2d8;
    lVar20 = *(long *)(param_1 + 0x50);
    pcVar21 = *(code **)(lVar20 + 0x2b8);
  }
  puVar5 = (undefined8 *)(lVar20 + 0x2b0);
  if (pcVar21 != (code *)0x0) {
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    (*pcVar21)(lVar20 + 0x2d0);
  }
  if (local_1b0 != (code *)0x0) {
    (*local_1b0)(&local_1a0,lVar20 + 0x2d0);
    *puVar5 = local_1c0;
    puVar5[1] = local_1b8;
    puVar5[2] = local_1b0;
    puVar5[3] = uStack_1a8;
  }
  local_a0 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x50),&local_a0,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x50),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x50),1);
  pcVar21 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar21)(&local_1a0);
  }
  pcVar21 = (code *)CONCAT44(uStack_134,local_138);
  if (pcVar21 != (code *)0x0) {
    _local_130 = 0;
    uStack_12a = 0;
    _uStack_128 = 0;
    uStack_122 = 0;
    local_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_134 = 0;
    (*pcVar21)(&local_120);
  }
  if (*(char *)(param_1 + 0x280) == '\0') goto LAB__text__001bbdd4;
  local_110 = 0;
  local_138 = (undefined4)_DAT_008a1020;
  uStack_134 = (undefined4)((ulong)_DAT_008a1020 >> 0x20);
  local_118 = _DAT_008a1060;
  lVar20 = *(long *)(param_1 + 0x58);
  _uStack_128 = (undefined6)_DAT_008a1028;
  uStack_122 = (undefined2)((ulong)_DAT_008a1028 >> 0x30);
  pcVar21 = *(code **)(lVar20 + 0xb8);
  local_190 = 0;
  local_1c0 = uVar15;
  local_1b8 = pcVar6;
  local_1b0 = pcVar7;
  uStack_1a8 = uVar16;
  uStack_198 = _DAT_008a1068;
  local_1a0 = param_1;
  local_140 = uVar12;
  uStack_13c = uVar9;
  _local_130 = uVar10;
  uStack_12a = uVar11;
  local_120 = param_1;
  if (pcVar21 == (code *)0x0) {
LAB__text__001bbd08:
    (*pcVar22)(&local_120,lVar20 + 0xd0);
    *(undefined8 *)(lVar20 + 0xb0) = CONCAT44(uStack_13c,local_140);
    *(ulong *)(lVar20 + 0xb8) = CONCAT44(uStack_134,local_138);
    *(ulong *)(lVar20 + 0xc0) = CONCAT26(uStack_12a,_local_130);
    *(ulong *)(lVar20 + 200) = CONCAT26(uStack_122,_uStack_128);
  }
  else {
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    (*pcVar21)(lVar20 + 0xd0);
    pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
    if (pcVar22 != (code *)0x0) goto LAB__text__001bbd08;
  }
  lVar20 = *(long *)(param_1 + 0x58);
  pcVar22 = *(code **)(lVar20 + 0x2b8);
  if (pcVar22 != (code *)0x0) {
    *(undefined8 *)(lVar20 + 0x2c0) = 0;
    *(undefined8 *)(lVar20 + 0x2c8) = 0;
    *(undefined8 *)(lVar20 + 0x2b0) = 0;
    *(undefined8 *)(lVar20 + 0x2b8) = 0;
    (*pcVar22)(lVar20 + 0x2d0);
  }
  if (local_1b0 != (code *)0x0) {
    (*local_1b0)(&local_1a0,lVar20 + 0x2d0);
    *(undefined8 *)(lVar20 + 0x2b0) = local_1c0;
    *(code **)(lVar20 + 0x2b8) = local_1b8;
    *(code **)(lVar20 + 0x2c0) = local_1b0;
    *(undefined8 *)(lVar20 + 0x2c8) = uStack_1a8;
  }
  local_a0 = 0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x58),&local_a0,0,0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x58),1);
  FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x58),1);
  pcVar22 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar22)(&local_1a0);
  }
  pcVar22 = (code *)CONCAT44(uStack_134,local_138);
  if (pcVar22 != (code *)0x0) {
    _local_130 = 0;
    uStack_12a = 0;
    _uStack_128 = 0;
    uStack_122 = 0;
    local_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_134 = 0;
    (*pcVar22)(&local_120);
  }
LAB__text__001bbdd4:
  lVar20 = 0;
  lVar27 = 0x720;
  do {
    lVar29 = param_1 + lVar27;
    lVar30 = FUN__text__0012cb14(lVar24,lVar29 + -0x230);
    pcVar22 = *(code **)(lVar30 + 0x408);
    _uStack_128 = 0x1c1c74;
    uStack_122 = 0;
    uVar12 = (undefined4)lVar20;
    local_118 = lVar20 << 0x20;
    local_140 = 0x1c1c58;
    uStack_13c = 0;
    local_138 = 0x1c1c64;
    uStack_134 = 0;
    _local_130 = 0x1c1c68;
    uStack_12a = 0;
    *(undefined1 *)(lVar30 + 0x240) = 1;
    if (pcVar22 == (code *)0x0) {
      pcVar22 = FUN__text__001c1c68;
      local_120 = param_1;
LAB__text__001bc0d4:
      (*pcVar22)(&local_120,lVar30 + 0x420);
      *(undefined8 *)(lVar30 + 0x400) = CONCAT44(uStack_13c,local_140);
      *(ulong *)(lVar30 + 0x408) = CONCAT44(uStack_134,local_138);
      *(ulong *)(lVar30 + 0x410) = CONCAT26(uStack_12a,_local_130);
      *(ulong *)(lVar30 + 0x418) = CONCAT26(uStack_122,_uStack_128);
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    else {
      *(undefined8 *)(lVar30 + 0x410) = 0;
      *(undefined8 *)(lVar30 + 0x418) = 0;
      *(undefined8 *)(lVar30 + 0x400) = 0;
      *(undefined8 *)(lVar30 + 0x408) = 0;
      local_120 = param_1;
      (*pcVar22)(lVar30 + 0x420);
      pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
      if (pcVar22 != (code *)0x0) goto LAB__text__001bc0d4;
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    if (pcVar22 != (code *)0x0) {
      _local_130 = 0;
      uStack_12a = 0;
      _uStack_128 = 0;
      uStack_122 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      (*pcVar22)(&local_120);
    }
    lVar30 = FUN__text__0012cb14(lVar24,lVar29);
    local_118 = CONCAT44(uVar12,1);
    _local_130 = 0x1c1c68;
    uStack_12a = 0;
    local_140 = 0x1c1c58;
    uStack_13c = 0;
    local_138 = 0x1c1c64;
    uStack_134 = 0;
    *(undefined1 *)(lVar30 + 0x240) = 1;
    _uStack_128 = 0x1c1c74;
    uStack_122 = 0;
    pcVar22 = *(code **)(lVar30 + 0x408);
    if (pcVar22 == (code *)0x0) {
      pcVar22 = FUN__text__001c1c68;
      local_120 = param_1;
LAB__text__001bc104:
      (*pcVar22)(&local_120,lVar30 + 0x420);
      *(undefined8 *)(lVar30 + 0x400) = CONCAT44(uStack_13c,local_140);
      *(ulong *)(lVar30 + 0x408) = CONCAT44(uStack_134,local_138);
      *(ulong *)(lVar30 + 0x410) = CONCAT26(uStack_12a,_local_130);
      *(ulong *)(lVar30 + 0x418) = CONCAT26(uStack_122,_uStack_128);
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    else {
      *(undefined8 *)(lVar30 + 0x410) = 0;
      *(undefined8 *)(lVar30 + 0x418) = 0;
      *(undefined8 *)(lVar30 + 0x400) = 0;
      *(undefined8 *)(lVar30 + 0x408) = 0;
      local_120 = param_1;
      (*pcVar22)(lVar30 + 0x420);
      pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
      if (pcVar22 != (code *)0x0) goto LAB__text__001bc104;
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    if (pcVar22 != (code *)0x0) {
      _local_130 = 0;
      uStack_12a = 0;
      _uStack_128 = 0;
      uStack_122 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      (*pcVar22)(&local_120);
    }
    lVar30 = FUN__text__0012cb14(lVar24,lVar29 + 0x230);
    local_118 = CONCAT44(uVar12,2);
    local_140 = 0x1c1c58;
    uStack_13c = 0;
    local_138 = 0x1c1c64;
    uStack_134 = 0;
    _local_130 = 0x1c1c68;
    uStack_12a = 0;
    _uStack_128 = 0x1c1c74;
    uStack_122 = 0;
    pcVar22 = *(code **)(lVar30 + 0x408);
    *(undefined1 *)(lVar30 + 0x240) = 1;
    if (pcVar22 == (code *)0x0) {
      pcVar22 = FUN__text__001c1c68;
      local_120 = param_1;
LAB__text__001bc134:
      (*pcVar22)(&local_120,lVar30 + 0x420);
      *(undefined8 *)(lVar30 + 0x400) = CONCAT44(uStack_13c,local_140);
      *(ulong *)(lVar30 + 0x408) = CONCAT44(uStack_134,local_138);
      *(ulong *)(lVar30 + 0x410) = CONCAT26(uStack_12a,_local_130);
      *(ulong *)(lVar30 + 0x418) = CONCAT26(uStack_122,_uStack_128);
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    else {
      *(undefined8 *)(lVar30 + 0x410) = 0;
      *(undefined8 *)(lVar30 + 0x418) = 0;
      *(undefined8 *)(lVar30 + 0x400) = 0;
      *(undefined8 *)(lVar30 + 0x408) = 0;
      local_120 = param_1;
      (*pcVar22)(lVar30 + 0x420);
      pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
      if (pcVar22 != (code *)0x0) goto LAB__text__001bc134;
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    if (pcVar22 != (code *)0x0) {
      _local_130 = 0;
      uStack_12a = 0;
      _uStack_128 = 0;
      uStack_122 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      (*pcVar22)(&local_120);
    }
    lVar30 = FUN__text__0012cb14(lVar24,lVar29 + 0x460);
    local_118 = CONCAT44(uVar12,3);
    local_140 = 0x1c1c58;
    uStack_13c = 0;
    local_138 = 0x1c1c64;
    uStack_134 = 0;
    _local_130 = 0x1c1c68;
    uStack_12a = 0;
    _uStack_128 = 0x1c1c74;
    uStack_122 = 0;
    pcVar22 = *(code **)(lVar30 + 0x408);
    *(undefined1 *)(lVar30 + 0x240) = 1;
    if (pcVar22 == (code *)0x0) {
      pcVar22 = FUN__text__001c1c68;
      local_120 = param_1;
LAB__text__001bc164:
      (*pcVar22)(&local_120,lVar30 + 0x420);
      *(undefined8 *)(lVar30 + 0x400) = CONCAT44(uStack_13c,local_140);
      *(ulong *)(lVar30 + 0x408) = CONCAT44(uStack_134,local_138);
      *(ulong *)(lVar30 + 0x410) = CONCAT26(uStack_12a,_local_130);
      *(ulong *)(lVar30 + 0x418) = CONCAT26(uStack_122,_uStack_128);
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    else {
      *(undefined8 *)(lVar30 + 0x410) = 0;
      *(undefined8 *)(lVar30 + 0x418) = 0;
      *(undefined8 *)(lVar30 + 0x400) = 0;
      *(undefined8 *)(lVar30 + 0x408) = 0;
      local_120 = param_1;
      (*pcVar22)(lVar30 + 0x420);
      pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
      if (pcVar22 != (code *)0x0) goto LAB__text__001bc164;
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    if (pcVar22 != (code *)0x0) {
      _local_130 = 0;
      uStack_12a = 0;
      _uStack_128 = 0;
      uStack_122 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      (*pcVar22)(&local_120);
    }
    lVar30 = FUN__text__0012cb14(lVar24,lVar29 + 0x690);
    local_118 = CONCAT44(uVar12,4);
    local_140 = 0x1c1c58;
    uStack_13c = 0;
    local_138 = 0x1c1c64;
    uStack_134 = 0;
    _local_130 = 0x1c1c68;
    uStack_12a = 0;
    _uStack_128 = 0x1c1c74;
    uStack_122 = 0;
    pcVar22 = *(code **)(lVar30 + 0x408);
    *(undefined1 *)(lVar30 + 0x240) = 1;
    if (pcVar22 == (code *)0x0) {
      pcVar22 = FUN__text__001c1c68;
      local_120 = param_1;
LAB__text__001bc194:
      (*pcVar22)(&local_120,lVar30 + 0x420);
      *(undefined8 *)(lVar30 + 0x400) = CONCAT44(uStack_13c,local_140);
      *(ulong *)(lVar30 + 0x408) = CONCAT44(uStack_134,local_138);
      *(ulong *)(lVar30 + 0x410) = CONCAT26(uStack_12a,_local_130);
      *(ulong *)(lVar30 + 0x418) = CONCAT26(uStack_122,_uStack_128);
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    else {
      *(undefined8 *)(lVar30 + 0x410) = 0;
      *(undefined8 *)(lVar30 + 0x418) = 0;
      *(undefined8 *)(lVar30 + 0x400) = 0;
      *(undefined8 *)(lVar30 + 0x408) = 0;
      local_120 = param_1;
      (*pcVar22)(lVar30 + 0x420);
      pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
      if (pcVar22 != (code *)0x0) goto LAB__text__001bc194;
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    if (pcVar22 != (code *)0x0) {
      _local_130 = 0;
      uStack_12a = 0;
      _uStack_128 = 0;
      uStack_122 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      (*pcVar22)(&local_120);
    }
    lVar29 = FUN__text__0012cb14(lVar24,lVar29 + 0x8c0);
    local_118 = CONCAT44(uVar12,5);
    local_140 = 0x1c1c58;
    uStack_13c = 0;
    local_138 = 0x1c1c64;
    uStack_134 = 0;
    _local_130 = 0x1c1c68;
    uStack_12a = 0;
    _uStack_128 = 0x1c1c74;
    uStack_122 = 0;
    pcVar22 = *(code **)(lVar29 + 0x408);
    *(undefined1 *)(lVar29 + 0x240) = 1;
    if (pcVar22 == (code *)0x0) {
      pcVar22 = FUN__text__001c1c68;
      local_120 = param_1;
LAB__text__001bc1c4:
      (*pcVar22)(&local_120,lVar29 + 0x420);
      *(undefined8 *)(lVar29 + 0x400) = CONCAT44(uStack_13c,local_140);
      *(ulong *)(lVar29 + 0x408) = CONCAT44(uStack_134,local_138);
      *(ulong *)(lVar29 + 0x410) = CONCAT26(uStack_12a,_local_130);
      *(ulong *)(lVar29 + 0x418) = CONCAT26(uStack_122,_uStack_128);
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    else {
      *(undefined8 *)(lVar29 + 0x410) = 0;
      *(undefined8 *)(lVar29 + 0x418) = 0;
      *(undefined8 *)(lVar29 + 0x400) = 0;
      *(undefined8 *)(lVar29 + 0x408) = 0;
      local_120 = param_1;
      (*pcVar22)(lVar29 + 0x420);
      pcVar22 = (code *)CONCAT26(uStack_12a,_local_130);
      if (pcVar22 != (code *)0x0) goto LAB__text__001bc1c4;
      pcVar22 = (code *)CONCAT44(uStack_134,local_138);
    }
    if (pcVar22 != (code *)0x0) {
      _local_130 = 0;
      uStack_12a = 0;
      _uStack_128 = 0;
      uStack_122 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      (*pcVar22)(&local_120);
    }
    lVar20 = lVar20 + 1;
    lVar27 = lVar27 + 0x70;
    if (lVar20 == 5) {
      if (lVar26 != 0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      if (lVar31 != 0) {
        (**(code **)(*(long *)(lVar31 + 0x48) + 0x18))();
      }
      if (lVar34 != 0) {
        (**(code **)(*(long *)(lVar34 + 0x48) + 0x18))((long *)(lVar34 + 0x48));
      }
      return;
    }
  } while( true );
}


