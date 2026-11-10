/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056C474
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c474; name: FUN_.text__0066c474
 */


char * FUN__text__0066c474(int param_1,char *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = __errno_location(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __n = param_3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = '\0';
  pcVar3 = strerror(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 == (char *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__006599c0(param_2,__n,0x71a561,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    strncpy(param_2,pcVar3,__n); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_2[__n] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar3 = strrchr(param_2,10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)param_2)) { // [自动静态注释] 条件判断/分支
    *pcVar3 = '\0';
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = strrchr(param_2,0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)param_2)) { // [自动静态注释] 条件判断/分支
    *pcVar3 = '\0';
  } // [自动静态注释] 作用域/控制流边界
  if (*piVar2 != iVar1) { // [自动静态注释] 条件判断/分支
    *piVar2 = iVar1;
  } // [自动静态注释] 作用域/控制流边界
  return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


