/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003640A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004640a4; name: FUN_.text__004640a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004640a4(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_1 + 0x260))(param_1,&local_8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = param_1[0x13]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(bool *)_DAT_008a4d28 = local_8 == 0;
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_8 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0x1c000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x13] = uVar2 & 0xffffffffe3ffffff | uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[0x10] != local_8) { // [自动静态注释] 条件判断/分支
    param_1[0x10] = local_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_1[0xe] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0041595c(1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*param_1 + 0x188))(param_1,1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


