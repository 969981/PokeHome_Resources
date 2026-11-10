/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0010BEEC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020beec; name: FUN_.text__0020beec
 */


long FUN__text__0020beec(long param_1,int param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (ulong)(uint)(param_3 + *(int *)(param_1 + 0x74) * param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)((*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2) * -0xf0f0f0f0f0f0f0f) <= // [自动静态注释] 条件判断/分支
      uVar1) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return *(long *)(param_1 + 0x78) + uVar1 * 0x44; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


