/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034AD10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044ad10; name: FUN_.text__0044ad10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044ad10(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined4 *)DAT_00ae9e10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = DAT_00ae9e18 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = (long)DAT_00ae9e10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00ae9e10 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a4b28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00ae9e08 = DAT_00ae9e08 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = &DAT_00ae9e08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(puVar1 + 4) = param_1;
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2 + 0x10;
  *(byte *)((long)param_1 + 0x3a) = *(byte *)((long)param_1 + 0x3a) & 0xf8;
  *(byte *)((long)param_1 + 0x7c) = *(byte *)((long)param_1 + 0x7c) | 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


