/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005C43C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015c43c; name: FUN_.text__0015c43c
 */


void FUN__text__0015c43c(undefined8 param_1,char *param_2,undefined8 *param_3,char *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_c0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  sVar1 = strlen(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = (char *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar2 = strlen(__s); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar3 = strlen(param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __dest = acStack_c0 + (0x80 - (sVar1 + sVar3 + sVar2 + 0x10 & 0xfffffffffffffff0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *__dest = '\0';
  pcVar4 = strcat(__dest,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar4 = strcat(pcVar4,__s); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  strcat(pcVar4,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00109fd4(param_1,__dest); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


