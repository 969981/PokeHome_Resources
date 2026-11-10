/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421144
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521144; name: FUN_.text__00521144
 */


float FUN__text__00521144(undefined1 param_1 [16],double param_2,double param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                         double *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  dVar2 = (double)FUN__text__00520f94(); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar1 = SQRT((float)(dVar2 - *param_5) * (float)(dVar2 - *param_5) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (float)(param_2 - param_5[1]) * (float)(param_2 - param_5[1]) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (float)(param_3 - param_5[2]) * (float)(param_3 - param_5[2])); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (fVar1 == 0.0) { // [自动静态注释] 条件判断/分支
    return 3.1415927; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar1 = atanf(SQRT(*(float *)(param_4 + 0x3c) * 1.2732395 * *(float *)(param_4 + 0x40)) / fVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return fVar1 + fVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


