/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F6B94
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6b94; name: FUN_.text__005f6b94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f6b94(long *param_1,undefined8 param_2,undefined8 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 3) = 0;
  lVar1 = _DAT_008a5ce0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a5ce0 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1;
  param_1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005f67a4(param_1 + 5); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)((long)param_1 + 0xa2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


