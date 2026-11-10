/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B7888
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7888; name: FUN_.text__003b7888
 */


uint FUN__text__003b7888(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x28) != 0) { // [自动静态注释] 条件判断/分支
    piVar1 = (int *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*piVar1 != 0) { // [自动静态注释] 条件判断/分支
    iVar2 = param_2 / *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = iVar2 - *(int *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar3) { // [自动静态注释] 条件判断/分支
    uVar3 = *(uint *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


