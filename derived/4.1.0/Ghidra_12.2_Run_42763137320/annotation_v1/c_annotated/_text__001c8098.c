/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C8098
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c8098; name: FUN_.text__001c8098
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001c8098(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__001255bc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x1b) = 0;
  lVar1 = _DAT_008a1100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x199) = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  param_1[9] = lVar1 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar1 + 0x98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x1a7) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0x105) = 0;
  *(undefined4 *)(param_1 + 0x23) = 8;
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x169) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  FUN__text__0019c35c((long)param_1 + 0x1ac); // [自动静态注释] 调用尚未恢复正式名称的函数
  memset(param_1 + 0x42,0,400); // [自动静态注释] 内存复制、清零或移动
  *(undefined4 *)(param_1 + 0x74) = 1;
  DAT_008e2080 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


