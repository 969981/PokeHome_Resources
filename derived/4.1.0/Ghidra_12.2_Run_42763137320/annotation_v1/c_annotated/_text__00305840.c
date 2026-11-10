/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00205840
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305840; name: FUN_.text__00305840
 */


long FUN__text__00305840(int *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 1) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__00596670(param_1 + 4,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((((iVar1 == param_1[3]) && // [自动静态注释] 条件判断/分支
        (iVar1 = FUN__text__00596670(param_1 + 0xc,0x1c5200), iVar1 == param_1[4])) && // [自动静态注释] 调用尚未恢复正式名称的函数
       (iVar1 = FUN__text__00596670(param_1 + 0x7148c,0x1c5200), iVar1 == param_1[5])) && // [自动静态注释] 调用尚未恢复正式名称的函数
      ((iVar1 = FUN__text__00596670(param_1 + 0xe290c,0x1c5200), iVar1 == param_1[6] && // [自动静态注释] 调用尚未恢复正式名称的函数
       (iVar1 = FUN__text__00596670(param_1 + 0x153d8c,0x1c5200), iVar1 == param_1[7])))) && // [自动静态注释] 调用尚未恢复正式名称的函数
     ((iVar1 = FUN__text__00596670(param_1 + 0x1c520c,0xe2900), iVar1 == param_1[8] && // [自动静态注释] 调用尚未恢复正式名称的函数
      ((iVar1 = FUN__text__00596670(param_1 + 0x1fdc4c,&LAB__text__00148200), iVar1 == param_1[9] && // [自动静态注释] 调用尚未恢复正式名称的函数
       (iVar1 = FUN__text__00596670(param_1 + 0x24fccc,0x2a30), iVar1 == param_1[10])))))) { // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__00596670(param_1 + 0x250758,0x2a30); // [自动静态注释] 调用尚未恢复正式名称的函数
    return (ulong)(iVar1 != param_1[0xb]) << 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


