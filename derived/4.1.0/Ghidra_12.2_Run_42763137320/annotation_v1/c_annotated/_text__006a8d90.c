/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A8D90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8d90; name: FUN_.text__006a8d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__006a8d90(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*_DAT_008a6798 & 1) != 0) || // [自动静态注释] 条件判断/分支
     (iVar3 = __cxa_guard_acquire(_DAT_008a6798), puVar2 = _DAT_008a67b0, puVar1 = _DAT_008a67a0, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     iVar3 == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return _DAT_008a67a0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (((*_DAT_008a67a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a67a8), iVar3 != 0)) { // [自动静态注释] 条件判断/分支
    *puVar2 = 0;
    __cxa_guard_release(_DAT_008a67a8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *puVar1 = puVar2;
  __cxa_guard_release(_DAT_008a6798); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return _DAT_008a67a0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


