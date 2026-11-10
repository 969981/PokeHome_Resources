/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00416FE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00516fe8; name: FUN_.text__00516fe8
 */


bool FUN__text__00516fe8(long param_1,float *param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  
  fVar3 = *(float *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = *(float *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = fVar2 * *(float *)(param_1 + 0x20) - fVar3 * *(float *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar8 * *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c) * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(param_1 + 0x1c) * fVar3 - fVar8 * *(float *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = param_2[1] - *(float *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = param_2[2] - *(float *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *param_2 - *(float *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = fVar6 * fVar8 + fVar7 * fVar3 + fVar11 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar6 - fVar8 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar7 - fVar3 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar11 - fVar2 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = param_3[1] - *(float *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *param_3 - *(float *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = param_3[2] - *(float *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar9 * fVar8 + fVar3 * fVar10 + fVar2 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = fVar9 - fVar8 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = fVar10 - fVar3 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = fVar12 - fVar2 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return (-(fVar11 * fVar5) - (fVar6 * fVar4 + fVar1 * fVar7)) / // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11) <= // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (fVar9 * fVar4 + fVar1 * fVar10 + fVar5 * fVar12) / // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12) + 1.1920929e-07; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


