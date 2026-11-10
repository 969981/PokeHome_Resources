/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000DC054
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc054; name: FUN_.text__001dc054
 */


void FUN__text__001dc054(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x8ba0) != '\0') { // [自动静态注释] 条件判断/分支
    **(undefined1 **)(lVar3 + 0x58) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x8ba8) == 0) { // [自动静态注释] 条件判断/分支
    **(undefined1 **)(lVar3 + 0x58) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  **(undefined1 **)(lVar3 + 0x58) = 1;
  puVar4 = *(undefined8 **)(lVar3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined8 *)(param_1 + 0x8bac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(param_1 + 0x8bb4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x8bbc);
  *puVar4 = uVar1;
  puVar4[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


