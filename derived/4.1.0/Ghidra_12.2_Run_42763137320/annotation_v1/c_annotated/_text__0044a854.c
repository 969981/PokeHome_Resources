/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034A854
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a854; name: FUN_.text__0044a854
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044a854(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined4 *)DAT_00aea670; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = DAT_00aea678 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = (long)DAT_00aea670; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00aea670 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a4b18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00aea668 = DAT_00aea668 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = &DAT_00aea668; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(puVar1 + 4) = param_1;
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2 + 0x10;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


