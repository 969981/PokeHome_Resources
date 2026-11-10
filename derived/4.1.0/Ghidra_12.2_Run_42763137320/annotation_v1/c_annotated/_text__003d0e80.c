/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D0E80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d0e80; name: FUN_.text__003d0e80
 */


void FUN__text__003d0e80(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003c4944(&local_8,*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x170) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x170) = local_8;
  FUN__text__003e705c(local_8,param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e716c(*(undefined8 *)(param_1 + 0x170)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


