/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0023C834
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0033c834; name: FUN_.text__0033c834
 */


void FUN__text__0033c834(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x68) != 0) && // [自动静态注释] 条件判断/分支
     (lVar1 = *(long *)(param_1 + 0x70), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     *(int *)(*(long *)(param_1 + 0x68) + 0x54) != 0 && lVar1 != 0)) {
    FUN__text__0064dd40(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0064db88(lVar1,6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(code **)(lVar1 + 0x2a0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(lVar1 + 0x2a0))(lVar1 + 0x2c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(code **)(lVar1 + 0x1a0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x0033c898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x1a0))(lVar1 + 0x1c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


