/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042EC10
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052ec10; name: FUN_.text__0052ec10
 */


void FUN__text__0052ec10(double param_1,double param_2,double param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,undefined8 param_6,undefined4 param_7,long *param_8, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        long *param_9,undefined8 param_10,long param_11,long param_12,long param_13, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        long *param_14) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar32; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar33; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar36; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar37; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar39; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar41; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar42; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar43; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar45; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar46; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar47; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *local_198; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *local_160; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *local_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_14[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_14 + 5) = 0;
  local_100 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_f8 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_f0 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_14 + 0x10))(param_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)((long)param_14 + 0x24) = param_7;
  if ((int)param_8[1] == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar32 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = param_14 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0052eccc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar24 = *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar22 = (long *)(lVar24 + uVar16 * 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar17 = (uint *)(plVar22 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar36 = *puVar17 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(long *)(plVar22[uVar36] + 0x70) == param_12) && // [自动静态注释] 条件判断/分支
      (plVar2 = (long *)(lVar24 + uVar16 * 0x90 + 0x40), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(plVar2[uVar36] + 0x78) != param_13)) &&
     (uVar36 = *(uint *)(param_9 + 1), uVar36 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar20 = *(ulong *)(*plVar22 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar5 = iVar14 + (uVar36 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar23 = *(ulong **)(*param_9 + (long)iVar5 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar21 = *puVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar21 == uVar20) { // [自动静态注释] 条件判断/分支
        if (((int)puVar23[8] != 0) && (*(char *)((long)puVar23 + 0x32) == '\0')) { // [自动静态注释] 条件判断/分支
          local_160 = (uint *)puVar23[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*puVar17 < 2) goto LAB__text__0052edf4; // [自动静态注释] 条件判断/分支
          lVar10 = lVar24 + uVar16 * 0x90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3 = (long *)(lVar10 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pfVar4 = (float *)(lVar10 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_198 = (double *)(local_160 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__0052efc4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (uVar21 < uVar20) { // [自动静态注释] 条件判断/分支
        iVar14 = iVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar40 = uVar36 - (uVar21 < uVar20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar36 = uVar40 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar40); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__0052ecb4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0052edf4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    uVar36 = *(uint *)(param_14 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar40 = *(uint *)((long)param_14 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar36 < uVar40) { // [自动静态注释] 条件判断/分支
LAB__text__0052ee28: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(uint *)(param_14 + 7) = uVar36 + 1;
      if (param_14[6] != 0) { // [自动静态注释] 条件判断/分支
        puVar31 = (undefined4 *)(param_14[6] + (ulong)uVar36 * 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar31 = 0;
        *(undefined8 *)(puVar31 + 8) = 0;
        *(undefined8 *)(puVar31 + 10) = 0;
        *(double *)(puVar31 + 2) = param_1;
        *(double *)(puVar31 + 4) = param_2;
        *(double *)(puVar31 + 6) = param_3;
        *(undefined8 *)(puVar31 + 0x45) = 0;
        *(undefined8 *)(puVar31 + 0x47) = 0;
        *(undefined8 *)(puVar31 + 0x49) = 0;
        *(undefined8 *)(puVar31 + 0x4b) = 0;
        puVar31[0x44] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar31 + 0xc) = 0;
        *(undefined8 *)(puVar31 + 0xe) = 0;
        *(undefined8 *)(puVar31 + 0x10) = 0;
        *(undefined8 *)(puVar31 + 0x12) = 0;
        *(undefined8 *)(puVar31 + 0x14) = 0;
        *(undefined8 *)(puVar31 + 0x16) = 0;
        *(undefined8 *)(puVar31 + 0x18) = 0;
        *(undefined8 *)(puVar31 + 0x1a) = 0;
        *(undefined8 *)(puVar31 + 0x1c) = 0;
        *(undefined8 *)(puVar31 + 0x1e) = 0;
        *(undefined8 *)(puVar31 + 0x20) = 0;
        *(undefined8 *)(puVar31 + 0x22) = 0;
        *(undefined8 *)(puVar31 + 0x24) = 0;
        *(undefined8 *)(puVar31 + 0x26) = 0;
        *(undefined8 *)(puVar31 + 0x28) = 0;
        *(undefined8 *)(puVar31 + 0x2a) = 0;
        *(undefined8 *)(puVar31 + 0x2c) = 0;
        *(undefined8 *)(puVar31 + 0x2e) = 0;
        *(undefined8 *)(puVar31 + 0x30) = 0;
        *(undefined8 *)(puVar31 + 0x32) = 0;
        *(undefined8 *)(puVar31 + 0x34) = 0;
        *(undefined8 *)(puVar31 + 0x36) = 0;
        *(undefined8 *)(puVar31 + 0x38) = 0;
        *(undefined8 *)(puVar31 + 0x3a) = 0;
        *(undefined8 *)(puVar31 + 0x3c) = 0;
        *(undefined8 *)(puVar31 + 0x3e) = 0;
        *(undefined8 *)(puVar31 + 0x40) = 0;
        *(undefined8 *)(puVar31 + 0x42) = 0;
        puVar31[0x40] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
        FUN__text__0052aa30(*(undefined8 *)(local_160 + 0x38),*(undefined8 *)(local_160 + 0x3a), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(local_160 + 0x3c),puVar31,local_160,param_10);
        FUN__text__0052b020(*(undefined8 *)(param_11 + 0x18),*(undefined8 *)(param_11 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(param_11 + 0x28),puVar31,plVar22,0,1);
        FUN__text__0052b470(0,0,puVar31,&local_100,param_11); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar14 = uVar40 + (uVar40 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar40 == 0) { // [自动静态注释] 条件判断/分支
        iVar14 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar20 = FUN__text__00530820(plVar1,iVar14); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (((uVar20 & 1) != 0) && (uVar36 < *(uint *)((long)param_14 + 0x3c))) { // [自动静态注释] 条件判断/分支
        uVar36 = *(uint *)(param_14 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__0052ee28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    local_160 = local_160 + 0x46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (local_160 != (uint *)(puVar23[7] + (ulong)(uint)puVar23[8] * 0x118)); // [自动静态注释] 循环/迭代
  goto LAB__text__0052ecb4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0052efc4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    lVar10 = FUN__text__00527e10(*plVar3,*plVar22,plVar22[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar10 == 0) { // [自动静态注释] 条件判断/分支
      uVar36 = *(uint *)(param_14 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar40 = *(uint *)((long)param_14 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar40 <= uVar36) { // [自动静态注释] 条件判断/分支
        iVar14 = uVar40 + (uVar40 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar40 == 0) { // [自动静态注释] 条件判断/分支
          iVar14 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar20 = FUN__text__00530820(plVar1,iVar14); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((uVar20 & 1) == 0) || (*(uint *)((long)param_14 + 0x3c) <= uVar36)) // [自动静态注释] 条件判断/分支
        goto LAB__text__0052ef90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar36 = *(uint *)(param_14 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_14 + 7) = uVar36 + 1;
      if (param_14[6] != 0) { // [自动静态注释] 条件判断/分支
        puVar31 = (undefined4 *)(param_14[6] + (ulong)uVar36 * 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar31 = 0;
        *(undefined8 *)(puVar31 + 0x42) = 0;
        *(undefined8 *)(puVar31 + 10) = 0;
        *(undefined8 *)(puVar31 + 0xc) = 0;
        *(undefined8 *)(puVar31 + 0x45) = 0;
        *(undefined8 *)(puVar31 + 0x47) = 0;
        *(double *)(puVar31 + 4) = param_2;
        *(undefined8 *)(puVar31 + 8) = 0;
        *(double *)(puVar31 + 2) = param_1;
        *(double *)(puVar31 + 6) = param_3;
        *(undefined8 *)(puVar31 + 0x49) = 0;
        *(undefined8 *)(puVar31 + 0x4b) = 0;
        puVar31[0x44] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar31 + 0xe) = 0;
        *(undefined8 *)(puVar31 + 0x10) = 0;
        *(undefined8 *)(puVar31 + 0x12) = 0;
        *(undefined8 *)(puVar31 + 0x14) = 0;
        *(undefined8 *)(puVar31 + 0x16) = 0;
        *(undefined8 *)(puVar31 + 0x18) = 0;
        *(undefined8 *)(puVar31 + 0x1a) = 0;
        *(undefined8 *)(puVar31 + 0x1c) = 0;
        *(undefined8 *)(puVar31 + 0x1e) = 0;
        *(undefined8 *)(puVar31 + 0x20) = 0;
        *(undefined8 *)(puVar31 + 0x22) = 0;
        *(undefined8 *)(puVar31 + 0x24) = 0;
        *(undefined8 *)(puVar31 + 0x26) = 0;
        *(undefined8 *)(puVar31 + 0x28) = 0;
        *(undefined8 *)(puVar31 + 0x2a) = 0;
        *(undefined8 *)(puVar31 + 0x2c) = 0;
        *(undefined8 *)(puVar31 + 0x2e) = 0;
        *(undefined8 *)(puVar31 + 0x30) = 0;
        *(undefined8 *)(puVar31 + 0x32) = 0;
        *(undefined8 *)(puVar31 + 0x34) = 0;
        *(undefined8 *)(puVar31 + 0x36) = 0;
        *(undefined8 *)(puVar31 + 0x38) = 0;
        *(undefined8 *)(puVar31 + 0x3a) = 0;
        *(undefined8 *)(puVar31 + 0x3c) = 0;
        *(undefined8 *)(puVar31 + 0x3e) = 0;
        *(undefined8 *)(puVar31 + 0x40) = 0;
        puVar31[0x40] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
        FUN__text__0052aa30(*(undefined8 *)(local_160 + 0x38),*(undefined8 *)(local_160 + 0x3a), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(local_160 + 0x3c),puVar31,local_160,param_10);
        local_a0 = *(double *)(param_11 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        dVar26 = *(double *)(param_11 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar20 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        dVar33 = *(double *)(param_11 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pdVar18 = (double *)(puVar31 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar31[0x3e] != 0) { // [自动静态注释] 条件判断/分支
          pdVar18 = (double *)((long)(puVar31 + 8) + (ulong)(puVar31[0x3e] - 1) * 3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        local_b8 = *pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_b0 = pdVar18[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_a8 = pdVar18[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_98 = dVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_90 = dVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*puVar17 != 1) { // [自动静态注释] 条件判断/分支
          uVar21 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            uVar20 = uVar21 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar7 = (undefined8 *)(lVar24 + lVar32 + uVar21 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_b8 = (double)FUN__text__0052acf0(puVar31,&local_b8,puVar7[1], // [自动静态注释] 调用尚未恢复正式名称的函数
                                                   *(undefined8 *)(puVar7[8] + 0x78),*puVar7);
            uVar21 = uVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_b0 = dVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_a8 = dVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar20 < *puVar17 - 1); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0052acf0(puVar31,&local_b8,&local_a0, // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)
                             (*(long *)(lVar24 + uVar16 * 0x90 + (uVar20 & 0xffffffff) * 8 + 0x40) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             0x78),plVar22[uVar20 & 0xffffffff]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar42 = *pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar41 = (float)puVar31[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((float)puVar31[0x42] <= fVar42) { // [自动静态注释] 条件判断/分支
          fVar41 = fVar42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        puVar31[0x42] = fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(double *)(puVar31 + 0x3a) = local_98;
        *(double *)(puVar31 + 0x3c) = local_90;
        *(double *)(puVar31 + 0x38) = local_a0;
        FUN__text__0052b470(0,0,puVar31,&local_100,param_11); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (*(int *)(lVar10 + 0x38) != 0) { // [自动静态注释] 条件判断/分支
      local_140 = *(uint **)(lVar10 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_148 = (double *)(local_140 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar40 = *(uint *)(param_14 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar36 = *(uint *)((long)param_14 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar25 = param_14[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar40 < uVar36) { // [自动静态注释] 条件判断/分支
          *(uint *)(param_14 + 7) = uVar40 + 1;
          if (lVar25 == 0) goto LAB__text__0052f090; // [自动静态注释] 条件判断/分支
LAB__text__0052f334: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar20 = (ulong)uVar40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30 = (uint *)(lVar25 + uVar20 * 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x6a] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x6b] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x6c] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x6d] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x66] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x67] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x68] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x69] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar30 = 0;
          *(double *)(puVar30 + 4) = param_2;
          *(double *)(puVar30 + 6) = param_3;
          puVar30[0x62] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[99] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[100] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x65] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x5e] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x5f] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x60] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x61] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x5a] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x5b] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x5c] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x5d] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x56] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x57] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x58] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x59] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x52] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x53] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x54] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x55] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x4e] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x4f] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x50] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x51] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pdVar18 = (double *)(puVar30 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *pdVar18 = param_1;
          puVar30[0x44] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x21] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x25] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x26] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x28] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x29] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x2a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x2b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x2c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x2d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x2e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x2f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x31] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x32] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x33] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x34] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x35] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x36] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x37] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x38] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x39] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x3a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x3b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x3c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x3d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x3e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x3f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x40] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x41] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x42] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x43] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x40] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x45] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x46] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x47] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x48] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x49] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x4a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x4b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar39 = *(undefined8 *)(local_160 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar37 = *(undefined8 *)(local_160 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar38 = *(undefined8 *)(local_160 + 0x3a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (local_160[0x3e] == 0) { // [自动静态注释] 条件判断/分支
            fVar41 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar40 = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar42 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar36 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar36 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar21 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pdVar19 = local_198; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar26 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar33 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar28 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              if (7 < (uint)(uVar21 + uVar36)) break; // [自动静态注释] 条件判断/分支
              dVar43 = pdVar19[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar44 = pdVar19[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar11 = uVar21 + uVar36 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar46 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(double *)(puVar30 + uVar11 * 6 + 10) = dVar44;
              *(double *)(puVar30 + uVar11 * 6 + 0xc) = dVar46;
              *(double *)(puVar30 + uVar11 * 6 + 8) = dVar43;
              uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              fVar41 = (float)puVar30[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar14 = (int)uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar21 = uVar21 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)(iVar14 + uVar36) * 8 + 0x138) =
                   param_10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              puVar30[0x40] = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (uint)(fVar41 + (float)SQRT((dVar43 - dVar28) * (dVar43 - dVar28) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                               (dVar44 - dVar33) * (dVar44 - dVar33) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                               (dVar46 - dVar26) * (dVar46 - dVar26))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              pdVar19 = pdVar19 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar26 = dVar46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar33 = dVar44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar28 = dVar43; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar21 < local_160[0x3e]); // [自动静态注释] 循环/迭代
            fVar42 = (float)puVar30[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar41 = (float)puVar30[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar40 = puVar30[0x44]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(puVar30 + 0x38) = uVar37;
          *(undefined8 *)(puVar30 + 0x3a) = uVar38;
          *(undefined8 *)(puVar30 + 0x3c) = uVar39;
          uVar36 = local_160[0x3e] + uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (7 < uVar36) { // [自动静态注释] 条件判断/分支
            uVar36 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x3e] = uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar35 = (float)local_160[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((float)local_160[0x42] <= fVar42) { // [自动静态注释] 条件判断/分支
            fVar35 = fVar42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x42] = (uint)fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar42 = (float)local_160[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((float)local_160[0x43] <= fVar41) { // [自动静态注释] 条件判断/分支
            fVar42 = fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x43] = (uint)fVar42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar40 = NEON_fminnm(local_160[0x44],uVar40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x44] = uVar40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*local_160 != 0) { // [自动静态注释] 条件判断/分支
            *puVar30 = *local_160;
          } // [自动静态注释] 作用域/控制流边界
          pdVar12 = (double *)plVar22[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dVar26 = *(double *)(*plVar22 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
            pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          dVar33 = pdVar12[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar37 = *(undefined8 *)(*plVar2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar29 = *(undefined8 *)(*plVar3 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_a0 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_98 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_90 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (local_140[0x3e] == 0) { // [自动静态注释] 条件判断/分支
            local_b8 = *pdVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_b0 = pdVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_a8 = pdVar12[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar37 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar37); // [自动静态注释] 调用尚未恢复正式名称的函数
            if ((ulong)dVar33 <= (ulong)dVar26) goto LAB__text__0052f6ac; // [自动静态注释] 条件判断/分支
LAB__text__0052f5c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar40 = local_140[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar40 != 0) { // [自动静态注释] 条件判断/分支
              uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
                pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              iVar14 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar26 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar33 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar28 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              do { // [自动静态注释] 循环/迭代
                uVar6 = uVar36 + uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (7 < uVar6) break; // [自动静态注释] 条件判断/分支
                uVar40 = uVar40 + iVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                iVar14 = iVar14 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar43 = *(double *)(local_140 + (ulong)uVar40 * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar44 = *(double *)(local_140 + (ulong)uVar40 * 6 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar46 = *(double *)(local_140 + (ulong)uVar40 * 6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(double *)(puVar30 + (ulong)uVar6 * 6 + 0xc) = dVar46;
                *(double *)(puVar30 + (ulong)uVar6 * 6 + 8) = dVar43;
                *(double *)(puVar30 + (ulong)uVar6 * 6 + 10) = dVar44;
                uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                fVar41 = (float)puVar30[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar40 = uVar15 + uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar15 = uVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)uVar40 * 8 + 0x138) = uVar29;
                puVar30[0x40] = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (uint)(fVar41 + (float)SQRT((dVar43 - dVar28) * (dVar43 - dVar28) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                 (dVar44 - dVar33) * (dVar44 - dVar33) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                 (dVar46 - dVar26) * (dVar46 - dVar26))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar40 = local_140[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar26 = dVar46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar33 = dVar44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar28 = dVar43; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } while (uVar15 < uVar40); // [自动静态注释] 循环/迭代
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if ((ulong)dVar26 < (ulong)dVar33) { // [自动静态注释] 条件判断/分支
              uVar36 = local_140[0x3e] - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_b8 = *(double *)(local_140 + (ulong)uVar36 * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_b0 = *(double *)(local_140 + (ulong)uVar36 * 6 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_a8 = *(double *)(local_140 + (ulong)uVar36 * 6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar37 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar37); // [自动静态注释] 调用尚未恢复正式名称的函数
              goto LAB__text__0052f5c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            local_b8 = *(double *)(local_140 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_b0 = *(double *)(local_140 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_a8 = *(double *)(local_140 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar37 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar37); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__0052f6ac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (local_140[0x3e] != 0) { // [自动静态注释] 条件判断/分支
              uVar21 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
                pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              pdVar12 = local_148; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar26 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar33 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              dVar28 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              do { // [自动静态注释] 循环/迭代
                if (7 < (uint)(uVar21 + uVar36)) break; // [自动静态注释] 条件判断/分支
                dVar43 = pdVar12[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar44 = pdVar12[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar11 = uVar21 + uVar36 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar46 = *pdVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(double *)(puVar30 + uVar11 * 6 + 0xc) = dVar46;
                *(double *)(puVar30 + uVar11 * 6 + 8) = dVar43;
                *(double *)(puVar30 + uVar11 * 6 + 10) = dVar44;
                fVar41 = (float)puVar30[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                iVar14 = (int)uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar21 = uVar21 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)(iVar14 + uVar36) * 8 + 0x138) =
                     uVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                puVar30[0x40] = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (uint)(fVar41 + (float)SQRT((dVar43 - dVar28) * (dVar43 - dVar28) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                 (dVar44 - dVar33) * (dVar44 - dVar33) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                 (dVar46 - dVar26) * (dVar46 - dVar26))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                pdVar12 = pdVar12 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar26 = dVar46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar33 = dVar44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar28 = dVar43; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } while (uVar21 < local_140[0x3e]); // [自动静态注释] 循环/迭代
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(puVar30 + 0x38) = uVar37;
          *(undefined8 *)(puVar30 + 0x3a) = uVar38;
          *(undefined8 *)(puVar30 + 0x3c) = uVar39;
          uVar36 = local_140[0x3e] + uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (7 < uVar36) { // [自动静态注释] 条件判断/分支
            uVar36 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x3e] = uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar41 = (float)local_140[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((float)local_140[0x42] <= (float)puVar30[0x42]) { // [自动静态注释] 条件判断/分支
            fVar41 = (float)puVar30[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x42] = (uint)fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar41 = (float)local_140[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((float)local_140[0x43] <= (float)puVar30[0x43]) { // [自动静态注释] 条件判断/分支
            fVar41 = (float)puVar30[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x43] = (uint)fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar36 = NEON_fminnm(local_140[0x44],puVar30[0x44]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar30[0x44] = uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar36 = *local_140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
            if (*puVar30 != 0) { // [自动静态注释] 条件判断/分支
              uVar36 = (((*puVar30 * 0x1000193 ^ uVar36 & 0xff) * 0x1000193 ^ uVar36 >> 8 & 0xff) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        0x1000193 ^ uVar36 >> 0x10 & 0xff) * 0x1000193 ^ uVar36 >> 0x18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            *puVar30 = uVar36;
          } // [自动静态注释] 作用域/控制流边界
          local_d0 = *(undefined8 *)(param_11 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dVar26 = *(double *)(param_11 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dVar33 = *(double *)(param_11 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar30[0x3e] != 0) { // [自动静态注释] 条件判断/分支
            pdVar19 = (double *)(puVar30 + (ulong)(puVar30[0x3e] - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          local_e8 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_e0 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_d8 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dStack_c8 = dVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_c0 = dVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*puVar17 - 3 < 0xfffffffe) { // [自动静态注释] 条件判断/分支
            uVar11 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              while( true ) { // [自动静态注释] 循环/迭代
                uVar21 = uVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                plVar27 = (long *)(lVar24 + uVar16 * 0x90 + uVar21 * 8 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar8 = (uint *)FUN__text__00527e90(*plVar27,plVar22[uVar11],plVar22[uVar21]); // [自动静态注释] 调用尚未恢复正式名称的函数
                if (puVar8 == (uint *)0x0) break; // [自动静态注释] 条件判断/分支
                pdVar12 = (double *)plVar22[uVar21]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar37 = *(undefined8 *)(*plVar27 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar28 = pdVar12[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                dVar43 = *(double *)(plVar22[uVar11] + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (puVar30[0x3e] != 0) { // [自动静态注释] 条件判断/分支
                  pdVar19 = (double *)(puVar30 + (ulong)(puVar30[0x3e] - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                uVar38 = *(undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (*(long *)(lVar24 + uVar16 * 0x90 + uVar11 * 8 + 0x40) + 0x78); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                local_a0 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                local_98 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                local_90 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (puVar8[0x3e] == 0) { // [自动静态注释] 条件判断/分支
                  local_b8 = *pdVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  local_b0 = pdVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  local_a8 = pdVar12[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar38 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar38); // [自动静态注释] 调用尚未恢复正式名称的函数
                  if ((ulong)dVar28 <= (ulong)dVar43) goto LAB__text__0052faa8; // [自动静态注释] 条件判断/分支
LAB__text__0052f9bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  uVar40 = puVar8[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (uVar40 != 0) { // [自动静态注释] 条件判断/分支
                    uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
                      pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } // [自动静态注释] 作用域/控制流边界
                    iVar14 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    dVar28 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    dVar43 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    dVar44 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    do { // [自动静态注释] 循环/迭代
                      uVar6 = uVar36 + uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      if (7 < uVar6) break; // [自动静态注释] 条件判断/分支
                      uVar40 = uVar40 + iVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      iVar14 = iVar14 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar46 = *(double *)(puVar8 + (ulong)uVar40 * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar45 = *(double *)(puVar8 + (ulong)uVar40 * 6 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar47 = *(double *)(puVar8 + (ulong)uVar40 * 6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(double *)(puVar30 + (ulong)uVar6 * 6 + 0xc) = dVar47;
                      *(double *)(puVar30 + (ulong)uVar6 * 6 + 8) = dVar46;
                      *(double *)(puVar30 + (ulong)uVar6 * 6 + 10) = dVar45;
                      uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      fVar41 = (float)puVar30[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      uVar40 = uVar15 + uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      uVar15 = uVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)uVar40 * 8 + 0x138) = uVar37;
                      puVar30[0x40] = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           (uint)(fVar41 + (float)SQRT((dVar46 - dVar44) * (dVar46 - dVar44) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                       (dVar45 - dVar43) * (dVar45 - dVar43) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                       (dVar47 - dVar28) * (dVar47 - dVar28))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      uVar40 = puVar8[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar28 = dVar47; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar43 = dVar45; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar44 = dVar46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } while (uVar15 < uVar40); // [自动静态注释] 循环/迭代
                  } // [自动静态注释] 作用域/控制流边界
                } // [自动静态注释] 作用域/控制流边界
                else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  if ((ulong)dVar43 < (ulong)dVar28) { // [自动静态注释] 条件判断/分支
                    uVar36 = puVar8[0x3e] - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    local_b8 = *(double *)(puVar8 + (ulong)uVar36 * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    local_b0 = *(double *)(puVar8 + (ulong)uVar36 * 6 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    local_a8 = *(double *)(puVar8 + (ulong)uVar36 * 6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar38 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar38); // [自动静态注释] 调用尚未恢复正式名称的函数
                    goto LAB__text__0052f9bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  } // [自动静态注释] 作用域/控制流边界
                  local_b8 = *(double *)(puVar8 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  local_b0 = *(double *)(puVar8 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  local_a8 = *(double *)(puVar8 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar38 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar38); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__0052faa8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (puVar8[0x3e] != 0) { // [自动静态注释] 条件判断/分支
                    uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pdVar19 = pdVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
                      pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } // [自动静态注释] 作用域/控制流边界
                    pdVar12 = (double *)(puVar8 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    dVar28 = pdVar19[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    dVar43 = pdVar19[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    dVar44 = *pdVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    do { // [自动静态注释] 循环/迭代
                      if (7 < (uint)(uVar11 + uVar36)) break; // [自动静态注释] 条件判断/分支
                      dVar46 = pdVar12[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar45 = pdVar12[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      uVar13 = uVar11 + uVar36 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar47 = *pdVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(double *)(puVar30 + uVar13 * 6 + 0xc) = dVar47;
                      *(double *)(puVar30 + uVar13 * 6 + 8) = dVar46;
                      *(double *)(puVar30 + uVar13 * 6 + 10) = dVar45;
                      fVar41 = (float)puVar30[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      uVar36 = puVar30[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      iVar14 = (int)uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      uVar11 = uVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(undefined8 *)
                       (lVar25 + uVar20 * 0x1e8 + (ulong)(iVar14 + uVar36) * 8 + 0x138) = uVar37; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      puVar30[0x40] = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           (uint)(fVar41 + (float)SQRT((dVar46 - dVar44) * (dVar46 - dVar44) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                       (dVar45 - dVar43) * (dVar45 - dVar43) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                       (dVar47 - dVar28) * (dVar47 - dVar28))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      pdVar12 = pdVar12 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar28 = dVar47; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar43 = dVar45; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      dVar44 = dVar46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } while (uVar11 < puVar8[0x3e]); // [自动静态注释] 循环/迭代
                  } // [自动静态注释] 作用域/控制流边界
                } // [自动静态注释] 作用域/控制流边界
                *(undefined8 *)(puVar30 + 0x38) = uVar38;
                *(double *)(puVar30 + 0x3a) = dVar26;
                *(double *)(puVar30 + 0x3c) = dVar33;
                uVar36 = puVar8[0x3e] + uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (7 < uVar36) { // [自动静态注释] 条件判断/分支
                  uVar36 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                puVar30[0x3e] = uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                fVar41 = (float)puVar8[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if ((float)puVar8[0x42] <= (float)puVar30[0x42]) { // [自动静态注释] 条件判断/分支
                  fVar41 = (float)puVar30[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                puVar30[0x42] = (uint)fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                fVar41 = (float)puVar8[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if ((float)puVar8[0x43] <= (float)puVar30[0x43]) { // [自动静态注释] 条件判断/分支
                  fVar41 = (float)puVar30[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                dVar26 = (double)(ulong)puVar30[0x44]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar30[0x43] = (uint)fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar36 = NEON_fminnm(puVar8[0x44],puVar30[0x44]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar30[0x44] = uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar36 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (uVar36 != 0) { // [自动静态注释] 条件判断/分支
                  if (*puVar30 != 0) { // [自动静态注释] 条件判断/分支
                    uVar36 = (((*puVar30 * 0x1000193 ^ uVar36 & 0xff) * 0x1000193 ^ // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              uVar36 >> 8 & 0xff) * 0x1000193 ^ uVar36 >> 0x10 & 0xff) * 0x1000193 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             uVar36 >> 0x18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  } // [自动静态注释] 作用域/控制流边界
                  *puVar30 = uVar36;
                } // [自动静态注释] 作用域/控制流边界
                uVar11 = uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (*puVar17 - 1 <= uVar21) goto LAB__text__0052f008; // [自动静态注释] 条件判断/分支
              } // [自动静态注释] 作用域/控制流边界
              local_e8 = (double)FUN__text__0052acf0(puVar30,&local_e8,plVar22[uVar21], // [自动静态注释] 调用尚未恢复正式名称的函数
                                                     *(undefined8 *)
                                                      (*(long *)(lVar24 + uVar16 * 0x90 + uVar11 * 8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                                + 0x40) + 0x78),plVar22[uVar11]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              uVar11 = uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_e0 = dVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_d8 = dVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar21 < *puVar17 - 1); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar21 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
LAB__text__0052f008: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__0052acf0(puVar30,&local_e8,&local_d0, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)
                               (*(long *)(lVar24 + uVar16 * 0x90 + (uVar21 & 0xffffffff) * 8 + 0x40) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               + 0x78),plVar22[uVar21 & 0xffffffff]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar42 = *pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar41 = (float)puVar30[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((float)puVar30[0x42] <= fVar42) { // [自动静态注释] 条件判断/分支
            fVar41 = fVar42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          puVar30[0x42] = (uint)fVar41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(double *)(puVar30 + 0x3a) = dStack_c8;
          *(double *)(puVar30 + 0x3c) = local_c0;
          *(undefined8 *)(puVar30 + 0x38) = local_d0;
          FUN__text__0052b470(0,0,puVar30,&local_100,param_11); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar14 = uVar36 + (uVar36 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar36 == 0) { // [自动静态注释] 条件判断/分支
            iVar14 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar36 = iVar14 + uVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar25 == 0) { // [自动静态注释] 条件判断/分支
            lVar25 = FUN__text__00400f90(9,(ulong)uVar36 * 0x1e8,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (lVar25 != 0) { // [自动静态注释] 条件判断/分支
              lVar9 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if ((lVar9 != 0) && (lVar9 != lVar25)) { // [自动静态注释] 条件判断/分支
                if (uVar40 != 0) { // [自动静态注释] 条件判断/分支
                  if (uVar40 == 1) { // [自动静态注释] 条件判断/分支
                    lVar34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    lVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    lVar34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    do { // [自动静态注释] 循环/迭代
                      puVar31 = (undefined4 *)(lVar25 + lVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *puVar31 = 0;
                      memset(puVar31 + 2,0,0x108); // [自动静态注释] 内存复制、清零或移动
                      puVar31[0x44] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x45) = 0;
                      *(undefined8 *)(puVar31 + 0x47) = 0;
                      *(undefined8 *)(puVar31 + 0x49) = 0;
                      *(undefined8 *)(puVar31 + 0x4b) = 0;
                      memcpy(puVar31,(void *)(*plVar1 + lVar9),0x1e8); // [自动静态注释] 内存复制、清零或移动
                      puVar31[0x7a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      memset(puVar31 + 0x7c,0,0x108); // [自动静态注释] 内存复制、清零或移动
                      puVar31[0xbe] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(undefined8 *)(puVar31 + 200) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xca) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xcc) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xce) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd0) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd2) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd4) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd6) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xda) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xdc) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xde) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe0) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe2) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe4) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe6) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xbf) = 0;
                      *(undefined8 *)(puVar31 + 0xc1) = 0;
                      *(undefined8 *)(puVar31 + 0xc3) = 0;
                      *(undefined8 *)(puVar31 + 0xc5) = 0;
                      memcpy(puVar31 + 0x7a,(void *)(*plVar1 + lVar9 + 0x1e8),0x1e8); // [自动静态注释] 内存复制、清零或移动
                      lVar9 = lVar9 + 0x3d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      lVar34 = lVar34 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } while ((ulong)(uVar40 >> 1) * 0x3d0 != lVar9); // [自动静态注释] 循环/迭代
                  } // [自动静态注释] 作用域/控制流边界
                  if ((uVar40 & 1) != 0) { // [自动静态注释] 条件判断/分支
                    puVar31 = (undefined4 *)(lVar25 + lVar34 * 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    *puVar31 = 0;
                    memset(puVar31 + 2,0,0x108); // [自动静态注释] 内存复制、清零或移动
                    puVar31[0x44] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x45) = 0;
                    *(undefined8 *)(puVar31 + 0x47) = 0;
                    *(undefined8 *)(puVar31 + 0x49) = 0;
                    *(undefined8 *)(puVar31 + 0x4b) = 0;
                    memcpy(puVar31,(void *)(*plVar1 + lVar34 * 0x1e8),0x1e8); // [自动静态注释] 内存复制、清零或移动
                  } // [自动静态注释] 作用域/控制流边界
                  lVar9 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                FUN__text__00400fc0(9,lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
              } // [自动静态注释] 作用域/控制流边界
              goto LAB__text__0052f314; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            lVar25 = FUN__text__00400fb0(9,lVar25,(ulong)uVar36 * 0x1e8,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (lVar25 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__0052f314: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              param_14[6] = lVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(uint *)((long)param_14 + 0x3c) = uVar36;
              if (uVar40 < uVar36) { // [自动静态注释] 条件判断/分支
                uVar40 = *(uint *)(param_14 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(uint *)(param_14 + 7) = uVar40 + 1;
                goto LAB__text__0052f334; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
LAB__text__0052f090: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        local_140 = local_140 + 0x46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_148 = local_148 + 0x23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (local_140 != // [自动静态注释] 循环/迭代
               (uint *)(*(long *)(lVar10 + 0x30) + (ulong)*(uint *)(lVar10 + 0x38) * 0x118)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
LAB__text__0052ef90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_160 = local_160 + 0x46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_198 = local_198 + 0x23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (local_160 != (uint *)(puVar23[7] + (ulong)(uint)puVar23[8] * 0x118)); // [自动静态注释] 循环/迭代
LAB__text__0052ecb4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar32 = lVar32 + 0x90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar16 = uVar16 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_8 + 1) <= uVar16) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_8 + 1) == 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((int)param_14[7] == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*param_14 + 0x10))(param_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined2 *)((long)param_14 + 0x29) = 0x100;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__0052eccc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


