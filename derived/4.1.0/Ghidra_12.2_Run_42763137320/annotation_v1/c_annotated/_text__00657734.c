/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00557734
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657734; name: FUN_.text__00657734
 */


size_t FUN__text__00657734(void *param_1,size_t param_2,size_t param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FILE *__stream; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __stream = *(FILE **)(param_4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__stream == (FILE *)0x0) { // [自动静态注释] 条件判断/分支
    __stream = fopen(*(char **)(param_4 + 0x20),(char *)0x7154b5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(FILE **)(param_4 + 0x48) = __stream;
    if (__stream == (FILE *)0x0) { // [自动静态注释] 条件判断/分支
      return 0xffffffffffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  sVar1 = fread(param_1,param_2,param_3,__stream); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return sVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


