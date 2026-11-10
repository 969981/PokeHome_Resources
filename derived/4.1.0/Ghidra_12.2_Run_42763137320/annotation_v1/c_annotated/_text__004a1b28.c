/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A1B28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1b28; name: FUN_.text__004a1b28
 */


void FUN__text__004a1b28(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_5,int param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 2) = param_3;
  *param_1 = (int)param_2;
  param_1[1] = (int)((ulong)param_2 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x19] = param_6 + param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xf0 | param_4 != 0;
  param_1[0x1b] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


