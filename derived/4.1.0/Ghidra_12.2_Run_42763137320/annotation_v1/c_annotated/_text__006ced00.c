/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CED00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ced00; name: FUN_.text__006ced00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ced00(long *param_1,long param_2,long param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  lVar1 = _DAT_008a6af0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = (long)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = (long)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  FUN__text__006ce130(param_1 + 8,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x11] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x12] = (long)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = (long)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


