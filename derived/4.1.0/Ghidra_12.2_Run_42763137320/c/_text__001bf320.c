/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bf320; name: FUN_.text__001bf320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN__text__001bf320(long param_1,byte param_2,char *param_3)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  byte local_f8 [4];
  undefined1 local_f4 [4];
  ulong local_f0;
  code *local_e8;
  ulong local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_f4[0] = 0;
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x518) = 0;
    *(undefined4 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x978) = 0;
    *(undefined4 *)(param_1 + 0xba8) = 0;
    *(undefined4 *)(param_1 + 0xdd8) = 0;
    *(undefined4 *)(param_1 + 0x1008) = 0;
    *(undefined4 *)(param_1 + 0x588) = 0;
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    *(undefined4 *)(param_1 + 0x9e8) = 0;
    *(undefined4 *)(param_1 + 0xc18) = 0;
    *(undefined4 *)(param_1 + 0xe48) = 0;
    *(undefined4 *)(param_1 + 0x1078) = 0;
    *(undefined4 *)(param_1 + 0x5f8) = 0;
    *(undefined4 *)(param_1 + 0x828) = 0;
    *(undefined4 *)(param_1 + 0xa58) = 0;
    *(undefined4 *)(param_1 + 0xc88) = 0;
    *(undefined4 *)(param_1 + 0xeb8) = 0;
    *(undefined4 *)(param_1 + 0x10e8) = 0;
    *(undefined4 *)(param_1 + 0x668) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0xac8) = 0;
    *(undefined4 *)(param_1 + 0xcf8) = 0;
    *(undefined4 *)(param_1 + 0xf28) = 0;
    *(undefined4 *)(param_1 + 0x1158) = 0;
    *(undefined4 *)(param_1 + 0x6d8) = 0;
    *(undefined4 *)(param_1 + 0x908) = 0;
    *(undefined4 *)(param_1 + 0xb38) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
    *(undefined4 *)(param_1 + 0xf98) = 0;
    *(undefined4 *)(param_1 + 0x11c8) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    return 0;
  }
  lVar14 = *(long *)(param_1 + 0x18);
  local_f8[0] = param_2;
  if (lVar14 == 0) goto LAB__text__001c0e34;
  lVar21 = *(long *)(param_1 + 8);
  lVar17 = *(long *)(*(long *)(param_1 + 0x38) + 0xe8);
  lVar24 = *(long *)(*(long *)(param_1 + 0x38) + 0x128);
  lVar26 = *(long *)(lVar21 + 0x2d0);
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  cVar3 = *param_3;
  lVar21 = lVar21 + 0x110;
  local_100 = 0;
  cVar4 = param_3[2];
  if (cVar3 == '\0') {
    if (cVar4 != '\0') {
      uVar7 = *(undefined4 *)(param_3 + 0x14);
      param_3 = param_3 + 0x18;
      goto LAB__text__001bf454;
    }
  }
  else {
    uVar7 = *(undefined4 *)(param_3 + 4);
    param_3 = param_3 + 8;
LAB__text__001bf454:
    local_100 = CONCAT44(*(undefined4 *)param_3,uVar7);
  }
  pcVar1 = (char *)(param_1 + 0x5a58);
  uVar9 = FUN__text__0019f564(*(undefined8 *)(param_1 + 0x38));
  if ((uVar9 & 1) != 0) {
    uVar10 = FUN__text__0012cb14(lVar21,param_1 + 0xd0);
    uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,param_1 + 0xf8,
                                *(undefined1 *)(param_1 + 0xfc),*(undefined1 *)(param_1 + 0xfd),
                                param_1 + 0x100,param_1 + 0x120,1,local_f4,local_f8);
    if ((uVar9 & 1) != 0) {
      local_e8 = (code *)0x0;
      local_f0 = CONCAT44(3,*(undefined4 *)(param_1 + 0x30));
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
    }
    uVar10 = FUN__text__0012cb14(lVar21,param_1 + 0x140);
    uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,param_1 + 0x168,
                                *(undefined1 *)(param_1 + 0x16c),*(undefined1 *)(param_1 + 0x16d),
                                param_1 + 0x170,param_1 + 400,1,local_f4,local_f8);
    if ((uVar9 & 1) != 0) {
      local_e8 = (code *)0x0;
      local_f0 = CONCAT44(3,*(undefined4 *)(param_1 + 0x30));
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
    }
    uVar10 = FUN__text__0012cb14(lVar21,param_1 + 0x1b0);
    local_f0 = *(ulong *)(param_1 + 0x240);
    local_e8 = *(code **)(param_1 + 0x248);
    local_e0 = *(ulong *)(param_1 + 0x250);
    local_d8 = *(long *)(param_1 + 600);
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
    }
    local_120 = *(ulong *)(param_1 + 0x260);
    uStack_118 = *(undefined8 *)(param_1 + 0x268);
    local_110 = *(undefined8 *)(param_1 + 0x270);
    local_108 = *(long *)(param_1 + 0x278);
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
    }
    lVar22 = local_108;
    if (*(int *)(param_1 + 0x4cc) == 1) {
      local_f0 = *(ulong *)(param_1 + 0x1f0);
      local_e8 = *(code **)(param_1 + 0x1f8);
      lVar22 = *(long *)(param_1 + 0x208);
      local_e0 = *(ulong *)(param_1 + 0x200);
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
      }
      if (local_d8 != 0) {
        plVar11 = (long *)(local_d8 + 0x48);
        local_d8 = lVar22;
        (**(code **)(*plVar11 + 0x18))();
        lVar22 = local_d8;
      }
      local_d8 = lVar22;
      local_120 = *(ulong *)(param_1 + 0x210);
      uStack_118 = *(undefined8 *)(param_1 + 0x218);
      lVar22 = *(long *)(param_1 + 0x228);
      local_110 = *(undefined8 *)(param_1 + 0x220);
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
      }
      if (local_108 != 0) {
        plVar11 = (long *)(local_108 + 0x48);
        local_108 = lVar22;
        (**(code **)(*plVar11 + 0x18))();
        lVar22 = local_108;
      }
    }
    local_108 = lVar22;
    uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,param_1 + 0x1c0,
                                *(undefined1 *)(param_1 + 0x1c4),*(undefined1 *)(param_1 + 0x1c5),
                                &local_f0,&local_120,1,local_f4,local_f8);
    if ((uVar9 & 1) != 0) {
      local_130 = 0;
      local_138 = CONCAT44(1,*(undefined4 *)(param_1 + 0x30));
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_138,0,0);
    }
    if (*(char *)(param_1 + 0x280) != '\0') {
      uVar10 = FUN__text__0012cb14(lVar21,param_1 + 0x288);
      uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                  param_1 + 0x2b0,*(undefined1 *)(param_1 + 0x2b4),
                                  *(undefined1 *)(param_1 + 0x2b5),param_1 + 0x2b8,param_1 + 0x2d8,1
                                  ,local_f4,local_f8);
      if ((uVar9 & 1) != 0) {
        local_130 = 0;
        local_138 = CONCAT44(2,*(undefined4 *)(param_1 + 0x30));
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_138,0,0);
      }
    }
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    }
  }
  iVar6 = *(int *)(param_1 + 0x4cc);
  uVar9 = FUN__text__0019f564(*(undefined8 *)(param_1 + 0x38));
  if (iVar6 == 1) {
    if ((uVar9 & 1) != 0) {
      lVar22 = 0;
      uVar9 = 0;
      do {
        lVar19 = param_1 + lVar22;
        uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x4f0);
        uVar12 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                     lVar19 + 0x518,*(undefined1 *)(lVar19 + 0x51c),
                                     *(undefined1 *)(lVar19 + 0x51d),lVar19 + 0x520,lVar19 + 0x540,0
                                     ,local_f4,local_f8);
        if ((uVar12 & 1) != 0) {
          local_e8 = (code *)(uVar9 & 0xffffffff);
          local_f0 = (ulong)*(uint *)(param_1 + 0x30);
          FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
          local_120 = uVar9 & 0xffffffff;
          FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
        }
        uVar9 = uVar9 + 1;
        lVar22 = lVar22 + 0x230;
      } while (uVar9 != 6);
      iVar6 = 0;
      lVar22 = 0;
      do {
        lVar19 = param_1 + lVar22;
        uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x560);
        uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                    lVar19 + 0x588,*(undefined1 *)(lVar19 + 0x58c),
                                    *(undefined1 *)(lVar19 + 0x58d),lVar19 + 0x590,lVar19 + 0x5b0,0,
                                    local_f4,local_f8);
        if ((uVar9 & 1) != 0) {
          local_e8 = (code *)CONCAT44(1,iVar6);
          local_f0 = (ulong)*(uint *)(param_1 + 0x30);
          FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
          local_120 = CONCAT44(1,iVar6);
          FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
        }
        lVar22 = lVar22 + 0x230;
        iVar6 = iVar6 + 1;
      } while (lVar22 != 0xd20);
      iVar6 = 0;
      lVar22 = 0;
      do {
        lVar19 = param_1 + lVar22;
        uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x5d0);
        uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                    lVar19 + 0x5f8,*(undefined1 *)(lVar19 + 0x5fc),
                                    *(undefined1 *)(lVar19 + 0x5fd),lVar19 + 0x600,lVar19 + 0x620,0,
                                    local_f4,local_f8);
        if ((uVar9 & 1) != 0) {
          local_e8 = (code *)CONCAT44(2,iVar6);
          local_f0 = (ulong)*(uint *)(param_1 + 0x30);
          FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
          local_120 = CONCAT44(2,iVar6);
          FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
        }
        lVar22 = lVar22 + 0x230;
        iVar6 = iVar6 + 1;
      } while (lVar22 != 0xd20);
      iVar6 = 0;
      lVar22 = 0;
      do {
        lVar19 = param_1 + lVar22;
        uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x640);
        uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                    lVar19 + 0x668,*(undefined1 *)(lVar19 + 0x66c),
                                    *(undefined1 *)(lVar19 + 0x66d),lVar19 + 0x670,lVar19 + 0x690,0,
                                    local_f4,local_f8);
        if ((uVar9 & 1) != 0) {
          local_e8 = (code *)CONCAT44(3,iVar6);
          local_f0 = (ulong)*(uint *)(param_1 + 0x30);
          FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
          local_120 = CONCAT44(3,iVar6);
          FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
        }
        lVar22 = lVar22 + 0x230;
        iVar6 = iVar6 + 1;
      } while (lVar22 != 0xd20);
      iVar6 = 0;
      lVar22 = 0;
      do {
        lVar19 = param_1 + lVar22;
        uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x6b0);
        uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                    lVar19 + 0x6d8,*(undefined1 *)(lVar19 + 0x6dc),
                                    *(undefined1 *)(lVar19 + 0x6dd),lVar19 + 0x6e0,lVar19 + 0x700,0,
                                    local_f4,local_f8);
        if ((uVar9 & 1) != 0) {
          local_e8 = (code *)CONCAT44(4,iVar6);
          local_f0 = (ulong)*(uint *)(param_1 + 0x30);
          FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
          local_120 = CONCAT44(4,iVar6);
          FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
        }
        lVar22 = lVar22 + 0x230;
        iVar6 = iVar6 + 1;
      } while (lVar22 != 0xd20);
    }
  }
  else if ((uVar9 & 1) == 0) {
    uVar9 = FUN__text__0019f580(*(undefined8 *)(param_1 + 0x38));
    if ((((((uVar9 & 1) != 0) && (*(char *)(lVar24 + 0x20) == *pcVar1)) &&
         (*(int *)(lVar24 + 0x24) == *(int *)(param_1 + 0x5a5c))) &&
        ((*(int *)(lVar24 + 0x28) == *(int *)(param_1 + 0x5a60) &&
         (*(int *)(lVar24 + 0x2c) == *(int *)(param_1 + 0x5a64))))) &&
       (*(int *)(lVar24 + 0x30) == *(int *)(param_1 + 0x5a68))) {
      lVar19 = 0;
      lVar22 = 0;
      do {
        lVar25 = 0;
        lVar20 = lVar19;
        do {
          lVar2 = param_1 + lVar20;
          uVar10 = FUN__text__0012cb14(lVar21,lVar2 + 0x4f0);
          uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                      lVar2 + 0x518,*(undefined1 *)(lVar2 + 0x51c),
                                      *(undefined1 *)(lVar2 + 0x51d),lVar2 + 0x520,lVar2 + 0x540,0,
                                      local_f4,local_f8);
          if ((uVar9 & 1) != 0) {
            uVar23 = (undefined4)lVar22;
            uVar7 = (undefined4)lVar25;
            local_e8 = (code *)CONCAT44(uVar23,uVar7);
            local_f0 = (ulong)*(uint *)(param_1 + 0x30);
            FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
            local_120 = CONCAT44(uVar23,uVar7);
            FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
            local_120 = CONCAT44(uVar23,uVar7);
            FUN__text__001a5230(lVar24,&local_120);
          }
          lVar25 = lVar25 + 1;
          lVar20 = lVar20 + 0x230;
        } while (lVar25 != 6);
        lVar22 = lVar22 + 1;
        lVar19 = lVar19 + 0x70;
      } while (lVar22 != 5);
    }
  }
  else {
    lVar22 = 0;
    uVar9 = 0;
    do {
      lVar19 = param_1 + lVar22;
      uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x4f0);
      uVar12 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,
                                   lVar19 + 0x518,*(undefined1 *)(lVar19 + 0x51c),
                                   *(undefined1 *)(lVar19 + 0x51d),lVar19 + 0x520,lVar19 + 0x540,0,
                                   local_f4,local_f8);
      if ((uVar12 & 1) != 0) {
        local_e8 = (code *)(uVar9 & 0xffffffff);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_120 = uVar9 & 0xffffffff;
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
      }
      uVar9 = uVar9 + 1;
      lVar22 = lVar22 + 0x230;
    } while (uVar9 != 6);
    iVar6 = 0;
    lVar22 = 0;
    do {
      lVar19 = param_1 + lVar22;
      uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x560);
      uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,lVar19 + 0x588
                                  ,*(undefined1 *)(lVar19 + 0x58c),*(undefined1 *)(lVar19 + 0x58d),
                                  lVar19 + 0x590,lVar19 + 0x5b0,0,local_f4,local_f8);
      if ((uVar9 & 1) != 0) {
        local_e8 = (code *)CONCAT44(1,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_120 = CONCAT44(1,iVar6);
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
      }
      lVar22 = lVar22 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar22 != 0xd20);
    iVar6 = 0;
    lVar22 = 0;
    do {
      lVar19 = param_1 + lVar22;
      uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x5d0);
      uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,lVar19 + 0x5f8
                                  ,*(undefined1 *)(lVar19 + 0x5fc),*(undefined1 *)(lVar19 + 0x5fd),
                                  lVar19 + 0x600,lVar19 + 0x620,0,local_f4,local_f8);
      if ((uVar9 & 1) != 0) {
        local_e8 = (code *)CONCAT44(2,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_120 = CONCAT44(2,iVar6);
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
      }
      lVar22 = lVar22 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar22 != 0xd20);
    iVar6 = 0;
    lVar22 = 0;
    do {
      lVar19 = param_1 + lVar22;
      uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x640);
      uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,lVar19 + 0x668
                                  ,*(undefined1 *)(lVar19 + 0x66c),*(undefined1 *)(lVar19 + 0x66d),
                                  lVar19 + 0x670,lVar19 + 0x690,0,local_f4,local_f8);
      if ((uVar9 & 1) != 0) {
        local_e8 = (code *)CONCAT44(3,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_120 = CONCAT44(3,iVar6);
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
      }
      lVar22 = lVar22 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar22 != 0xd20);
    iVar6 = 0;
    lVar22 = 0;
    do {
      lVar19 = param_1 + lVar22;
      uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x6b0);
      uVar9 = FUN__text__001cac60(param_1,local_f8[0],cVar3 != '\0',&local_100,uVar10,lVar19 + 0x6d8
                                  ,*(undefined1 *)(lVar19 + 0x6dc),*(undefined1 *)(lVar19 + 0x6dd),
                                  lVar19 + 0x6e0,lVar19 + 0x700,0,local_f4,local_f8);
      if ((uVar9 & 1) != 0) {
        local_e8 = (code *)CONCAT44(4,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_120 = CONCAT44(4,iVar6);
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
      }
      lVar22 = lVar22 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar22 != 0xd20);
  }
  uVar10 = _DAT_008a0648;
  plVar11 = _DAT_0089f598;
  if (*(int *)(param_1 + 0x4cc) == 1) {
    lVar24 = 0;
    lVar17 = param_1 + 0x4f0;
    do {
      lVar22 = 0;
      do {
        uVar13 = FUN__text__0012cb14(lVar21,lVar17 + lVar22);
        if ((local_f8[0] == 0) &&
           (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar13), (uVar9 & 1) != 0))
        {
          local_f4[0] = 1;
          local_f8[0] = 1;
          **(undefined1 **)(lVar14 + 0xc0) = 0;
          **(undefined1 **)(lVar14 + 200) = 0;
          FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
          if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0))
          goto LAB__text__001c0e34;
          FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
          lVar19 = *plVar11;
          FUN__text__005e927c(&local_120,uVar10);
          uVar13 = FUN__text__003eec14(lVar19);
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_f0 = 0;
          local_e8 = (code *)0x0;
          iVar6 = FUN__text__003ef560(lVar19,&local_120,uVar13,0);
          if ((iVar6 != 0) &&
             (FUN__text__0015e5bc(*(undefined8 *)(lVar19 + 0x210),&local_120,iVar6,uVar13,0,
                                  &local_f0,0), pcVar5 = local_e8, local_e8 != (code *)0x0)) {
            local_e0 = 0;
            local_d8 = 0;
            local_f0 = 0;
            local_e8 = (code *)0x0;
            (*pcVar5)(&local_d0);
          }
          if (local_108 != 0) {
            (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
          }
        }
        lVar22 = lVar22 + 0x230;
      } while (lVar22 != 0xd20);
      lVar24 = lVar24 + 1;
      lVar17 = lVar17 + 0x70;
    } while (lVar24 != 5);
  }
  else {
    uVar9 = FUN__text__0019f5b0(*(undefined8 *)(param_1 + 0x38));
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN__text__0019f5bc(*(undefined8 *)(param_1 + 0x38));
      uVar10 = _DAT_008a0648;
      plVar11 = _DAT_0089f598;
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN__text__0019f5c8(*(undefined8 *)(param_1 + 0x38));
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN__text__0019f580(*(undefined8 *)(param_1 + 0x38));
          if ((((uVar9 & 1) != 0) && (*(char *)(lVar24 + 0x20) == *pcVar1)) &&
             ((*(int *)(lVar24 + 0x24) == *(int *)(param_1 + 0x5a5c) &&
              (((*(int *)(lVar24 + 0x28) == *(int *)(param_1 + 0x5a60) &&
                (*(int *)(lVar24 + 0x2c) == *(int *)(param_1 + 0x5a64))) &&
               (*(int *)(lVar24 + 0x30) == *(int *)(param_1 + 0x5a68))))))) {
            lVar17 = 0;
            lVar22 = 0x720;
            do {
              lVar19 = param_1 + lVar22;
              uVar10 = FUN__text__0012cb14(lVar21,lVar19 + -0x230);
              uVar7 = (undefined4)lVar17;
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = lVar17 << 0x20;
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_f0 = lVar17 << 0x20;
                FUN__text__001a5230(lVar24,&local_f0);
              }
              uVar10 = FUN__text__0012cb14(lVar21,lVar19);
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = CONCAT44(uVar7,1);
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_f0 = CONCAT44(uVar7,1);
                FUN__text__001a5230(lVar24,&local_f0);
              }
              uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x230);
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = CONCAT44(uVar7,2);
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_f0 = CONCAT44(uVar7,2);
                FUN__text__001a5230(lVar24,&local_f0);
              }
              uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x460);
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = CONCAT44(uVar7,3);
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_f0 = CONCAT44(uVar7,3);
                FUN__text__001a5230(lVar24,&local_f0);
              }
              uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x690);
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = CONCAT44(uVar7,4);
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_f0 = CONCAT44(uVar7,4);
                FUN__text__001a5230(lVar24,&local_f0);
              }
              uVar10 = FUN__text__0012cb14(lVar21,lVar19 + 0x8c0);
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = CONCAT44(uVar7,5);
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_f0 = CONCAT44(uVar7,5);
                FUN__text__001a5230(lVar24,&local_f0);
              }
              lVar17 = lVar17 + 1;
              lVar22 = lVar22 + 0x70;
            } while (lVar17 != 5);
            if ((cVar4 != '\0') && (*(char *)(param_1 + 0x5b17) == '\0')) {
              FUN__text__001a0538(*(undefined8 *)(param_1 + 0x38));
              uVar8 = 0;
              do {
                local_f0 = (ulong)uVar8 << 0x20;
                uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                if ((uVar9 & 1) == 0) {
                  local_f0 = CONCAT44(uVar8,1);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) == 0) goto LAB__text__001c0c58;
LAB__text__001c0ce8:
                  local_f0 = CONCAT44(uVar8,1);
                  FUN__text__001bd730(param_1,pcVar1,&local_f0);
                  local_f0 = CONCAT44(uVar8,2);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) != 0) goto LAB__text__001c0c6c;
