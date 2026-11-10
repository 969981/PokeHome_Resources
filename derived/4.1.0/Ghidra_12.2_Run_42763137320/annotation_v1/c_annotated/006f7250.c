/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：asinf
 * 用途/行为：Ghidra 保留符号名称 asinf；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: 006f7250; name: asinf
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float asinf(float __x) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar1 = (float)(*(code *)PTR_asinf_008a8890)(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return fVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


