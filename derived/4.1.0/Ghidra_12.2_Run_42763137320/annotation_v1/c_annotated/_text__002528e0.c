/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001528E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002528e0; name: FUN_.text__002528e0
 */


void FUN__text__002528e0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = 0x753f74378b49da9c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0x7167d4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0024e9c0(*(undefined8 *)(param_1 + 0x60),&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00252950(uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


