/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00205C44
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305c44; name: FUN_.text__00305c44
 */


void FUN__text__00305c44(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  memset((void *)(param_1 + 8),0xff,0x466); // [自动静态注释] 内存复制、清零或移动
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 9000;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


