/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D7A6C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7a6c; name: FUN_.text__006d7a6c
 */


undefined8 FUN__text__006d7a6c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d7980(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006d7980(param_1,*(undefined8 *)(param_1 + 0x150)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(code **)(param_1 + 0x248) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_30 = *(undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lStack_28 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(param_1 + 0x248))(&local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x248) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


