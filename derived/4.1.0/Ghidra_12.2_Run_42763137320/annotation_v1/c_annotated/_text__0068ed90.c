/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058ED90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ed90; name: FUN_.text__0068ed90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068ed90(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a66e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a6740 + 0x10;
  param_1[0x3d5] = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0068d4cc(param_1 + 0x3d5,0,0xc,0,0,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_1 + 0x1ec1) = 0;
  param_1[0x3d9] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ee67c(param_1 + 0x3af); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006f5a84(param_1 + 0x3a6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006f5940(param_1 + 0x38b); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


