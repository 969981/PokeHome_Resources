/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032ADDC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042addc; name: FUN_.text__0042addc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042addc(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0042ce54(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = _DAT_008a47f8 + 0x10;
  FUN__text__0042d00c(param_1 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  lVar1 = _DAT_008a4800; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[3] = lVar1 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe),true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar1 = _DAT_008a4810; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = lVar1 + 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[3] = lVar1 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = (long)(param_1 + 0x13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x16] = (long)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


