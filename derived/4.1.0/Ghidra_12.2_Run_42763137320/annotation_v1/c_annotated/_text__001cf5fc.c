/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000CF5FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cf5fc; name: FUN_.text__001cf5fc
 */


void FUN__text__001cf5fc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__001961e8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)
                               (*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               0x1b0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(lVar1 + 8) == 1) { // [自动静态注释] 条件判断/分支
    lVar3 = lVar3 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001ca7a0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001cab30(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


