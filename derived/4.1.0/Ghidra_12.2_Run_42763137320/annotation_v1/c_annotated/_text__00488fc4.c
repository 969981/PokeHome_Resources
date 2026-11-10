/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00388FC4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488fc4; name: FUN_.text__00488fc4
 */


void FUN__text__00488fc4(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeMutex((MutexType *)(param_1 + 7),true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xe) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb),true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


