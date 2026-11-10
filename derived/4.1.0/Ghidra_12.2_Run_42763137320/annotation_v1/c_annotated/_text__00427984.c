/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00327984
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00427984; name: FUN_.text__00427984
 */


void FUN__text__00427984(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar1 = *(undefined8 **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar1)(puVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(5,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xb8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if ((*(long *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0xdc) >> 3 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x10) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 200) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004af200(param_1 + 0xa0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00426760(param_1 + 0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


