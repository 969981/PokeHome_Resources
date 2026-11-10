/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0017CAC8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027cac8; name: FUN_.text__0027cac8
 */


bool FUN__text__0027cac8(undefined8 param_1,uint param_2,short param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(ulong *)((ulong)param_2 * 8 + 0x72d3f0) & 1L << ((ulong)param_4 & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar2 = uVar1 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 == 0x12) { // [自动静态注释] 条件判断/分支
    bVar2 = param_3 == 1 && uVar1 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar3 = param_3 == 2 && uVar1 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 != 0x13) { // [自动静态注释] 条件判断/分支
    bVar3 = bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar2 = uVar1 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 == 0x182) { // [自动静态注释] 条件判断/分支
    bVar2 = bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return bVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


