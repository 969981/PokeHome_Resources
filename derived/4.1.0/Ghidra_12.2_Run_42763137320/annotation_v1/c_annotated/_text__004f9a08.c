/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F9A08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9a08; name: FUN_.text__004f9a08
 */


undefined8 FUN__text__004f9a08(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x290)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             (param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                              *(byte *)(param_2 + 0x310) >> 2 & 1);
  if (plVar1 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar1 + 0x80))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_2c = **(undefined4 **)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = (*(undefined4 **)(param_2 + 0x18))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24 = FUN__text__004f5ed0(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__004ebee4(plVar1,&local_2c); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


