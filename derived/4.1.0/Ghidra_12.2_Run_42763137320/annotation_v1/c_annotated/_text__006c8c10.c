/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C8C10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c8c10; name: FUN_.text__006c8c10
 */


undefined1  [16] FUN__text__006c8c10(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar2 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return *(undefined1 (*) [16])(param_1 + 0x70); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar10 = (float)*(undefined8 *)(lVar1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = (float)*(undefined8 *)(lVar1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = (float)*(undefined8 *)(lVar1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = (float)*(undefined8 *)(lVar1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar4 * fVar3 * fVar12 + fVar10 * fVar8 * fVar7 + fVar11 * fVar5 * fVar6 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           -fVar12 * fVar8 * fVar5 + -fVar11 * fVar4 * fVar7 + -fVar10 * fVar6 * fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (fVar11 != 0.0) { // [自动静态注释] 条件判断/分支
    fVar9 = 1.0 / fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar12 = -(fVar4 * fVar7) + fVar5 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = (-(fVar6 * fVar3) + fVar7 * fVar8) * fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (-(fVar8 * fVar5) + fVar3 * fVar4) * fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar12 * fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x70) * fVar10 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (float)*(undefined8 *)(param_1 + 0x80) * fVar11 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 (float)*(undefined8 *)(param_1 + 0x90) * fVar8 + 0.0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar10 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * fVar11 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * fVar8 + 0.0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 0x78) * fVar10 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (float)*(undefined8 *)(param_1 + 0x88) * fVar11 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 (float)*(undefined8 *)(param_1 + 0x98) * fVar8 + 0.0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar2._12_4_ = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       ((-(fVar12 * fVar9) * (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20) - // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar10 * (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20)) - // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       fVar8 * (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20)) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar10 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar11 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return auVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


