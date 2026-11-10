/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00567A8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667a8c; name: FUN_.text__00667a8c
 */


undefined8 FUN__text__00667a8c(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = *(uint **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 == (uint *)0x0) { // [自动静态注释] 条件判断/分支
    return 3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (((*puVar1 >> (ulong)(param_2 & 0x1f) & 1) == 0) || (*(code **)(puVar1 + 4) == (code *)0x0)) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


