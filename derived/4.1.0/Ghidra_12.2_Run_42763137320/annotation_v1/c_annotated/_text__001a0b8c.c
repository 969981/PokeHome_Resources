/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A0B8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0b8c; name: FUN_.text__001a0b8c
 */


void FUN__text__001a0b8c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(char *)(*(long *)(param_1 + 0x68) + 0x5b81) != '\0') || // [自动静态注释] 条件判断/分支
     (*(char *)(*(long *)(param_1 + 0x88) + 0x5b81) != '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *(undefined8 *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__001c1fa4(uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *(long *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(lVar3 + 0x2a8) = *(int *)(lVar3 + 0x2a8) + iVar1;
  FUN__text__001c2650(uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0x1bc) == 4) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001be1a8(*(undefined8 *)(param_1 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 == 4) { // [自动静态注释] 条件判断/分支
    FUN__text__001a0a70(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001be1a8(*(undefined8 *)(param_1 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001a0a70(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


