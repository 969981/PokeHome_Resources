/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F49F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f49f0; name: FUN_.text__006f49f0
 */


long FUN__text__006f49f0(ushort *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (ulong)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    return (ulong)param_1[1] * 8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)(*(long *)(param_1 + 4) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    while (uVar1 = *(ushort *)((long)plVar3 + -0xe), (short)uVar1 < 0) { // [自动静态注释] 循环/迭代
      uVar4 = 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = plVar3 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 == 0) goto LAB__text__006f4a48; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    if ((int)uVar4 <= (int)(uint)uVar1) { // [自动静态注释] 条件判断/分支
      uVar4 = (uint)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = plVar3 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar2 != 0); // [自动静态注释] 循环/迭代
LAB__text__006f4a48: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return (ulong)param_1[1] * 8 + (ulong)(uVar4 + 1) * 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


