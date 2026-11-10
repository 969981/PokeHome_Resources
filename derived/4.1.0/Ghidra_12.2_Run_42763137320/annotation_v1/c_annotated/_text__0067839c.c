/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057839C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067839c; name: FUN_.text__0067839c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0067839c(long param_1,long param_2,long param_3,long param_4,long param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = _DAT_008a65f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0)))) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *_DAT_008a65f8 = param_1;
    plVar1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[4] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[2] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[3] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


