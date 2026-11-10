/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000FB24C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb24c; name: FUN_.text__001fb24c
 */


bool FUN__text__001fb24c(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 < 4) { // [自动静态注释] 条件判断/分支
    lVar3 = FUN__text__0013e1f0(*(undefined8 *)(param_1 + 0xd0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      bVar1 = *(int *)(param_1 + 0xa8) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(int *)(param_1 + 0xac) != 0) { // [自动静态注释] 条件判断/分支
        bVar1 = bVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (*(int *)(param_1 + 0xb0) != 0) { // [自动静态注释] 条件判断/分支
        bVar1 = bVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (*(int *)(param_1 + 0xb4) != 0) { // [自动静态注释] 条件判断/分支
        bVar1 = bVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (bVar1 < 2) { // [自动静态注释] 条件判断/分支
        return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      bVar2 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0) && // [自动静态注释] 条件判断/分支
         (*(uint *)(param_1 + 0xe0) != param_2)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar3 = FUN__text__0013e1f0(*(undefined8 *)(param_1 + 0xd0),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        bVar2 = *(char *)(lVar3 + 0x82) != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      return bVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


