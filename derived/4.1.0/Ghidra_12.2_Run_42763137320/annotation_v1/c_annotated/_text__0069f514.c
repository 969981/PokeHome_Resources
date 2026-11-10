/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059F514
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069f514; name: FUN_.text__0069f514
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0069f514(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)FUN__text__006a0ee8(0xe0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__006b19a4(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar1 = _DAT_008a6910 + 0x10;
    plVar1[4] = (long)(plVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[5] = (long)(plVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006b2810(plVar1,param_1,0,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar1 = 0x89e7d8;
  } // [自动静态注释] 作用域/控制流边界
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


