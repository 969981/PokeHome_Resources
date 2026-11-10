/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038B510
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048b510; name: FUN_.text__0048b510
 */


void FUN__text__0048b510(float param_1,float param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = param_2 * -1.2 + 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0.5 <= param_2) { // [自动静态注释] 条件判断/分支
    fVar2 = 0.8 - param_2 * 0.8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar1 = 1.0 - fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[4] = SQRT(fVar2 * param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = SQRT(fVar1 * (0.6666667 - param_1 * 0.6666667));
  param_3[1] = SQRT(fVar1 * param_1 * 0.6666667); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[2] = SQRT(fVar1 * 0.33333334); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[3] = SQRT(fVar2 - fVar2 * param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


