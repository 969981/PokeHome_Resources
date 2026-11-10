/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D5480
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5480; name: FUN_.text__005d5480
 */


void FUN__text__005d5480(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x1f0) != '\0') { // [自动静态注释] 条件判断/分支
    thunk_FUN__text__005cf1b0(&local_8,param_1 + 0x180); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x178) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x178) = local_8;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


