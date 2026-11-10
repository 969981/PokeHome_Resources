/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037D448
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d448; name: FUN_.text__0047d448
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047d448(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined4 *)DAT_00ae9e30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = DAT_00ae9e38 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = (long)DAT_00ae9e30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00ae9e30 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a4478; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00ae9e28 = DAT_00ae9e28 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = &DAT_00ae9e28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(puVar1 + 4) = param_1;
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x3f800000;
  *param_1 = lVar2 + 0x10;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f80000000000000;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


