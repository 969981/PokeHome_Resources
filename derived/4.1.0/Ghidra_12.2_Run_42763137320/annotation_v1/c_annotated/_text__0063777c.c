/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0053777C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063777c; name: FUN_.text__0063777c
 */


uint FUN__text__0063777c(void *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_188 [32]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_168 [328]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memcpy(auStack_168,param_1,0x148); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00641210(auStack_188); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00641254(auStack_188,auStack_168,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__00641264(auStack_188); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0064122c(auStack_188); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


