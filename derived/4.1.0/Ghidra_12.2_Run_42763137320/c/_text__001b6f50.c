/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b6f50; name: FUN_.text__001b6f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b6f50(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  size_t __n;
  ulong uVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [24];
  long local_70;
  
  if (*(char *)(param_3 + 0x5b89) == '\0') {
    return;
  }
  lVar20 = *(long *)(param_3 + 8);
  lVar17 = *(long *)(lVar20 + 0x2d0);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(param_3 + 0x38);
  lVar18 = *(long *)(lVar12 + 0x128);
  uVar21 = *(uint *)(lVar18 + 0x44);
  uVar3 = *(uint *)(lVar18 + 0x48);
  uVar13 = (ulong)uVar3;
  cVar7 = *(char *)(lVar18 + 0x20);
  iVar1 = *(int *)(lVar18 + 0x24);
  iVar4 = *(int *)(lVar18 + 0x28);
  uVar10 = *(uint *)(lVar18 + 0x2c);
  uVar5 = *(uint *)(lVar18 + 0x30);
  iVar11 = *(int *)(param_3 + 0x5b8c);
  uVar16 = (ulong)(*(int *)(lVar12 + 0x1b0) != iVar1 && *(int *)(lVar12 + 0x1b4) == iVar1);
  if (iVar11 != 0) {
    if (iVar11 == 2) {
      uVar2 = *(uint *)(lVar18 + 0x4c);
      uVar6 = *(uint *)(lVar18 + 0x50);
      FUN__text__001a011c();
      FUN__text__001a08d0(*(undefined8 *)(param_3 + 0x38));
      lVar20 = 0;
      pvVar19 = (void *)(param_3 + 0x42d0);
      do {
        uVar22 = (undefined4)lVar20;
        local_160 = lVar20 << 0x20;
        uVar16 = FUN__text__001a56dc(lVar18,&local_160);
        if ((uVar16 & 1) == 0) {
          local_160 = CONCAT44(uVar22,1);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) == 0) goto LAB__text__001b74dc;
LAB__text__001b7594:
          memcpy(&local_160,(void *)((long)pvVar19 + 1000),200);
          FUN__text__003c7c60(lVar17,&local_158,0);
          local_160 = CONCAT44(uVar22,2);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) != 0) goto LAB__text__001b74f4;
LAB__text__001b75cc:
          local_160 = CONCAT44(uVar22,3);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) == 0) goto LAB__text__001b752c;
LAB__text__001b75e4:
          memcpy(&local_160,(void *)((long)pvVar19 + 3000),200);
          FUN__text__003c7c60(lVar17,&local_158,0);
          local_160 = CONCAT44(uVar22,4);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) != 0) goto LAB__text__001b7544;
LAB__text__001b761c:
          local_160 = CONCAT44(uVar22,5);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
        }
        else {
          memcpy(&local_160,pvVar19,200);
          FUN__text__003c7c60(lVar17,&local_158,0);
          local_160 = CONCAT44(uVar22,1);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) != 0) goto LAB__text__001b7594;
LAB__text__001b74dc:
          local_160 = CONCAT44(uVar22,2);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) == 0) goto LAB__text__001b75cc;
LAB__text__001b74f4:
          memcpy(&local_160,(void *)((long)pvVar19 + 2000),200);
          FUN__text__003c7c60(lVar17,&local_158,0);
          local_160 = CONCAT44(uVar22,3);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) != 0) goto LAB__text__001b75e4;
LAB__text__001b752c:
          local_160 = CONCAT44(uVar22,4);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar16 & 1) == 0) goto LAB__text__001b761c;
