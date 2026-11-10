/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056C3BC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c3bc; name: FUN_.text__0066c3bc
 */


void * FUN__text__0066c3bc(void *param_1,size_t param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __dest = (void *)FUN__text__006783d4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (__dest != (void *)0x0) { // [自动静态注释] 条件判断/分支
    memcpy(__dest,param_1,param_2); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  return __dest; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


