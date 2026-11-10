/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0002FDE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012fde8; name: FUN_.text__0012fde8
 */


void FUN__text__0012fde8(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 8) = param_2;
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(DAT_008e1518 + 0x48);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


