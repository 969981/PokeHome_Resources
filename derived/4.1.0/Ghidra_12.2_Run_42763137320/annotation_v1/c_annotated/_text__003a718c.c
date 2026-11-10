/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A718C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a718c; name: FUN_.text__003a718c
 */


void FUN__text__003a718c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*plVar2 == -0x340d631b7bddd9bb || *plVar2 == 0) || // [自动静态注释] 条件判断/分支
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x90))(*(long **)(param_1 + 0x98),plVar2), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     (uVar1 & 1) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003a71fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


