/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：operator.new
 * 用途/行为：Ghidra 保留符号名称 operator.new；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001006c0; name: operator.new
 */


/* operator new(unsigned long) */

void * operator_new(ulong param_1) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  pvVar2 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,param_1,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005f5500(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return pvVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


