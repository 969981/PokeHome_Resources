/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004830B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005830b8; name: FUN_.text__005830b8
 */


void FUN__text__005830b8(float param_1,float param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar1 = tanf((param_1 * 3.1415927) / param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = 1.0 / fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = fVar1 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = 1.0 / (fVar1 * 1.4142135 + 1.0 + fVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = fVar3;
  param_3[1] = fVar3 + fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[2] = fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[3] = fVar3 * (2.0 - (fVar2 + fVar2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[4] = fVar3 * ((1.0 - fVar1 * 1.4142135) + fVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


