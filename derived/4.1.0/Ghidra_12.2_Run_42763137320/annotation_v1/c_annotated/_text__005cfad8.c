/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CFAD8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cfad8; name: FUN_.text__005cfad8
 */


undefined4 FUN__text__005cfad8(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (**(code **)(*param_1 + 0x48))(&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1[0x32] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x32] = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005d8e38(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005d8f14(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005cfb60(param_1[0x33],param_1[0x34]); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


