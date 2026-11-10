/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b4f8c; name: FUN_.text__001b4f8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b4f8c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  size_t __n;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  long lVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  long local_268;
  undefined1 auStack_260 [8];
  undefined8 local_258 [23];
  undefined1 auStack_1a0 [8];
  long local_198;
  char local_18c [4];
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [152];
  undefined1 auStack_e0 [48];
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  
  if (*(char *)(param_3 + 0x5b68) == '\0') {
    return;
  }
  lVar45 = *(long *)(param_3 + 8);
  lVar39 = *(long *)(lVar45 + 0x2d0);
  if (lVar39 != 0) {
    (**(code **)(*(long *)(lVar39 + 0x48) + 0x10))();
  }
  lVar42 = *(long *)(param_3 + 0x18);
  if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar44 = *(undefined8 *)(lVar42 + 0x10);
  lVar40 = *(long *)(lVar42 + 0x250);
  if (lVar40 != 0) {
    (**(code **)(*(long *)(lVar40 + 0x48) + 0x10))();
  }
  lVar41 = *(long *)(lVar42 + 0x158);
  if (lVar41 != 0) {
    (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_3 + 0x38);
  lVar43 = *(long *)(lVar11 + 0xe8);
  local_90 = *(ulong *)(lVar43 + 0x28);
  local_88 = *(uint *)(lVar43 + 0x30);
  local_a8 = *(undefined8 *)(lVar43 + 0x3c);
  local_b0 = *(undefined8 *)(lVar43 + 0x34);
  local_a0 = *(uint *)(lVar43 + 0x44);
  local_98._4_4_ = (int)((ulong)*(undefined8 *)(lVar43 + 0x20) >> 0x20);
  uVar38 = (ulong)(*(int *)(lVar11 + 0x1b0) != local_98._4_4_ &&
                  *(int *)(lVar11 + 0x1b4) == local_98._4_4_);
  lVar11 = *(long *)(lVar11 + uVar38 * 0x20 + 0x68);
  local_98 = *(undefined8 *)(lVar43 + 0x20);
  memcpy(auStack_178,(void *)(lVar11 + (local_90 >> 0x20) * 1000 + (ulong)local_88 * 200 + 0x42d0),
         200);
  local_18c[0] = '\0';
  local_188 = 0;
  local_180 = 0;
  FUN__text__001912c0(&local_98,local_18c);
  local_198 = lVar41;
  if (lVar41 != 0) {
    (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
  }
  bVar6 = FUN__text__00194730(uVar44,&local_198,&local_b0);
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    local_198 = 0;
  }
  if ((char)local_98 == (char)local_b0) {
    if (local_98._4_4_ == local_b0._4_4_) {
      if ((int)local_90 == (int)local_a8) {
        bVar6 = bVar6 & (local_90._4_4_ != local_a8._4_4_ || local_88 != local_a0);
      }
    }
  }
  memcpy(auStack_260,
         (void *)(param_3 + (ulong)local_a8._4_4_ * 1000 + (ulong)local_a0 * 200 + 0x13f0),200);
  iVar7 = *(int *)(param_3 + 0x5b6c);
  if (iVar7 == 2) {
    if ((bVar6 & 1) != 0) {
      FUN__text__001a0188(*(undefined8 *)(param_3 + 0x38),local_258[0]);
      FUN__text__003c81e0(lVar39,auStack_260,local_258);
      FUN__text__003c7960(lVar39,local_258,auStack_1a0);
    }
    if ((*(char *)(*(long *)(lVar42 + 8) + 0x2a4) == '\0') &&
       (uVar10 = FUN__text__001aa060(lVar43), (uVar10 & 1) != 0)) {
      *(undefined1 *)(param_3 + 0x5b15) = 1;
    }
    FUN__text__001a02a8(*(undefined8 *)(param_3 + 0x38));
    FUN__text__001be5d4(param_3);
    FUN__text__001aa418(lVar43);
    FUN__text__001a193c(*(undefined8 *)(param_3 + 0x38));
    FUN__text__001a19a0(*(undefined8 *)(param_3 + 0x38));
    uVar44 = *(undefined8 *)(lVar43 + 0x68);
    uVar3 = *(undefined8 *)(lVar43 + 0x70);
    *(undefined8 *)(lVar43 + 0x6c) = 0;
    uVar8 = *(uint *)(lVar43 + 0x78);
    *(undefined8 *)(lVar43 + 0x72) = 0;
    local_330 = CONCAT44(local_330._4_4_,uVar8);
    local_340._3_1_ = (byte)((ulong)uVar44 >> 0x18);
    uVar1 = *(undefined8 *)(lVar43 + 0x58);
    uVar4 = *(undefined8 *)(lVar43 + 0x60);
    *(undefined8 *)(lVar43 + 0x5c) = 0;
    uVar2 = *(undefined8 *)(lVar43 + 0x48);
    pcVar5 = *(code **)(lVar43 + 0x50);
    *(undefined8 *)(lVar43 + 100) = 0;
    local_348._1_1_ = (byte)((ulong)uVar4 >> 8);
    uVar9 = (uint)local_348._1_1_;
    local_348._6_1_ = (byte)((ulong)uVar4 >> 0x30);
    uVar18 = (uint)local_340._3_1_;
    uVar12 = (uint)local_348._6_1_;
    local_338._5_1_ = (byte)((ulong)uVar3 >> 0x28);
    local_338._0_1_ = (byte)uVar3;
    uVar19 = (uint)local_338._5_1_;
    uVar13 = (uint)(byte)local_338;
    local_350._5_1_ = (byte)((ulong)uVar1 >> 0x28);
    uVar20 = (uint)local_350._5_1_;
    local_348._7_1_ = (byte)((ulong)uVar4 >> 0x38);
    local_348._2_1_ = (byte)((ulong)uVar4 >> 0x10);
    uVar21 = (uint)local_348._7_1_;
    uVar14 = (uint)local_348._2_1_;
    local_340._4_1_ = (byte)((ulong)uVar44 >> 0x20);
    uVar22 = (uint)local_340._4_1_;
    local_338._1_1_ = (byte)((ulong)uVar3 >> 8);
    uVar23 = (uint)local_338._1_1_;
    local_350._6_1_ = (byte)((ulong)uVar1 >> 0x30);
    local_338._6_1_ = (byte)((ulong)uVar3 >> 0x30);
    uVar24 = (uint)local_350._6_1_;
    uVar15 = (uint)local_338._6_1_;
    local_348._3_1_ = (byte)((ulong)uVar4 >> 0x18);
    uVar25 = (uint)local_348._3_1_;
    local_340._0_1_ = (byte)uVar44;
    uVar26 = (uint)(byte)local_340;
    local_340._5_1_ = (byte)((ulong)uVar44 >> 0x28);
    uVar27 = (uint)local_340._5_1_;
    local_338._7_1_ = (byte)((ulong)uVar3 >> 0x38);
    local_338._2_1_ = (byte)((ulong)uVar3 >> 0x10);
    uVar28 = (uint)local_338._7_1_;
    uVar16 = (uint)local_338._2_1_;
    local_350._7_1_ = (byte)((ulong)uVar1 >> 0x38);
    uVar29 = (uint)local_350._7_1_;
    local_348._4_1_ = (byte)((ulong)uVar4 >> 0x20);
    uVar30 = (uint)local_348._4_1_;
    local_340._1_1_ = (byte)((ulong)uVar44 >> 8);
    uVar31 = (uint)local_340._1_1_;
    local_340._6_1_ = (byte)((ulong)uVar44 >> 0x30);
    uVar32 = (uint)local_340._6_1_;
    local_338._3_1_ = (byte)((ulong)uVar3 >> 0x18);
    uVar17 = (uint)local_338._3_1_;
    local_348._0_1_ = (byte)uVar4;
    uVar33 = (uint)(byte)local_348;
    local_348._5_1_ = (byte)((ulong)uVar4 >> 0x28);
    uVar34 = (uint)local_348._5_1_;
    local_340._2_1_ = (byte)((ulong)uVar44 >> 0x10);
    uVar35 = (uint)local_340._2_1_;
    local_340._7_1_ = (byte)((ulong)uVar44 >> 0x38);
    uVar36 = (uint)local_340._7_1_;
    local_338._4_1_ = (byte)((ulong)uVar3 >> 0x20);
    uVar37 = (uint)local_338._4_1_;
    local_360 = uVar2;
    local_358 = pcVar5;
    local_350 = uVar1;
    local_348 = uVar4;
    local_340 = uVar44;
    local_338 = uVar3;
    if (uVar9 + ((uint)((ulong)uVar1 >> 0x20) & 0xff) + uVar12 + uVar18 + uVar13 + uVar19 + uVar20 +
        uVar14 + uVar21 + uVar22 + uVar23 + uVar15 + uVar24 + uVar25 + uVar26 + uVar27 +
        uVar16 + uVar28 + uVar29 + uVar30 + uVar31 + uVar32 +
        uVar17 + (uVar8 & 0xff) + uVar33 + uVar34 + uVar35 + uVar36 + uVar37 + (uVar8 >> 8 & 0xff)
        != 0) {
      local_360._0_1_ = (char)uVar2;
      local_350._0_4_ = (int)uVar1;
      local_330._0_2_ = (undefined2)uVar8;
      local_360._4_4_ = (int)((ulong)uVar2 >> 0x20);
      local_358._0_4_ = (int)pcVar5;
      local_358._4_4_ = (int)((ulong)pcVar5 >> 0x20);
      if (((((char)local_360 == *(char *)(param_3 + 0x5a58)) &&
           (local_360._4_4_ == *(int *)(param_3 + 0x5a5c))) &&
          ((int)local_358 == *(int *)(param_3 + 0x5a60))) &&
         ((local_358._4_4_ == *(int *)(param_3 + 0x5a64) &&
          ((int)local_350 == *(int *)(param_3 + 0x5a68))))) {
        *(undefined4 *)(param_3 + 0x5b1c) = 0;
        *(undefined1 *)(param_3 + 0x5b19) = 1;
        *(undefined8 *)(param_3 + 0x5b38) = uVar4;
        *(undefined8 *)(param_3 + 0x5b30) = uVar1;
        *(undefined8 *)(param_3 + 0x5b40) = uVar44;
        *(undefined8 *)(param_3 + 0x5b48) = uVar3;
        *(undefined8 *)(param_3 + 0x5b20) = uVar2;
        *(code **)(param_3 + 0x5b28) = pcVar5;
        *(undefined2 *)(param_3 + 0x5b50) = (undefined2)local_330;
        lVar11 = param_3;
      }
      else {
        if (((2 < *(int *)(*(long *)(param_3 + 0x38) + uVar38 * 4 + 0x1bc) - 1U) ||
            ((lVar45 = *(long *)(*(long *)(param_3 + 0x38) + uVar38 * 0x20 + 0x68),
             (char)local_360 != *(char *)(lVar45 + 0x5a58) ||
             (local_360._4_4_ != *(int *)(lVar45 + 0x5a5c))))) ||
           (((int)local_358 != *(int *)(lVar45 + 0x5a60) ||
            ((local_358._4_4_ != *(int *)(lVar45 + 0x5a64) ||
             ((int)local_350 != *(int *)(lVar45 + 0x5a68))))))) {
          FUN__text__001a8bec(&local_360,lVar42);
          goto LAB__text__001b56d0;
        }
        *(undefined1 *)(lVar11 + 0x5b19) = 1;
        *(undefined4 *)(lVar11 + 0x5b1c) = 0;
        *(undefined8 *)(lVar11 + 0x5b38) = uVar4;
        *(undefined8 *)(lVar11 + 0x5b30) = uVar1;
        *(undefined8 *)(lVar11 + 0x5b48) = uVar3;
        *(undefined8 *)(lVar11 + 0x5b40) = uVar44;
        *(undefined2 *)(lVar11 + 0x5b50) = (undefined2)local_330;
        *(undefined8 *)(lVar11 + 0x5b20) = uVar2;
        *(code **)(lVar11 + 0x5b28) = pcVar5;
      }
      *(uint *)(lVar11 + 0x5b64) = local_a0;
      *(undefined8 *)(lVar11 + 0x5b54) = local_b0;
      *(undefined8 *)(lVar11 + 0x5b5c) = local_a8;
    }
LAB__text__001b56d0:
    FUN__text__001be9b0(param_3);
    FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x68),0,0,0);
    FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x88),0,0,0);
    FUN__text__001be228(param_3,&local_b0);
    iVar7 = *(int *)(param_3 + 0x5b6c);
    *(undefined1 *)(param_3 + 0x5b68) = 0;
  }
  else {
    if (iVar7 == 1) {
      if ((bVar6 & 1) == 0) {
        uVar8 = 0;
        lVar45 = *(long *)(lVar45 + 0x2d0);
      }
      else {
        uVar47 = FUN__text__003c7a20(lVar39,local_258);
        local_360 = CONCAT44(param_2,uVar47);
        uVar8 = FUN__text__0019694c(*_DAT_008a05f0,&local_360,&local_360,param_3 + 0x5b78);
        FUN__text__003c7960(lVar39,local_258,&local_360);
        uVar8 = uVar8 ^ 1;
        lVar45 = *(long *)(lVar45 + 0x2d0);
      }
      if (lVar45 != 0) {
        uVar9 = FUN__text__003c7ec0(lVar45,auStack_e0);
        uVar8 = uVar8 | uVar9 ^ 1;
      }
      if ((uVar8 & 1) != 0) goto LAB__text__001b580c;
    }
    else {
      if (iVar7 != 0) goto LAB__text__001b580c;
      FUN__text__0012c378(lVar45 + 0x110,auStack_e0);
      lVar45 = *_DAT_0089f598;
      FUN__text__005e927c(&local_280,_DAT_008a0610);
      uVar44 = FUN__text__003eec14(lVar45);
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_330 = 0;
      uStack_328 = 0;
      local_340 = 0;
      local_338 = 0;
      local_350 = 0;
      local_348 = 0;
      local_360 = 0;
      local_358 = (code *)0x0;
      iVar7 = FUN__text__003ef560(lVar45,&local_280,uVar44,0);
      if ((iVar7 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar45 + 0x210),&local_280,iVar7,uVar44,0,&local_360,0
                             ), pcVar5 = local_358, local_358 != (code *)0x0)) {
        local_350 = 0;
        local_348 = 0;
        local_360 = 0;
        local_358 = (code *)0x0;
        (*pcVar5)(&local_340);
      }
      if (local_268 != 0) {
        (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
      }
      if ((bVar6 & 1) != 0) {
        uVar46 = FUN__text__003c7a60(lVar39,local_258);
        uVar47 = param_2;
        FUN__text__003c8320(lVar39,local_258);
        FUN__text__001a0124(*(undefined8 *)(param_3 + 0x38),local_258[0]);
        local_280 = FUN__text__001a01dc(*(undefined8 *)(param_3 + 0x38));
        uVar48 = param_2;
        uStack_27c = uVar47;
        local_288 = FUN__text__0019693c(uVar46,&local_280);
        uStack_284 = uVar48;
        FUN__text__003c7960(lVar39,local_258,&local_288);
        *(undefined4 *)(param_3 + 0x5b70) = uVar46;
        *(undefined4 *)(param_3 + 0x5b74) = param_2;
        iVar7 = *(int *)(*(long *)(param_3 + 0x38) + uVar38 * 4 + 0x1bc);
        if (iVar7 != 0) {
          lVar45 = *(long *)(param_3 + 0x38) + uVar38 * 0x20;
          if (iVar7 == 4) {
            lVar45 = *(long *)(lVar45 + 0xa8);
            if ((local_18c[0] != '\0') || (local_188._4_4_ != *(int *)(lVar45 + 0x5790))) {
LAB__text__001b57bc:
              FUN__text__001be354(&local_360,lVar45 + 0x1b0);
              uVar47 = FUN__text__003c7a60(lVar39,&local_358);
              *(undefined4 *)(param_3 + 0x5b70) = uVar47;
              *(undefined4 *)(param_3 + 0x5b74) = uVar48;
              FUN__text__001be464(&local_360);
              goto LAB__text__001b57e8;
            }
            __n = 0xc0;
            lVar45 = lVar45 + (local_180 & 0xffffffff) * 0x3c0 + (ulong)local_180._4_4_ * 0xc0;
          }
          else {
            lVar45 = *(long *)(lVar45 + 0x68);
            if ((((local_18c[0] != *(char *)(lVar45 + 0x5a58)) ||
                 ((int)local_188 != *(int *)(lVar45 + 0x5a5c))) ||
                (local_188._4_4_ != *(int *)(lVar45 + 0x5a60))) ||
               (((int)local_180 != *(int *)(lVar45 + 0x5a64) ||
                (local_180._4_4_ != *(uint *)(lVar45 + 0x5a68))))) goto LAB__text__001b57bc;
            __n = 200;
            lVar45 = lVar45 + (local_90 >> 0x20) * 1000 + (ulong)local_88 * 200;
          }
          memcpy(&local_360,(void *)(lVar45 + 0x13f0),__n);
          uVar47 = FUN__text__003c7a60(lVar39,&local_358);
          *(undefined4 *)(param_3 + 0x5b70) = uVar47;
          *(undefined4 *)(param_3 + 0x5b74) = uVar48;
        }
LAB__text__001b57e8:
        uVar48 = *(undefined4 *)(param_3 + 0x5b74);
        uVar47 = FUN__text__0019693c(*(undefined4 *)(param_3 + 0x5b70),&local_280);
        *(undefined4 *)(param_3 + 0x5b78) = uVar47;
        *(undefined4 *)(param_3 + 0x5b7c) = uVar48;
      }
    }
    iVar7 = *(int *)(param_3 + 0x5b6c);
  }
  *(int *)(param_3 + 0x5b6c) = iVar7 + 1;
LAB__text__001b580c:
  if (lVar41 != 0) {
    (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
  }
  if (lVar40 != 0) {
    (**(code **)(*(long *)(lVar40 + 0x48) + 0x18))((long *)(lVar40 + 0x48));
  }
  if (lVar39 != 0) {
    (**(code **)(*(long *)(lVar39 + 0x48) + 0x18))((long *)(lVar39 + 0x48));
  }
  return;
}


