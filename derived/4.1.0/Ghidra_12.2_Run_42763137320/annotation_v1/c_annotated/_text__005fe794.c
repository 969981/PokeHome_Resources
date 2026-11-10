/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FE794
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fe794; name: FUN_.text__005fe794
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__005fe794(undefined4 param_1,undefined4 param_2,byte param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((param_3 == 6) || (7 < param_3)) || // [自动静态注释] 条件判断/分支
     (plVar2 = *(long **)(_DAT_008a5d78 + (ulong)param_3 * 8), plVar2 == (long *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = plVar2 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar3 + 0x18))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


