/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D3E4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d3e4c; name: FUN_.text__001d3e4c
 */


undefined1 FUN__text__001d3e4c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__00195844(uVar5,*(undefined4 *)(param_1 + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__00195844(uVar5,*(undefined4 *)(param_1 + 0x30)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = *(int *)(lVar3 + 0xc) != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bool)uVar1) { // [自动静态注释] 条件判断/分支
    uVar4 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(lVar2 + 0xc) != 1) { // [自动静态注释] 条件判断/分支
    uVar1 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


