/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00545390
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00645390; name: FUN_.text__00645390
 */


undefined4 FUN__text__00645390(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = *(uint **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 != (uint *)0x0) { // [自动静态注释] 条件判断/分支
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) && // [自动静态注释] 条件判断/分支
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar3 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return *(undefined4 *)((long)piVar1 + uVar3); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


