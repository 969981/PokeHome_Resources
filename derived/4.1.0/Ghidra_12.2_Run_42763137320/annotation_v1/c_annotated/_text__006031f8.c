/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005031F8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006031f8; name: FUN_.text__006031f8
 */


bool FUN__text__006031f8(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  param_1 = param_1 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xfb < param_1) { // [自动静态注释] 条件判断/分支
    if (param_1 - 0x115 < 0x87) { // [自动静态注释] 条件判断/分支
      param_1 = *(uint *)(&DAT_00759044 + (ulong)(param_1 - 0x115) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return ((param_1 == 0x182 || param_1 - 0xf9 < 2) || (param_1 & 0xfffffffe) == 0x17c) || // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         param_1 == 0x97; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


