/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E400C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e400c; name: FUN_.text__004e400c
 */


void FUN__text__004e400c(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *param_1 = 0x88f030;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined2 *)((long)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


