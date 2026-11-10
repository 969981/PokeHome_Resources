/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001105A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002105a8; name: FUN_.text__002105a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002105a8(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a11f8 + 0x78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a11f8 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a11f8 + 0x10;
  param_1[9] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[0xf] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001256f4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


