/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D7810
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7810; name: FUN_.text__003d7810
 */


void FUN__text__003d7810(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined8 *)FUN__text__003da760(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *puVar1 = 0x884ea8;
  if (puVar1[1] != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003d7520(puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((void *)puVar1[1] != (void *)0x0) { // [自动静态注释] 条件判断/分支
      operator_delete((void *)puVar1[1]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  operator_delete(puVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


