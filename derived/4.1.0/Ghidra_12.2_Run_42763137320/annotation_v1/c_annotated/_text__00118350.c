/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00018350
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00118350; name: FUN_.text__00118350
 */


void FUN__text__00118350(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__005d84b0(uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar1 == 2) && (FUN__text__005d84d4(&local_8,uVar2), local_8 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    if (((char)local_8[0x10] != '\0') && ((**(code **)(*local_8 + 0x78))(), local_8 == (long *)0x0)) // [自动静态注释] 条件判断/分支
    { // [自动静态注释] 作用域/控制流边界
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(local_8[9] + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


