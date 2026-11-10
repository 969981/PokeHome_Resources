/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00280B98
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00380b98; name: FUN_.text__00380b98
 */


undefined8 FUN__text__00380b98(long param_1,void *param_2,size_t param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  memcpy(param_2,(void *)(*(long *)(param_1 + 8) + param_4),param_3); // [自动静态注释] 内存复制、清零或移动
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


