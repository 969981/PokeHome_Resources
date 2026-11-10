/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002DD89C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dd89c; name: FUN_.text__003dd89c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003dd89c(long *param_1,undefined1 (*param_2) [16]) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar2 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar6 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar14 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    return 0x72; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar10 = *(ulong *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar10 < 0x201) { // [自动静态注释] 条件判断/分支
    uVar10 = 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  pvVar7 = operator_new__(uVar10,_DAT_008a37f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pvVar7 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    puVar8 = operator_new(0xb0,_DAT_008a37f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar8 != (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar8[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = uRam0000000000724788; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = _DAT_00724780; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar8 + 0x26) = 0x101;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 0x14) = 0;
      *(undefined8 *)(puVar8 + 0x1a) = 0;
      *(undefined8 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)(puVar8 + 0x1e) = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0xc) = uVar15;
      *(undefined8 *)(puVar8 + 10) = uVar13;
      uVar13 = _DAT_00724ca0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = *(ulong *)(param_2[1] + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar12 < 5) { // [自动静态注释] 条件判断/分支
        uVar12 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(puVar8 + 0x10) = uRam0000000000724ca8;
      *(undefined8 *)(puVar8 + 0xe) = uVar13;
      uVar4 = *(ulong *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(ulong *)(*param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar6 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar8 + 0x22) = 0;
      *(undefined8 *)(puVar8 + 0x24) = 0;
      *(undefined8 *)(puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0x884fb0;
      uVar11 = uVar12 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar12 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
        uVar11 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x2a) = 0;
      puVar9 = operator_new__(uVar11,_DAT_008a37f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar9 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 5) = 0;
        auVar14._8_8_ = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auVar14._0_8_ = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[3] = (long)pvVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        *(ulong *)(puVar8 + 0xe) = uVar10;
        *(ulong *)(puVar8 + 0x10) = uVar12;
        pcVar1 = _DAT_008a37f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = -(ulong)(0x10 < uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auVar2._8_4_ = (int)lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auVar2._0_8_ = -(ulong)(0x10 < uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auVar2._12_4_ = (int)((ulong)lVar3 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auVar14 = auVar14 ^ (auVar14 ^ auVar6) & auVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = *(ulong *)(param_2[2] + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar15 = *(undefined8 *)param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar13 = *(undefined8 *)param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar9 = 0;
        *puVar8 = 0;
        *(undefined8 *)(puVar8 + 2) = 0;
        *(undefined8 **)(puVar8 + 4) = puVar9;
        *param_1 = (long)puVar8;
        *(long *)(puVar8 + 0xc) = auVar14._8_8_;
        *(long *)(puVar8 + 10) = auVar14._0_8_;
        *(undefined8 *)(puVar8 + 0x16) = uVar13;
        *(ulong *)(puVar8 + 0x14) = uVar10;
        *(undefined8 *)(puVar8 + 0x12) = uVar15;
        if ((uVar10 & 0x200000000) != 0) { // [自动静态注释] 条件判断/分支
          pcVar1 = FUN__text__003dda60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)(puVar8 + 6) = 0;
        *(code **)(puVar8 + 8) = pcVar1;
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      operator_delete(puVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    operator_delete__(pvVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0xc; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


