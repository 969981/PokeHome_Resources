/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CF9B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf9b4; name: FUN_.text__005cf9b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf9b4(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(undefined8 *)(*_DAT_008a0228 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005d8a8c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x34] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x32] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x33] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x896a30;
  param_1[9] = 0x896a90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0x896ad0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


