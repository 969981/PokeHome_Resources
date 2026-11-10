/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0053DB50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063db50; name: FUN_.text__0063db50
 */


ulong FUN__text__0063db50(int param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (param_2 & 0xff) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0063db70 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x75aede) * 4 + 0x63db7c))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 == 2) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar3 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 == 0xa0) || (*(int *)(uVar3 * 4 + 0x75b9b0) == param_1)) goto LAB__text__0063dc6c; // [自动静态注释] 条件判断/分支
    uVar2 = uVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (*(int *)(uVar3 * 4 + 0x75b9b4) != param_1); // [自动静态注释] 循环/迭代
  uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0063dc6c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return (ulong)(0x9f < uVar3); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


