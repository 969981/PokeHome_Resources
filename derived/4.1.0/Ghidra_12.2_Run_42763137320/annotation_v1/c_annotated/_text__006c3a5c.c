/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C3A5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c3a5c; name: FUN_.text__006c3a5c
 */


long FUN__text__006c3a5c(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_1 + 0x50))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return param_1[0x23]; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)((long)param_1 + 0x109) < param_2) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return *(long *)(param_1[0x22] + (ulong)(param_2 - 1) * 0x10 + 8); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


