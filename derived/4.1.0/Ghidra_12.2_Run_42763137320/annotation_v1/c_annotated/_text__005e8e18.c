/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E8E18
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8e18; name: FUN_.text__005e8e18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005e8e18(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*_DAT_008a5b58 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (iVar2 = __cxa_guard_acquire(_DAT_008a5b58), uVar1 = _DAT_008a5b60, iVar2 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005e9090(_DAT_008a5b60); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__001001d0(_DAT_008a5b68,uVar1,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(_DAT_008a5b58); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return _DAT_008a5b60; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return _DAT_008a5b60; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


