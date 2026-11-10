/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d1630; name: FUN_.text__001d1630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__001d1630(long param_1,byte param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  int local_138 [6];
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  byte local_f8 [4];
  char local_f4 [4];
  ulong local_f0;
  code *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
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
  
  local_f4[0] = '\0';
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
    return false;
  }
  lVar19 = *(long *)(param_1 + 0x18);
  local_f8[0] = param_2;
  if (lVar19 == 0) {
LAB__text__001d2314:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar7 = *(long *)(param_1 + 0x38);
  local_100 = 0;
  cVar1 = *param_3;
  uVar15 = *(undefined8 *)(lVar7 + 0x128);
  uVar13 = *(undefined8 *)(lVar7 + 0x148);
  uVar20 = *(undefined8 *)(lVar7 + 0xe8);
  lVar7 = *(long *)(param_1 + 8) + 0x110;
  cVar2 = param_3[2];
  if (cVar1 == '\0') {
    if (cVar2 == '\0') goto LAB__text__001d1750;
    uVar5 = *(undefined4 *)(param_3 + 0x14);
    param_3 = param_3 + 0x18;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 4);
    param_3 = param_3 + 8;
  }
  local_100 = CONCAT44(*(undefined4 *)param_3,uVar5);
LAB__text__001d1750:
  uVar8 = FUN__text__0019f564();
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN__text__0012cb14(lVar7,param_1 + 0xd0);
    uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,param_1 + 0xf8,
                                *(undefined1 *)(param_1 + 0xfc),*(undefined1 *)(param_1 + 0xfd),
                                param_1 + 0x100,param_1 + 0x120,1,local_f4,local_f8);
    if ((uVar8 & 1) != 0) {
      local_e8 = (code *)0x0;
      local_f0 = CONCAT44(3,*(undefined4 *)(param_1 + 0x30));
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
    }
    uVar9 = FUN__text__0012cb14(lVar7,param_1 + 0x140);
    uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,param_1 + 0x168,
                                *(undefined1 *)(param_1 + 0x16c),*(undefined1 *)(param_1 + 0x16d),
                                param_1 + 0x170,param_1 + 400,1,local_f4,local_f8);
    if ((uVar8 & 1) != 0) {
      local_e8 = (code *)0x0;
      local_f0 = CONCAT44(3,*(undefined4 *)(param_1 + 0x30));
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
    }
    uVar9 = FUN__text__0012cb14(lVar7,param_1 + 0x1b0);
    uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,param_1 + 0x1c0,
                                *(undefined1 *)(param_1 + 0x1c4),*(undefined1 *)(param_1 + 0x1c5),
                                param_1 + 0x1f0,param_1 + 0x210,1,local_f4,local_f8);
    if ((uVar8 & 1) != 0) {
      local_e8 = (code *)0x0;
      local_f0 = CONCAT44(1,*(undefined4 *)(param_1 + 0x30));
      FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
    }
    if (*(char *)(param_1 + 0x280) != '\0') {
      uVar9 = FUN__text__0012cb14(lVar7,param_1 + 0x288);
      uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,param_1 + 0x2b0
                                  ,*(undefined1 *)(param_1 + 0x2b4),*(undefined1 *)(param_1 + 0x2b5)
                                  ,param_1 + 0x2b8,param_1 + 0x2d8,1,local_f4,local_f8);
      if ((uVar8 & 1) != 0) {
        local_e8 = (code *)0x0;
        local_f0 = CONCAT44(2,*(undefined4 *)(param_1 + 0x30));
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
      }
    }
  }
  uVar8 = FUN__text__0019f564(*(undefined8 *)(param_1 + 0x38));
  if ((uVar8 & 1) != 0) {
    lVar17 = 0;
    uVar8 = 0;
    do {
      lVar16 = param_1 + lVar17;
      uVar9 = FUN__text__0012cb14(lVar7,lVar16 + 0x4f0);
      uVar10 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,lVar16 + 0x518
                                   ,*(undefined1 *)(lVar16 + 0x51c),*(undefined1 *)(lVar16 + 0x51d),
                                   lVar16 + 0x520,lVar16 + 0x540,0,local_f4,local_f8);
      if ((uVar10 & 1) != 0) {
        local_e8 = (code *)(uVar8 & 0xffffffff);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_138[1] = 0;
        local_138[0] = (int)uVar8;
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),local_138,1,0);
      }
      uVar8 = uVar8 + 1;
      lVar17 = lVar17 + 0x230;
    } while (uVar8 != 6);
    iVar6 = 0;
    lVar17 = 0;
    do {
      lVar16 = param_1 + lVar17;
      uVar9 = FUN__text__0012cb14(lVar7,lVar16 + 0x560);
      uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,lVar16 + 0x588,
                                  *(undefined1 *)(lVar16 + 0x58c),*(undefined1 *)(lVar16 + 0x58d),
                                  lVar16 + 0x590,lVar16 + 0x5b0,0,local_f4,local_f8);
      if ((uVar8 & 1) != 0) {
        local_e8 = (code *)CONCAT44(1,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_138[1] = 1;
        local_138[0] = iVar6;
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),local_138,1,0);
      }
      lVar17 = lVar17 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar17 != 0xd20);
    iVar6 = 0;
    lVar17 = 0;
    do {
      lVar16 = param_1 + lVar17;
      uVar9 = FUN__text__0012cb14(lVar7,lVar16 + 0x5d0);
      uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,lVar16 + 0x5f8,
                                  *(undefined1 *)(lVar16 + 0x5fc),*(undefined1 *)(lVar16 + 0x5fd),
                                  lVar16 + 0x600,lVar16 + 0x620,0,local_f4,local_f8);
      if ((uVar8 & 1) != 0) {
        local_e8 = (code *)CONCAT44(2,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_138[1] = 2;
        local_138[0] = iVar6;
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),local_138,1,0);
      }
      lVar17 = lVar17 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar17 != 0xd20);
    iVar6 = 0;
    lVar17 = 0;
    do {
      lVar16 = param_1 + lVar17;
      uVar9 = FUN__text__0012cb14(lVar7,lVar16 + 0x640);
      uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,lVar16 + 0x668,
                                  *(undefined1 *)(lVar16 + 0x66c),*(undefined1 *)(lVar16 + 0x66d),
                                  lVar16 + 0x670,lVar16 + 0x690,0,local_f4,local_f8);
      if ((uVar8 & 1) != 0) {
        local_e8 = (code *)CONCAT44(3,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_138[1] = 3;
        local_138[0] = iVar6;
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),local_138,1,0);
      }
      lVar17 = lVar17 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar17 != 0xd20);
    iVar6 = 0;
    lVar17 = 0;
    do {
      lVar16 = param_1 + lVar17;
      uVar9 = FUN__text__0012cb14(lVar7,lVar16 + 0x6b0);
      uVar8 = FUN__text__001cac60(param_1,local_f8[0],cVar1 != '\0',&local_100,uVar9,lVar16 + 0x6d8,
                                  *(undefined1 *)(lVar16 + 0x6dc),*(undefined1 *)(lVar16 + 0x6dd),
                                  lVar16 + 0x6e0,lVar16 + 0x700,0,local_f4,local_f8);
      if ((uVar8 & 1) != 0) {
        local_e8 = (code *)CONCAT44(4,iVar6);
        local_f0 = (ulong)*(uint *)(param_1 + 0x30);
        FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),&local_f0,0,0);
        local_138[1] = 4;
        local_138[0] = iVar6;
        FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),local_138,1,0);
      }
      lVar17 = lVar17 + 0x230;
      iVar6 = iVar6 + 1;
    } while (lVar17 != 0xd20);
  }
  uVar8 = FUN__text__0019f564(*(undefined8 *)(param_1 + 0x38));
  if (((uVar8 & 1) != 0) && (*(long *)(param_1 + 0x5788) != 0)) {
    uVar9 = FUN__text__00192b40(*(long *)(param_1 + 0x5788),*(undefined4 *)(param_1 + 0x5790));
    lVar16 = 0;
    lVar17 = param_1 + 0x4f0;
    do {
      lVar18 = 0;
      lVar21 = lVar17;
      do {
        local_f0 = CONCAT44((int)lVar16,(int)lVar18);
        lVar11 = FUN__text__001920e4(uVar9,&local_f0);
        local_110 = *(undefined8 *)(lVar11 + 8);
        uStack_108 = *(undefined8 *)(lVar11 + 0x10);
        uVar12 = FUN__text__0012cb14(lVar7,lVar21);
        if ((local_f8[0] == 0) &&
           (uVar8 = FUN__text__001cabfc(param_1,cVar2 != '\0',&local_100,uVar12), (uVar8 & 1) != 0))
        {
          local_f0 = CONCAT44((int)lVar16,(int)lVar18);
          FUN__text__003a8304(*(undefined8 *)(param_1 + 0x40),&local_f0,1,0);
          uVar8 = FUN__text__0019f5b0(*(undefined8 *)(param_1 + 0x38));
          if ((uVar8 & 1) == 0) {
            uVar8 = FUN__text__0019f5c8(*(undefined8 *)(param_1 + 0x38));
            if ((uVar8 & 1) == 0) {
              local_118 = 0;
              iVar6 = FUN__text__001d3630(uVar13,&local_110,&local_118);
              if ((iVar6 != 3) && ((iVar6 != 1 || (local_118 != 0)))) {
                if (iVar6 != 0) {
                  *(undefined1 *)(param_1 + 0x5822) = 1;
                  **(undefined1 **)(lVar19 + 0x90) = 1;
                  uVar5 = FUN__text__001d3e4c(uVar13);
                  **(undefined4 **)(lVar19 + 0x98) = uVar5;
                  **(undefined1 **)(lVar19 + 0xa0) = 1;
                  local_f4[0] = '\x01';
                  local_f8[0] = 1;
                  **(long **)(lVar19 + 0xa8) = local_118;
                  **(undefined1 **)(lVar19 + 0xc0) = 0;
                  **(undefined1 **)(lVar19 + 200) = 0;
                  FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                  iVar6 = FUN__text__001d3e4c(uVar13);
                  if ((iVar6 - 1U < 2) &&
                     ((uVar4 = (uint)local_118, iVar6 == 2 || ((uVar4 >> 0x15 & 1) == 0)))) {
                    local_f0 = local_f0 & 0xffffffffffffff00;
                    local_e8 = (code *)((ulong)local_e8 & 0xffffffff00000000);
                    local_e0 = local_e0 & 0xffffffff00000000;
                    if ((uVar4 >> 0xf & 1) == 0) {
                      if ((uVar4 >> 0x10 & 1) == 0) {
                        if ((uVar4 >> 0x11 & 1) == 0) goto LAB__text__001d2060;
                        local_138[0] = 0x11;
                      }
                      else {
                        local_138[0] = 0x10;
                      }
                    }
                    else {
                      local_138[0] = 0xf;
                    }
                    FUN__text__001d4490(uVar13,&local_f0,local_138,iVar6 == 2);
                    puVar14 = *(ulong **)(lVar19 + 0x68);
                    *(undefined4 *)(puVar14 + 2) = (undefined4)local_e0;
                    *puVar14 = local_f0;
                    puVar14[1] = (ulong)local_e8;
                  }
LAB__text__001d2060:
                  lVar11 = *_DAT_0089f598;
                  FUN__text__005e927c(local_138,_DAT_008a0638);
                  uVar12 = FUN__text__003eec14(lVar11);
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
                  uStack_d8 = 0;
                  local_f0 = 0;
                  local_e8 = (code *)0x0;
                  iVar6 = FUN__text__003ef560(lVar11,local_138,uVar12,0);
                  if ((iVar6 != 0) &&
                     (FUN__text__0015e5bc(*(undefined8 *)(lVar11 + 0x210),local_138,iVar6,uVar12,0,
                                          &local_f0,0), pcVar3 = local_e8, local_e8 != (code *)0x0))
                  {
                    local_e0 = 0;
                    uStack_d8 = 0;
                    local_f0 = 0;
                    local_e8 = (code *)0x0;
                    (*pcVar3)(&local_d0);
                  }
                  if (local_120 != 0) {
                    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
                  }
                  goto LAB__text__001d1db0;
                }
                goto LAB__text__001d21b4;
              }
              *(undefined1 *)(param_1 + 0x5864) = 1;
              *(undefined4 *)(param_1 + 0x5868) = 0;
            }
            else {
              local_118 = 0;
              uVar4 = FUN__text__001a63e0(uVar15,&local_110,&local_118);
              if ((uVar4 != 3) && ((uVar4 != 2 || (local_118 != 0)))) {
                if (1 < uVar4) {
                  *(undefined1 *)(param_1 + 0x5822) = 1;
                  **(undefined1 **)(lVar19 + 0x90) = 1;
                  uVar5 = FUN__text__001a5788(uVar15);
                  **(undefined4 **)(lVar19 + 0x98) = uVar5;
                  uVar4 = FUN__text__001a5700(uVar15);
                  *(bool *)*(undefined8 *)(lVar19 + 0xa0) = 1 < uVar4;
                  goto LAB__text__001d2034;
                }
LAB__text__001d21b4:
                local_f4[0] = '\x01';
                local_f8[0] = 1;
                **(undefined1 **)(lVar19 + 0xc0) = 0;
                **(undefined1 **)(lVar19 + 200) = 0;
                FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
                if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
                  FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
                  lVar11 = *_DAT_0089f598;
                  FUN__text__005e927c(local_138,_DAT_008a0648);
                  uVar12 = FUN__text__003eec14(lVar11);
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
                  uStack_d8 = 0;
                  local_f0 = 0;
                  local_e8 = (code *)0x0;
                  iVar6 = FUN__text__003ef560(lVar11,local_138,uVar12,0);
                  if ((iVar6 != 0) &&
                     (FUN__text__0015e5bc(*(undefined8 *)(lVar11 + 0x210),local_138,iVar6,uVar12,0,
                                          &local_f0,0), pcVar3 = local_e8, local_e8 != (code *)0x0))
                  {
                    local_e0 = 0;
                    uStack_d8 = 0;
                    local_f0 = 0;
                    local_e8 = (code *)0x0;
                    (*pcVar3)(&local_d0);
                  }
                  if (local_120 != 0) {
                    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
                  }
                  goto LAB__text__001d1db0;
                }
                goto LAB__text__001d2314;
              }
              *(undefined1 *)(param_1 + 0x588c) = 1;
              *(undefined4 *)(param_1 + 0x5890) = 0;
            }
LAB__text__001d1d88:
            local_f4[0] = '\x01';
            local_f8[0] = 1;
            **(undefined1 **)(lVar19 + 0xc0) = 0;
            **(undefined1 **)(lVar19 + 200) = 0;
            FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
          }
          else {
            local_118 = 0;
            uVar4 = FUN__text__001a98d0(uVar20,&local_110,&local_118);
            if ((uVar4 == 3) || ((uVar4 == 2 && (local_118 == 0)))) {
              *(undefined1 *)(param_1 + 0x5884) = 1;
              *(undefined4 *)(param_1 + 0x5888) = 0;
              goto LAB__text__001d1d88;
            }
            if (1 < uVar4) {
              *(undefined1 *)(param_1 + 0x5822) = 1;
              **(undefined1 **)(lVar19 + 0x90) = 1;
              uVar5 = FUN__text__001aa2b8(uVar20);
              **(undefined4 **)(lVar19 + 0x98) = uVar5;
              **(undefined1 **)(lVar19 + 0xa0) = 0;
LAB__text__001d2034:
              local_f4[0] = '\x01';
              local_f8[0] = 1;
              **(long **)(lVar19 + 0xa8) = local_118;
              **(undefined1 **)(lVar19 + 0xc0) = 0;
              **(undefined1 **)(lVar19 + 200) = 0;
              FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
              goto LAB__text__001d2060;
            }
            local_f4[0] = '\x01';
            local_f8[0] = 1;
            **(undefined1 **)(lVar19 + 0xc0) = 0;
            **(undefined1 **)(lVar19 + 200) = 0;
            FUN__text__001a011c(*(undefined8 *)(param_1 + 0x38));
            if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0))
            goto LAB__text__001d2314;
            FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
            lVar11 = *_DAT_0089f598;
            FUN__text__005e927c(local_138,_DAT_008a0648);
            uVar12 = FUN__text__003eec14(lVar11);
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
            uStack_d8 = 0;
            local_f0 = 0;
            local_e8 = (code *)0x0;
            iVar6 = FUN__text__003ef560(lVar11,local_138,uVar12,0);
            if ((iVar6 != 0) &&
               (FUN__text__0015e5bc(*(undefined8 *)(lVar11 + 0x210),local_138,iVar6,uVar12,0,
                                    &local_f0,0), pcVar3 = local_e8, local_e8 != (code *)0x0)) {
              local_e0 = 0;
              uStack_d8 = 0;
              local_f0 = 0;
              local_e8 = (code *)0x0;
              (*pcVar3)(&local_d0);
            }
            if (local_120 != 0) {
              (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
            }
          }
        }
LAB__text__001d1db0:
        lVar18 = lVar18 + 1;
        lVar21 = lVar21 + 0x230;
      } while (lVar18 != 6);
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0x70;
    } while (lVar16 != 5);
  }
  return local_f4[0] != '\0';
}


