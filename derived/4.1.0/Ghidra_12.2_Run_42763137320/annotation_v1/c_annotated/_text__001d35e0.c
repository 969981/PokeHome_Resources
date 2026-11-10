/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D35E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d35e0; name: FUN_.text__001d35e0
 */


undefined4 FUN__text__001d35e0(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__001961a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                              (undefined8 *)(param_1 + 0x20)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar2 != 0) && (uVar3 = 1, *(int *)(lVar2 + 0x2c) != 0x1e)) { // [自动静态注释] 条件判断/分支
    uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


