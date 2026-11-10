/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：ToPosixTime
 * 用途/行为：Ghidra 保留符号名称 ToPosixTime；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: 006f7860; name: ToPosixTime
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void nn::time::ToPosixTime // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (int *param_1,PosixTime *param_2,int param_3,CalendarTime *param_4, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               TimeZoneRule *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  (*(code *)PTR_ToPosixTime_008a8b98)(param_1,param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


