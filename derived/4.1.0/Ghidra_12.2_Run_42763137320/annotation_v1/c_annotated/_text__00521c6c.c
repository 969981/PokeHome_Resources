/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421C6C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521c6c; name: FUN_.text__00521c6c
 */


bool FUN__text__00521c6c(double param_1,double param_2,double param_3,double *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = (float)(param_1 - *param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)(param_2 - param_4[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = (float)(param_3 - param_4[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(float *)((long)param_4 + 0x3c) < // [自动静态注释] 条件判断/分支
      ABS(*(float *)(param_4 + 3) * fVar2 + fVar3 * *(float *)((long)param_4 + 0x1c) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar1 * *(float *)(param_4 + 4))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(float *)(param_4 + 8) < // [自动静态注释] 条件判断/分支
      ABS(*(float *)((long)param_4 + 0x24) * fVar2 + fVar3 * *(float *)(param_4 + 5) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar1 * *(float *)((long)param_4 + 0x2c))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return ABS(*(float *)(param_4 + 6) * fVar2 + fVar3 * *(float *)((long)param_4 + 0x34) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
             fVar1 * *(float *)(param_4 + 7)) <= *(float *)((long)param_4 + 0x44); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


