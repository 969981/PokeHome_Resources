/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005799D4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006799d4; name: FUN_.text__006799d4
 */


void FUN__text__006799d4(byte *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  for (; param_2 != 0; param_2 = param_2 + -1) { // [自动静态注释] 循环/迭代
    *param_1 = *(byte *)((ulong)*param_1 + 0x760f68);
    param_1 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


