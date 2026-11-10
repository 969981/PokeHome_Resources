/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00492190
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00592190; name: FUN_.text__00592190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00592190(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004e506c(_DAT_008a4fc0,*(undefined4 *)(param_1 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x68) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0xa8) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0xa8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004dd8a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


