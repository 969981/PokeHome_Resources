/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f32b0; name: FUN_.text__006f32b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006f32b0(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  undefined8 uVar22;
  void *__src;
  size_t __n;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  ulong local_2e0 [9];
  ulong local_298;
  undefined8 uStack_290;
  long *local_288;
  ulong local_280;
  undefined8 local_278;
  void *local_270;
  ulong local_268;
  undefined8 uStack_260;
  void *local_258;
  ulong local_250;
  undefined8 local_248;
  void *local_240;
  ulong local_238;
  undefined8 uStack_230;
  void *local_228;
  ulong local_220;
  undefined8 local_218;
  void *local_210;
  long *local_208 [4];
  ulong local_1e8;
  undefined8 uStack_1e0;
  ulong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulong *local_160;
  ulong *local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_cc;
  size_t local_c8 [6];
  ulong local_98 [7];
  
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  param_1[1] = *param_3;
  (*(code *)*_DAT_008a7290)(param_1 + 0x10,*param_2);
  if (param_3[1] == 0) {
    if ((*param_3 >> 1 & 1) == 0) {
      local_1b8 = 0;
      local_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208[2] = (long *)0x0;
      local_208[3] = (long *)0x0;
      local_208[0] = (long *)0x0;
      local_208[1] = (long *)0x0;
      puVar12 = (undefined8 *)FUN__text__006f317c(param_3,0);
      if (puVar12 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)FUN__text__006f317c(param_3,1);
      }
      else {
        local_208[0] = (long *)*puVar12;
        local_208[1] = (long *)puVar12[1];
        puVar13 = (undefined8 *)FUN__text__006f317c(param_3,1);
      }
      bVar5 = puVar12 != (undefined8 *)0x0;
      uVar10 = (ulong)bVar5;
      uVar14 = uVar10;
      if (puVar13 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar13[1];
        uVar14 = (ulong)(bVar5 + 1);
        local_208[uVar10 * 2] = (long *)*puVar13;
        local_208[uVar10 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN__text__006f317c(param_3,2);
      uVar10 = uVar14;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar10 = (ulong)((int)uVar14 + 1);
        local_208[uVar14 * 2] = (long *)*puVar12;
        local_208[uVar14 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN__text__006f317c(param_3,3);
      uVar14 = uVar10;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar14 = (ulong)((int)uVar10 + 1);
        local_208[uVar10 * 2] = (long *)*puVar12;
        local_208[uVar10 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN__text__006f317c(param_3,4);
      uVar10 = uVar14;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar10 = (ulong)((int)uVar14 + 1);
        local_208[uVar14 * 2] = (long *)*puVar12;
        local_208[uVar14 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN__text__006f317c(param_3,5);
      uVar14 = uVar10;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar14 = (ulong)((int)uVar10 + 1);
        local_208[uVar10 * 2] = (long *)*puVar12;
        local_208[uVar10 * 2 + 1] = plVar18;
      }
      cVar7 = (*(code *)*_DAT_008a72a8)(*(undefined8 *)(param_1 + 8),uVar14,local_208);
      if (cVar7 == '\0') {
        return 3;
      }
    }
    else {
      iVar21 = 0;
      iVar9 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208[2] = (long *)0x0;
      local_208[3] = (long *)0x0;
      local_208[0] = (long *)0x0;
      local_208[1] = (long *)0x0;
      do {
        puVar12 = (undefined8 *)FUN__text__006f317c(param_3,iVar9);
        if (puVar12 != (undefined8 *)0x0) {
          lVar11 = (long)iVar21;
          iVar21 = iVar21 + 1;
          local_208[lVar11 * 3] = (long *)*puVar12;
          local_208[lVar11 * 3 + 1] = (long *)puVar12[1];
          local_208[lVar11 * 3 + 2] = (long *)puVar12[6];
          puVar13 = (undefined8 *)puVar12[4];
          if (puVar13 != (undefined8 *)0x0) {
            pvVar15 = (void *)*puVar13;
            pvVar16 = (void *)puVar12[1];
            memcpy(pvVar16,pvVar15,(long)*(int *)((long)pvVar15 + 0x14));
            if ((void *)puVar13[1] != (void *)0x0) {
              memcpy((void *)((long)pvVar16 + (long)*(int *)((long)pvVar15 + 0x14)),
                     (void *)puVar13[1],(long)*(int *)((long)pvVar15 + 0x18));
            }
            if ((void *)puVar13[4] != (void *)0x0) {
              memcpy((void *)((long)pvVar16 + (long)*(int *)((long)pvVar15 + 0x20)),
                     (void *)puVar13[4],(long)*(int *)((long)pvVar15 + 0x1c));
            }
            if ((void *)puVar13[2] != (void *)0x0) {
              memcpy((void *)((long)pvVar16 + (long)*(int *)((long)pvVar15 + 0x6f0)),
                     (void *)puVar13[2],(long)*(int *)((long)pvVar15 + 0x6f4));
            }
            if ((void *)puVar13[3] != (void *)0x0) {
              memcpy((void *)((long)pvVar16 + (long)*(int *)((long)pvVar15 + 0x7c8)),
                     (void *)puVar13[3],(long)*(int *)((long)pvVar15 + 0x7cc));
            }
            if ((void *)puVar13[5] != (void *)0x0) {
              memcpy((void *)((long)pvVar16 + (long)*(int *)((long)pvVar15 + 0x7e8)),
                     (void *)puVar13[5],(long)*(int *)((long)pvVar15 + 0x7ec));
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 6);
      cVar7 = (*(code *)*_DAT_008a72b0)(*(undefined8 *)(param_1 + 8),iVar21,local_208);
      if (cVar7 == '\0') {
        return 3;
      }
      if ((*param_3 >> 1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x78);
      }
    }
    bVar4 = *param_3;
    goto joined_r0x006f366c;
  }
  if (param_3[1] != 2) {
    return 1;
  }
  if (((DAT_00c60fc0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_00c60fc0), iVar9 != 0)) {
    FUN__text__001001d0(&LAB__text__005f521c,0x8e11f0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00c60fc0);
  }
  nn::os::LockMutex((MutexType *)0x8e11f0);
  FUN__text__006f2b44();
  uVar10 = FUN__text__006f6068();
  if ((uVar10 & 1) == 0) {
    FUN__text__006f2b44();
    FUN__text__006f5fd4();
  }
  local_2e8 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  local_310 = 0;
  lVar11 = FUN__text__006f2b44();
  (**(code **)(lVar11 + 0x28))(&local_318);
  puVar12 = _DAT_008a5698;
  local_328 = 0;
  local_320 = 0;
  (*(code *)*_DAT_008a5698)(*param_2,0x2f,(long)&local_320 + 4);
  (*(code *)*puVar12)(*param_2,0x2e,&local_320);
  (*(code *)*puVar12)(*param_2,0x31,(long)&local_328 + 4);
  (*(code *)*puVar12)(*param_2,0x30,&local_328);
  if (((int)local_310 < local_320._4_4_) ||
     (((int)local_310 == local_320._4_4_ && (local_310._4_4_ < local_328._4_4_))))
  goto LAB__text__006f33ec;
  if (((int)local_320 < (int)local_310) ||
     (((int)local_310 == (int)local_320 && ((int)local_328 < local_310._4_4_))))
  goto LAB__text__006f33ec;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (ulong *)0x0;
  local_150 = 0;
  local_168 = 0;
  local_160 = (ulong *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_208[2] = (long *)0x0;
  local_208[3] = (long *)0x0;
  local_208[0] = (long *)0x0;
  local_208[1] = (long *)0x0;
  lVar11 = FUN__text__006f2b44();
  cVar7 = (**(code **)(lVar11 + 0x10))(local_208);
  if ((cVar7 == '\0') || ((int)local_130 != 1)) goto LAB__text__006f33ec;
  local_1e8 = local_1e8 & 0xfffffffffffe0000 | (ulong)*param_3 & 1 | 0x2214;
  uVar14 = FUN__text__006f6080();
  uVar10 = 0x20000;
  if ((uVar14 & 1) == 0) {
    uVar10 = 0;
  }
  local_1d8 = local_1d8 & 0xffffffff00000000;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  local_1b0 = 0;
  local_208[3] = (long *)0x0;
  local_218 = 0;
  local_210 = (void *)0x0;
  local_1e8 = local_1e8 & 0xfffffffffff9ffff | uVar10;
  local_2e0[0] = 0;
  local_150 = local_150 & 0xffffffffffffff00;
  uStack_1e0 = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  local_240 = (void *)0x0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  local_270 = (void *)0x0;
  local_288 = (void *)0x0;
  local_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2e0[7] = 0;
  local_2e0[8] = 0;
  local_2e0[5] = 0;
  local_2e0[6] = 0;
  local_2e0[3] = 0;
  local_2e0[4] = 0;
  local_2e0[1] = 0;
  local_2e0[2] = 0;
  local_160 = local_2e0 + 3;
  local_158 = local_2e0;
  lVar11 = FUN__text__006f317c(param_3,0);
  if (lVar11 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar11 + 8));
    uVar10 = local_150 & 0xff;
    plVar18 = (long *)((ulong)(local_2e0 + uVar10 * 3 + 9) | 1);
    if ((local_2e0[uVar10 * 3 + 9] & 1) != 0) {
      plVar18 = local_208[uVar10 * 3 + -0x10];
    }
    (local_2e0 + 3)[uVar10] = (ulong)plVar18;
    uVar8 = FUN__text__006f2360(0);
    uVar10 = local_150 & 0xff;
    local_150 = CONCAT71(local_150._1_7_,(char)local_150 + '\x01');
    *(undefined4 *)((long)local_2e0 + uVar10 * 4) = uVar8;
  }
  lVar11 = FUN__text__006f317c(param_3,1);
  if (lVar11 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar11 + 8));
    uVar10 = local_150 & 0xff;
    plVar18 = (long *)((ulong)(local_2e0 + uVar10 * 3 + 9) | 1);
    if ((local_2e0[uVar10 * 3 + 9] & 1) != 0) {
      plVar18 = local_208[uVar10 * 3 + -0x10];
    }
    local_2e0[uVar10 + 3] = (ulong)plVar18;
    uVar8 = FUN__text__006f2360(1);
    cVar7 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar8;
    local_150 = CONCAT71(local_150._1_7_,cVar7 + '\x01');
  }
  lVar11 = FUN__text__006f317c(param_3,2);
  if (lVar11 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar11 + 8));
    uVar10 = local_150 & 0xff;
    plVar18 = (long *)((ulong)(local_2e0 + uVar10 * 3 + 9) | 1);
    if ((local_2e0[uVar10 * 3 + 9] & 1) != 0) {
      plVar18 = local_208[uVar10 * 3 + -0x10];
    }
    local_2e0[uVar10 + 3] = (ulong)plVar18;
    uVar8 = FUN__text__006f2360(2);
    cVar7 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar8;
    local_150 = CONCAT71(local_150._1_7_,cVar7 + '\x01');
  }
  lVar11 = FUN__text__006f317c(param_3,3);
  if (lVar11 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar11 + 8));
    uVar10 = local_150 & 0xff;
    plVar18 = (long *)((ulong)(local_2e0 + uVar10 * 3 + 9) | 1);
    if ((local_2e0[uVar10 * 3 + 9] & 1) != 0) {
      plVar18 = local_208[uVar10 * 3 + -0x10];
    }
    local_2e0[uVar10 + 3] = (ulong)plVar18;
    uVar8 = FUN__text__006f2360(3);
    cVar7 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar8;
    local_150 = CONCAT71(local_150._1_7_,cVar7 + '\x01');
  }
  lVar11 = FUN__text__006f317c(param_3,4);
  if (lVar11 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar11 + 8));
    uVar10 = local_150 & 0xff;
    plVar18 = (long *)((ulong)(local_2e0 + uVar10 * 3 + 9) | 1);
    if ((local_2e0[uVar10 * 3 + 9] & 1) != 0) {
      plVar18 = local_208[uVar10 * 3 + -0x10];
    }
    local_2e0[uVar10 + 3] = (ulong)plVar18;
    uVar8 = FUN__text__006f2360(4);
    cVar7 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar8;
    local_150 = CONCAT71(local_150._1_7_,cVar7 + '\x01');
  }
  lVar11 = FUN__text__006f317c(param_3,5);
  if (lVar11 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar11 + 8));
    uVar10 = local_150 & 0xff;
    plVar18 = (long *)((ulong)(local_2e0 + uVar10 * 3 + 9) | 1);
    if ((local_2e0[uVar10 * 3 + 9] & 1) != 0) {
      plVar18 = local_208[uVar10 * 3 + -0x10];
    }
    local_2e0[uVar10 + 3] = (ulong)plVar18;
    uVar8 = FUN__text__006f2360(5);
    cVar7 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar8;
    local_150 = CONCAT71(local_150._1_7_,cVar7 + '\x01');
  }
  lVar11 = FUN__text__006f2b44();
  cVar7 = (**(code **)(lVar11 + 0x20))(local_208);
  plVar18 = local_208[0];
  bVar5 = false;
  uVar22 = 3;
  if ((cVar7 != '\0') && (*(char *)(*local_208[0] + 0xd) == '\0')) {
    if (*(char *)(*local_208[0] + 0xc) == '\0') {
      bVar5 = false;
    }
    else {
      pvVar15 = malloc(400);
      *(void **)(param_1 + 0xd8) = pvVar15;
      *(undefined8 *)((long)pvVar15 + 0x108) = 0;
      *(undefined8 *)((long)pvVar15 + 0x110) = 0;
      __src = (void *)plVar18[1];
      pvVar16 = malloc((ulong)*(uint *)((long)__src + 0x44));
      *(void **)((long)pvVar15 + 0x110) = pvVar16;
      if (pvVar16 != (void *)0x0) {
        memcpy(pvVar16,__src,(ulong)*(uint *)((long)__src + 0x44));
        iVar9 = *(int *)((long)pvVar16 + 0x4c);
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        local_98[0] = 0;
        local_98[1] = 0;
        *(undefined4 *)((long)pvVar15 + 0x178) = 0;
        *(undefined8 *)((long)pvVar15 + 0x180) = 0;
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        if (iVar9 < 1) {
          uVar10 = 0;
        }
        else {
          lVar17 = 0;
          lVar11 = 0;
          uVar10 = 0;
          uVar14 = 0;
          do {
            iVar9 = *(int *)((long)pvVar16 + lVar17 + 0x98);
            if (iVar9 == 3) {
              *(long *)((long)pvVar15 + 0x188) = (long)pvVar16 + lVar17 + 0x90;
            }
            else if (iVar9 == 0) {
              uVar19 = (ulong)*(uint *)((long)pvVar16 + lVar17 + 200);
              uVar20 = -(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3;
              uVar10 = uVar10 + uVar19 + 0xff & 0xffffffffffffff00;
              uVar2 = *(uint *)((long)pvVar16 + lVar17 + 0x94);
              *(ulong *)((long)local_c8 + uVar20 + 0x30) = uVar19;
              *(ulong *)((long)local_c8 + uVar20) =
                   (long)pvVar16 + (ulong)*(uint *)((long)pvVar16 + lVar17 + 0xc4) + (ulong)uVar2;
              uVar3 = *(uint *)((long)pvVar16 + lVar17 + 0xc0);
              iVar9 = (int)uVar14;
              uVar1 = iVar9 + 1;
              uVar14 = (ulong)uVar1;
              *(uint *)((long)pvVar15 + 0x178) = uVar1;
              *(ulong *)((long)pvVar15 + (long)iVar9 * 0x10 + 0x120) =
                   (long)pvVar16 + (ulong)uVar3 + (ulong)uVar2;
              uVar20 = (ulong)*(uint *)((long)pvVar16 + lVar17 + 0xd0);
              pvVar16 = *(void **)((long)pvVar15 + 0x110);
              uVar19 = *(ulong *)((long)pvVar15 + 0x180);
              if (*(ulong *)((long)pvVar15 + 0x180) <= uVar20) {
                uVar19 = uVar20;
              }
              *(ulong *)((long)pvVar15 + 0x180) = uVar19;
            }
            lVar11 = lVar11 + 1;
            lVar17 = lVar17 + 0x90;
          } while (lVar11 < *(int *)((long)pvVar16 + 0x4c));
        }
        local_cc = 0;
        (*(code *)*puVar12)(*param_2,0x4e,&local_cc);
        uVar10 = uVar10 + (long)local_cc + 0xfff & 0xfffffffffffff000;
        pvVar16 = malloc(uVar10 + 0x1000);
        *(void **)((long)pvVar15 + 0x100) = pvVar16;
        if (pvVar16 != (void *)0x0) {
          pvVar16 = (void *)((long)pvVar16 + 0xfffU & 0xfffffffffffff000);
          *(void **)((long)pvVar15 + 0x108) = pvVar16;
          if (0 < *(int *)((long)pvVar15 + 0x178)) {
            lVar11 = 0;
            do {
              __n = local_c8[lVar11 + 6];
              memcpy(pvVar16,(void *)local_c8[lVar11],__n);
              lVar11 = lVar11 + 1;
              pvVar16 = (void *)((long)pvVar16 + __n + 0xff & 0xffffffffffffff00);
            } while (lVar11 < *(int *)((long)pvVar15 + 0x178));
          }
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = 0;
          uStack_108 = 0;
          (*(code *)*_DAT_008a7018)(&local_110,*param_2);
          (*(code *)*_DAT_008a72c8)(&local_110);
          (*(code *)*_DAT_008a72d8)(&local_110,0x62);
          (*(code *)*_DAT_008a72d0)(&local_110,*(undefined8 *)((long)pvVar15 + 0x108),uVar10);
          (*(code *)*_DAT_008a7020)(pvVar15,&local_110);
          lVar11 = (*(code *)*_DAT_008a72f8)(pvVar15);
          if (0 < *(int *)((long)pvVar15 + 0x178)) {
            lVar17 = 0;
            uVar10 = 0;
            plVar18 = (long *)((long)pvVar15 + 0x118);
            do {
              *plVar18 = uVar10 + lVar11;
              lVar6 = lVar17 + 6;
              lVar17 = lVar17 + 1;
              uVar10 = (uVar10 | 0xff) + local_c8[lVar6] & 0xffffffffffffff00;
              plVar18 = plVar18 + 2;
            } while (lVar17 < *(int *)((long)pvVar15 + 0x178));
          }
          uVar22 = 0;
          bVar5 = true;
          goto LAB__text__006f3d64;
        }
      }
      bVar5 = false;
      uVar22 = 3;
    }
  }
LAB__text__006f3d64:
  if ((local_220 & 1) == 0) {
    if ((local_238 & 1) != 0) goto LAB__text__006f3dfc;
LAB__text__006f3d74:
    if ((local_250 & 1) != 0) goto LAB__text__006f3e0c;
LAB__text__006f3d7c:
    if ((local_268 & 1) != 0) goto LAB__text__006f3e1c;
LAB__text__006f3d84:
    if ((local_280 & 1) != 0) goto LAB__text__006f3e2c;
LAB__text__006f3d8c:
    if ((local_298 & 1) != 0) goto LAB__text__006f3e3c;
LAB__text__006f3d94:
    lVar11 = FUN__text__006f2b44();
    (**(code **)(lVar11 + 0x18))(local_208);
  }
  else {
    operator_delete(local_210);
    if ((local_238 & 1) == 0) goto LAB__text__006f3d74;
LAB__text__006f3dfc:
    operator_delete(local_228);
    if ((local_250 & 1) == 0) goto LAB__text__006f3d7c;
LAB__text__006f3e0c:
    operator_delete(local_240);
    if ((local_268 & 1) == 0) goto LAB__text__006f3d84;
LAB__text__006f3e1c:
    operator_delete(local_258);
    if ((local_280 & 1) == 0) goto LAB__text__006f3d8c;
LAB__text__006f3e2c:
    operator_delete(local_270);
    if ((local_298 & 1) == 0) goto LAB__text__006f3d94;
LAB__text__006f3e3c:
    operator_delete(local_288);
    lVar11 = FUN__text__006f2b44();
    (**(code **)(lVar11 + 0x18))(local_208);
  }
  if (!bVar5) {
    nn::os::UnlockMutex((MutexType *)0x8e11f0);
    return uVar22;
  }
  cVar7 = (*(code *)*_DAT_008a72a8)
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x178)
                     ,*(long *)(param_1 + 0xd8) + 0x118);
  if (cVar7 != '\x01') {
LAB__text__006f33ec:
    nn::os::UnlockMutex((MutexType *)0x8e11f0);
    return 3;
  }
  nn::os::UnlockMutex((MutexType *)0x8e11f0);
  bVar4 = *param_3;
joined_r0x006f366c:
  if ((bVar4 & 1) == 0) {
    lVar11 = FUN__text__006f317c(param_3,5);
    uVar8 = 0x1f;
    if (lVar11 != 0) {
      uVar8 = 0x20;
    }
    *(undefined4 *)(param_1 + 4) = uVar8;
  }
  param_1[1] = param_1[1] & 0xfb;
  *param_1 = 1;
  return 0;
}


