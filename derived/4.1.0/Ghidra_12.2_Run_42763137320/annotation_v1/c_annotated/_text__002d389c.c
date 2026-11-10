/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D389C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d389c; name: FUN_.text__002d389c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN__text__002d389c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = *(int **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) || // [自动静态注释] 条件判断/分支
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return (uint *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (uint *)((long)piVar2 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_18 = *(undefined8 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = bsearch(&local_18,puVar1 + 1,(ulong)*puVar1,4,_DAT_008a2880); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 != (uint *)0x0) { // [自动静态注释] 条件判断/分支
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return puVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


