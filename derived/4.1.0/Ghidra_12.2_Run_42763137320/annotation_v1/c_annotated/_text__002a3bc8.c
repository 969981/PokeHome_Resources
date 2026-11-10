/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A3BC8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a3bc8; name: FUN_.text__002a3bc8
 */


void FUN__text__002a3bc8(long param_1,uint param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if ((param_2 < 0x28) && (param_3 < 0x1e)) { // [自动静态注释] 条件判断/分支
    FUN__text__006377dc(param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x54, // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_4 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


