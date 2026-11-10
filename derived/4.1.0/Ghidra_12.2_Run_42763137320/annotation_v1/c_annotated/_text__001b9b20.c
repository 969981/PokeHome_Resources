/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000B9B20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b9b20; name: FUN_.text__001b9b20
 */


void FUN__text__001b9b20(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x4cc) == 0 || *(int *)(param_1 + 0x4cc) == (int)param_2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x4cc) = (int)param_2;
  lVar2 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001ca748(param_1,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = FUN__text__0012cb14(lVar2,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(bool *)(lVar1 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  lVar2 = FUN__text__0012cb14(lVar2,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(bool *)(lVar2 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001ca91c(param_1,*(int *)**(undefined8 **)(param_1 + 0x18) != 1 && // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(int *)(param_1 + 0x4cc) == 2);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


