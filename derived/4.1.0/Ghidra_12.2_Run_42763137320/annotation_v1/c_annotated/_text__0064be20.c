/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054BE20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064be20; name: FUN_.text__0064be20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064be20(undefined8 param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = _DAT_008a1468; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_008a1468 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0064bed0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0064c3d4(*plVar1,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0064c3d4(*_DAT_008a1468,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (DAT_008e1630 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0064c004(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0064e4b4(DAT_008e1630,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0064d3f4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  DAT_00c5f590 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00c5f5a0 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00c5f5a8 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00c5f598 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


