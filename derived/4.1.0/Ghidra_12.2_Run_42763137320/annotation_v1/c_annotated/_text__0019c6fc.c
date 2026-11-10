/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009C6FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019c6fc; name: FUN_.text__0019c6fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019c6fc(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005e8634(param_1,0x10000); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a06b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x70] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0x88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = lVar1 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0019c35c(param_1 + 0x71); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  FUN__text__0019c35c(param_1 + 0x7e); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)((long)param_1 + 0x454) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8b),false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


