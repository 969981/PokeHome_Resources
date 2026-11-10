/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044D4AC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054d4ac; name: FUN_.text__0054d4ac
 */


void FUN__text__0054d4ac(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if (*(void **)(param_1 + 0x10) != (void *)0x0) { // [自动静态注释] 条件判断/分支
    memset(*(void **)(param_1 + 0x10),0,(ulong)(uint)(*(int *)(param_1 + 8) << 2)); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x18) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


