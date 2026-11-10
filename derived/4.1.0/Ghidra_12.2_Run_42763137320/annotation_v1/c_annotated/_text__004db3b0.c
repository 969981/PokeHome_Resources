/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DB3B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db3b0; name: FUN_.text__004db3b0
 */


void FUN__text__004db3b0(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = *(long **)(param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((plVar2 != (long *)0x0) && (*(short *)(param_1 + 0xca) == 0)) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = lVar3 + -0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(short *)(lVar1 + 0x160) == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar2 + 0x48))(plVar2,*param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x004db418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


