/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FD06C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd06c; name: FUN_.text__005fd06c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fd06c(undefined8 *param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*_DAT_008a0488 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__005fd784(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


