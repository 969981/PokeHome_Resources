/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00381048
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00481048; name: FUN_.text__00481048
 */


float FUN__text__00481048(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x98) == 0) { // [自动静态注释] 条件判断/分支
    return *(float *)(param_2 + 0x30) / *(float *)(param_2 + 0x60); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar2 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) / *(float *)(param_2 + 0x60); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


