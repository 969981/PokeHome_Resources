/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056F970
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066f970; name: FUN_.text__0066f970
 */


char * FUN__text__0066f970(char *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar1 = strstr(param_1,(char *)0x71f664); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar1 != (char *)0x0) { // [自动静态注释] 条件判断/分支
    pcVar2 = pcVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  pcVar1 = strchr(pcVar2,0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = strchr(pcVar2,0x2f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 == (char *)0x0) { // [自动静态注释] 条件判断/分支
    sVar3 = strlen(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar2 = param_1 + sVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pcVar1 == (char *)0x0) { // [自动静态注释] 条件判断/分支
    sVar3 = strlen(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar1 = param_1 + sVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pcVar1 <= pcVar2) { // [自动静态注释] 条件判断/分支
    pcVar2 = pcVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return pcVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


