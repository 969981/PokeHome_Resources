/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001155E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002155e0; name: FUN_.text__002155e0
 */


undefined8 FUN__text__002155e0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((param_1[0xc] == 0) || (iVar1 = FUN__text__00215fa0(), iVar1 == 0)) || // [自动静态注释] 条件判断/分支
     (uVar2 = FUN__text__00215f48(param_1[0xc]), (uVar2 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00215620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x130))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


