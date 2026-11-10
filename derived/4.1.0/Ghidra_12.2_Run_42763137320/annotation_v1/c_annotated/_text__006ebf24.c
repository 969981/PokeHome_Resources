/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EBF24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ebf24; name: FUN_.text__006ebf24
 */


void FUN__text__006ebf24(undefined8 *param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  param_1[0x404] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = param_3;
  param_1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x402) = 1;
  *(byte *)((long)param_1 + 0x2011) = *(byte *)((long)param_1 + 0x2011) | 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


