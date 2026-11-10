/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DA80C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da80c; name: FUN_.text__004da80c
 */


void FUN__text__004da80c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0xc4) = 0;
  if (*(long *)(param_1 + 0xb0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0041edb0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0x2b;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0xd4) = 0x1ffffffff;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


