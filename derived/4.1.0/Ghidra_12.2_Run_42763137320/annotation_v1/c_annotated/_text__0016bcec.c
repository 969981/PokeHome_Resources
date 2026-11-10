/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0006BCEC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016bcec; name: FUN_.text__0016bcec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016bcec(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__001166d8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a1450; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x15) = 1;
  param_1[0x21] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  param_1[9] = lVar1 + 0x78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar1 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a1458 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x7b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x23] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(param_1 + 0x24,0,0x2b5); // [自动静态注释] 内存复制、清零或移动
  FUN__text__0016ebbc(param_1 + 0x26); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x86] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x85] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x84] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x83] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x82] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x81] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x80] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x7f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x7e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x7d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x7c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x87) = 1;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined4 *)((long)param_1 + 0x44c) = 0;
                    /* WARNING: Subroutine does not return */
  FUN__text__00110090(param_1 + 0x8b); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


