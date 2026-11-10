/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00490798
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00590798; name: FUN_.text__00590798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00590798(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004dc674(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a3860 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  *param_1 = lVar1;
  param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


