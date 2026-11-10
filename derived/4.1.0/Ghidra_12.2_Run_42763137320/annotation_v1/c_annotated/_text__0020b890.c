/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0010B890
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020b890; name: FUN_.text__0020b890
 */


void FUN__text__0020b890(void *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  __src = (void *)FUN__text__00323c30(*(undefined4 *)(lVar1 + 0x202a28)); // [自动静态注释] 调用尚未恢复正式名称的函数
  memcpy(param_1,__src,0xa0); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


