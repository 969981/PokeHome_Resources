/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B90E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b90e4; name: FUN_.text__003b90e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b90e4(long *param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a3670 + 0x10;
  FUN__text__003b9b90(param_1 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x26] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x25] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)((long)param_1 + 0x1a4) = param_2[2];
  *(undefined4 *)(param_1 + 0x35) = param_2[3];
  *(undefined1 *)((long)param_1 + 0x1ac) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x38] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x39] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x36) = uVar1;
  uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = uVar1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


