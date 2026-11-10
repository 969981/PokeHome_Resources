/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F7EA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f7ea0; name: FUN_.text__005f7ea0
 */


int FUN__text__005f7ea0(ulong param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return 0xff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1 = param_1 | param_1 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 | param_1 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 | param_1 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 | param_1 << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 | param_1 << 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 | param_1 << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (param_1 >> 1 & 0x5555555555555555) + (param_1 & 0x5555555555555555); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (uVar1 >> 4 & 0x707070707070707) + (uVar1 & 0x707070707070707); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (uVar1 >> 8 & 0xf000f000f000f) + (uVar1 & 0xf000f000f000f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (uVar1 >> 0x10 & 0x1f0000001f) + (uVar1 & 0x1f0000001f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return (0x40 - (int)lVar2) - (int)((ulong)lVar2 >> 0x20); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


