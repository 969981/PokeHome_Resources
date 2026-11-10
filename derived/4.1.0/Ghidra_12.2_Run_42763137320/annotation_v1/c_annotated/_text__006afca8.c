/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AFCA8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006afca8; name: FUN_.text__006afca8
 */


void FUN__text__006afca8(long param_1,long param_2,undefined8 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_5,undefined4 *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar32; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar33; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(*(long *)(param_2 + 200) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    __s = (void *)(lVar4 + (ulong)*(uint *)(param_1 + 0x34)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  memset(__s,0,0x220); // [自动静态注释] 内存复制、清零或移动
  *(undefined4 *)((long)__s + 4) = *param_5;
  *(undefined4 *)((long)__s + 8) = param_5[1];
  if (param_6 != (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)__s + 0xc) = *param_6;
    *(undefined4 *)((long)__s + 0x11c) = param_6[1];
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__006affa0(param_1,__s); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar14 = (float)*(undefined8 *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)*(undefined8 *)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)*(undefined8 *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = (float)*(undefined8 *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar28 = -fVar5 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = (float)*(undefined8 *)(param_2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar30 = -fVar14 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar26 = -fVar11 * fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = (float)*(undefined8 *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar22 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar33 = fVar16 * fVar13 * fVar5 + fVar14 * fVar12 * fVar9 + fVar11 * fVar17 * fVar8 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           fVar28 * fVar17 + fVar26 * fVar9 + fVar30 * fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (fVar33 != 0.0) { // [自动静态注释] 条件判断/分支
    fVar22 = 1.0 / fVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar35 = -(fVar16 * fVar9) + fVar17 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar23 = fVar17 * -fVar5 + fVar9 * fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar30 = fVar30 + fVar16 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar21 = (-(fVar8 * fVar13) + fVar9 * fVar12) * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar28 = (fVar28 + fVar8 * fVar11) * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar33 = (fVar9 * -fVar11 + fVar13 * fVar5) * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar29 = (-(fVar12 * fVar17) + fVar13 * fVar16) * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar25 = (fVar13 * -fVar14 + fVar17 * fVar11) * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar27 = (fVar26 + fVar12 * fVar14) * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar34 = fVar35 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar24 = fVar23 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar26 = fVar30 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar18 = *(undefined8 *)(param_2 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar15 = *(undefined8 *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar20 = *(undefined8 *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = *(undefined8 *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar35 = (-(fVar35 * fVar22) * fVar8 - fVar21 * fVar9) - fVar29 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar23 = (-(fVar23 * fVar22) * fVar8 - fVar33 * fVar9) - fVar25 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = (-(fVar30 * fVar22) * fVar8 - fVar28 * fVar9) - fVar27 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined8 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = (float)uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = (float)((ulong)uVar15 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = (float)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = (float)((ulong)uVar18 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar22 = (float)uVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar30 = (float)((ulong)uVar19 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar31 = (float)uVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar32 = (float)((ulong)uVar20 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)((ulong)uVar7 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = (float)((ulong)uVar10 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)__s + 0x88) = uVar18;
  *(undefined8 *)((long)__s + 0x80) = uVar15;
  *(undefined8 *)((long)__s + 0x98) = uVar20;
  *(undefined8 *)((long)__s + 0x90) = uVar19;
  *(undefined8 *)((long)__s + 0xa8) = uVar10;
  *(undefined8 *)((long)__s + 0xa0) = uVar7;
  *(ulong *)((long)__s + 0xb8) =
       CONCAT44(fVar35 + fVar17 * fVar21 + fVar32 * fVar34 + fVar11 * fVar29, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar16 * fVar21 + fVar31 * fVar34 + fVar9 * fVar29 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)((long)__s + 0xb0) =
       CONCAT44(fVar14 * fVar21 + fVar30 * fVar34 + fVar8 * fVar29 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar13 * fVar21 + fVar22 * fVar34 + fVar5 * fVar29 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)((long)__s + 200) =
       CONCAT44(fVar23 + fVar17 * fVar33 + fVar32 * fVar24 + fVar11 * fVar25, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar16 * fVar33 + fVar31 * fVar24 + fVar9 * fVar25 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)((long)__s + 0xc0) =
       CONCAT44(fVar14 * fVar33 + fVar30 * fVar24 + fVar8 * fVar25 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar13 * fVar33 + fVar22 * fVar24 + fVar5 * fVar25 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)((long)__s + 0xd8) =
       CONCAT44(fVar12 + fVar17 * fVar28 + fVar32 * fVar26 + fVar11 * fVar27, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar16 * fVar28 + fVar31 * fVar26 + fVar9 * fVar27 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)((long)__s + 0xd0) =
       CONCAT44(fVar14 * fVar28 + fVar30 * fVar26 + fVar8 * fVar27 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar13 * fVar28 + fVar22 * fVar26 + fVar5 * fVar27 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar20 = *(undefined8 *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = *(undefined8 *)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined8 *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar18 = *(undefined8 *)(param_2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar15 = *(undefined8 *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)((long)__s + 0x110) = CONCAT44(fVar23,fVar35);
  *(float *)((long)__s + 0x118) = fVar12;
  *(undefined8 *)((long)__s + 0x108) = uVar20;
  *(undefined8 *)((long)__s + 0x100) = uVar19;
  *(undefined8 *)((long)__s + 0xe8) = uVar10;
  *(undefined8 *)((long)__s + 0xe0) = uVar7;
  *(undefined8 *)((long)__s + 0xf8) = uVar18;
  *(undefined8 *)((long)__s + 0xf0) = uVar15;
  FUN__text__006b0140(uVar1,__s,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = *(uint *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 & 3) != 0) { // [自动静态注释] 条件判断/分支
    plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x20))(&local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = NEON_ucvtf(local_34 & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)__s + 0x1f0) = uVar6;
      uVar6 = NEON_ucvtf(local_34 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)__s + 500) = uVar6;
      uVar3 = *(uint *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar3 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar2 + 0x20))(&local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar6 = NEON_ucvtf(local_34 & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)((long)__s + 0x200) = uVar6;
        uVar6 = NEON_ucvtf(local_34 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)((long)__s + 0x204) = uVar6;
        uVar3 = *(uint *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((((uVar3 ^ 0xffffffff) & 3) == 0) && // [自动静态注释] 条件判断/分支
         (plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x28), plVar2 != (long *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar2 + 0x20))(&local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar6 = NEON_ucvtf(local_34 & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)((long)__s + 0x210) = uVar6;
        uVar6 = NEON_ucvtf(local_34 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)((long)__s + 0x214) = uVar6;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


