/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001201A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002201a4; name: FUN_.text__002201a4
 */


void FUN__text__002201a4(long param_1,undefined8 *param_2,undefined1 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_27 = 0x1010001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_30 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x640) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar1 + 8))(plVar1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0xf0),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