LAB__text__001b7544:
          memcpy(&local_160,(void *)((long)pvVar19 + 4000),200);
          FUN__text__003c7c60(lVar17,&local_158,0);
          local_160 = CONCAT44(uVar22,5);
          uVar16 = FUN__text__001a56dc(lVar18,&local_160);
        }
        if ((uVar16 & 1) != 0) {
          memcpy(&local_160,(void *)((long)pvVar19 + 5000),200);
          FUN__text__003c7c60(lVar17,&local_158,0);
        }
        lVar20 = lVar20 + 1;
        pvVar19 = (void *)((long)pvVar19 + 200);
      } while (lVar20 != 5);
      if (((((cVar7 == *(char *)(param_3 + 0x5a58)) && (iVar1 == *(int *)(param_3 + 0x5a5c))) &&
           (iVar4 == *(int *)(param_3 + 0x5a60))) &&
          ((uVar10 == *(uint *)(param_3 + 0x5a64) && (uVar5 == *(uint *)(param_3 + 0x5a68))))) &&
         (uVar3 <= uVar6)) {
        if (uVar2 < uVar21) {
          do {
            uVar21 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar21;
          } while (uVar21 <= uVar6);
        }
        else {
          do {
            uVar16 = (ulong)uVar21;
            do {
              local_160 = CONCAT44((int)uVar13,(int)uVar16);
              uVar15 = FUN__text__001a56dc(lVar18,&local_160);
              if ((uVar15 & 1) != 0) {
                uVar15 = local_160 & 0xffffffff;
                uVar8 = local_160 >> 0x20;
                lVar20 = *(long *)(*(long *)(param_3 + 8) + 0x2d0);
                if (lVar20 != 0) {
                  (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
                }
                lVar12 = param_3 + uVar15 * 1000 + uVar8 * 200;
                FUN__text__003c7c60(lVar20,lVar12 + 0x13f8,1);
                FUN__text__0012c378(*(long *)(param_3 + 8) + 0x110,lVar12 + 0x14a0);
                (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
              }
              uVar10 = (int)uVar16 + 1;
              uVar16 = (ulong)uVar10;
            } while (uVar10 <= uVar2);
            uVar10 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar10;
          } while (uVar10 <= uVar6);
        }
      }
      FUN__text__001bc4a0(param_3,0,0,0);
      FUN__text__001ad4a8(*(undefined8 *)(param_3 + 0x4d0));
      FUN__text__001a193c(*(undefined8 *)(param_3 + 0x38));
      *(undefined1 *)(param_3 + 0x5b89) = 0;
      *(int *)(param_3 + 0x5b8c) = *(int *)(param_3 + 0x5b8c) + 1;
    }
    else if (iVar11 == 1) {
      lVar12 = 0;
      pvVar19 = (void *)(param_3 + 0x42d0);
      uVar21 = 1;
      do {
        uVar22 = (undefined4)lVar12;
        local_160 = lVar12 << 0x20;
        uVar13 = FUN__text__001a56dc(lVar18,&local_160);
        if ((uVar13 & 1) == 0) {
          local_160 = CONCAT44(uVar22,1);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) == 0) goto LAB__text__001b70c0;
LAB__text__001b707c:
          memcpy(&local_160,(void *)((long)pvVar19 + 1000),200);
          if (*(long *)(lVar20 + 0x2d0) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = FUN__text__003c7ec0(*(long *)(lVar20 + 0x2d0),auStack_c8);
          }
          uVar21 = uVar10 & uVar21;
          local_160 = CONCAT44(uVar22,2);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) != 0) goto LAB__text__001b70d8;
LAB__text__001b711c:
          local_160 = CONCAT44(uVar22,3);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) == 0) goto LAB__text__001b7178;
LAB__text__001b7134:
          memcpy(&local_160,(void *)((long)pvVar19 + 3000),200);
          if (*(long *)(lVar20 + 0x2d0) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = FUN__text__003c7ec0(*(long *)(lVar20 + 0x2d0),auStack_c8);
          }
          uVar21 = uVar10 & uVar21;
          local_160 = CONCAT44(uVar22,4);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) != 0) goto LAB__text__001b7190;
LAB__text__001b71ec:
          local_160 = CONCAT44(uVar22,5);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
        }
        else {
          memcpy(&local_160,pvVar19,200);
          if (*(long *)(lVar20 + 0x2d0) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = FUN__text__003c7ec0(*(long *)(lVar20 + 0x2d0),auStack_c8);
          }
          uVar21 = uVar10 & uVar21;
          local_160 = CONCAT44(uVar22,1);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) != 0) goto LAB__text__001b707c;
