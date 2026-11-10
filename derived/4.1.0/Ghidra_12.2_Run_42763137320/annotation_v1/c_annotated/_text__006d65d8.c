/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D65D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d65d8; name: FUN_.text__006d65d8
 */


long FUN__text__006d65d8(long param_1,int param_2,int param_3,int param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  return *(long *)(param_1 + 0x260) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         (long)(param_2 * 0xc + param_3 * 4 + param_4 + param_5 * 2) * 8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


