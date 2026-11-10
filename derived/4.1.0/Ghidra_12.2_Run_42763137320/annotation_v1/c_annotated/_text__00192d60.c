/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00092D60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192d60; name: FUN_.text__00192d60
 */


int FUN__text__00192d60(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = (ulong)*(uint *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 8) == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = (undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar1 = FUN__text__00192118(*puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar2 = iVar1 + iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = puVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar3 != 0); // [自动静态注释] 循环/迭代
  return iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


