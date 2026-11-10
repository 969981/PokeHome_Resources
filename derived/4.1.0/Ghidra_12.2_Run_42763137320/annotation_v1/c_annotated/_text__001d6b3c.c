/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D6B3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d6b3c; name: FUN_.text__001d6b3c
 */


undefined8 FUN__text__001d6b3c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__001db410(*(undefined8 *)(param_1 + 0x6d0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(**(long **)(param_1 + 0x6b0) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__001d8bac(*(undefined8 *)(param_1 + 0x690)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__001dc710(*(undefined8 *)(param_1 + 0x6d0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 - 1U < 4) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)((long)(int)(iVar1 - 1U) * 4 + 0x7249e0);
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


