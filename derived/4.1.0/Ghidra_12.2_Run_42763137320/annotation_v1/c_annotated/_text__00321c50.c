/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00221C50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00321c50; name: FUN_.text__00321c50
 */


undefined * FUN__text__00321c50(int param_1,undefined1 *param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00304b90(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return (undefined *)(lVar2 + 0x941d62); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1 - 1U < 300) { // [自动静态注释] 条件判断/分支
    uVar1 = param_1 - 1U; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 != (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
    *param_2 = (&DAT_00941d60)[(ulong)uVar1 * 0x8c + lVar2 + 1];
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 != (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    *param_3 = *(undefined4 *)(&DAT_00941d60 + (ulong)uVar1 * 0x8c + lVar2 + 0x84);
  } // [自动静态注释] 作用域/控制流边界
  return &DAT_00941d60 + (ulong)uVar1 * 0x8c + lVar2 + 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