LAB__text__001c0d10:
                  local_f0 = CONCAT44(uVar8,3);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) == 0) goto LAB__text__001c0c94;
LAB__text__001c0d24:
                  local_f0 = CONCAT44(uVar8,3);
                  FUN__text__001bd730(param_1,pcVar1,&local_f0);
                  local_f0 = CONCAT44(uVar8,4);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) != 0) goto LAB__text__001c0ca8;
LAB__text__001c0d4c:
                  local_f0 = CONCAT44(uVar8,5);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                }
                else {
                  local_f0 = (ulong)uVar8 << 0x20;
                  FUN__text__001bd730(param_1,pcVar1,&local_f0);
                  local_f0 = CONCAT44(uVar8,1);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) != 0) goto LAB__text__001c0ce8;
LAB__text__001c0c58:
                  local_f0 = CONCAT44(uVar8,2);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) == 0) goto LAB__text__001c0d10;
LAB__text__001c0c6c:
                  local_f0 = CONCAT44(uVar8,2);
                  FUN__text__001bd730(param_1,pcVar1,&local_f0);
                  local_f0 = CONCAT44(uVar8,3);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) != 0) goto LAB__text__001c0d24;
LAB__text__001c0c94:
                  local_f0 = CONCAT44(uVar8,4);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                  if ((uVar9 & 1) == 0) goto LAB__text__001c0d4c;
