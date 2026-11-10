/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043C6A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053c6a0; name: FUN_.text__0053c6a0
 */


undefined1  [16] FUN__text__0053c6a0(long param_1,long param_2,double *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar2 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48)) { // [自动静态注释] 条件判断/分支
    fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x14) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x18) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x20) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x14);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar1 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar1 = *(float *)(param_2 + 0x38) * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_2 + 0x3c) * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(param_2 + 0x40) * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = *(float *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = fVar5 * fVar1 + fVar4 * fVar9 + fVar8 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar11 * fVar11 - (fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (fVar9 * fVar8 - fVar10 * fVar4) * fVar11 + fVar5 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar6 + fVar6 + fVar1 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (fVar10 * fVar1 - fVar8 * fVar5) * fVar11 + fVar9 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar6 + fVar6 + fVar4 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = (fVar5 * fVar4 - fVar9 * fVar1) * fVar11 + fVar10 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar1 + fVar1 + fVar8 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar1 == 0.0) { // [自动静态注释] 条件判断/分支
    auVar3._0_8_ = *param_3 + 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar3._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return auVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  auVar2._0_8_ = *param_3 + (double)(fVar7 * 0.0001 * (1.0 / fVar1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar2._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


