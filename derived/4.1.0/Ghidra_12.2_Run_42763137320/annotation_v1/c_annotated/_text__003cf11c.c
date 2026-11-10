/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CF11C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf11c; name: FUN_.text__003cf11c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cf11c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a36f0 + 0x10;
  memset(param_1 + 1,0,0x20014); // [自动静态注释] 内存复制、清零或移动
  lVar1 = _DAT_008a36f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4004] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4005] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x4008) = 0;
  param_1[0x4009] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x400a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x400b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x400c) = 0;
  param_1[0x4006] = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4007] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


