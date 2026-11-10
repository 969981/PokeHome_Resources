/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034A450
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a450; name: FUN_.text__0044a450
 */


void FUN__text__0044a450(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0043d9f0(param_1 + 0x68,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004471ec(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


