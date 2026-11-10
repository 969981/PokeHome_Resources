/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056307C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066307c; name: FUN_.text__0066307c
 */


long FUN__text__0066307c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((code *)param_5[0xb6] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    lVar1 = (*(code *)param_5[0xb6])(param_5,0,param_2,param_3,&local_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((local_4 == 0x51) || (lVar1 == 0)) { // [自动静态注释] 条件判断/分支
      return -0x1f8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (lVar1 != -1) { // [自动静态注释] 条件判断/分支
      return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0066713c(*param_5,0x7162d2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return -0x386; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


