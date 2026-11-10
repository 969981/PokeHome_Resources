/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009694C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019694c; name: FUN_.text__0019694c
 */


bool FUN__text__0019694c(float param_1,float *param_2,float *param_3,float *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = fVar3 - param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar2 - *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = fVar6 <= param_1 * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar6 > 0.0001 && !bVar1) { // [自动静态注释] 条件判断/分支
    fVar2 = *param_3 + param_1 * (fVar5 / SQRT(fVar6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = param_3[1] + param_1 * (fVar4 / SQRT(fVar6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = fVar2;
  param_2[1] = fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return fVar6 <= 0.0001 || bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


