/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FD36C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd36c; name: FUN_.text__004fd36c
 */


undefined8 FUN__text__004fd36c(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = (undefined1 *)&local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(param_1 + 0x5a) & 0xe) != 0 || *(long *)(param_1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  uVar1 = FUN__text__004fb000(); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = (long *)FUN__text__004fb0ac(param_1,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((local_28 != (long *)0x0) && // [自动静态注释] 条件判断/分支
     (FUN__text__004fb1a0(param_1,uVar1,&local_38,&local_28), local_28 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*local_28 + 0x80))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


