/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00561900
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661900; name: FUN_.text__00661900
 */


void FUN__text__00661900(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar3 = *(char **)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = strncmp(pcVar3,(char *)0x70f1da,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((iVar1 != 0) || (pcVar3 = strchr(pcVar3,0x20), pcVar3 == (char *)0x0)) || // [自动静态注释] 条件判断/分支
     (pcVar3 = pcVar3 + 1, *pcVar3 == '\0')) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00661930: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0066713c(param_1,0x71ea53,*(undefined4 *)(param_1 + 0x180)); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  cVar4 = '\r'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = strchr(pcVar3,0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 == (char *)0x0) { // [自动静态注释] 条件判断/分支
    cVar4 = '\n'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar2 = strchr(pcVar3,10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar2 == (char *)0x0) goto LAB__text__00661930; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  *pcVar2 = '\0';
  FUN__text__0066713c(param_1,0x70f207,pcVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *pcVar2 = cVar4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