LAB__text__001c0ca8:
                  local_f0 = CONCAT44(uVar8,4);
                  FUN__text__001bd730(param_1,pcVar1,&local_f0);
                  local_f0 = CONCAT44(uVar8,5);
                  uVar9 = FUN__text__001a56dc(lVar24,&local_f0);
                }
                if ((uVar9 & 1) != 0) {
                  local_f0 = CONCAT44(uVar8,5);
                  FUN__text__001bd730(param_1,pcVar1,&local_f0);
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 != 5);
              FUN__text__001a0704(*(undefined8 *)(param_1 + 0x38));
              uVar9 = *(ulong *)(lVar24 + 0x44);
              local_e8 = *(code **)(lVar24 + 0x44);
              local_f0 = (ulong)*(uint *)(param_1 + 0x30);
              FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
              local_120 = uVar9;
              FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_120,1,0);
              FUN__text__001a1934(*(undefined8 *)(param_1 + 0x38));
              local_f4[0] = 1;
              local_f8[0] = 1;
              **(undefined1 **)(lVar14 + 0xc0) = 0;
              **(undefined1 **)(lVar14 + 200) = 0;
              if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
LAB__text__001c0e34:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl();
              }
              FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
            }
          }
        }
        else {
          lVar22 = 0;
          lVar17 = param_1 + 0x4f0;
          do {
            lVar19 = 0;
            lVar25 = lVar17;
            do {
              uVar10 = FUN__text__0012cb14(lVar21,lVar25);
              if ((local_f8[0] == 0) &&
                 (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10),
                 (uVar9 & 1) != 0)) {
                local_f0 = CONCAT44((int)lVar22,(int)lVar19);
                FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
                local_138 = 0;
                local_f0 = CONCAT44((int)lVar22,(int)lVar19);
                iVar6 = FUN__text__001a5a50(lVar24,param_1 + 0x5a58,&local_f0,&local_138);
                if ((iVar6 == 2) || ((iVar6 == 1 && (local_138 == 0)))) {
                  *(undefined1 *)(param_1 + 0x5b69) = 1;
                  *(undefined4 *)(param_1 + 0x5b6c) = 0;
                  local_f4[0] = 1;
                  local_f8[0] = 1;
                  **(undefined1 **)(lVar14 + 0xc0) = 0;
                  **(undefined1 **)(lVar14 + 200) = 0;
                  FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                }
                else {
                  if (iVar6 == 0) {
                    local_f4[0] = 1;
                    local_f8[0] = 1;
                    **(undefined1 **)(lVar14 + 0xc0) = 0;
                    **(undefined1 **)(lVar14 + 200) = 0;
                    FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0))
                    goto LAB__text__001c0e34;
                    FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
                    lVar20 = *_DAT_0089f598;
                    uVar10 = _DAT_008a0648;
                  }
                  else {
                    *(undefined1 *)(param_1 + 0x5b16) = 1;
                    **(undefined1 **)(lVar14 + 0x90) = 1;
                    uVar7 = FUN__text__001a5788(lVar24);
                    **(undefined4 **)(lVar14 + 0x98) = uVar7;
                    uVar8 = FUN__text__001a5700(lVar24);
                    *(bool *)*(undefined8 *)(lVar14 + 0xa0) = 1 < uVar8;
                    local_f4[0] = 1;
                    local_f8[0] = 1;
                    **(long **)(lVar14 + 0xa8) = local_138;
                    **(undefined1 **)(lVar14 + 0xc0) = 0;
                    **(undefined1 **)(lVar14 + 200) = 0;
                    FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                    local_f0 = local_f0 & 0xffffffffffffff00;
                    local_e8 = (code *)((ulong)local_e8 & 0xffffffff00000000);
                    local_e0 = local_e0 & 0xffffffff00000000;
                    uVar8 = (uint)local_138;
                    if ((uVar8 >> 0xf & 1) == 0) {
                      if ((uVar8 >> 0x10 & 1) != 0) {
                        uVar7 = 0x10;
                        goto LAB__text__001c0838;
                      }
                      if ((uVar8 >> 0x11 & 1) != 0) {
                        uVar7 = 0x11;
                        goto LAB__text__001c0838;
                      }
                    }
                    else {
                      uVar7 = 0xf;
LAB__text__001c0838:
                      local_120 = CONCAT44(local_120._4_4_,uVar7);
                      FUN__text__001a8450(lVar24,&local_f0,&local_120);
                      puVar16 = *(ulong **)(lVar14 + 0x68);
                      *(undefined4 *)(puVar16 + 2) = (undefined4)local_e0;
                      *puVar16 = local_f0;
                      puVar16[1] = (ulong)local_e8;
                    }
                    lVar20 = *_DAT_0089f598;
                    uVar10 = _DAT_008a0638;
                  }
                  FUN__text__005e927c(&local_120,uVar10);
                  uVar10 = FUN__text__003eec14(lVar20);
                  local_80 = 0;
                  uStack_78 = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  local_a0 = 0;
                  uStack_98 = 0;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_e0 = 0;
                  local_d8 = 0;
                  local_f0 = 0;
                  local_e8 = (code *)0x0;
                  iVar6 = FUN__text__003ef560(lVar20,&local_120,uVar10,0);
                  if ((iVar6 != 0) &&
                     (FUN__text__0015e5bc(*(undefined8 *)(lVar20 + 0x210),&local_120,iVar6,uVar10,0,
                                          &local_f0,0), pcVar5 = local_e8, local_e8 != (code *)0x0))
                  {
                    local_e0 = 0;
                    local_d8 = 0;
                    local_f0 = 0;
                    local_e8 = (code *)0x0;
                    (*pcVar5)(&local_d0);
                  }
                  if (local_108 != 0) {
                    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
                  }
                }
              }
              lVar19 = lVar19 + 1;
              lVar25 = lVar25 + 0x230;
            } while (lVar19 != 6);
            lVar22 = lVar22 + 1;
            lVar17 = lVar17 + 0x70;
          } while (lVar22 != 5);
        }
      }
      else {
        lVar24 = 0;
        lVar17 = param_1 + 0x4f0;
        do {
          lVar22 = 0;
          do {
            uVar13 = FUN__text__0012cb14(lVar21,lVar17 + lVar22);
            if ((local_f8[0] == 0) &&
               (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar13),
               (uVar9 & 1) != 0)) {
              local_f4[0] = 1;
              local_f8[0] = 1;
              **(undefined1 **)(lVar14 + 0xc0) = 0;
              **(undefined1 **)(lVar14 + 200) = 0;
              FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
              if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0))
              goto LAB__text__001c0e34;
              FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
              lVar19 = *plVar11;
              FUN__text__005e927c(&local_120,uVar10);
              uVar13 = FUN__text__003eec14(lVar19);
              local_80 = 0;
              uStack_78 = 0;
              local_90 = 0;
              uStack_88 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_c0 = 0;
              uStack_b8 = 0;
              local_d0 = 0;
              uStack_c8 = 0;
              local_e0 = 0;
              local_d8 = 0;
              local_f0 = 0;
              local_e8 = (code *)0x0;
              iVar6 = FUN__text__003ef560(lVar19,&local_120,uVar13,0);
              if ((iVar6 != 0) &&
                 (FUN__text__0015e5bc(*(undefined8 *)(lVar19 + 0x210),&local_120,iVar6,uVar13,0,
                                      &local_f0,0), pcVar5 = local_e8, local_e8 != (code *)0x0)) {
                local_e0 = 0;
                local_d8 = 0;
                local_f0 = 0;
                local_e8 = (code *)0x0;
                (*pcVar5)(&local_d0);
              }
              if (local_108 != 0) {
                (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
              }
            }
            lVar22 = lVar22 + 0x230;
          } while (lVar22 != 0xd20);
          lVar24 = lVar24 + 1;
          lVar17 = lVar17 + 0x70;
        } while (lVar24 != 5);
      }
    }
    else {
      lVar22 = 0;
      lVar24 = param_1 + 0x4f0;
      do {
        lVar19 = 0;
        lVar25 = lVar24;
        do {
          local_f0 = CONCAT44((int)lVar22,(int)lVar19);
          FUN__text__00191328(&local_138,param_1 + 0x5a58,&local_f0);
          uVar10 = FUN__text__0012cb14(lVar21,lVar25);
          if ((local_f8[0] == 0) &&
             (uVar9 = FUN__text__001cabfc(param_1,cVar4 != '\0',&local_100,uVar10), (uVar9 & 1) != 0
             )) {
            local_f0 = CONCAT44((int)lVar22,(int)lVar19);
            FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
            local_140 = 0;
            iVar6 = FUN__text__001a91a8(lVar17,&local_138,&local_140);
            if ((iVar6 == 2) || ((iVar6 == 1 && (local_140 == 0)))) {
              *(undefined1 *)(param_1 + 0x5b68) = 1;
              *(undefined4 *)(param_1 + 0x5b6c) = 0;
              local_f4[0] = 1;
              local_f8[0] = 1;
              **(undefined1 **)(lVar14 + 0xc0) = 0;
              **(undefined1 **)(lVar14 + 200) = 0;
              FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
            }
            else {
              if (iVar6 == 0) {
                local_f4[0] = 1;
                local_f8[0] = 1;
                **(undefined1 **)(lVar14 + 0xc0) = 0;
                **(undefined1 **)(lVar14 + 200) = 0;
                FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0))
                goto LAB__text__001c0e34;
                FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
                lVar20 = *_DAT_0089f598;
                uVar10 = _DAT_008a0648;
              }
              else {
                *(undefined1 *)(param_1 + 0x5b16) = 1;
                **(undefined1 **)(lVar14 + 0x90) = 1;
                uVar7 = FUN__text__001aa2b8(lVar17);
                **(undefined4 **)(lVar14 + 0x98) = uVar7;
                **(undefined1 **)(lVar14 + 0xa0) = 0;
                local_f4[0] = 1;
                local_f8[0] = 1;
                **(ulong **)(lVar14 + 0xa8) = local_140;
                **(undefined1 **)(lVar14 + 0xc0) = 0;
                **(undefined1 **)(lVar14 + 200) = 0;
                FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                if (((local_140 & 0x38000) != 0) &&
                   ((iVar6 = FUN__text__001aa2b8(lVar17), puVar15 = (undefined8 *)(lVar17 + 0x20),
                    iVar6 == 2 ||
                    ((iVar6 == 1 &&
                     (puVar15 = (undefined8 *)(lVar17 + 0x34), (local_140._2_1_ >> 5 & 1) == 0))))))
                {
                  uVar10 = *puVar15;
                  uVar13 = puVar15[1];
                  puVar18 = *(undefined8 **)(lVar14 + 0x68);
                  *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar15 + 2);
                  *puVar18 = uVar10;
                  puVar18[1] = uVar13;
                }
                lVar20 = *_DAT_0089f598;
                uVar10 = _DAT_008a0638;
              }
              FUN__text__005e927c(&local_120,uVar10);
              uVar10 = FUN__text__003eec14(lVar20);
              local_80 = 0;
              uStack_78 = 0;
              local_90 = 0;
              uStack_88 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_c0 = 0;
              uStack_b8 = 0;
              local_d0 = 0;
              uStack_c8 = 0;
              local_e0 = 0;
              local_d8 = 0;
              local_f0 = 0;
              local_e8 = (code *)0x0;
              iVar6 = FUN__text__003ef560(lVar20,&local_120,uVar10,0);
              if ((iVar6 != 0) &&
                 (FUN__text__0015e5bc(*(undefined8 *)(lVar20 + 0x210),&local_120,iVar6,uVar10,0,
                                      &local_f0,0), pcVar5 = local_e8, local_e8 != (code *)0x0)) {
                local_e0 = 0;
                local_d8 = 0;
                local_f0 = 0;
                local_e8 = (code *)0x0;
                (*pcVar5)(&local_d0);
              }
              if (local_108 != 0) {
                (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
              }
            }
          }
          lVar19 = lVar19 + 1;
          lVar25 = lVar25 + 0x230;
        } while (lVar19 != 6);
        lVar22 = lVar22 + 1;
        lVar24 = lVar24 + 0x70;
      } while (lVar22 != 5);
    }
  }
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))();
  }
  return local_f4[0];
}


