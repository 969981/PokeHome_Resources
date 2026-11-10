/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00559CA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659ca8; name: FUN_.text__00659ca8
 */


long FUN__text__00659ca8(undefined1 *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = FUN__text__00656830(*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
    iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar1 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pcVar4 = pcVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = (uint)(byte)pcVar4[-1] + iVar2 * 10 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = FUN__text__00656830(*pcVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar1 = pcVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar3 != 0); // [自动静态注释] 循环/迭代
    if ((iVar2 != 0) && (*pcVar4 == '$')) { // [自动静态注释] 条件判断/分支
      *param_2 = pcVar4 + 1;
      return (long)iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


