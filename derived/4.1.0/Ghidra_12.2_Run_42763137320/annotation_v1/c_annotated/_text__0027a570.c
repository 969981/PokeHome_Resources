/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0017A570
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a570; name: FUN_.text__0027a570
 */


void FUN__text__0027a570(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_10 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_10[0] = *(ulong *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_10[1] = *(undefined8 *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if ((local_10[(uint)uVar2 >> 6 & 0x3ff] >> (uVar2 & 0x3f) & 1) != 0) goto LAB__text__0027a5a0; // [自动静态注释] 条件判断/分支
    uVar1 = (uint)uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar1 != 0x80); // [自动静态注释] 循环/迭代
  uVar2 = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0027a5a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0027a380(param_1,*param_2,uVar2,0,*(int *)(param_1 + 0x148) == 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


