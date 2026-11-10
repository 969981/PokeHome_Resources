/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00556DDC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656ddc; name: FUN_.text__00656ddc
 */


void FUN__text__00656ddc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00656e2c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0) { // [自动静态注释] 循环/迭代
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    FUN__text__00656d18(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006783e4(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006783e4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