LAB__text__001b70c0:
          local_160 = CONCAT44(uVar22,2);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) == 0) goto LAB__text__001b711c;
LAB__text__001b70d8:
          memcpy(&local_160,(void *)((long)pvVar19 + 2000),200);
          if (*(long *)(lVar20 + 0x2d0) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = FUN__text__003c7ec0(*(long *)(lVar20 + 0x2d0),auStack_c8);
          }
          uVar21 = uVar10 & uVar21;
          local_160 = CONCAT44(uVar22,3);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) != 0) goto LAB__text__001b7134;
LAB__text__001b7178:
          local_160 = CONCAT44(uVar22,4);
          uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          if ((uVar13 & 1) == 0) goto LAB__text__001b71ec;
LAB__text__001b7190:
          memcpy(&local_160,(void *)((long)pvVar19 + 4000),200);
          if (*(long *)(lVar20 + 0x2d0) == 0) {
            local_160 = CONCAT44(uVar22,5);
            uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          }
          else {
            uVar10 = FUN__text__003c7ec0(*(long *)(lVar20 + 0x2d0),auStack_c8);
            uVar21 = uVar10 & uVar21;
            local_160 = CONCAT44(uVar22,5);
            uVar13 = FUN__text__001a56dc(lVar18,&local_160);
          }
        }
        if ((uVar13 & 1) != 0) {
          memcpy(&local_160,(void *)((long)pvVar19 + 5000),200);
          if (*(long *)(lVar20 + 0x2d0) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = FUN__text__003c7ec0(*(long *)(lVar20 + 0x2d0),auStack_c8);
          }
          uVar21 = uVar10 & uVar21;
        }
        lVar12 = lVar12 + 1;
        pvVar19 = (void *)((long)pvVar19 + 200);
      } while (lVar12 != 5);
      uVar22 = FUN__text__001a010c(*(undefined8 *)(param_3 + 0x38));
      local_160 = CONCAT44(param_2,uVar22);
      uVar10 = FUN__text__0019694c(*_DAT_008a05f0,&local_160,&local_160,param_3 + 0x5b70);
      FUN__text__001a0114(*(undefined8 *)(param_3 + 0x38),&local_160);
      if ((uVar21 & uVar10) != 0) {
        *(int *)(param_3 + 0x5b8c) = *(int *)(param_3 + 0x5b8c) + 1;
      }
    }
    goto joined_r0x001b798c;
  }
  lVar12 = 0;
  lVar20 = lVar20 + 0x110;
  pvVar19 = (void *)(param_3 + 0x42d0);
  do {
    uVar22 = (undefined4)lVar12;
    local_160 = lVar12 << 0x20;
    uVar15 = FUN__text__001a56dc(lVar18,&local_160);
    if ((uVar15 & 1) == 0) {
      local_160 = CONCAT44(uVar22,1);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) == 0) goto LAB__text__001b72d8;
LAB__text__001b7384:
      memcpy(&local_160,(void *)((long)pvVar19 + 1000),200);
      FUN__text__0012c378(lVar20,auStack_c8);
      local_160 = CONCAT44(uVar22,2);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) != 0) goto LAB__text__001b72f0;
LAB__text__001b73b8:
      local_160 = CONCAT44(uVar22,3);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) == 0) goto LAB__text__001b7324;
LAB__text__001b73d0:
      memcpy(&local_160,(void *)((long)pvVar19 + 3000),200);
      FUN__text__0012c378(lVar20,auStack_c8);
      local_160 = CONCAT44(uVar22,4);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) != 0) goto LAB__text__001b733c;
LAB__text__001b7404:
      local_160 = CONCAT44(uVar22,5);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
    }
    else {
      memcpy(&local_160,pvVar19,200);
      FUN__text__0012c378(lVar20,auStack_c8);
      local_160 = CONCAT44(uVar22,1);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) != 0) goto LAB__text__001b7384;
LAB__text__001b72d8:
      local_160 = CONCAT44(uVar22,2);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) == 0) goto LAB__text__001b73b8;
