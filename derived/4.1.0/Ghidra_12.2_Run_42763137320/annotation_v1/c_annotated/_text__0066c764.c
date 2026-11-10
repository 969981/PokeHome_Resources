/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056C764
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c764; name: FUN_.text__0066c764
 */


long FUN__text__0066c764(long *param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  sVar2 = strlen(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = *(long **)(*param_1 + 0x808); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = FUN__text__0066c2d8(*plVar3,param_2,sVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((iVar1 != 0) && ((*(byte *)(*plVar3 + sVar2) & 0xfe) == 0x3a)) break; // [自动静态注释] 条件判断/分支
    plVar3 = (long *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return *plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


