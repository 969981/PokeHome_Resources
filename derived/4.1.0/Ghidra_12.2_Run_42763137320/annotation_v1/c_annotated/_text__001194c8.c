/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000194C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001194c8; name: FUN_.text__001194c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001194c8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  NpadHandheldState aNStack_48 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x34) != '\0') { // [自动静态注释] 条件判断/分支
    uVar1 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  nn::hid::GetNpadState(aNStack_48,_DAT_0089fec8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 8) = local_40;
  *(float *)(param_1 + 0x18) = (float)local_30 / 32767.0;
  *(float *)(param_1 + 0x1c) = (float)iStack_2c / 32767.0;
  *(float *)(param_1 + 0x20) = (float)local_38 / 32767.0;
  *(float *)(param_1 + 0x24) = (float)iStack_34 / 32767.0;
  FUN__text__001195bc(param_1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001195bc(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


