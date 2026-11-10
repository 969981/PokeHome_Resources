/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F8018
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8018; name: FUN_.text__005f8018
 */


void FUN__text__005f8018(undefined8 *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = param_2;
  param_1[1] = 0xfde80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0x6000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0x400000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0x100000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 6) = 1;
  uVar2 = nn::os::GetHostArgc(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x34) = uVar2;
  uVar1 = nn::os::GetHostArgv(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


