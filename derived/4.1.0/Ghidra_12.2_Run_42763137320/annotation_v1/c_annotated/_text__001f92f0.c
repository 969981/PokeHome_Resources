/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000F92F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f92f0; name: FUN_.text__001f92f0
 */


void FUN__text__001f92f0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if (4 < *(uint *)(param_1 + 0x78)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not emulate address calculation at 0x001f9318 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__001f9328 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x78) + 0x726f10) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