LAB__text__001b72f0:
      memcpy(&local_160,(void *)((long)pvVar19 + 2000),200);
      FUN__text__0012c378(lVar20,auStack_c8);
      local_160 = CONCAT44(uVar22,3);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) != 0) goto LAB__text__001b73d0;
LAB__text__001b7324:
      local_160 = CONCAT44(uVar22,4);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
      if ((uVar15 & 1) == 0) goto LAB__text__001b7404;
LAB__text__001b733c:
      memcpy(&local_160,(void *)((long)pvVar19 + 4000),200);
      FUN__text__0012c378(lVar20,auStack_c8);
      local_160 = CONCAT44(uVar22,5);
      uVar15 = FUN__text__001a56dc(lVar18,&local_160);
    }
    if ((uVar15 & 1) != 0) {
      memcpy(&local_160,(void *)((long)pvVar19 + 5000),200);
      FUN__text__0012c378(lVar20,auStack_c8);
    }
    lVar12 = lVar12 + 1;
    pvVar19 = (void *)((long)pvVar19 + 200);
  } while (lVar12 != 5);
  lVar20 = *_DAT_0089f598;
  FUN__text__005e927c(auStack_88,_DAT_008a0618);
  uVar14 = FUN__text__003eec14(lVar20);
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  iVar11 = FUN__text__003ef560(lVar20,auStack_88,uVar14,0);
  if ((iVar11 != 0) &&
     (FUN__text__0015e5bc(*(undefined8 *)(lVar20 + 0x210),auStack_88,iVar11,uVar14,0,&local_160,0),
     pcVar9 = local_158, local_158 != (code *)0x0)) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar9)(&local_140);
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  uVar22 = FUN__text__001a010c(*(undefined8 *)(param_3 + 0x38));
  *(undefined4 *)(param_3 + 0x5b70) = uVar22;
  *(undefined4 *)(param_3 + 0x5b74) = param_2;
  iVar11 = *(int *)(*(long *)(param_3 + 0x38) + uVar16 * 4 + 0x1bc);
  if (iVar11 != 0) {
    lVar20 = *(long *)(param_3 + 0x38) + uVar16 * 0x20;
    if (iVar11 == 4) {
      lVar20 = *(long *)(lVar20 + 0xa8);
      if ((cVar7 != '\0') || (iVar4 != *(int *)(lVar20 + 0x5790))) {
LAB__text__001b7994:
        FUN__text__001be354(&local_160,lVar20 + 0x1b0);
        uVar22 = FUN__text__003c7a60(lVar17,&local_158);
        *(undefined4 *)(param_3 + 0x5b70) = uVar22;
        *(undefined4 *)(param_3 + 0x5b74) = param_2;
        FUN__text__001be464(&local_160);
        *(int *)(param_3 + 0x5b8c) = *(int *)(param_3 + 0x5b8c) + 1;
        goto joined_r0x001b798c;
      }
      __n = 0xc0;
      lVar20 = lVar20 + (ulong)uVar10 * 0x3c0 + (ulong)uVar5 * 0xc0;
    }
    else {
      lVar20 = *(long *)(lVar20 + 0x68);
      if ((((cVar7 != *(char *)(lVar20 + 0x5a58)) || (iVar1 != *(int *)(lVar20 + 0x5a5c))) ||
          (iVar4 != *(int *)(lVar20 + 0x5a60))) ||
         ((uVar10 != *(uint *)(lVar20 + 0x5a64) || (uVar5 != *(uint *)(lVar20 + 0x5a68)))))
      goto LAB__text__001b7994;
      __n = 200;
      lVar20 = lVar20 + (ulong)uVar21 * 1000 + uVar13 * 200;
    }
    memcpy(&local_160,(void *)(lVar20 + 0x13f0),__n);
    uVar22 = FUN__text__003c7a60(lVar17,&local_158);
    *(undefined4 *)(param_3 + 0x5b70) = uVar22;
    *(undefined4 *)(param_3 + 0x5b74) = param_2;
  }
  *(int *)(param_3 + 0x5b8c) = *(int *)(param_3 + 0x5b8c) + 1;
joined_r0x001b798c:
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  return;
}


